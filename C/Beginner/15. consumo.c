#include<stdio.h>

int main(){
    int X; //distancia total percorrida em km
    float Y, consumomedio; //total de combustível gasto

    scanf("%d %f", &X, &Y);

    consumomedio = X/Y;

    printf("%.3f km/l\n", consumomedio);


    return 0;
}