#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    int menu = 0, programa = 1, op;
    double a, b;
    int k;
    // menu
    while (programa != 0){
        while (menu == 0){
            system("cls");
            printf("--Calculadora--\n\n");
            printf("\t(1) - Derivada\n");
            printf("\t(2) - Integral\n");
            printf("\t(3) - Zero da Funcao\n\n");
            printf("\t(4) - Sair\n\n");
            printf("Digite a opcao: ");
            scanf("%d", &menu);
        } // while menu 0
        while (menu == 1){
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
            scanf("%d", &op);

            switch (op){
                case 1:
                    system("cls");

                    system("pause");
                    break;
                case 2:
                    system("cls");

                    system("pause");
                    break;
                case 3:
                    system("cls");

                    system("pause");
                    break;
                case 4:
                    system("cls");

                    system("pause");
                    break;
                case 5:
                    system("cls");

                    system("pause");
                    break;
                case 6:
                    system("cls");

                    system("pause");
                    break;
                case 7:
                    system("cls");

                    system("pause");
                    break;
                case 8:
                    system("cls");

                    system("pause");
                    break;
                case 9:
                    system("cls");

                    system("pause");
                    break;
                case 10:
                    system("cls");

                    system("pause");
                    break;
                case 11:
                    system("cls");

                    system("pause");
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
            scanf("%d", &op);

            switch (op){
                case 1:
                    system("cls");
                    printf("\tf(x) = k\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("Informe o valor de K: ");
                    scanf("%d", &k);
                    printf("\n\nIntegral = %.4f\n\n", integral1(a,b,k));
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\tf(x) = x^k\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("Informe o valor de K: ");
                    scanf("%d", &k);
                    printf("\n\nIntegral = %.4f\n\n", integral2(a,b,k));
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    printf("\tf(x) = k^x\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("Informe o valor de K: ");
                    scanf("%d", &k);
                    printf("\n\nIntegral = %.4f\n\n", integral3(a,b,k));
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    printf("\tf(x) = e^x\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral4(a,b));
                    system("pause");
                    break;
                case 5:
                    system("cls");
                    printf("\tf(x) = log(k)(x)\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral5(a,b));
                    system("pause");
                    break;
                case 6:
                    system("cls");
                    printf("\tf(x) = ln(x)\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral6(a,b));
                    system("pause");
                    break;
                case 7:
                    system("cls");
                    printf("\tf(x) = sen(x)\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral7(a,b));
                    system("pause");
                    break;
                case 8:
                    system("cls");
                    printf("\tf(x) = cos(x)\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral8(a,b));
                    system("pause");
                    break;
                case 9:
                    system("cls");
                    printf("\tf(x) = tg(x)\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral9(a,b));
                    system("pause");
                    break;
                case 10:
                    system("cls");
                    printf("\tf(x) = raiz x(x)\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral10(a,b));
                    system("pause");
                    break;
                case 11:
                    system("cls");
                    printf("\tf(x) = 1/x\n\n");
                    // Entrada dos valores
                    printf("Informe o valor de A: ");
                    scanf("%lf", &a);
                    printf("Informe o valor de B: ");
                    scanf("%lf", &b);
                    printf("\n\nIntegral = %.4f\n\n", integral11(a,b));
                    system("pause");
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
            system("cls");
            printf("\t--ZERO DA FUNCAO--\n\n");
            printf("\t(1) - f(x) = x^2 - 2\n");
            printf("\t(2) - f(x) = 2x - cos(x)\n");
            printf("\t(3) - f(x) = x*ln(x) - 1\n\n");
            printf("\t(4) - Voltar\n\n");
            printf("Digite a opcao: ");
            scanf("%d", &op);

            switch (op){
                case 1:
                    system("cls");

                    system("pause");
                    break;
                case 2:
                    system("cls");

                    system("pause");
                    break;
                case 3:
                    system("cls");

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
        if ((menu > 4) || (menu < 0)) menu = 0; // validação de entrada menu principal
    } // while do programa
    return 0;
}
