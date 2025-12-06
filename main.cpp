#include <iostream>
#include "Mobil.h"
#include "Sistem.h"
#include "PengelolaFile.h"

using namespace std;

int main() {
    Sistem sistem;

    int role;
    cout << "=== Login ===\n";
    cout << "1. Admin\n";
    cout << "2. Customer\n";
    cout << "Pilih: ";
    cin >> role;

    bool isAdmin = (role == 1);

    int pilihan;

    do {
        cout << "\n=== MENU RENTAL MOBIL ===" << endl;
        
        if (isAdmin) {
            cout << "1. Tambah Mobil" << endl;
            cout << "2. Cari Mobil" << endl;
            cout << "3. Edit Mobil" << endl;    
            cout << "4. Hapus Mobil" << endl;
            cout << "5. Sewa Mobil" << endl;
            cout << "6. Kembalikan Mobil" << endl;
            cout << "7. Tampilkan Semua Mobil" << endl;
            cout << "8. Keluar" << endl;
        } else {
            cout << "1. Cari Mobil" << endl;
            cout << "2. Sewa Mobil" << endl;
            cout << "3. Kembalikan Mobil" << endl;
            cout << "4. Tampilkan Semua Mobil" << endl;
            cout << "5. Keluar" << endl;
        }

        cout << "Pilih menu: ";
        cin >> pilihan;

        if (isAdmin) {
            switch (pilihan) {

            case 1: {
                Mobil m;
                int id, tahun;
                string merk, warna;
                double harga;

                cout << "Masukkan ID: ";
                cin >> id;
                m.setId(id);

                cout << "Masukkan Merk: ";
                cin >> merk;
                m.setMerk(merk);

                cout << "Masukkan Tahun: ";
                cin >> tahun;
                m.setTahun(tahun);

                cout << "Masukkan Warna: ";
                cin >> warna;
                m.setWarna(warna);

                cout << "Masukkan Harga: ";
                cin >> harga;
                m.setHarga(harga);
                m.setStatus(1); 
                sistem.tambahMobil(m);
                break;
            }

            case 2: {
                string merk;
                cout << "Masukkan merk mobil yang dicari: ";
                cin >> merk;
                sistem.cariMobil(merk);
                break;
            }

            case 3: { 
                int id;
                cout << "Masukkan ID mobil yang ingin diedit: ";
                cin >> id;
                sistem.editMobil(id);
                break;
            }

            case 4: {
                int id;
                cout << "Masukkan ID mobil yang ingin dihapus: ";
                cin >> id;
                sistem.hapusMobil(id);
                break;
            }

            case 5: {
                int id;
                cout << "Masukkan ID mobil untuk disewa: ";
                cin >> id;
                sistem.sewaMobil(id);
                break;
            }

            case 6: {
                int id;
                cout << "Masukkan ID mobil untuk dikembalikan: ";
                cin >> id;
                sistem.kembalikanMobil(id);
                break;
            }

            case 7:
                sistem.tampilkanSemua();
                break;

            case 8:
                cout << "Keluar..." << endl;
                return 0;
            }
        }

        else {
            switch (pilihan) {

            case 1: {
                string merk;
                cout << "Masukkan merk mobil: ";
                cin >> merk;
                sistem.cariMobil(merk);
                break;
            }

            case 2: {
                int id;
                cout << "Masukkan ID mobil untuk disewa: ";
                cin >> id;
                sistem.sewaMobil(id);
                break;
            }

            case 3: {
                int id;
                cout << "Masukkan ID mobil untuk dikembalikan: ";
                cin >> id;
                sistem.kembalikanMobil(id);
                break;
            }

            case 4:
                sistem.tampilkanSemua();
                break;

            case 5:
                cout << "Keluar..." << endl;
                return 0;
            }
        }

    } while (true);

    return 0;
}