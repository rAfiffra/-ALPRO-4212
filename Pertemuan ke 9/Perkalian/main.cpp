#include <iostream>

int perkalianRekursif(int a, int b) {
  if (b == 0) {
    return 0;
  } else {
    return a + perkalianRekursif(a, b - 1);
  }
}

int main() {
    int bil1, bil2;

    std::cout << "Masukkan dua bilangan \n";
    std::cout << "Masukkan bilangan ke-1 : ";
    std::cin >> bil1;
    std::cout << "Masukkan bilangan ke-2: ";
    std::cin >> bil2;

  int hasil = perkalianRekursif(bil1, bil2);
  std::cout << "Hasil perkalian: " << hasil << std::endl;

  return 0;
}
