/* Considere o seguinte programa codificado em linguagem C: */
#include <stdio.h>

// --- function declaration ---
void funcao(int *a, int *b);

// --- main program ---
int main(void) {
    int x, i;
    i = 0;
    x = 2;
    /*function call*/
    funcao(&x,&i);
    printf("\n main: i=%d | x=%d", i, x);
    return 0;
}

// --- function implementation ---
void funcao(int *a, int *b) {
    while (*b<=*a) {
        *a-=1;
        (*b)++;
    }
}