#include <iostream>
using namespace std;
/*PROGRAM KALKULATOR
// {i.s : Program Menunggu Masukan Angka}
// {f.s : Program Menampilkan Angka}
*/

//prototype
int HasilTambah (int a, int b);
int HasilKurang (int a, int b);
int HasilKali (int a, int b);

int main () {
    //kamus
   int a, b;
  //algoritma
  //Masukan Input
  //Tugas 1
   cout << "Masukan nilai a: ";
   cin >> a;

   cout << "Masukan nilai b: ";
   cin >> b;
   //Tugas2
   cout << endl; //enter
  cout << "hasil pertambahan a dan b adalah: " << HasilTambah (a, b);
  //Tugas3
  cout << endl; //enter
 cout << "hasil pengurangan a dan b adalah: " << HasilKurang (a, b);
 //Tugas4
 cout << endl; //enter
 cout << "hasil perkalian a dan b adalah: " << Hasilkali (a, b);

return 0;

}

int HasilTambah (int a, int b) {
  return a + b;
}
int HasilKurang (int a, int b) {
  return a - b;
}
int HasilKali (int a, int b) {
  return a * b;
}
