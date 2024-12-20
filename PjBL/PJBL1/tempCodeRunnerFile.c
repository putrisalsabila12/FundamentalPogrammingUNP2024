#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisi struct Siswa
typedef struct {
    char nama[30];
    char nis[10]; 
    char tempatTanggalLahir[50];
    char jenisKelamin[10];
    char agama[20];
    char alamat[100];
    char noHP[15];
    char namaAyah[30];
    char namaIbu[30];
    double nilaiBahasaIndonesia;
    double nilaiMatematika;
    double nilaiBahasaInggris;
    double nilaiIPA;
    double nilaiRataRata;
} Siswa;

// Fungsi untuk membersihkan input buffer
void bersihkanBuffer() {
    while (getchar() != '\n');
}

// Fungsi untuk menambahkan data siswa
void tambahSiswa(Siswa *siswa) {
    printf("\nMasukkan data siswa:\n");
    printf("Nama Siswa: ");
    bersihkanBuffer();
    scanf(" %[^\n]", siswa->nama);
    printf("NIS Siswa: ");
    scanf("%s", siswa->nis);
    printf("Tempat Tanggal Lahir: ");
    bersihkanBuffer();
    scanf(" %[^\n]", siswa->tempatTanggalLahir);
    printf("Jenis Kelamin: ");
    scanf("%s", siswa->jenisKelamin);
    printf("Agama: ");
    scanf("%s", siswa->agama);
    printf("Alamat: ");
    bersihkanBuffer();
    scanf(" %[^\n]", siswa->alamat);
    printf("No HP: ");
    scanf("%s", siswa->noHP);
    printf("Nama Ayah: ");
    bersihkanBuffer();
    scanf(" %[^\n]", siswa->namaAyah);
    printf("Nama Ibu: ");
    bersihkanBuffer();
    scanf(" %[^\n]", siswa->namaIbu);
    printf("Nilai Bahasa Indonesia: ");
    scanf("%lf", &siswa->nilaiBahasaIndonesia);
    printf("Nilai Matematika: ");
    scanf("%lf", &siswa->nilaiMatematika);
    printf("Nilai Bahasa Inggris: ");
    scanf("%lf", &siswa->nilaiBahasaInggris);
    printf("Nilai IPA: ");
    scanf("%lf", &siswa->nilaiIPA);
    siswa->nilaiRataRata = (siswa->nilaiBahasaIndonesia + siswa->nilaiMatematika + siswa->nilaiBahasaInggris + siswa->nilaiIPA) / 4.0;
}

// Fungsi untuk menampilkan data siswa dalam dua tabel
void tampilDataSiswa(const Siswa *siswa, int jumlahSiswa) {
    printf("\nData Siswa:\n");
    
    // Tabel Data Pribadi
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    printf("| No | Nama Siswa          | NIS        | Jenis Kelamin | Tempat Tanggal Lahir | Agama      | Alamat               |\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("| %2d | %-19s | %-10s | %-13s | %-21s | %-10s | %-20s |\n",
               i + 1, siswa[i].nama, siswa[i].nis, siswa[i].jenisKelamin,
               siswa[i].tempatTanggalLahir, siswa[i].agama, siswa[i].alamat);
    }
    printf("-------------------------------------------------------------------------------------------------------------------\n");

    // Tabel Data Nilai
    printf("\nData Nilai:\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    printf("| No | Nama Siswa          | B. Indonesia | Matematika | B. Inggris | IPA       | Rata-Rata |\n");
    printf("---------------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < jumlahSiswa; i++) {
        printf("| %2d | %-19s | %-12.2lf | %-10.2lf | %-10.2lf | %-9.2lf | %-9.2lf |\n",
               i + 1, siswa[i].nama, siswa[i].nilaiBahasaIndonesia, siswa[i].nilaiMatematika,
               siswa[i].nilaiBahasaInggris, siswa[i].nilaiIPA, siswa[i].nilaiRataRata);
    }
    printf("---------------------------------------------------------------------------------------------------------\n");
}

int main() {
    int pilihan;
    Siswa *siswa = NULL;
    int jumlahSiswa = 0;

    do {
        printf("\nMenu:\n");
        printf("1. Tambah Siswa\n");
        printf("2. Edit Siswa\n");
        printf("3. Tampilkan Data Siswa (Data Pribadi & Nilai)\n");
        printf("4. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
        case 1:
            jumlahSiswa++;
            siswa = realloc(siswa, jumlahSiswa * sizeof(Siswa));
            if (siswa == NULL) {
                printf("Memori tidak cukup!\n");
                exit(1);
            }
            tambahSiswa(&siswa[jumlahSiswa - 1]);
            break;
        case 2: {
            int index;
            printf("Pilih siswa yang ingin diedit (1-%d): ", jumlahSiswa);
            scanf("%d", &index);
            if (index >= 1 && index <= jumlahSiswa) {
                tambahSiswa(&siswa[index - 1]);
            } else {
                printf("Siswa tidak ditemukan!\n");
            }
            break;
        }
        case 3:
            if (jumlahSiswa == 0) {
                printf("Belum ada data siswa.\n");
            } else {
                tampilDataSiswa(siswa, jumlahSiswa);
            }
            break;
        case 4:
            printf("Keluar dari program.\n");
            break;
        default:
            printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 4);

    free(siswa);
    return 0;
}