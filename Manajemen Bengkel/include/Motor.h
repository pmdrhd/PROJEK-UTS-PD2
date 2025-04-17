#ifndef MOTOR_H
#define MOTOR_H

#include <iostream>
#include <string>
#include "Kendaraan.h"
using namespace std;

class Motor : public Kendaraan {
public:

	//Metode
	void inputTipeMotor(void);

	Motor() {
		inputTipeMotor();
	}
};

#endif