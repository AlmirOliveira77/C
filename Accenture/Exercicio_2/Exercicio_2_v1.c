/*  Nome: Almir de Oliveira Pereira
*   E-mail: almiroliveira04@gmail.com 
*   Data: 20/05/2021 
*   Descrição: Atividade 2 - Academia BRM da Accenture

                                                        */

                                                       
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define ANO 2021

//Funcao menu, onde estão as opcoes do programa
int menu(){
    printf("========================\n       BEM-VINDO\n========================\n");
    printf("Opcao 1 - Dados Pessoais\n");
    printf("Opcao 2 - Numeros\n");
    printf("Opcao 3 - Conversor de Fahrenheit\n");
    printf("Opcao 4 - Calcular o Fatorial de um npumero\n");
    printf("Opcao 5 - Conversor de char para inteiro + calculo da media\n");
    printf("Opcao 6 - Tabuada\n");
    printf("Opcao 7 - Difenca entre numeros pares e impares de uma matriz\n");
    printf("Digite  8 - Sair");
    printf("\nEscolha uma opcao: ");
    return 0;
}    

//funcao principal main
int main(int argc, char *argv[]){
    //variaveis usadas no programa
    int opcao = 0, menu_principal = 0;
    int ano_de_nascimento = 0, tamanho_nome = 0;
    int numero_1 = 0, numero_2 = 0; 
    int quadrado_numero_2 = 0, quadrado_numero_1 = 0, seno_numeros = 0, modulo_numeros = 0, sub_numeros = 0, raiz = 0, seno = 0;
    double fahrenheit = 0;
    int fahrenheit_2 = 0, fatorial = 0, media = 0, contador = 10;
    char nome[15];
    char sobrenome[20];
    char caracteres[10];
    char entrada[1];
   
   //laço responsavel pela repeticao do menu 
    while(1){
        menu_principal = menu();   
        scanf("%d", &opcao);
        if(opcao == 8){//condicao para encerrar o programa
            break;
        }

        switch (opcao){
            //primeira opcao do menu
            case 1:
                //recebendo dados do usuario
                printf("\nInforme seu primeiro nome: ");
                scanf("%s", nome);
                printf("informe seu sobrenome: ");
                scanf("%s", sobrenome);
                printf("Informe seu ano de nascimento: ");
                scanf("%d", &ano_de_nascimento);
                tamanho_nome = strlen(nome) + strlen(sobrenome);
                //printando as saidas
                printf("\nNome Completo: %s %s\n", nome, sobrenome);
                printf("Sua idade: %d\nA soma da sua idade com a quantidede de caracteres do seu nome: %d\n\n", ANO - ano_de_nascimento, (tamanho_nome + (ANO - ano_de_nascimento)));
            break;     

            //segunda opcao do menu
            case 2:
                //recebendo dados do usuario
                printf("\nInforme o primeiro numero: ");
                scanf("%d", &numero_1);
                printf("Informe o segundo numero: ");
                scanf("%d", &numero_2);
                //realizando as operacoes
                sub_numeros = (numero_1 - numero_2);
                quadrado_numero_2 = pow(numero_2, 2);
                quadrado_numero_1 = pow(numero_1, 2);
                modulo_numeros = abs(numero_1);
                raiz = sqrt(quadrado_numero_1 + quadrado_numero_2);
                seno = sin(sub_numeros);
                //printando as saidas
                printf("Soma dos numeros: %d\n", (numero_1 + numero_2));
                printf("Primeiro numero pelo quadrado do segundo: %d\n", (numero_1 * quadrado_numero_2));                
                printf("O quadrado do primeiro numero: %d\n", quadrado_numero_1);
                printf("A raiz quadrada da soma dos quadrados: %d\n", raiz);
                printf("O seno da diferenca do primeiro numero pelo segundo: %d\n", seno);
                printf("O modulo do primeiro numero: %d\n\n", modulo_numeros);
                
            break;

            case 3:
                //recebedndo dados do usuario
                printf("Informe a temperatura em Fahrenheit: ");
                scanf("%lf", &fahrenheit);
                printf("Temperatura em celcius(double): %2.2lf\n", (fahrenheit-32.0) * (5.0/9.0));
                //realizando operacao de conversao
                fahrenheit_2 = (int)fahrenheit;
                fahrenheit_2 = (fahrenheit_2 - 32.0) * (5.0/9.0);
                //imprimindo a saida
                printf("Temperatura em celcius(int): %d\n", fahrenheit_2);

            break;

            case 4:
                //recebebdo valor de entrada
                printf("\nInforme o numero: ");
                scanf("%d", &numero_1);
                //calculando o fatorial
                for(fatorial = 1; numero_1 > 1; numero_1 = numero_1 - 1){
                     fatorial = fatorial * numero_1;
                }
                //imprimindo o fatorial 
                printf("fatorial: %d\n\n", fatorial);
                             
            break;

            case 5:
                //recebendo as notas do tipo char 
                for(int i = 0; i <= 10; i++){
                    printf("\ninforme uma nota: ");
                    scanf("%s", caracteres[i]);
                }
                //convertendo as notas de char para int e incrementando no contador media
                 for(int i = 0; i < 10; i++){
                    media += (int)caracteres[i];
                }
                //printando o array de char e a media
                printf("Array: %s", caracteres);
                printf("Media: %d", (media/10));

              
            break;

            case 6:    
                printf("\nInfelimente não consegui implementar a tempo");
            break;

            case 7: 
                printf("\nInfelimente não consegui implementar a tempo");
            break;     
                
            break;

            default:               
        
            break;
        }
    }
    
    return 0;
}

