#include <iostream>

using namespace std;

/*
TUGASS 1
1. fungsi penjumlahan 2 bilangan
2. fungsi pengurangan 2 bilangan
3. fungsi menghitung jumlah nilai total dari sebuah array, contoh : [1,3,4,5] --> 13
4. Fungsi menghitung rata2 dari aray tsb. [1,3,4,5] -->13/4 <-- float, double / real
*/

//membuat Fungsi Penjumlahan
void jumlah (int a,int b)
{
    int x = a + b;
    cout << x << endl;;
}

//membuat Fungsi Pengurangan
void kurang (int c,int d)
{
    int y = c - d;
    cout << y << endl;
}

//membuat fungsi Membhitung nilai total dari sebuah array
float hitungJumlah(float arr[], int n) {
   float total = 0;

   for(int i = 0; i < n; i++) {
      total += arr[i];
   }

   return total;
}
//membuat fungsi menghitung rata-rata
float hitungRataRata(float arr[], int n) {
   float total = hitungJumlah(arr, n);

   return total / n;
}


int main()
{
    jumlah(4,10);
    kurang(10,5);
    jumlah(20,4);
    kurang(20,5);

    cout << endl;

    int n;
    float rata_rata;

    cout << "Masukkan jumlah elemen dalam array: ";cin >> n;
    float arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": "; cin >> arr[i];
        }
    rata_rata = hitungRataRata(arr, n);
        cout << "Jumlah nilai dalam array: " << hitungJumlah(arr, n) << endl;
        cout << "Rata-rata nilai dalam array: " << rata_rata << endl<<endl;
}

