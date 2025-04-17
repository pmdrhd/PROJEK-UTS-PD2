#ifndef MOBIL_H
#define MOBIL_H

#include <iostream>
#include <string>
#include "Kendaraan.h"
using namespace std;

class Mobil : public Kendaraan{
public:

	//Metode
	void inputTipeMobil(void);

	Mobil() {
		inputTipeMobil();
	}
};

#endif