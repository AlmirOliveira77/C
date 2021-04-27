#include <stdio.h>

int main(){
    double salario, vendas;
    char nome[30];

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2lf\n", salario + (vendas * 0.15));

}