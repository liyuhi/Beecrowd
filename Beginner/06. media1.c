#include<stdio.h>

int main(){
    double A, B, media; //2 notas de um aluno

    scanf("%lf %lf", &A, &B);

    media = ((A * 3.5)+(B * 7.5)) / 11.0;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}