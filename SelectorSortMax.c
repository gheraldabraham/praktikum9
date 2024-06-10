// Nama File : SelectorSortMax.c
// Deskripsi : mengurut tabel integer [1...N] mengecil dengan maksimum suksesif
// Nama : Gherald Abraham
// NIM : 24060123140210
// Tanggal : 30 Mei 2024

#include<stdio.h>
#include <stdlib.h>

void MAXSORT (int T[], int N) {
    int i, Pass, Temp, IMax;
    for (Pass = 0; Pass < N - 1; Pass++) {
        IMax = Pass;
        for (i = Pass + 1; i < N; i++) {
            if (T[IMax] < T[i]) {
                IMax = i;
            }
        }
        Temp = T[IMax];
        T[IMax] = T[Pass];
        T[Pass] = Temp;
    }
}

int main () {
    int T[] = {7, 1, 0, 5, 3, 1, 6};
    int i;
    int N = 7;

    printf ("Tabel T sebelum dilakukan Selection Sort :\n");
    for (i = 0; i < N; i ++) {
        printf ("%d ", T[i]);
    }
    printf ("\n");
    printf ("Tabel T setelah dilakukan Selection Sort :\n");
    MAXSORT (T, N);
    for (i = 0; i < N; i++) {
        printf ("%d ", T[i]);
    }
    printf ("\n");
    return 0;
}
