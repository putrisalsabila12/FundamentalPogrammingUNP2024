/*  Nama File       : 24343020_PUTRI SALSABILA_ARRAY_B
    Programmer      : Putri Salsabila (24343020)
    Tgl. pembuatan  : 12/11/24
    Deskripsi       : Menjumlahkan elemen array
*/

#include <stdio.h>

int main() {

    // Nama pemrogram
    printf("\tMenjumlahkan elemen array\n");
    printf("\t========================\n\n");
    printf("Nama: Putri Salsabila\n");
    printf("NIM: 24343020\n");
    printf("Tgl pembuatan: 12/11/24\n\n");

    // Deklarasikan array bertipe int dengan nama angka dan ukuran 5
    int angka[5] = {1, 2, 3, 4, 5};

    // Variabel untuk menyimpan jumlah elemen
    int jumlah = 0;

    // Gunakan loop untuk menjumlahkan semua elemen array
    for (int i = 0; i < 5; i++) {
        jumlah += angka[i];
    }

    // Tampilkan hasil penjumlahan
    printf("Jumlah dari semua elemen array: %d\n", jumlah);

    return 0;
}
