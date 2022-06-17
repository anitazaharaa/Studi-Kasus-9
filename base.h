#ifndef _BASE_H
#define _BASE_H

#include <iostream>

using namespace std;

class Stukas {

private:
	string nama, nim, cari, jenis;
  string hasilJenis, hasilJudul, hasilPenulis;
  string novel[2][5], komik[2][5], ensiklopedi[2][5];
  int hasil;
		
public:
  void input();
  void output();

  void deklarasiBuku();
  void cariBuku();
};

#endif
