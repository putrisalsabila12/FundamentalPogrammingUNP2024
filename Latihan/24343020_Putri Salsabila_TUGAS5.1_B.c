/*  Nama File       : 24343020_Putri Salsabila_TUGAS5.1_B.c
    Programmer      : Putri Salsabila(24343020)
    Tgl. pembuatan  : 25/10/24
    Deskripsi       : Menghitung keliling lingkaran
*/
#include <stdio.h>

// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari)
{
    return 2 * 3.14 * jariJari;
}

int main()
{
    float jariJari;

    // Nama pemrogram
    printf("Nama: Putri Salsabila\n");
    printf("NIM: 24343020");
    printf("Tgl pembuatan: 25.10.24\n");

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Memanggil fungsi dan menampilkan hasil
    float keliling = hitungKelilingLingkaran(jariJari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}