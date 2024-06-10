// Nama File : SelectorSortMin.c
// Deskripsi : mengurut tabel integer [1...N] mengecil dengan minimum suksesif
// Nama : Gherald Abraham
// NIM : 24060123140210
// Tanggal : 30 Mei 2024

#include<stdio.h>
#include <stdlib.h>

void MINSORT (int T[], int N) {
    int i, Pass, Temp, IMin;
    for (Pass = 0; Pass < N - 1; Pass++) {
        IMin = Pass;
        for (i = Pass + 1; i < N; i++) {
            if (T[i] < T[IMin]) {
                IMin = i;
            }
        }
        Temp = T[IMin];
        T[IMin] = T[Pass];
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
    MINSORT (T, N);
    for (i = 0; i < N; i++) {
        printf ("%d ", T[i]);
    }
    printf ("\n");
    return 0;
}
