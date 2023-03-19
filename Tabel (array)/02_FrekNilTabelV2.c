/* Nama File    		: 02_FrekNilTabelV2.c */
/* Deskripsi    		: Menampilkan nilai elemen yang muncul lebih dari 1 kali dalam tabel yang berisi integer-integer lebih dari 0 */
/* Pembuat      		: Alwey Hakim - 24060122140104 */
/* Tanggal Pembuatan	: 17 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>


int main()
{
/* Kamus */
    int n;      /* Jumlah berapa elemen */
    int* T;     /* Pointer tabel */
    int i, j;   /* Counters */
    int f;      /* Frekuensi elemen */

/* Algoritma */
/* Alokasi dinamik */
    printf("INPUT\nJumlah berapa elemen:\n");
    scanf("%d", &n);

    if (n<=0){
        printf("\nOUTPUT\nHarus lebih dari 0 elemen.\n");
    }else{
        printf("Elemen-elemen tabel: \n");
        T = (int*)malloc(n*sizeof(int));

        for (i=0; i<n; i=i+1){
            scanf("%d", (T+i));
            if (*(T+i)<=0){
                printf("\nOUTPUT\nNilai elemen harus positif.\n");
                return 0;
            }
        }printf("\nOUTPUT\nElemen berkemunculan lebih dari 1 kali:\n");
        for (i=0; i<n; ++i){
            f=1;
            for (j=(i+1); j<n; ++j){
                if ((*(T+i)==*(T+j))&&(*(T+i)>0)){
                    f = f+1;
                    *(T+j) = 0;
                }
            }if (f>1){
                printf("%d\n", *(T+i));
            }
        }
    }free(T);
    return 0;
}

