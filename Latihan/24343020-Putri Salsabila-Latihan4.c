/*  Nama File       : latihanModul4IfElse.c
    Programmer      : Putri Salsabila (24343020)
    Tgl. pembuatan  : 18/10/24
    Deskripsi       : menentukan bilangan ganjil atau genap
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int bilangan, sisaBagi;

    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukan bilangan bulat: ");
    scanf("%d", &bilangan);

    sisaBagi = bilangan % 2;

    if (sisaBagi == 0)
    {
        printf("Bilangan %d adalah bilangan genap.\n", bilangan);
    }
    else
    {
        printf("Bilangan %d adalah bilangan ganjil.\n", bilangan);
    }
    return 0;
}