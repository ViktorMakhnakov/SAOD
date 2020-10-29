#include <stdlib.h>
#include "../src/functions.h"
#include "ctest.h" 

CTEST(rand_array_10_elems, control_sum1) { 
    int a[10] = {52, 89, 30, -100, 789, 15, 65, 48, -987, 620};
    const int result = ksum(a, 10); 
    const int expected = 621; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_8_elems, control_sum2) { 
    int a[8] = {0, -30, 80, -15, 23, -55, -82, 85};
    const int result = ksum(a, 8); 
    const int expected = 6; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_2_elems, control_sum3) { 
    int a[2] = {-45, 45};
    const int result = ksum(a, 2); 
    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_5_elems, control_sum4) { 
    int a[5] = {854, -45, 12, -78, 99};
    const int result = ksum(a, 5); 
    const int expected = 842; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_5_elems, kol_ser1) { 
    int a[5] = {23, -95, -13, 0, 46};
    const int result = kseries(a, 5); 
    const int expected = 2; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_7_elems, kol_ser2) { 
    int a[7] = {5, -584, -321, 7, -25, -76, 3};
    const int result = kseries(a, 7); 
    const int expected = 4; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(incr_array_2_elems, kol_ser3) { 
    int a[2] = {65, 120};
    const int result = kseries(a, 2); 
    const int expected = 1; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(decr_array_6_elems, kol_ser4) { 
    int a[6] = {546, 320, 241, 135, 52, -9};
    const int result = kseries(a, 6); 
    const int expected = 6; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_10_elems, select_moves1) { 
    int a[10] = {54, 82, 10, 61, -524, 0, -95, 154, 35, 85};
    const int result = selectSort(a, 10); 
    const int expected = 27; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(incr_array_10_elems, select_moves2) { 
    int a[10] = {-542, -146, -108, -25, -3, 0, 35, 56, 155, 384};
    const int result = selectSort(a, 10); 
    const int expected = 27; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(array_1_elem, select_moves3) { 
    int a[1] = {85};
    const int result = selectSort(a, 1); 
    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(decr_array_3_elems, select_moves4) { 
    int a[3] = {85, 1, -95};
    const int result = selectSort(a, 3); 
    const int expected = 6; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(incr_array_6_elems, soap_moves1) { 
    int a[6] = {-75, -54, -23, 1, 56, 80};
    const int result = soapSort(a, 6); 
    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(decr_array_8_elems, soap_moves2) { 
    int a[8] = {854, 752, 654, 325, 285, 165, 25, -65};
    const int result = soapSort(a, 8); 
    const int expected = 84; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(array_1_elem, soap_moves3) { 
    int a[1] = {55};
    const int result = soapSort(a, 1); 
    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_4_elems, soap_moves4) { 
    int a[4] = {4, -85, 65, 23};
    const int result = soapSort(a, 4); 
    const int min_expected = 0;
    const int max_expected = 18; 
    ASSERT_INTERVAL(min_expected, max_expected, result);  
}

CTEST(incr_array_8_elems, shake_moves1) { 
    int a[8] = {-785, -652, -521, -314, -249, -123, 5, 256};
    const int result = shakeSort(a, 8); 
    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(decr_array_6_elems, shake_moves2) { 
    int a[6] = {895, 756, 654, 432, 285, 51};
    const int result = shakeSort(a, 6); 
    const int expected = 45; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(array_1_elem, shake_moves3) { 
    int a[1] = {-852};
    const int result = shakeSort(a, 1); 
    const int expected = 0; 
    ASSERT_EQUAL(expected, result); 
}

CTEST(rand_array_10_elems, shake_moves4) { 
    int a[10] = {782, 547, 24, 852, -78, 924, -95, 12, 85, 364};
    const int result = shakeSort(a, 10); 
    const int min_expected = 0;
    const int max_expected = 135; 
    ASSERT_INTERVAL(min_expected, max_expected, result);
    system("PAUSE"); 
}