#include "functions.h"

int main() {
    int n, t, move;
    char s[10], e[10];
    int ks = 0, ks1 = 0, ksr = 1;
    printf("Vvedite razmernosty massiva: ");
    scanf("%s", &e);
    n = atoi(e);
    if (n == 0 || n < 0) {
        printf("Vvedeno nekorrektnoe znachenie!\n");
        return 0;
    } 
    int array[n];
    ks = randomArray(array, n, ks);
    ksr = kseries(array, n);
    printf("\nKolichestvo seriy v massive = %d\n", ksr);
    printf("\nViberite sposob sortirovki massiva:\n1 - Metod pryamogo vibora;");
    printf("\n2 - Puzirkovaya sortirovka;\n3 - Sheykernaya sortirovka.");
    printf("\nVvedite nomer sposoba: ");
    scanf("%s", &s);
    t = atoi(s);
    switch (t) {
    case 1: {
        move = selectSort(array, n); break;
    }
    case 2: {
        move = soapSort(array, n); break;
    }
    case 3: {
        move = shakeSort(array, n); break;
    }
    default: {
        printf("\n");
        printf("Vvedeno nekorrektnoe znachenie!\n");
        return 0;
    }
    }
    ksr = kseries(array, n);
    printf("\nKolichestvo seriy v massive = %d", ksr);
    ks1 = ksum(array, n);
    printf("\nKolichestvo peresylok = %d\n", move);
    if (ks != ks1) printf("KS ne sovpala\n");
    else printf("KS sovpala\n");
    system("PAUSE");
}