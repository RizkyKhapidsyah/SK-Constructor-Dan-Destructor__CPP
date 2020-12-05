#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

class PersegiPanjang {
public:
	int aPanjang;
	int aLebar;

	/* Constructor */
	PersegiPanjang() {
		aPanjang = 8;
		aLebar = 5;

		cout << "Ini adalah Constructor Persegi Panjang!";
	}

	/* Copy Constructor */
	PersegiPanjang(const PersegiPanjang& obj) {
		aPanjang = obj.aPanjang;
		aLebar = obj.aLebar;
		cout << "Ini merupakan Copy Constructor" << endl << endl;
	}

	int HitungLuas() {
		return aPanjang * aLebar;
	}

	~PersegiPanjang() {
		cout << "Persegi Panjang dihancurkan" << endl;
	}
};


int main() {
	{
		/* Objek */
		PersegiPanjang PP;
		/*
		cout << "Nilai Panjang  = "; cin >> PP.aPanjang;
		cout << "Nilai Lebar    = "; cin >> PP.aLebar;
		*/
		cout << endl << endl;

		cout << "Panjang  : " << PP.aPanjang << endl;
		cout << "Lebar    : " << PP.aLebar << endl;
		cout << "Luas     : " << PP.HitungLuas() << endl;

		PersegiPanjang PPP = PP;
		cout << "Panjang pada objek PPP adalah   : " << PPP.aPanjang << endl;
		cout << "Lebar pada objek PPP adalah     : " << PPP.aLebar << endl;

		_getch();
		return 0;
	}
	
}