#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*s) {

	int x = 0;
	for (; *s != '\0'; s++)
		++x;
	return x;
}
int main(void) {
	cout << endl;
	cout << "  Nama        	: Muhammad Dzikrul Hakam " << endl;
	cout << "  Kelas       	: D4 Manajemen Informatika " << endl;
	cout << "  NIM 		: 19051397001" << endl;
	cout << "  Mata Kuliah 	: Struktur Data" << endl;
	cout << endl;
	char String[80];
	cout << "  Inputlah Sebuah Kata      : ";
	cin.getline(String, 100); cout << endl;
	cout << "  Jumlah Karakternya Adalah : " << H(String) << " Huruf " << endl;
}
