#include<stdio.h>

int main(){
    double A, B, C, MEDIA;

    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = ((2 * A) + (3 *B) + (5 * C))/10.0;
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}