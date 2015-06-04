#include <stdio.h>

int main()
{
    int many[] = { 2, 4, 8};
    int sum = 0;
    for (int i=0; i < 3; i++) {
        sum += many[i];
        printf("i %d sum %d\n", i, sum);
    }
    
    char letters[] = { 'a', 'b', 'c' };
    int w = 0;
    while (w < 3) {
        printf("letter %d is %c\n", w, letters[w]);
        ++w;
        
    }

    int y = 0;
    do {
        printf("letter %d is %c\n", y, letters[y]);
        ++y;
    } while (y < 3);
    
    
    return 0;
}