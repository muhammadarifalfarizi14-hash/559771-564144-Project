///////////////////////////////////////////////////////////
//  PengelolaFile.h
//  Implementation of the Class PengelolaFile
//  Created on:      27-Nov-2025 09:55:06
//  Original author: AXIOO hype
///////////////////////////////////////////////////////////

#ifndef PENGELOLAFILE_H
#define PENGELOLAFILE_H
#include <vector>
#include "Mobil.h"
using namespace std;

class PengelolaFile
{

public:
	PengelolaFile();
	virtual ~PengelolaFile();

	vector<Mobil> loadData();
	void saveData();

};
#endif // !defined(EA_9459E675_9447_4ac7_8765_D8B29EAFFE68__INCLUDED_)
