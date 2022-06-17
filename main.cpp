#include "base.h"
#include<iostream>

void Stukas::input(){
  cout<<"===========================SELAMAT DATANG=========================\n";
  cout<<"========================DI PERPUSTAKAAN SABRINA=======================\n";
  cout<<"||  JENIS BUKU  ||        JUDUL BUKU        ||  PENULIS         ||\n";

  
for (int i = 0; i < 5; i++) {
  cout << "||    Novel     ||" << novel[0][i] << "    || " << novel[1][i]<<"||"<< endl;
}
  
for (int i = 0; i < 5; i++) {
  cout << "||    KOMIK     ||" << komik[0][i] << "    || " << komik[1][i]<<"||"<< endl;
}
  
for (int i = 0; i < 5; i++) {
  cout << "|| Ensiklopedi  ||" << ensiklopedi[0][i] << "|| " << ensiklopedi[1][i]<<"||"<< endl;
}
  
  cout<<"=========================================\n";
  cout<<"Masukan Nama Anda : ";
  getline(cin, nama);
  cout<<"Masukan NIM Anda : ";
  getline(cin, nim);
  cout<<"===========================================\n";
  cout<<"Masukan judul buku yang ingin anda baca : ";
  getline(cin, cari);
}

void Stukas::output() {
  cout << "\n=================HASIL PENCARIAN=================";
  cout << "\nJenis Buku    : " <<hasilJenis;
  cout << "\nJudul Buku    : " <<hasilJudul;
  cout << "\nPenulis       : " <<hasilPenulis;
  cout<<"\n===================================================\n";
}


void Stukas::deklarasiBuku() {
  //novel
  //Judul Buku
  novel[0][0] = "Laut Bercerita";
  novel[0][1] = "Azzamine";
  novel[0][2] = "Matahari";
  novel[0][3] = "Nonversation";
  novel[0][4] = "Luka Cita";
  
  //Penulis
  novel[1][0] = "Leila S. Chudori ";
  novel[1][1] = "Sophie Aulia";
  novel[1][2] = "Tere Liye";
  novel[1][3] = "Valerie Patkar";
  novel[1][4] = "Valerie Patkar";

  //komik
  //Judul buku
  komik[0][0] = "Doraemon";
  komik[0][1] = "Detektif Conan";
  komik[0][2] = "Miiko";
  komik[0][3] = "Attack on Titan";
  komik[0][4] = "Demon Slayer";
  //Penulis
  komik[1][0] = "Fujiko F. Fujio";
  komik[1][1] = "Aoyama Gosho";
  komik[1][2] = "Ono Eriko";
  komik[1][3] = "Hajime Isayama";
  komik[1][4] = "Koyoharu Gotouge";
  
  //ensiklopedi
  //judul buku
  ensiklopedi[0][0] = "Ensiklopedia Sains";
  ensiklopedi[0][1] = "Ensiklopedia Kiamat";
  ensiklopedi[0][2] = "Ensiklopedia Akhir Zaman";
  ensiklopedi[0][3] = "Ilmu Pengetahuan Modern";
  ensiklopedi[0][4] = "Sejarah Dunia yang Disembunyikan";
  //penulis
  ensiklopedi[1][0] = "Usborne";
  ensiklopedi[1][1] = "TIM Gema Insani";
  ensiklopedi[1][2] = "Abu Fatiah Al-Adnani";
  ensiklopedi[1][3] = "Utami Widijati";
  ensiklopedi[1][4] = "Jonathan Black";
 
}

void Stukas::cariBuku() {
  for (int i = 0; i < 5; i++) {
    if (cari == novel[0][i]) {
      hasilJenis = "Novel";
      hasilJudul = novel[0][i];
      hasilPenulis = novel[1][i];
    } else if (cari == komik[0][i]) {
      hasilJenis = "Komik";
      hasilJudul = komik[0][i];
      hasilPenulis = komik[1][i];
    } else if (cari == ensiklopedi[0][i]) {
      hasilJenis = "Ensiklopedi";
      hasilJudul = ensiklopedi[0][i];
      hasilPenulis = ensiklopedi[1][i];
    }
  }
}


int main() {
  Stukas n;
  n.deklarasiBuku(); 
  n.input();
  n.cariBuku();
  n.output();
}
