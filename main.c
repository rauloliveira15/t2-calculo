#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funcoes.h"
#include "derivadas.h"
#include "zeroFuncao.h"

int menu;
int programa;
int op;
int aux;
int aux2;
int aux3;
char strop[10];

char d[10];
char d2[10];

char inte[10];
char inte2[10];
char inte3[10];


int main()
{
    menu = 0;
    programa = 1;
    op;
    double d_x, d_n, d_resultado;
    double a, b;
    int k;
    float x;

    // menu
    while (programa != 0){
        while (menu == 0){
            menuPrincipal();
        } // while menu 0
        while (menu == 1){

            menuD();

            switch (op){
                case 1:
                    system("cls");
                        printf("-- K --");
                        printf("\nDerivada de Constante eh igual a 0 (ZERO)  \n\n");

                        system("pause");
                    break;
                case 2:
                    system("cls");
                        printf("--X ^ K--\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        printf("\nDigite o valor de K: ");
                        gets(d2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            d_x =  atof(d);

                            d_n = atof(d2);

                            d_resultado = derivada1(d_x, d_n);

                            printf("\n\nA derivada numerica de X^K eh igual a: %.9f \n\n",d_resultado);
                            system("pause");

                        }
                    d_resultado = 0;
                    break;
                case 3:
                system("cls");
                        printf("--K ^ X--\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        printf("\nDigite o valor de K: ");
                        gets(d2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            d_x =  atof(d);

                            d_n = atof(d2);

                            d_resultado = derivada2(d_x, d_n);

                            printf("\n\nA derivada numerica de K^X eh igual a: %.9f \n\n",d_resultado);
                            system("pause");

                        }

                    d_resultado = 0;
                    break;
                case 4:
                    system("cls");

                    //e^x
                    printf("--e ^ X--\n\n");


                    printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                             d_resultado = derivada3(d_x);

                            printf("\n\nA derivada numerica de e^x eh igual a: %.9f\n\n ",d_resultado);
                        }



                    system("pause");
                    d_resultado = 0;
                    break;
                case 5:
                    system("cls");
                        printf("-- log(k)(x) --\n\n");

                       printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                             d_resultado = derivada4(d_x);

                            printf("\n\nA derivada numerica de log(k)(x) eh igual a: %.9f\n\n ",d_resultado);
                            system("pause");
                        }
                    d_resultado = 0;
                    break;
                case 6:
                    system("cls");
                        printf("-- ln(x) --\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                             d_resultado = derivada5(d_x);

                            printf("\n\nA derivada numerica de ln(x) eh igual a: %.9f\n\n ",d_resultado);
                            system("pause");
                        }
                    d_resultado = 0;
                    break;
                case 7:
                    system("cls");
                        printf("-- sen(x) --\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                             d_resultado = derivada6(d_x);

                            printf("\n\nA derivada numerica de sen(x) eh igual a: %.9f\n\n ",d_resultado);
                            system("pause");
                        }
                    d_resultado = 0;
                    break;
                case 8:
                    system("cls");
                        printf("-- cos(x) --\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                             d_resultado = derivada7(d_x);

                            printf("\n\nA derivada numerica de cos(x) eh igual a: %.9f\n\n ",d_resultado);
                            system("pause");
                        }
                    d_resultado = 0;
                    break;
                case 9:
                    system("cls");
                        printf("-- tg(x) --\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                             d_resultado = derivada8(d_x);

                            printf("\n\nA derivada numerica de tg(x) eh igual a: %.9f\n\n ",d_resultado);
                            system("pause");
                        }
                    d_resultado = 0;
                    break;
                case 10:
                system("cls");
                        printf("-- raiz 2 (x) --\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                            if(d_x <= 0){
                                printf("Valor Invalido para uma Raiz ! ! ! !\n");
                                system("pause");
                            }else{

                            d_resultado = derivada9(d_x);

                            printf("\n\nA derivada numerica de raiz(2)(x) eh igual a: %.9f \n\n",d_resultado);
                            system("pause");
                            }
                        }
                        break;
                case 11:
                system("cls");
                        printf("-- 1/x --\n\n");

                        printf("Digite o valor de X: ");
                        gets(d);

                        aux = validaEntrada(d);

                        if(aux == -1){

                            printf("\n\nDigite aqui apenas Números (0 a 9)");

                        }else if(aux == 1){

                            d_x =  atof(d);

                            if(d_x == 0){
                                printf("Valor Invalido para uma Divisão ! ! ! !\n");
                                system("pause");
                            }else{

                            d_resultado = derivada10(d_x);

                            printf("\n\nA derivada numerica de 1/x eh igual a: %.9f \n\n",d_resultado);
                            system("pause");
                            }
                        }
                        break;
                case 12:
                    menu = 0;
                    break;
                default:
                    printf("\nDigite uma opcao valida\n\n");
                    system("pause");
            } // switch
        } // while menu 1
        while (menu == 2){

            menuInt();

            switch (op){
                case 1:
                    system("cls");
                    printf("\tf(x) = k\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    gets(inte);
                    aux=validaEntrada(inte);

                    printf("Informe o valor de B: ");
                    gets(inte2);
                    aux2=validaEntrada(inte2);

                    printf("Informe o valor de K: ");
                    gets(inte3);
                    aux3=validaEntrada(inte3);

                    if((aux == -1)||(aux2 == -1)||(aux3 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)&&(aux3 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);

                            k = atof(inte3);



                            printf("\n\nIntegral = %.4f\n\n", integral1(a,b,k));
                            system("pause");

                        }

                    break;
                case 2:
                    system("cls");
                    printf("\tf(x) = x^k\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    gets(inte);
                    aux=validaEntrada(inte);

                    printf("Informe o valor de B: ");
                    gets(inte2);
                    aux2=validaEntrada(inte2);

                    printf("Informe o valor de K: ");
                    gets(inte3);
                    aux3=validaEntrada(inte3);

                    if((aux == -1)||(aux2 == -1)||(aux3 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)&&(aux3 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);

                            k = atof(inte3);



                            printf("\n\nIntegral = %.4f\n\n", integral2(a,b,k));
                            system("pause");

                        }

                    break;
                case 3:
                    system("cls");
                    printf("\tf(x) = k^x\n\n");
                                        // Entrada dos valores
                    printf("Informe o valor de A: ");
                    gets(inte);
                    aux=validaEntrada(inte);

                    printf("Informe o valor de B: ");
                    gets(inte2);
                    aux2=validaEntrada(inte2);

                    printf("Informe o valor de K: ");
                    gets(inte3);
                    aux3=validaEntrada(inte3);

                    if((aux == -1)||(aux2 == -1)||(aux3 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)&&(aux3 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);

                            k = atof(inte3);



                            printf("\n\nIntegral = %.4f\n\n", integral3(a,b,k));
                            system("pause");

                        }

                    break;
                case 4:
                    system("cls");
                    printf("\tf(x) = e^x\n\n");
                    // Entrada dos valores

                    printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);



                            printf("\n\nIntegral = %.4f\n\n", integral4(a,b));
                            system("pause");

                        }
                    break;
                case 5:
                    system("cls");
                    printf("\tf(x) = log(k)(x)\n\n");
                    // Entrada dos valores
                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        printf("Informe o valor de K: ");
                        gets(inte3);
                        aux3=validaEntrada(inte3);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)&&(aux3 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);

                            k = atof(inte3);



                            printf("\n\nIntegral = %.4f\n\n", integral5(a,b,k));
                            system("pause");

                        }

                    break;
                case 6:
                    system("cls");
                    printf("\tf(x) = ln(x)\n\n");
                    // Entrada dos valores
                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);



                            printf("\n\nIntegral = %.4f\n\n", integral6(a,b));
                            system("pause");

                        }
                    break;
                case 7:
                    system("cls");
                    printf("\tf(x) = sen(x)\n\n");
                    // Entrada dos valores
                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);



                            printf("\n\nIntegral = %.4f\n\n", integral7(a,b));
                            system("pause");

                        }
                    break;
                case 8:
                    system("cls");
                    printf("\tf(x) = cos(x)\n\n");
                    // Entrada dos valores

                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);



                            printf("\n\nIntegral = %.4f\n\n", integral8(a,b));
                            system("pause");

                        }
                    break;
                case 9:
                    system("cls");
                    printf("\tf(x) = tg(x)\n\n");
                    // Entrada dos valores
                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);



                            printf("\n\nIntegral = %.4f\n\n", integral9(a,b));
                            system("pause");

                        }
                    break;
                case 10:
                    system("cls");
                    printf("\tf(x) = raiz x(x)\n\n");
                    // Entrada dos valores
                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);



                            printf("\n\nIntegral = %.4f\n\n", integral10(a,b));
                            system("pause");

                        }
                    break;
                case 11:
                    system("cls");
                    printf("\tf(x) = 1/x\n\n");
                    // Entrada dos valores
                        printf("Digite o valor de A: ");
                        gets(inte);

                        aux = validaEntrada(inte);

                        printf("\nDigite o valor de B: ");
                        gets(inte2);

                        aux2 = validaEntrada(d2);

                        if((aux == -1)||(aux2 == -1)){

                            printf("Digite aqui apenas Números (0 a 9)");
                            system("pause");

                        }else if((aux == 1)&&(aux2 == 1)){

                            a =  atof(inte);

                            b = atof(inte2);

                            printf("\n\nIntegral = %.4f\n\n", integral11(a,b));
                            system("pause");

                        }
                    break;
                case 12:
                    menu = 0;
                    break;
                default:
                    printf("\nDigite uma opcao valida\n\n");
                    system("pause");
            } // switch
        } // while menu 2
        while (menu == 3){

            menuZero();

            switch (op){
                case 1:
                    system("cls");
                    printf("\tf(x) = x^2 - 2\n\n");
                    printf("\nDigite o valor de Xo: ");
                    scanf("%f",&x);
                    funcao1(x);
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\tf(x) = 2x - cos(x)\n\n");
                    printf("\nDigite o valor de Xo: ");
                    scanf("%f",&x);
                    funcao2(x);
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    printf("\tf(x) = x*ln(x) - 1\n\n");
                    printf("\nDigite o valor de Xo: ");
                    scanf("%f",&x);
                    funcao3(x);
                    system("pause");
                    break;
                case 4:
                    menu = 0;
                    break;
                default:
                    printf("\nDigite uma opcao valida\n\n");
                    system("pause");
            } // switch
        } // while menu 3

        if (menu == 4) programa = 0; // fim do programa
        if ((menu > 4) || (menu < 0)) menu = 0; // valida��o de entrada menu principal
    } // while do programa
    return 0;
}


//Funções de Menu
void menuPrincipal(){
        system("cls");
            printf("--Calculadora--\n\n");
            printf("\t(1) - Derivada\n");
            printf("\t(2) - Integral\n");
            printf("\t(3) - Zero da Funcao\n\n");
            printf("\t(4) - Sair\n\n");
            printf("Digite a opcao: ");

            gets(strop);

            int aux = 0;

            aux = validaEntrada(strop);

            if(aux == -1){

                menu = 100;

                printf("Digite uma opcao valida ! ! !\n");

                system("pause");

            }else if(aux == 1){
                printf("Entrei aqui !");

                int auxmenu;
                auxmenu= atoi(strop);

                if(auxmenu == 1){
                        menu = auxmenu;
                }else if(auxmenu == 2){
                        menu = auxmenu;
                }else if(auxmenu == 3){
                        menu = auxmenu;
                }else if(auxmenu == 4){
                        menu = auxmenu;
                }else{
                    printf("Digite uma opcao valida ! ! !\n");

                    system("pause");
                }

            }


}

void menuZero(){


            system("cls");
            printf("\t--ZERO DA FUNCAO--\n\n");
            printf("\t(1) - f(x) = x^2 - 2\n");
            printf("\t(2) - f(x) = 2x - cos(x)\n");
            printf("\t(3) - f(x) = x*ln(x) - 1\n\n");
            printf("\t(4) - Voltar\n\n");
            printf("Digite a opcao: ");

            gets(strop);

            int aux = 0;

            aux = validaEntrada(strop);

            if(aux == -1){

                op = 100;

            }else if(aux == 1){

                op= atoi(strop);

            }


}

void menuD(){
    system("cls");
            printf("\t--DERIVADA--\n\n");
            printf("\t(1) - f(x) = k\n");
            printf("\t(2) - f(x) = x^k\n");
            printf("\t(3) - f(x) = k^x\n");
            printf("\t(4) - f(x) = e^x\n");
            printf("\t(5) - f(x) = log(x)\n");
            printf("\t(6) - f(x) = ln(x)\n");
            printf("\t(7) - f(x) = sen(x)\n");
            printf("\t(8) - f(x) = cos(x)\n");
            printf("\t(9) - f(x) = tg(x)\n");
            printf("\t(10) - f(x) = raiz x(x)\n");
            printf("\t(11) - f(x) = 1/x\n\n");
            printf("\t(12) - Voltar\n\n");
            printf("Digite a opcao: ");

            gets(strop);

            int aux = 0;

            aux = validaEntrada(strop);

            if(aux == -1){

                op = 100;

            }else if(aux == 1){

                op= atoi(strop);

            }


}

void menuInt(){
    system("cls");
            printf("\t--INTEGRAL--\n\n");
            printf("\t(1) - f(x) = k\n");
            printf("\t(2) - f(x) = x^k\n");
            printf("\t(3) - f(x) = k^x\n");
            printf("\t(4) - f(x) = e^x\n");
            printf("\t(5) - f(x) = log(k)(x)\n");
            printf("\t(6) - f(x) = ln(x)\n");
            printf("\t(7) - f(x) = sen(x)\n");
            printf("\t(8) - f(x) = cos(x)\n");
            printf("\t(9) - f(x) = tg(x)\n");
            printf("\t(10) - f(x) = raiz x(x)\n");
            printf("\t(11) - f(x) = 1/x\n\n");
            printf("\t(12) - Voltar\n\n");
            printf("Digite a opcao: ");

            gets(strop);

            int aux = 0;

            aux = validaEntrada(strop);

            if(aux == -1){

                op = 100;

            }else if(aux == 1){

                op= atoi(strop);

            }



}


int validaEntrada(char str[]){
        int i=0;


            //percorre procurando um alphanumerico
            while (str[i])
            {
                if (isalpha(str[i])){
                    if(str[i]!='.'){
                        return -1;
                    }
                }

                i++;
            }

        return 1;
}


