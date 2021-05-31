#include <stdio.h>

int main(){
    int horario = 0;
    
    printf("informe a hora: ");
    scanf("%d", &horario);

    if(horario >= 0 && horario < 12){
        printf("Bom dia!\n");
    }
    else if (horario >= 12 && horario < 18){
        printf("Boa tarde!\n");
    }
    else if(horario >= 18 && horario <= 23){
        printf("Boa noite!\n");
    }
    else{
        printf("Horario invalido!\n");
    }
    return 0;
}