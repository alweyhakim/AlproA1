/* Nama File    		: 05_JumBarKolMat.c */
/* Deskripsi    		: Menjumlahkan setiap elemen pada masing-masing baris dan kolom */
/* Pembuat      		: Alwey Hakim - 24060122140104 */
/* Tanggal Pembuatan	: 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
/* Kamus */
    int b, k;       /* Baris kolom */
    printf("INPUT\nUkuran baris:\n");
    scanf("%d", &b);
    printf("Ukuran kolom:\n");
    scanf("%d", &k);

    int i, j;       /* Counters */
    int jmlB, jmlK; /* Jumlah masing-masing baris dan kolom */
    int T[b][k];    /* Tabel */

/* Algoritma */
/* Alokasi Statik */
    if ((b<=0)||(k<=0)){
        printf("\nOUTPUT\nBaris kolom harus positif.\n");
        return 0;
    }for (i=0; i<b; ++i){
        printf("Elemen-elemen baris ke-%d:\n", i+1);
        for (j=0; j<k; ++j){
            scanf("%d", &T[i][j]);
        }
    }printf("\nOUTPUT\n");
    for (i=0; i<b; ++i){
        jmlB = 0;
        for (j=0; j<k; ++j){
            jmlB = jmlB + T[i][j];
        }printf("Jumlah elemen di baris ke-%d: %d\n",  i, jmlB);
    }for (j=0; j<k; ++j){
        jmlK = 0;
        for (i=0; i<b; ++i){
            jmlK = jmlK + T[i][j];
        }printf("Jumlah elemen di kolom ke-%d: %d\n", j,  jmlK);
    }

    return 0;
}
