#include <stdio.h>

int main()
{
    // Deklarasi variabel
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;
    printf("Nama : Putri Salsabila\n");
    printf("NIM : 24343020\n");
    printf("Tgl pembuatan : 4.10.2024\n");

    // input nilai dari pengguna
    printf("Masukan nilai Tugas (0-100): ");
    scanf("%f", &nilaiTugas);
    printf("Masukan nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);
    printf("Masukan nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    // Hitung nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    // Tentukan apakah lulus atau tidak
    lulus = (nilaiAkhir >= 60) && (nilaiUAS >= 50);

    // Output hasil
    printf("\nNilai Akhir anda: %.2f\n", nilaiAkhir);

    if (lulus)
    {
        printf("selamat! Anda LULUS.\n");
    }
    else
    {
        printf("Maaf, Anda TIDAK LULUS.\n");
    }

    return 0;
}