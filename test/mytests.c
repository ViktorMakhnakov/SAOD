#include <stdlib.h>
#include "../src/functions.h"
#include "ctest.h" 


CTEST(arithmetic_suite, control_sum) { 
    int a[10] = {52, 89, 30, -100, 789, 15, 65, 48, -987, 620};
    const int result = ksum(a, 10); 
    const int expected = 621; 
    ASSERT_EQUAL(expected, result); 
}
