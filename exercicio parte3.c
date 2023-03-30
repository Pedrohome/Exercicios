#include <stdio.h>

int main()
{
    const int tamvet=50, tamlista=10;
    int vet [tamvet],numero,posicao,posvet,achou;
    printf ("Digite os dados para o vetot\n");
    for (posicao=0;posicao<tamvet;posicao++)
    {
        scanf("%d",&vet[posicao]);
    }
    printf("digite os números da lista\n");
    for (posicao=1;posicao<=tamlista;posicao++)
    {
        printf("\nDigite um numero: ");
        scanf("%d",&numero);
        posvet=0;
        achou=0;
        while (posvet<=tamvet-1 && achou==0)
        {
            if (numero==vet[posvet])
                achou=1;
            else
                posvet=posvet+1; 
        }
        if (achou==1)
            printf ("achou o numero na posicao: %d",posvet);
        else
           printf("não achou o numero");
    }
}
