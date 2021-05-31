
#include "uteis.h"

//Função Cabeçalho, responsável por exibir as informações solicitadas na atividade
int cabecalho(){
    time_t data; //Criação da variável data
    data = time(NULL);
    struct tm tm = *localtime(&data); //Obtenção da data do atual do sistema 
    printf("\t\t=========================================\n");
    printf("\t\t|              BEM VINDO!               |\n");
    printf("\t\t| Nome: Almir de Oliveira Pereira       |\n");
    printf("\t\t| E-mail: almiroliveira04@gmail.com     |\n");
    printf("\t\t| Versao 4.0, feito em 26/05/2021       |\n");
    printf("\t\t| Data atual: %d/%d/%d                 |\n",tm.tm_mday, tm.tm_mon + UM, tm.tm_year + MIL_E_NOVECENTOS); //Exibição da data atual
    printf("\t\t| Descricao: Atividade 2 - Academia BRM |\n");
    printf("\t\t=========================================\n\n");
    return 0;
}

//Função fim, exibe uma mensagem dizendo que não a opção escolhida pelo usuário não é válida
int fim(){
    printf("\n======================================================================\n");
    printf("|           Opcao Invalida, Digite uma das opcoes do menu!           |\n");
    printf("======================================================================\n\n");
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

//Função opcão_01(), reponsável pelas operações solicitadas na opcao 1 da atividade
int opcao_01(){
    //Variáveis da opção 1
    char nome[15];
    char sobrenome[20];
    int ano_de_nascimento = 0;
    int tamanho_nome = 0;

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
    return 0;
}

//Funções auxiliares para opção 2 
//Função soma_dois_numeros, soma dois valores inteiros
int soma_dois_numeros(int *numero_1, int *numero_2){
    return *numero_1 + *numero_2;
}

//Função primeiro_quadrado, calcula o primeiro número pelo quadrado do segundo
int primeiro_quadrado(int *numero_1, int *numero_2){
    return (*numero_1 * (pow(*numero_2, DOIS)));
}

//Função quadrado_numero, calcula o quadrado de um número
int quadrado_numero(int *numero_1){
    return pow(*numero_1, 2);
}

//Função raiz_quadrados, calcula a raiz quadrada da soma dos quadrados
double raiz_quadrados(int *numero_1, int *numero_2){
    return sqrt(pow(*numero_1, 2) * (*numero_2, 2));
}

//Função seno_numero, calcula o seno de um número
double seno_numero(int *numero_1, int *numero_2){
    return sin((*numero_1 - *numero_2));
}

//Função modulo_numero, calcula o modulo de um número
int modulo_numero(int *numero_1){
    return abs(*numero_1);
}

//Função opcão_02(), reponsável pelas operações solicitadas na opcao 2 da atividade
int opcao_02(){
    //Variáveis da opção 2
    int numero_1 = 0;
    int numero_2 = 0;;

    printf("\n----------------------------------------------------------------------");   
    printf("\n - Informe o primeiro numero: ");
    scanf("%d", &numero_1); //Recebe o primeiro número 
    printf(" - Informe o segundo numero: ");
    scanf("%d", &numero_2); //Recebe o segundo número

    //Print dos resultados das operações 
    printf("\n - Soma dos numeros: %d\n", soma_dois_numeros(&numero_1, &numero_2));
    printf(" - Primeiro numero pelo quadrado do segundo: %d\n", primeiro_quadrado(&numero_1, &numero_2));                
    printf(" - O quadrado do primeiro numero: %d\n", quadrado_numero(&numero_1));
    printf(" - A raiz quadrada da soma dos quadrados: %2.2lf\n", raiz_quadrados(&numero_1, &numero_2));
    printf(" - O seno da diferenca do primeiro numero pelo segundo: %2.2lf\n", seno_numero(&numero_1, &numero_2));
    printf(" - O modulo do primeiro numero: %d\n", modulo_numero(&numero_1));
    printf("----------------------------------------------------------------------\n\n"); 
    return 0;
}

//Funbção para conversão de fahrenheit em Celcius
double converte_fahrenheit_em_celsius(double *fahrenheit){
    return (*fahrenheit - 32.0) * (5.0 / 9.0);
}

//Função opcão_03(), reponsável pelas operações solicitadas na opcao 3 da atividade
int opcao_03(){
    //variáveis opção 3
    double fahrenheit = 0;

    printf("\n----------------------------------------------------------------------");
    printf("\n - Informe a temperatura em Fahrenheit: ");
    scanf("%lf", &fahrenheit); //Recebe a temperatura em fahrenheit
    //Printa a temperatura em Celsius no formato double e int
    printf("\n - Temperatura em celcius (double): %2.2lf\n", converte_fahrenheit_em_celsius(&fahrenheit));
    printf(" - Temperatura em celcius (int): %d\n", (int)converte_fahrenheit_em_celsius(&fahrenheit));
    printf("----------------------------------------------------------------------\n\n");
    return 0;
}

//Função auxiliar para op 4
double calcula_fatorial(double *fatorial, int *numero){
    for(*fatorial = 1; *numero > 1; *numero = *numero - 1){
        *fatorial = *fatorial * *numero;
    }
    return *fatorial;

}

//Função opcão_04(), reponsável pelas operações solicitadas na opcao 4 da atividade
int opcao_04(){
    //Variáveis da opção 4
    double fatorial = 0;
    int numero = 0;

    printf("\n----------------------------------------------------------------------");
    printf("\n - Informe o numero: ");
    scanf("%d", &numero); //Recebe o numero do usuário 

    //Print do fatorial
    printf("\n - fatorial: %2.2lf\n", calcula_fatorial(&fatorial, &numero));
    printf("----------------------------------------------------------------------\n\n");
    return 0;

}

//Função opcão_05(), reponsável pelas operações solicitadas na opcao 5 da atividade
int opcao_05(){
    //Variáveis da opção 5
    char caracteres[11];
    double media = 0;

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

    return 0;
}

//Função opcão_06(), reponsável pelas operações solicitadas na opcao 6 da atividade
int opcao_06(){
    //Variáveis da opção 6
    int matriz[11][11];
    FILE *farq;

    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n");
                    
    //Preenche a matriz com os valores da tabuada
    printf("Tabuada de subtracao: \n");
    for (int i = 0; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            matriz[i][j] = i - j;
        }
    }

    farq = fopen("tabuada.txt", "a");

    //Print da tabuada sem a de 5
    for (int i = 0; i <= 10; i++){
        printf("\n");
        fprintf(farq, "\n");
        for (int j = 1; j <= 10; j++){
            if(j != 5){
                printf("%d - %d = %d\t", i, j, matriz[i][j]); 
                fprintf(farq, "%d - %d = %d\t\t", i, j, matriz[i][j]);
                
            }          
        }
    }
    fclose(farq);
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------\n\n");
    return 0;
}

//Funçao opcão_07(), reponsável pelas operações solicitadas na opcao 7 da atividade
int opcao_07(){
    //Variáveis da opção 7
    double media_par = 0;
    double media_impar = 0;
    double media_final = 0;
    double matriz_double[5][3];

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
}
