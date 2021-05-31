#ifndef uteis_h
#define uteis_h

#include <time.h>                                       
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <locale.h>

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
int cabecalho();

//Função fim, exibe uma mensagem dizendo que não a opção escolhida pelo usuário não é válida
int fim();

//Função Menu, responsável por exibir para o usuário as opções solicitadas na atividade 
int menu();

//Função contagem_regressiva, responsável por contar de 10 a 0 e encerrar o programa
int contagem_regressiva();

//Função opcão_01(), reponsável pelas operações solicitadas na opcao 1 da atividade
int opcao_01();

//Funções auxiliares para opção 2 
//Função soma_dois_numeros, soma dois valores inteiros
int soma_dois_numeros(int *numero_1, int *numero_2);

//Função primeiro_quadrado, calcula o primeiro número pelo quadrado do segundo
int primeiro_quadrado(int *numero_1, int *numero_2);

//Função quadrado_numero, calcula o quadrado de um número
int quadrado_numero(int *numero_1);

//Função raiz_quadrados, calcula a raiz quadrada da soma dos quadrados
double raiz_quadrados(int *numero_1, int *numero_2);

//Função seno_numero, calcula o seno de um número
double seno_numero(int *numero_1, int *numero_2);

//Função modulo_numero, calcula o modulo de um número
int modulo_numero(int *numero_1);

//Função opcão_02(), reponsável pelas operações solicitadas na opcao 2 da atividade
int opcao_02();

//Funbção para conversão de fahrenheit em Celcius
double converte_fahrenheit_em_celsius(double *fahrenheit);

//Função opcão_03(), reponsável pelas operações solicitadas na opcao 3 da atividade
int opcao_03();

//Função auxiliar para op 4
double calcula_fatorial(double *fatorial, int *numero);

//Função opcão_04(), reponsável pelas operações solicitadas na opcao 4 da atividade
int opcao_04();

//Função opcão_05(), reponsável pelas operações solicitadas na opcao 5 da atividade
int opcao_05();

//Função opcão_06(), reponsável pelas operações solicitadas na opcao 6 da atividade
int opcao_06();

//Funçao opcão_07(), reponsável pelas operações solicitadas na opcao 7 da atividade
int opcao_07();

#endif