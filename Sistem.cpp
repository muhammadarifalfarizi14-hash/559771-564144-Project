///////////////////////////////////////////////////////////
//  Sistem.cpp
//  Implementation of the Class Sistem
//  Created on:      27-Nov-2025 09:55:06
//  Original author: AXIOO hype
///////////////////////////////////////////////////////////

#include <iostream>
#include "Sistem.h"

using namespace std;

Sistem::Sistem() {
    mobil = file.loadData();
}

Sistem::~Sistem() {
    file.saveData(mobil);
}

void Sistem::cariMobil(string merk)
{
    bool ditemukan = false;
    for (const auto &m : mobil)
    {
        if (m.getMerk() == merk)
        {
            cout << "Mobil ditemukan: ID = " << m.getId()
                 << ", Merk = " << m.getMerk()
                 << ", Tahun = " << m.getTahun()
                 << ", Harga = " << m.getHarga() << endl;
            ditemukan = true;
        }
    }
    if (!ditemukan)
        cout << "Mobil dengan merk: " << merk
             << " tidak ditemukan." << endl;
}

void Sistem::editMobil(int id)
{
    for (auto &m : mobil)
    {
        if (m.getId() == id)
        {
            double hargaBaru;
            string warnaBaru;
            cout << "Masukkan harga baru : ";
            cin >> hargaBaru;
            cout << "Masukkan warna baru: ";
            cin >> warnaBaru;
            m.setHarga(hargaBaru);
            m.setWarna(warnaBaru);
            cout << "Data mobil berhasil diedit." << endl;
            return;
        }
    }
    cout << "Mobil tidak ditemukan.";
}

void Sistem::hapusMobil(int id)
{
    for (auto it = mobil.begin(); it != mobil.end(); ++it)
    {
        if (it->getId() == id)
        {
            mobil.erase(it);
            cout << "Mobil berhasil dihapus!" << endl;
            return;
        }
    }
    cout << "Mobil dengan ID: " << id << " tidak ditemukan." << endl;
}

void Sistem::kembalikanMobil(int id)
{
    for (auto &m : mobil)
    {
        if (m.getId() == id)
        {
            m.setStatus(false);
            cout << "Mobil berhasil dikembalikan." << endl;
        }
    }
    cout << "Mobil tidak ditemukan!";
}

void Sistem::sewaMobil(int id)
{
    for (auto &m : mobil)
    {
        if (m.getId() == id)
        {
            if (!m.getStatus())
            {
                m.setStatus(true);
                cout << "Mobil berhasil disewa" << endl;
            }
            else
            {
                cout << "Mobil sudah disewa!" << endl;
            }
            return;
        }
    }
    cout << "Mobil tidak ditemmuukan.";
}

void Sistem::tambahMobil(const Mobil &m)
{
    mobil.push_back(m);
    cout << "Mobil berhasil ditambahkan" << endl;
}

void Sistem::tampilkanSemua()
{
    if (mobil.empty())
    {
        cout << "\nTidak ada data mobil tersedia.\n";
        return;
    }

    cout << "\n=== DAFTAR SEMUA MOBIL ===\n";

    for (const auto &m : mobil)
    {
        cout << "ID        : " << m.getId() << endl;
        cout << "Merk      : " << m.getMerk() << endl;
        cout << "Tahun     : " << m.getTahun() << endl;
        cout << "Warna     : " << m.getWarna() << endl;
        cout << "Harga     : " << m.getHarga() << endl;
        cout << "Status    : "
             << (m.getStatus() ? "Tersedia" : "Disewa") << endl;

        cout << "---------------------------\n";
    }
}
