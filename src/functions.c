#include "functions.h"

int ksum(int *array, int kol) {
    int ks = 0;
    for (int i = 0; i < kol; i++) {
        ks += array[i];
    }
    return ks;
}

int kseries(int *array, int kol) {
    int ksr = 1;
    for (int i = 1; i < kol; i++) {
        if (array[i] < array[i-1]) {
            ksr ++;
        }
    }
    return ksr;
}

int selectSort(int *array, int kol) {
    int buf, k;
    int m = 0;
    for (int i = 0; i < kol - 1; i++) {
        k = i;
        for (int j = i + 1; j < kol; j++) {
            if (array[j] < array[k]) {
                k = j;
            }
        }
        buf = array[i];
        array[i] = array[k];
        array[k] = buf;
        m += 3;
    }
    return m;
}

int soapSort(int *array, int kol) {
    int buf;
    int m = 0;
    for (int i = 0; i < kol - 1; i++) {
        for (int j = kol - 1; j > i; j--) {
            if (array[j] < array[j - 1]) {
                buf = array[j - 1];
                array[j - 1] = array[j];
                array[j] = buf;
                m += 3;
            }
        }
    }
    return m;
}

int shakeSort(int *array, int kol) {
    int buf;
    int m = 0, L = 0, R = kol-1, k = R;
    do {
        for (int j = R; j > L; j--) {
            if (array[j] < array[j - 1]) {
                buf = array[j - 1];
                array[j - 1] = array[j];
                array[j] = buf;
                k = j;
                m += 3;
            }
        }
        L = k;
        for (int j = L; j < R; j++) {
            if (array[j] > array[j + 1]) {
                buf = array[j + 1];
                array[j + 1] = array[j];
                array[j] = buf;
                k = j;
                m += 3;
            }
        }
        R = k;
    } while (L < R);
    return m;
}

int randomArray(int *array, int kol, int ks) {
    srand(time(NULL));
    printf("\nPoluchen sluchayniy massiv:\n");
    for (int i = 0; i < kol; i++) {
        array[i] = -500 + rand() % 1000;
        printf("%d ", array[i]);
    }
    return ksum(array, kol);
}
