#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


int ksum(int* array, int kol);
int kseries(int* array, int kol);
int selectSort(int* array, int kol);
int soapSort(int* array, int kol);
int shakeSort(int* array, int kol);
int randomArray(int *array, int kol, int ks);

#endif
