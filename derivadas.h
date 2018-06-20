#include <math.h>
double H = 0.0000000001;

double derivada_K(double k);
double derivada1(double x, double n);
double derivada2(double x, double n);
double derivada3(double x);
double derivada4(double x, double n);
double derivada5(double x);
double derivada6(double x);
double derivada7(double x);
double derivada8(double x);
double derivada9(double x);
double derivada10(double x);


double derivada_K(double k){

            double resultado;
            double fx;
            double fxh;

            fx = k;

            fxh = k+H;

            return resultado = (fxh - fx)/H;

}
double derivada1(double x, double n){
            //x^n

            double resultado;
            double fx;
            double fxh;

            fx = pow(x,n);

            fxh = pow(x+H, n);

            resultado = (fxh - fx)/H;

            return resultado = (fxh - fx)/H;

}

double derivada2(double x, double n){
            //n^x

            double resultado;
            double fx;
            double fxh;

            fx = pow(n,x);

            fxh = pow(n,x+H);

            return resultado = (fxh - fx)/H;

}
double derivada3(double x){
            double e = 2.718281828;

            double resultado;
            double fx;
            double fxh;

            fx = pow(e,x);

            fxh = pow(e,x+H);

            return resultado = (fxh - fx)/H;

}

double derivada4(double x, double n){

            double resultado;
            double fx;
            double fxh;

            fx = log(x)/log(n);

            fxh = log(x+H)/log(n);

            return resultado = (fxh - fx)/H;
}

double derivada5(double x){

            double resultado;
            double fx;
            double fxh;

            fx = log(x);

            fxh = log(x+H);

            return resultado = (fxh - fx)/H;
}

double derivada6(double x){

            double resultado;
            double fx;
            double fxh;

            fx = sin(x);

            fxh = sin(x+H);

            return resultado = (fxh - fx)/H;
}

double derivada7(double x){

            double resultado;
            double fx;
            double fxh;

            fx = cos(x);

            fxh = cos(x+H);

            return resultado = (fxh - fx)/H;
}

double derivada8(double x){

            double resultado;
            double fx;
            double fxh;

            fx = tan(x);

            fxh = tan(x+H);

            return resultado = (fxh - fx)/H;
}

double derivada9(double x){

            double resultado;
            double fx;
            double fxh;

            fx = sqrt(x);

            fxh = sqrt(x+H);

            return resultado = (fxh - fx)/H;
}

double derivada10(double x){

            double resultado;
            double fx;
            double fxh;

            fx = 1/x;

            fxh = 1/(x+H);

            return resultado = (fxh - fx)/H;
}
