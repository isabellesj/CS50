// Kompilera 
// gcc -Wall -o mario mario.c 
#include <stdio.h>

int get_int(char text[]){
    int input = 0;
    printf("%s", text);
    scanf("%d", &input);
    return input;
}

int main(void){
    int n = get_int("Height: ");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i+j <= n-2) { 
                printf(" ");
            } else {
                printf("#");
            }               
        }
        printf("\n");
    }
}
