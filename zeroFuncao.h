#include <math.h>

// Prototipo

void funcao1 (float x);
void funcao2 (float x);
void funcao3 (float x);

// Função

void funcao1 (float x){

    float xn=0, erro=0;
    int i;
    float fx=0, fdx=0 ,aux=0, teste =0; // [fx funcao] , [fdx derivada da funcao].
    double e = pow(10,-6), h = pow(10,-8);

        for(i=0;i<51;i++){
            fx = (pow(x, 2)-2);// calculo de funcao
            fdx =((pow((x + h),2) - 2)  - (pow(x,2)-2)) / h; // derivada da funcao.
            xn = x - (fx / fdx);
            aux = (xn - x);
                if (aux<0){
                aux = aux *(-1);
                } // caso o resultado seja negativo, transforma em positivo.
                if (xn<0){
                    xn = xn * (-1);
                }
            erro = aux / xn;
            printf("\n Com X%d %.12f", i, xn);
            printf("\n Erro %d %.12f\n", i, erro);
                if(erro < e)break;
                x = xn;
        }
}

void funcao2 (float x){

    float xn=0, erro=0;
    int i;
    float fx=0, fdx=0 ,aux=0, teste =0; // [fx funcao] , [fdx derivada da funcao].
    double e = pow(10,-6), h = pow(10,-8);

        for(i=0;i<51;i++){
        fx = ((2 * x) - cos(x));// calculo de funcao
        //printf("\n fx %.12f\n", fx); //teste
        fdx = ((((-cos(x + h)) + ( 2 *(x + h))) - (-cos(x) + (2 * x))) / h); // derivada da funcao.
        //printf("\n fdx%.12f\n", fdx);//teste
        xn = x - (fx / fdx);
        //printf("\n Xn %.6f", xn);teste
        aux = (xn - x);
            if (aux<0){
            aux = aux *(-1);
            } // caso o resultado seja negativo, transforma em positivo.
            if (xn<0){
                xn = xn * (-1);
            }
        erro = aux / xn;
        printf("\n Com X%d %.12f", i, xn);
        printf("\n Erro %d %.12f\n", i, erro);
            if(erro < e)break;
            x = xn;
        }

}

void funcao3 (float x){

    float xn=0, erro=0;
    int i;
    float fx=0, fdx=0 ,aux=0, teste =0; // [fx funcao] , [fdx derivada da funcao].
    double e = pow(10,-6), h = pow(10,-8);

        for(i=0;i<51;i++){
        fx = (x * log(x)) - 1;// calculo de funcao
        fdx = (((x + h) * (log(x + h)- 1)) / h); // derivada da funcao.
        xn = x - (fx / fdx);
        aux = (xn - x);
            if (aux<0){
            aux = aux *(-1);
            } // caso o resultado seja negativo, transforma em positivo.
            if (xn<0){
                xn = xn * (-1);
            }
        erro = aux / xn;
        printf("\n Com Xn %d %.12lf", i, xn);
        printf("\n Erro %d %.12lf\n", i, erro);
            if(erro < e)break;
            x = xn;
        }
}

