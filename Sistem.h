///////////////////////////////////////////////////////////
//  Sistem.h
//  Implementation of the Class Sistem
//  Created on:      27-Nov-2025 09:55:06
//  Original author: AXIOO hype
///////////////////////////////////////////////////////////

#if !defined(EA_72E0B461_ECA7_4c14_A4F4_8418DBEB9FEC__INCLUDED_)
#define EA_72E0B461_ECA7_4c14_A4F4_8418DBEB9FEC__INCLUDED_

#include <vector>
#include <string>
#include "Mobil.h"


class Sistem
{

public:
	Sistem();
	~Sistem();

	void cariMobil(string merk);
	void editMobil(int id);
	void hapusMobil(int id);
	void kembalikanMobil(int id);
	void sewaMobil(int id);
	void tambahMobil(const Mobil &m);
	void tampilkanSemua();

private:
	vector<Mobil> mobil;

};
#endif
