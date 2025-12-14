///////////////////////////////////////////////////////////
//  Mobil.h
//  Implementation of the Class Mobil
//  Created on:      27-Nov-2025 09:55:07
//  Original author: AXIOO hype
///////////////////////////////////////////////////////////

#ifndef MOBIL_H
#define MOBIL_H

#include <string>
using namespace std;

class Mobil{

public:
	Mobil();
	Mobil(int id, string merk, int tahun, string warna, double harga, bool status);
	~Mobil();

	double getHarga() const;
	int getId() const;
	string getMerk() const;
	bool getStatus() const;
	int getTahun() const;
	string getWarna() const;
	void setHarga(double harga);
	void setId(int id);
	void setMerk(string merk);
	void setStatus(bool status);
	void setTahun(int tahun);
	void setWarna(string warna);

private:
	double harga;
	int idMobil;
	string merk;
	bool status;
	int tahun;
	string warna;

};
#endif // !defined(EA_78CC35EC_BD2E_41e4_9544_00C01CB5FDA0__INCLUDED_)
