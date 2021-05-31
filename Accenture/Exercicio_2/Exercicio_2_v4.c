/*  Autor: Almir de Oliveira Pereira
*   E-mail: almiroliveira04@gmail.com
*   Versão 4.0, desenvolvido em 26/05/2021
*   Academia Accenture - Oracle BRM
                                              */

#include "uteis.h"

int main(int argc, char *argv[]){
    setlocale(LC_ALL, " ");
    const char valida[] = "-valida";
    const char palavra_chave[] = "password";

    if (argc > 1){
        if (strcmp(argv[1], valida) == 0){
            if (strcmp(argv[2], palavra_chave) == 0){
                printf("\n\t\t\t** Palavra chave validada! **\n");
            } 
            else {
                printf("\n\t\t\t** Palavra chave invalida! **\n");
                exit(1);
            }
        }
    }

    //Outras variáveis
    char opcao[4]; //Variável onde fica armazenada a opção escolhida pelo usuario 
    int menu_principal = 0; //Variável usada para chamar a função menu()
    int comparacao = 0; //Variável usada para armazenar o resultado da comparação entre a entrada e o "EXIT"
    int contagem = 0; //Variável usada para chamar a função contagem_regressiva() que faz a cotagem regressiva
    int numero_convertido = 0; //Variável usada para armazenar o valor da entrada convertido de char para int
    int informacoes = 0; //Variável usada para chamar a função cabecalho()
    int chama_opcao = 0; //Variável que será usada na chamada das opções
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
                    chama_opcao = opcao_01();
                break;     

                //Caso a entrada seja  == 2         
                case 2:     
                    chama_opcao = opcao_02();                
                break;

                //Caso a entrada seja == 3
                case 3:
                    chama_opcao = opcao_03();
                break;

                //Caso a entrada seja 4
                case 4:
                    chama_opcao = opcao_04();                              
                break;

                //Caso a entrada seja == 5
                case 5:
                    chama_opcao = opcao_05();               
                break;

                //Caso a entrada seja == 6
                case 6:    
                    chama_opcao = opcao_06();     
                break;                   

                //Caso a entrada seja == 7
                case 7: 
                    chama_opcao = opcao_07();  
                break;

                //Se a entrada não for uma das opções do menu, o usuário recebe um aviso e as opções são mostradas novamente
                default:       
                    chama_opcao = fim();
                break;                    
            }
        }
    }   
    return 0;
}

