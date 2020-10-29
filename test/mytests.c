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
}

CTEST(rand_array_10_elems, select_sort1) { 
    int a[10] = {87, -82, 126, -695, -95, -154, 46, 76, 12, 0};
    shakeSort(a, 10); 
    int b[10] = {-695, -154, -95, -82, 0, 12, 46, 76, 87, 126};
    ASSERT_DATA(b, 10, a, 10); 
}

CTEST(incr_array_6_elems, select_sort2) { 
    int a[6] = {-12, -6, 1, 8, 15, 28};
    shakeSort(a, 6); 
    int b[6] = {-12, -6, 1, 8, 15, 28};
    ASSERT_DATA(b, 6, a, 6); 
}

CTEST(decr_array_8_elems, select_sort3) { 
    int a[8] = {452, 384, 258, 184, 82, 22, -16, -154};
    shakeSort(a, 8); 
    int b[8] = {-154, -16, 22, 82, 184, 258, 384, 452};
    ASSERT_DATA(b, 8, a, 8); 
}

CTEST(array_1_elem, select_sort4) { 
    int a[1] = {95};
    shakeSort(a, 1); 
    int b[1] = {95};
    ASSERT_DATA(b, 1, a, 1); 
}

CTEST(rand_array_6_elems, soap_sort1) { 
    int a[6] = {68, 24, 466, -335, -2, 846};
    soapSort(a, 6); 
    int b[6] = {-335, -2, 24, 68, 466, 846};
    ASSERT_DATA(b, 6, a, 6); 
}

CTEST(incr_array_8_elems, soap_sort2) { 
    int a[8] = {-358, -286, -143, -54, 5, 25, 184, 295};
    soapSort(a, 8); 
    int b[8] = {-358, -286, -143, -54, 5, 25, 184, 295};
    ASSERT_DATA(b, 8, a, 8); 
}

CTEST(decr_array_5_elems, soap_sort3) { 
    int a[5] = {756, 657, 521, 317, 2};
    soapSort(a, 5); 
    int b[5] = {2, 317, 521, 657, 756};
    ASSERT_DATA(b, 5, a, 5); 
}

CTEST(array_1_elem, soap_sort4) { 
    int a[1] = {7};
    soapSort(a, 1); 
    int b[1] = {7};
    ASSERT_DATA(b, 1, a, 1); 
}

CTEST(rand_array_10_elems, shake_sort1) { 
    int a[10] = {59, -98, 48, 965, -171, -65, -254, 18, 236, -1};
    shakeSort(a, 10); 
    int b[10] = {-254, -171, -98, -65, -1, 18, 48, 59, 236, 965};
    ASSERT_DATA(b, 10, a, 10); 
}

CTEST(incr_array_8_elems, shake_sort2) { 
    int a[8] = {-125, -56, -43, -18, 0, 26, 35, 69};
    shakeSort(a, 8); 
    int b[8] = {-125, -56, -43, -18, 0, 26, 35, 69};
    ASSERT_DATA(b, 8, a, 8); 
}

CTEST(decr_array_6_elems, shake_sort3) { 
    int a[6] = {834, 654, 315, 155, 22, 7};
    shakeSort(a, 6); 
    int b[6] = {7, 22, 155, 315, 654, 834};
    ASSERT_DATA(b, 6, a, 6); 
}

CTEST(array_1_elem, shake_sort4) { 
    int a[1] = {-9};
    shakeSort(a, 1); 
    int b[1] = {-9};
    ASSERT_DATA(b, 1, a, 1); 
    system("PAUSE");
}