#include <stdio.h>

int main()
{
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < 5; j++) 
            printf("%c ", i + j * 5 + 65);
        printf("\n");
    }

    return 0;
}