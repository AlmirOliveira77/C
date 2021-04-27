#include <stdio.h>

int main(){
    int valor = 0, hora = 0, minuto = 0, segundo= 0;
    scanf("%d", &valor);
    
    hora = valor / 3600;
    valor = valor % 3600;
    minuto = valor / 60;
    segundo = valor % 60;
    
    printf("%d:%d:%d\n", hora, minuto, segundo);

    return 0;
}
