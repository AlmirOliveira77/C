#include <stdio.h>

int main(){
    int a ,b, c, d, hora_ini, hora_final, tempo_jogo, hora, minuto; 
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    if(a == b && b == c && c == d && a > 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    
    else{
        hora_ini = (a * 60 * 60) + (b * 60);
        hora_final = (c * 60 * 60) + (d * 60);
        tempo_jogo = hora_final - hora_ini;
        hora = tempo_jogo / 3600;
        tempo_jogo = tempo_jogo % 3600;
        minuto = tempo_jogo / 60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    
    return 0;
}