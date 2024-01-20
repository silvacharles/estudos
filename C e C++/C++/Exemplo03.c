#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int v_nmat; // numero da matricula
    float v_nota[3]; // notas
    float v_media; // media
};

int main() {
    struct aluno Charles; // declara uma variavel do tipo struct
    Charles.v_nmat = 120;
    Charles.v_nota[0] = 8.5;
    Charles.v_nota[1] = 7.2;
    Charles.v_nota[2] = 5.4;
    Charles.v_media=(Charles.v_nota[0]+Charles.v_nota[1]+Charles.v_nota[2])/3.0;
    printf("Matricula:%d\n", Charles.v_nmat);
    printf("Media: %.2f\n", Charles.v_media);
    system("pause");
    return(0);

}