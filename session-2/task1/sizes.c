
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;

    double testDouble;
    short testShort;
    long testLong;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Double size is %ld bytes\n",sizeof(testDouble));
    printf("Short size is %ld bytes\n",sizeof(testShort));
    printf("Long size is %ld bytes\n",sizeof(testLong));

    return 0;
}
