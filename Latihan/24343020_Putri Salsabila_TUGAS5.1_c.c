/*  Nama File       : 24343020_Putri Salsabila_TUGAS5.1_c.c
Programmer      : Putri Salsabila (24343020)
    Tgl. pembuatan  : 25/10/24
    Deskripsi       : menghitung Faktorial
*/
#include <stdio.h>

// Fungsi untuk menghitung faktorial secara rekursif
int hitungFaktorial(int n)
{
    if (n 
   == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * hitungFaktorial(n - 1);
    }
}

int main()
{
    int n;
    // Nama pemrogram
    printf("Nama: Putri Salsabila\n");
    printf("NIM: 24343020\n");
    printf("Tgl pembuatan: 04.10.24\n");

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    // Memanggil fungsi dan menampilkan hasil
    int faktorial = hitungFaktorial(n);
    printf("Faktorial dari %d adalah: %d\n", n, faktorial);

    return 0;
}