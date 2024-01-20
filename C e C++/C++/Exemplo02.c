#include<stdio.h> // Biblioteca de  alocação de memória
#include<conio.h> // Biblioteca de entrada e saída no console

int main(void){
    // Variável que sera apontada pelo ponteiro
    int v_num = 10;
    
    // declaração de variável ponteiro
    int *ptr;
    
    // atribuindo o endereço da variável ao ponteiro
    ptr = &v_num;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel v_num: %d\n", v_num);
    printf("Endereco da variavel v_num: %x\n", &v_num);
    printf("Conteudo da variavel ponteiro ptr: %x", ptr);

    getch();
    return(0);
   
}