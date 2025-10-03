#include <stdio.h>
#define PI 3.14

int dobro(int n) {
    return 2*n;
}

double power(double base, int exp){
    double res=1.0;
    for (int i=1; i<=exp; i=i+1)
      res = res * base;
    return res;
}

double perimetro(double r){
    return 2*PI*r;
}

double area(double r){
    return PI*power(r, 2.0);
}

int main()
{
    double raio;
   
    do {
        printf("Qual o raio? ");
        scanf("%lf", &raio);
        printf("Raio: %.2f Perímetro: %.2f Área: %.2f\n", 
               raio, perimetro(raio), area(raio));
        puts("Prima <ENTER> para continuar . . . ");
        getchar();
    } while(1);


    return 0;
}