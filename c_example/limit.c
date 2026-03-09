#include <stdio.h>
#include <limits.h>

#define END_HELLO "end of file\n"
int main(void)
{
    printf("char_bit : %d\n", CHAR_BIT);
    printf("char_max : %d\n", CHAR_MAX);
    printf("INT_MIN : %d \t INT_MAX : %d\n", INT_MAX, INT_MAX);
    printf("LONG_MIN : %ld \t LONG_MAX : %ld\n",LONG_MIN, LONG_MIN);
    printf(END_HELLO);
    return 0;

}