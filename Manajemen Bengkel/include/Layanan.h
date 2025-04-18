#include <string>

// Deklarsi class Layanan
class Layanan {
public:
	std::string namaLayanan;
	std::string namaMekanik; // Nama mekanik akan diganti dengan file mekanik
	int hargaLayanan = 0;
	void buatLayanan();
	void layananFileWritting(Layanan l);
};