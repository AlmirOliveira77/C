/*  Autor: Almir de Oliveira Pereira
*   E-mail: almiroliveira04@gmail.com
*   Versão 2.0, desenvolvido em 22/05/2021
*   Academia Accenture - Oracle BRM
                                              */
#include <time.h>                                       
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <unistd.h>

//Definição de valores usados repetidamente, para evitar uso de números mágicos
#define ANO_ATUAL 2021   
#define ZERO 0
#define UM 1
#define DOIS 2
#define CINCO 5
#define SEIS 6  
#define DEZ 10
#define MIL_E_NOVECENTOS 1900



//Função Cabeçalho, responsável por exibir as informações solicitadas na atividade
int cabecalho(){
    time_t data;
    data = time(NULL);
    struct tm tm = *localtime(&data);
    printf("=========================================\n");
    printf("|              BEM VINDO!               |\n");
    printf("| Nome: Almir de Oliveira Pereira       |\n");
    printf("| E-mail: almiroliveira04@gmail.com     |\n");
    printf("| Data atual: %d/%d/%d                 |\n",tm.tm_mday, tm.tm_mon + UM, tm.tm_year + MIL_E_NOVECENTOS); //Exibição da data atual
    printf("| Descricao: Atividade 2 - Academia BRM |\n");
    printf("=========================================\n\n");
    return 0;
}

//Função Menu, responsável por exibir para o usuário as opções solicitadas na atividade 
int menu(){
    printf("======================================================================\n");
    printf("|                          Menu Principal                            |\n");
    printf("======================================================================\n");
    printf("| Opcoes disponiveis:                                                |\n");
    printf("| - Opcao 1 - Dados Pessoais                                         |\n");
    printf("| - Opcao 2 - Operacoes numericas                                    |\n");
    printf("| - Opcao 3 - Conversor de Fahrenheit para Celsius                   |\n");
    printf("| - Opcao 4 - Calcular o Fatorial de um numero                       |\n");
    printf("| - Opcao 5 - Conversor de char para inteiro + calculo da media      |\n");
    printf("| - Opcao 6 - Tabuada                                                |\n");
    printf("| - Opcao 7 - Difenca entre numeros pares e impares de uma matriz    |\n");
    printf("| - Digite EXIT para sair do programa                                |\n");
    printf("\nEscolha uma opcao: ");
    return 0;
}    

//Função contagem_regressiva, responsável por contar de 10 a 0 e encerrar o programa
int contagem_regressiva(){
    int delay = UM; //tempo em segundos
    int contador = DEZ; //Inicialização do contador
    while(contador >= ZERO){
        printf("%d\n", contador);
        contador--; //Decrementação do contador
        sleep(delay); //Delay de 1 segundo entre cada decremento e print do contador
    }
    printf("=========== FIM ===========");
    sleep(delay);
}

int main(int argc, char *argv[]){
    //Variáveis da opção 1
    char nome[15];
    char sobrenome[20];
    int ano_de_nascimento = 0;
    int tamanho_nome = 0;

    //Variáveis da opção 2
    int numero_1 = 0;
    int numero_2 = 0;
    int quadrado_numero_1 = 0;
    int quadrado_numero_2 = 0;
    int seno_numeros = 0;
    int modulo_numeros = 0;
    int sub_numeros = 0;
    double seno = 0;
    double raiz = 0;

    //variáveis opção 3
    int fahrenheit_2 = 0;
    double fahrenheit = 0;

    //Variáveis da opção 4
    double fatorial = 0;

    //Variáveis da opção 5
    char caracteres[11];
    double media = 0;

    //Variáveis da opção 6
    int matriz[10][10];

    //Variáveis da opção 7
    double media_par = 0;
    double media_impar = 0;
    double media_final = 0;
    double matriz_double[5][3];

    //Outras variáveis
    char opcao[4]; //Vari´svel onde fica armazenada a opção escolhida pelo usuario 
    int menu_principal = 0; //Variável usada para chamar a função menu()
    int comparacao = 0; //Variável usada para armazenar o resultado da comparação entre a entrada e o "EXIT"
    int contagem = 0; //Variável usada para chamar a função contagem_regressiva() que faz a cotagem regressiva
    int numero_convertido = 0; //Variável usada para armazenar o valor da entrada convertido de char para int
    int informacoes = 0; //Variável usada para chamar a função cabecalho()
    informacoes = cabecalho(); //Chamada da função cabecalho() 

    while(1){
        menu_principal = menu(); //Chamada da função menu()
        scanf("%s", opcao); //Entrada da opção escolhida pelo usuário
        comparacao = (strcmp(strupr(opcao), "EXIT")); //Comparação e conversão da entrada para maiúsculo
        
        if(comparacao == 0){
            contagem = contagem_regressiva(); //Se a entrada for igual a "EXIT", a funcao contagem regressiva é chamada e o codigo encerrado
            break;
        }
        //Se a entrada for diferente de "EXIT", o programa seguirá sua execução entrando no else
        else{  
            numero_convertido = atoi(opcao); //Converte a entrada de char para inteiro, para que ela possa ser usada no Switch Case

            switch (numero_convertido){ //Condição que será analisada no Switch Case
                //Caso a entrada seja == 1
                case 1:
                    printf("\n----------------------------------------------------------------------");
                    printf("\n - Informe seu primeiro nome: ");
                    scanf("%s", nome); //Recebe o primeiro nome do usuário
                    printf(" - informe seu sobrenome: ");
                    scanf("%s", sobrenome); //Recebe o sobrenome do usuário
                    printf(" - Informe seu ano de nascimento: ");
                    scanf("%d", &ano_de_nascimento); //Recebe a data de nascimento do usuário 
                    //Calcula quantos caractres tem o nome completo
                    tamanho_nome = strlen(nome) + strlen(sobrenome); 
                    printf("\n - Nome Completo: %s %s\n", nome, sobrenome); //Printa o nome completo
                    //Print da idade e da soma dos caractres do nomne com a idade  
                    printf(" - Sua idade: %d\n - Soma da sua idade com a quantidade de caracteres do seu nome: %d\n", ANO_ATUAL - ano_de_nascimento, (tamanho_nome + (ANO_ATUAL - ano_de_nascimento))); 
                    printf("----------------------------------------------------------------------\n\n");
                break;     

                //Caso a entrada seja  == 2         
                case 2:     
                    printf("\n----------------------------------------------------------------------");   
                    printf("\n - Informe o primeiro numero: ");
                    scanf("%d", &numero_1); //Recebe o primeiro número 
                    printf(" - Informe o segundo numero: ");
                    scanf("%d", &numero_2); //Recebe o segundo número

                    //Realização das operções solicidatas
                    sub_numeros = (numero_1 - numero_2);
                    quadrado_numero_2 = pow(numero_2, DOIS);
                    quadrado_numero_1 = pow(numero_1, DOIS);
                    modulo_numeros = abs(numero_1);
                    raiz = sqrt(quadrado_numero_1 + quadrado_numero_2);
                    seno = sin(sub_numeros);

                    //Print dos resultados das operações 
                    printf("\n - Soma dos numeros: %d\n", (numero_1 + numero_2));
                    printf(" - Primeiro numero pelo quadrado do segundo: %d\n", (numero_1 * quadrado_numero_2));                
                    printf(" - O quadrado do primeiro numero: %d\n", quadrado_numero_1);
                    printf(" - A raiz quadrada da soma dos quadrados: %2.2lf\n", raiz);
                    printf(" - O seno da diferenca do primeiro numero pelo segundo: %2.2lf\n", seno);
                    printf(" - O modulo do primeiro numero: %d\n", modulo_numeros);
                    printf("----------------------------------------------------------------------\n\n");                    
                break;

                //Caso a entrada seja == 3
                case 3:
                    printf("\n----------------------------------------------------------------------");
                    printf("\n - Informe a temperatura em Fahrenheit: ");
                    scanf("%lf", &fahrenheit); //Recebe a temperatura em fahrenheit
                    //Converte e printa a temperatura em Celsius no formato double
                    printf("\n - Temperatura em celcius (double): %2.2lf\n", (fahrenheit - 32.0) * (5.0 / 9.0));

                    //Realiza a conversão de double para int
                    fahrenheit_2 = (int)fahrenheit;
                    fahrenheit_2 = (fahrenheit_2 - 32.0) * (5.0 / 9.0);
                    
                    //Printa a temperatura em Celsius no formato int
                    printf(" - Temperatura em celcius (int): %d\n", fahrenheit_2);
                    printf("----------------------------------------------------------------------\n\n");
                break;

                //Caso a entrada seja 4
                case 4:
                    printf("\n----------------------------------------------------------------------");
                    printf("\n - Informe o numero: ");
                    scanf("%d", &numero_1); //Recebe o numero do usuário
                    
                    //realização do cálculo do fatorial do número informado
                    for(fatorial = 1; numero_1 > 1; numero_1 = numero_1 - 1){
                        fatorial = fatorial * numero_1;
                    }

                    //Print do fatorial
                    printf("\n - fatorial: %2.2lf\n", fatorial);
                    printf("----------------------------------------------------------------------\n\n");                                
                break;

                //Caso a entrada seja == 5
                case 5:
                    printf("\n----------------------------------------------------------------------\n");
                    
                    //Recebe os caracteres numéricos, converte para int e soma na variável media;   
                    for (int i = 0; i < 10; i++){
                        printf(" - informe um caracter numerico: ");
                        scanf("%s", &caracteres[i]); //Recebe os caracteres e guarda no array
                        media += caracteres[i] - '0'; //Converte os caracteres para inteiro e soma a variável media 
                    }  
                    
                    //Print do array de char
                    for(int i= 0; i < 10; i++){
                        if(i == 0){
                            printf("\n - Array: ['%c', ", caracteres[i]);
                        }
                        else if(i > 0 && i < 9){
                            printf("'%c', ", caracteres[i]);
                        }
                        else{
                            printf("'%c']\n", caracteres[i]);
                        }
                    }     
                    printf("\n - Media: %2.2lf\n", (media / DEZ)); //Print da média
                    printf("----------------------------------------------------------------------\n\n");              
                break;

                //Caso a entrada seja == 6
                case 6:    
                    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n");
                    
                    //Preenche a matriz com os valores da tabuada
                    printf("Tabuada de subtracao: \n");
                    for (int i = 1; i <= 10; i++){
                        for(int j = 1; j <= 10; j++){
                            matriz[i][j] = i - j;
                        }
                    }

                    //Print da tabuada sem a de 5
                    for (int i = 1; i <= 10; i++){
                        printf("\n");
                        for (int j = 1; j <= 10; j++){
                            if(j != 5){
                               printf("%d - %d = %d\t", i, j, matriz[i][j]); 
                            }          
                        }
                    }
                  printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n\n");    
                break;                   

                //Caso a entrada seja == 7
                case 7: 
                    printf("\n----------------------------------------------------------------------\n");
                    
                    //Recebe os elemntos da matriz 
                    printf ("\nInforme os elementos da matriz: \n\n");
                    for (int i = 0; i < 5; i++){
                        for (int j = 0; j < 3; j++){
                            printf ("Elemento[%d][%d] = ", i, j);
                            scanf ("%lf", &matriz_double[i][j]); //Guarda na matriz os valores inseridos pelo usuário
                        }
                    }
                    
                    //Print da matriz 5x3
                    printf("\nMatriz 5x3: ");                    
                    for (int i = 0; i < 5; i++){
                        printf("\n");
                        for (int j = 0; j < 3; j++){
                            printf("%2.1lf  ",  matriz_double[i][j]); 
                        }          
                    }

                    //Calcula as médias solicitadas na atividade
                    for (int i = 0; i < 5; i++){
                        for (int j = 0; j < 3; j++){
                            if (i % 2 != 0){
                                media_impar += matriz_double[i][j]; //Soma a variável media_impar os valores das linhas impares
                            }
                            else if (j % 2 == 0){
                                media_par += matriz_double[i][j]; //Soma a variável media_par os valores das colunas pares
                            }
                        }
                    }

                    //Print da média da diferença entre os elementos das linhas impares e colunas pares
                    media_final = ((media_par / CINCO) - (media_impar / SEIS));
                    printf("\n\nDiferenca entre a media dos elementos das colunas pares e a media dos elementos das linhas impares: %2.2lf", media_final);
                    printf("\n----------------------------------------------------------------------------------------------------------------\n\n");      
                break;

                default:       
                    printf("\n======================================================================\n");
                    printf("|           Opcao Invalida, Digite uma das opcoes do menu!           |\n");
                    printf("======================================================================\n\n");
                break;
            }
        }
    }   
    return 0;
}

