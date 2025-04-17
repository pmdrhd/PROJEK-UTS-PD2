#ifndef KENDARAAN_H
#define KENDARAAN_H

#include <iostream>
#include <string>
using namespace std;

//Kelas Kendaraan
class Kendaraan {
protected:
	//Atribut
	string plat_no, status_servis, tipe;
	int tahun;

public:
	//Metode
	void inputPlatno(string p);
	void inputTipe(string t);
	void inputTahun(int t);
	void inputDK(void);
	void ubahStatusServis(string s);
	void tampilkanInfo(void);

	Kendaraan() {
		inputDK();
	}
};

//Library kelas turunan
#include "Mobil.h";
#include "Motor.h";
#include "Truk.h";

#endif