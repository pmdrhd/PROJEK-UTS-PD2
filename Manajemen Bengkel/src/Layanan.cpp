#include <iostream>

#include <cstdlib>
#include <fstream>
#include <filesystem>

#include "Layanan.h"

using namespace std;

void Layanan::buatLayanan() {
	// Deklarasi variabel
	Layanan layananBaru;
	string namaLayanan, namaMekanik;
	char choice;

	// Masukkan data layanan
	cout << "Masukkan nama layanan: ";
	cin.ignore();
	getline(cin, layananBaru.namaLayanan);
	cout << "Masukkan harga layanan: ";
	cin >> layananBaru.hargaLayanan;
	cout << "Masukkan nama mekanik: ";
	cin.ignore();
	getline(cin, layananBaru.namaMekanik);

	// Review data layanan
	std::system("cls");
	while (1) {
		cout << "Review Penambahan Data Layanan" << endl;
		cout << "Nama Layanan: " << layananBaru.namaLayanan << endl;
		cout << "Harga Layanan: " << layananBaru.hargaLayanan << endl;
		cout << "Nama Mekanik: " << layananBaru.namaMekanik << endl;
		cout << endl;
		cout << "Apakah data layanan sudah benar? (y/n): ";
		cin >> choice;

		if (choice == 'y' || choice == 'Y') {
			std::system("cls");
			layananBaru.layananFileWritting(layananBaru);
			cout << endl;

			break;
		}
		else if (choice == 'n' || choice == 'N') {
			std::system("cls");
			cout << "Penambahan layanan dibatalkan" << endl;
			break;
		}
		else {
			std::system("cls");
			cout << "Pilihan tidak valid!" << endl;
		}
	}
}

void Layanan::layananFileWritting(Layanan l) {
	string folder = "data";
	string filename = folder + "/layanan.txt";

	// Deklarasi folder jika folder tidak ada di directory
	if (!filesystem::exists(folder)) {
		filesystem::create_directory(folder);
		cout << "Folder 'data' created." << endl;	
	}

	// Membuat file dengan data layanan
	ofstream outFile(filename, ios::app);
	if (outFile.is_open()) {
		cout << "Membuat data layanan di folder 'data'." << endl;
		outFile << "Nama Layanan: " << l.namaLayanan << endl;
		outFile << "Harga Layanan: " << l.hargaLayanan << endl;
		outFile << "Nama Mekanik: " << l.namaMekanik << endl;
		outFile.close();
		cout << "Data layanan " << l.namaLayanan << " berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Failed to create file in folder.\n";
	}
}