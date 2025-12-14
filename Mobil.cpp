///////////////////////////////////////////////////////////
//  Mobil.cpp
//  Implementation of the Class Mobil
//  Created on:      27-Nov-2025 09:55:07
//  Original author: AXIOO hype
///////////////////////////////////////////////////////////

#include "Mobil.h"

Mobil::Mobil(){

}
Mobil::Mobil(int id, string merk, int tahun, string warna, double harga, bool status) {
    this->idMobil = id;
    this->merk = merk;
    this->tahun = tahun;
    this->warna = warna;
    this->harga = harga;
    this->status = status;
}
	
Mobil::~Mobil(){
}
double Mobil::getHarga()const{
	return harga;
}
int Mobil::getId()const{
	return idMobil;
}
string Mobil::getMerk()const{
	return  merk;
}
bool Mobil::getStatus()const{
	return status;
}
int Mobil::getTahun()const{
	return tahun;
}
string Mobil::getWarna()const{
	return  warna;
}
void Mobil::setHarga(double h){
	harga = h;
}
void Mobil::setId(int id){
	idMobil = id;
}
void Mobil::setMerk(string m){
	merk = m;
}
void Mobil::setStatus(bool s){
	status = s;
}
void Mobil::setTahun(int t){
	tahun = t;
}
void Mobil::setWarna(string w){
	warna = w;
}