/*  Nama File       : 24343020_Putri Salsabila_TUGAS5.1_A.c
    Programmer      : Putri Salsabila (24343020)
    Tgl. pembuatan  : 25/10/24
    Deskripsi       : menghitung persegi 
*/
#include <stdio.h>

// Fungsi untuk menghitung luas persegi panjang
int hitungLuasPersegiPanjang(int panjang, int lebar)
{
    return panjang * lebar;
}

int main()
{
    int panjang, lebar;

    // Nama pemrogram
    printf("Nama:Putri Salsabila\n");
    printf("NIM: 24343020\n");
    printf("Tgl pembuatan: 04.10.24");

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    // Memanggil fungsi dan menampilkan hasil
    int luas = hitungLuasPersegiPanjang(panjang, lebar);
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}
