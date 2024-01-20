#include<stdio.h>

static int a = 0; // Variável global, alocação estática

void incrementa (void){
    int b = 0; // Variável local, alocação automática
    static int c = 0;
    printf("a: %d, b: %d, c: %d\n", a, b, c);
    a++;
    b++;
    c++;
}

int main(void){
    int i;
    for (i = 0; i < 5; i++)
    incrementa();
    system("pause");
    return 0;
}