#include <iostream>
#include <string>
#include "../include/Kendaraan.h"
using namespace std;

//Metode
void Kendaraan::inputPlatno(string p) {
	plat_no = p;
}

void Kendaraan::inputTipe(string t) {
	tipe = t;
}

void Kendaraan::inputTahun(int t) {
	tahun = t;
}

void Kendaraan::inputDK(void) {
	plat_no = "no data";
	tipe = "no data";
	tahun = 0;
	status_servis = "not done";
}

void Kendaraan::ubahStatusServis(string s) {
	status_servis = s;
}

void Kendaraan::tampilkanInfo() {
	cout << "Plat nomor: " << plat_no << endl;
	cout << "Tipe kendaraan: " << tipe << endl;
	cout << "Tahun: " << tahun << endl;
	cout << "Status servis: " << status_servis << "\n\n";
}
