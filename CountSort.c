// Nama File : CountSort.c
// Deskripsi : mengurut tabel integer [1...N] dengan pencacahan
// Nama :  Gherald Abraham
// NIM : 24060123140210
// Tanggal : 30 Mei 2024


#include <stdio.h>
#include <stdlib.h>

int max(int T[], int N) {
    int max, i;
    max = T[0];
    for (i = 1; i < N; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }
    return max;
}

void Countsort(int T[], int N) {
    int i, j, k;
    int ValMax = max(T, N);
    int *Counting = (int *)malloc((ValMax + 1) * sizeof(int));
    for (i = 0; i <= ValMax; i++) {
        Counting[i] = 0;
    }
    for (i = 0; i < N; i++) {
        Counting[T[i]]++;
    }
    k = 0;
    for (i = 0; i <= ValMax; i++) {
        for (j = 0; j < Counting[i]; j++) {
            T[k++] = i;
        }
    }
    free(Counting);
}

int main() {
    int T[] = {7, 1, 0, 5, 3, 1, 6};
    int i;
    int N = 7;

    printf("Tabel T sebelum dilakukan Count Sort :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
    
    Countsort(T, N);
    
    printf("Tabel T setelah dilakukan Count Sort :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
    
    return 0;
}
