#include <stdio.h>

int main()
{
    int a = 11;
    int b = 23;
    int minimum;
    char min_value;
    
    if (a < b) {
        minimum = a;
        min_value = 'a';
    } else {
        minimum = b;
        min_value = 'b';
    }
    
    printf("%c %d is the minimum\n", min_value, minimum );
    
    
    
    char c = 'c';
    char d = 'd';
    char g = 'g';
    
    char letter = 'z';
    if (letter == c) printf("letter %c is %c\n", letter, c);
    else if (letter == d) printf("letter %c is %c\n", letter, d);
    else if (letter == g) printf("letter %c is %c\n", letter, g);
    else printf("letter %c not found\n", letter);
    return 0;
}

