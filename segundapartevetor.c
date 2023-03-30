#include <stdio.h>

int main()
{
    const int tamvet=5;   
    float vet[tamvet],soma=0,media; int posicao; /*float vai ser a variavel vet(vetor) e media e int é numero real (sem ponto)*/
    for (posicao=0;posicao<tamvet;posicao++) /*contando e guardando cada nota em um espaço de memoria*/
    {
        scanf ("%f",&vet[posicao]); /*pegando a nota de cada aluno input do usuarrio*/
        soma=soma+vet[posicao]; /*falando que soma mais soma significa o vetor posicao da memoria*/
    }
    media=soma/tamvet; /*relacionando o codigo a cima e dizendo que a media sera soma de todas as notas dividido pelo numedo de aluno*/         
    for (posicao=0;posicao<tamvet;posicao++) /*abrindo o espaço de memoria para definir a media esse é independente do de cima*/
    {
        if (vet[posicao] >= media) /*seleciona as notas maiores do que a media ou a nota de corte */
            printf("%.2f \n",vet[posicao]);/*imprima o numero flutuante de cada posição no vetor */
    }

    return 0;
}