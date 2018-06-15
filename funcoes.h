#include <math.h>
#define N 1000

// Protótipo
// Integral
double integral1(double a, double b, int k);
double integral2(double a, double b, int k);
double integral3(double a, double b, int k);
double integral4(double a, double b);
double integral5(double a, double b, int k);
double integral6(double a, double b);
double integral7(double a, double b);
double integral8(double a, double b);
double integral9(double a, double b);
double integral10(double a, double b);
double integral11(double a, double b);

// Funções Integral
double integral1(double a, double b, int k){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = k;
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral2(double a, double b, int k){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = pow(v[i],k);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral3(double a, double b, int k){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = pow(k,v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral4(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = exp(v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral5(double a, double b, int k){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = log(v[i])/log(k);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral6(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = log(v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral7(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = sin(v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral8(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = cos(v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral9(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = tan(v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral10(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = sqrt(v[i]);
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

double integral11(double a, double b){
    double soma=0;
    double h, integral=0;
    float v[N];
    int i;
    // Calculo do H
    h = (b-a)/N;
    // Atribuindo o valor A, na primeira posição do vetor
    v[0] = a;
    // Percorrendo o vetor da posicao 1 ate N e incrementando H ao valor de A
    for(i=1;i<=N;i++){
        a+=h;
        v[i] = a;
    }
    // Percorrendo o vetor completo e aplicando a função
    for (i=0;i<=N;i++){
        v[i] = 1/v[i];
    }
    // Calculando a integral
    for(i=1;i<N;i++){
    soma+=v[i];
    }
    soma*=2;
    integral = (v[0]+soma+v[N])*h/2;
    return integral;
}

