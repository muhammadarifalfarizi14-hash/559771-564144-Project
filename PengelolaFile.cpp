#include "PengelolaFile.h"
#include <fstream>
#include <iostream>

using namespace std;

PengelolaFile::PengelolaFile() {}

PengelolaFile::~PengelolaFile() {}

vector<Mobil> PengelolaFile::loadData() {
    vector<Mobil> data;
    ifstream file("data_mobil.txt");

    if (!file.is_open()) {
        cout << "File tidak ditemukan, mulai dengan data kosong.\n";
        return data;
    }

    int idMobil, tahun;
    double harga;
    string merk, warna;
	bool status;

    while (file >> idMobil >> merk >> tahun >> warna >> harga >> status) {
        Mobil m(idMobil, merk, tahun, warna, harga, status);
        data.push_back(m);
    }
    file.close();
    return data;
}

void PengelolaFile::saveData(const vector<Mobil>& data) {
    ofstream file("data_mobil.txt");
    if (!file.is_open()) {
        cout << "Gagal membuka file untuk menyimpan data.\n";
        return;
    }

    for (const auto& m : data) {
        file << m.getId() << " "
             << m.getMerk() << " "
             << m.getTahun() << " "
             << m.getHarga() << endl;
    }
    file.close();
}