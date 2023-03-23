/* Nama File    		: JumPrima_procedure.c */
/* Deskripsi    		: Menampilkan bilangan prima dari bilangan integer N dan menampilkan hasil penjumlahan elemen bilangan prima yang terbentuk (dengan sub program prosedur)*/
/* Pembuat      		: Alwey Hakim - 24060122140104 */
/* Tanggal Pembuatan	: 22 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

void cekprima(int x, int* y){
/* Kamus Lokal */
    int i;      // counter //
    int f=0;    // jumlah faktor //

/* Algoritma */
    for (i=1; i<=x; ++i){
        if (x%i==0){
            f=f+1;
        }
    }if (f==2){
        printf("%d\n", x);
        *y = x;
    }return 0;
}

int main(){
/* Kamus */
    int N;
    int i;      // counter //
    int p = 0;  // bilangan prima //
    int Sn = 0; // jumlah deret bilangan prima //

/* Algoritma */
     printf("INPUT\nInput N:\n");
    scanf("%d", &N);
    printf("\nOUTPUT\n");

    printf("Deret bilangan prima:\n");
    for (i=1; i<=N; ++i){
        cekprima(i, &p);
        if (p==i){
            Sn = Sn + p;
        }
    }printf("Jumlah deret bilangan prima:\n%d\n", Sn);
    return 0;
}
