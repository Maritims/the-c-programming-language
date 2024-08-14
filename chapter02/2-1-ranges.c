#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("FROM HEADERS\n------------\n");
    printf("unsigned char  : %20d - %d\n", 0, UCHAR_MAX);
    printf("signed char    : %20d - %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned short : %20d - %d\n", 0, USHRT_MAX);
    printf("signed short   : %20d - %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned int   : %20d - %ld\n", 0, UINT_MAX);
    printf("signed int     : %20d - %d\n", INT_MIN, INT_MAX);
    printf("unsigned long  : %20d - %lu\n", 0, ULONG_MAX);
    printf("signed long    : %20ld - %ld\n\n", LONG_MIN, LONG_MAX);

    printf("FROM DIRECT COMPUTATION\n-----------------------\n");
    printf("unsigned char  : %20d - %d\n", 0, (int)pow(2, 8) - 1);
    printf("signed char    : %20d - %d\n", (int)(pow(2, 7) - pow(2, 8)), (int)(pow(2, 7)) - 1);
    printf("unsigned short : %20d - %d\n", 0, (int)pow(2, 16) - 1);
    printf("signed short   : %20d - %d\n", (int)(pow(2, 15) - pow(2, 16)), (int)(pow(2, 15)) - 1);
    printf("unsigned int   : %20d - %ld\n", 0, (long)pow(2, 32) - 1);
    printf("signed int     : %20d - %d\n", (int)(pow(2, 31) - pow(2, 32)), (int)(pow(2, 31)) - 1);
    printf("unsigned long  : %20d - %lu\n", 0, (unsigned long)pow(2, 64));
    printf("signed long    : %20ld - %ld\n", (long)(pow(2, 63) - pow(2, 64)), (long)(pow(2, 63)));

    return 0;
}
