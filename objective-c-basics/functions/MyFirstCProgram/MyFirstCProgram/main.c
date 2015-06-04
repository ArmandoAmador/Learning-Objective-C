#include <stdio.h>

int funky_math(int a, int b);
int main()
{
    int foo = 24;
    int bar = 35;
    
    int lots = funky_math(foo, bar) * funky_math(foo, bar);
    printf("funky math %d\n", lots);
    return 0;
}

int funky_math(int a, int b) {
    return a + b + 343;
}

