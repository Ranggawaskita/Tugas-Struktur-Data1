//Nama : Rangga Waskita Dewa
//NIM  : 20051397055
//Kelas: 2020A
// C. Stack 3


#include <iostream>
using namespace std;
int main(){
  char huruf[1000], hasil[1000];
  int i, jumlahstring, jumlah = 0;
  printf("Nama:Rangga Waskita Dewa\n");
  printf("NIM:20051397055\n");
  printf("\n");
  printf("Masukkan Kalimat: ");
  fgets(huruf, sizeof(huruf), stdin);
  while (huruf[jumlah] != '\0'){
    jumlah++;
  }
  jumlahstring = jumlah - 1;
  for (i = 0; i < jumlah; i++){
    hasil[i] = huruf[jumlahstring];
    jumlahstring--;
  }
  hasil[i] = '\0';
  printf("\nHasil setelah dibalik: %s \n", hasil);
  return 0;
}
