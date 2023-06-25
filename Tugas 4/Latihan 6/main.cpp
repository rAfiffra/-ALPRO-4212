#include <iostream>

using namespace std;


enum KegiatanMencucipakaian {
  menyortir,
  merendam,
  mencuci,
  mengeringkan,
  menjemur,
  merapikan
};

int main() {
  int kegiatan;

  cout << "Urutan kegiatan mencuci" << endl;
  cout << "1. Menyortir" << endl;
  cout << "2. Merendam" << endl;
  cout << "3. Mencuci" << endl;
  cout << "4. Mengeringkan" << endl;
  cout << "5. Menjemur" << endl;
  cout << "6. Merapikan" << endl;
  cout << "Masukan kegiatan sekarang : ";
  cin >> kegiatan;
  cout << endl;

  cout << "kegiatan sekarang adalah : ";
  switch (kegiatan) {
    case 1:
      cout << "Menggurutkan cucian" << endl;
      break;
    case 2:
        cout << "Sedang merendam baju dengan air" << endl;
    case 3:
      cout << "Mencuci pakaian" << endl;
      break;
    case 4:
        cout << "Menggeringkan cucian setelah di bilas" << endl;
        break;
    case 5:
        cout << "Menjemur baju setelah dikeringkan" << endl;
        break;
    case 6:
        cout << "Merapikan baju yang sudah di jemur" << endl;
        break;
    default:
        cout << "Kegiatan tidak valid" << endl;
        break;
  }

  return 0;
}
