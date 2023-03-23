/* Nama File    		: JumPrima_function.c */
/* Deskripsi    		: Menampilkan bilangan prima dari bilangan integer N dan menampilkan hasil penjumlahan elemen bilangan prima yang terbentuk (dengan sub program fungsi)*/
/* Pembuat      		: Alwey Hakim - 24060122140104 */
/* Tanggal Pembuatan	: 22 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int cekprima(int x){
/* Kamus Lokal */
    int i;      // counter //
    int f=0;    // jumlah faktor //

/* Algoritma */
    for (i=1; i<=x; ++i){
        if (x%i==0){
            f=f+1;
        }
    }if (f==2){
        return 1;
    }else{
        return 0;
    }
}

int main(){
/* Kamus */
    int N;
    int i;      // counter //
    int Sn = 0; // jumlah deret bilangan prima //

/* Algoritma */
    printf("INPUT\nInput N:\n");
    scanf("%d", &N);
    printf("\nOUTPUT\n");

    printf("Deret bilangan prima:\n");
    for (i=1; i<=N; ++i){
        if (cekprima(i)==1){
            printf("%d\n", i);
            Sn = Sn+i;
        }
    }printf("Jumlah deret bilangan prima:\n%d\n", Sn);
    return 0;
}
