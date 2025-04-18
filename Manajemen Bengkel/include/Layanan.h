#include <iostream>
#include <string>

using namespace std;

// Deklarsi class Layanan
class Layanan {
public:
	string namaLayanan;
	string namaMekanik; // Nama mekanik akan diganti dengan file mekanik
	int hargaLayanan = 0;
	// Admin Functions
	void createLayanan();
	void layananFileWritting(Layanan l);
	void editLayanan();
	void deleteLayanan();
	void showLayanan(Layanan l);
};