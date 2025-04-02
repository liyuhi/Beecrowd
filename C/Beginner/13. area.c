#include<stdio.h>
#define pi 3.14159

int main(){
    double A, B, C;
    double areatrianguloretangulo, areacirculo, areatrapezio, areaquadrado, arearetangulo;

    scanf("%lf %lf %lf", &A, &B, &C);

    areatrianguloretangulo = (A * C) / 2;
    areacirculo = pi * (C*C);
    areatrapezio = ((A + B) * C)/2;
    areaquadrado = B*B;
    arearetangulo = A*B;

    printf("TRIANGULO: %.3lf\n", areatrianguloretangulo);
    printf("CIRCULO: %.3lf\n", areacirculo);
    printf("TRAPEZIO: %.3lf\n", areatrapezio);
    printf("QUADRADO: %.3lf\n", areaquadrado);
    printf("RETANGULO: %.3lf\n", arearetangulo);
    

    return 0;
}