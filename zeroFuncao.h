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
        erro = (xn - x) / xn;
        printf("\n Com X%d %.12f", i, xn);
            if (erro<0){
                erro = erro * (-1);
            }
        printf("\n Erro %d %.12lf\n", i, erro);
            x = xn;
            if(erro < e)break;
        }
}

void funcao2 (float x){

    float xn=0, erro=0;
    int i;
    float fx=0, fdx=0 ,aux=0, teste =0; // [fx funcao] , [fdx derivada da funcao].
    double e = pow(10,-6), h = pow(10,-8);


        for(i=0;i<51;i++){
        fx = ((2 * x) - cos(x));// calculo de funcao
        fdx = (((((2*(x + h)) - cos(x + h))) - (2*x - (cos(x)))) / h); // derivada da funcao.
        xn = x - (fx / fdx);
         // caso o resultado seja negativo, transforma em positivo.
        erro = aux / xn;
        printf("\n Com X%d %.12f", i, xn);
           erro = (xn - x) / xn;
            if (erro<0){
                erro = erro * (-1);
            }
        printf("\n Erro %d %.12lf\n", i, erro);
            x = xn;
            if(erro < e)break;
        }

}

void funcao3 (float x){

    float xn=0, erro=0;
    int i;
    float fx=0, fdx=0, teste =0; // [fx funcao] , [fdx derivada da funcao].
    double e = pow(10,-10), h = pow(10,-10);

        for(i=0;i<51;i++){
        fx = x * log(x) - 1;// calculo de funcao
        fdx = (((x + h) * (log(x + h) )-1) - (x * log(x) - 1)) / h; // derivada da funcao.
        xn = x - (fx / fdx);
        printf("\n Com Xn %d %.12lf", i, xn);
        erro = (xn - x) / xn;
            if (erro<0){
                erro = erro * (-1);
            }
        printf("\n Erro %d %.12lf\n", i, erro);
            x = xn;
            if(erro < e)break;
        }
}


