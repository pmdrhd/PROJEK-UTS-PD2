#include <iostream>
#include <string>
#include "../include/Kendaraan.h"
using namespace std;

int main()
{
    Kendaraan ken;
    //ken.inputPlatno("W 1234 X");
    //ken.inputTahun(2025);
    //ken.ubahStatusServis("done");

    Mobil mob;
    mob.inputPlatno("Y 4455 Z");
    mob.inputTahun(2011);
    //mob.ubahStatusServis("not done");

    Motor mot;
    mot.inputPlatno("A 9876 B");
    mot.inputTahun(2002);
    //mot.ubahStatusServis("not done");

    Truk trk;
    trk.inputPlatno("Y 4455 Z");
    trk.inputTahun(1974);
    //trk.ubahStatusServis("done");

    ken.tampilkanInfo();
    mob.tampilkanInfo();
    mot.tampilkanInfo();
    trk.tampilkanInfo();
}
