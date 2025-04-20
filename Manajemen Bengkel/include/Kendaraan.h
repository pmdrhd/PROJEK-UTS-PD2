#ifndef KENDARAAN_H
#define KENDARAAN_H

#include <iostream>
#include <string>

void MenuKendaraan();

class Kendaraan {
protected:
    std::string plat_no, tipe, status_servis;
    int tahun;

public:
    void inputData();
    void writeData(Kendaraan k);
    std::string searchData(const std::string& plat);
    void editData(std::string& pn);
    void showData(std::string line);
    void deleteData(std::string& pn);

    void tampilkanData();
    void ubahStatusServis(std::string& pn);
	void cariPlatNomer();
};

#include "Mobil.h"
#include "Motor.h"
#include "Truk.h"

#endif
