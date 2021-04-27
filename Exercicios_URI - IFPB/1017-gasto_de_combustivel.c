#include <stdio.h>

int main(){
    int horas, velocidade;
    double d;

    scanf("%d %d", &horas, &velocidade);
    d = horas * velocidade;

    printf("%.3lf\n", (d/12));
}