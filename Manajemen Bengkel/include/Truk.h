#ifndef TRUK_H
#define TRUK_H

#include <iostream>
#include <string>
#include "Kendaraan.h"
using namespace std;

class Truk : public Kendaraan {
public:

	//Metode
	void inputTipeTruk(void);

	Truk() {
		inputTipeTruk();
	}
};

#endif