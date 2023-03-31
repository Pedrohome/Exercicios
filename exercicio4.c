#include <stdio.h>

int main(){
    int num_elementos, i;
    float num, soma = 0.0, media;

    printf("Quantos numeros voce deseja inserir?");
    scanf("%d", &num_elementos);

    for (i = 1; i <= num_elementos; ++i){
        printf("Digite o numero %d: ", i);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / num_elementos;
    printf("A média dos numeros digitados é; %.2f", media);

    return 0;
}