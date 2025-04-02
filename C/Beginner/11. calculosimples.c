#include<stdio.h>

int main(){
    int cod1, num1, cod2, num2;
    float valorun1, valorun2, valorfinal;
    scanf("%d %d %f", &cod1, &num1, &valorun1);
    scanf("%d %d %f", &cod2, &num2, &valorun2);
    valorfinal = ((num1 * valorun1)+(num2*valorun2));
    printf("VALOR A PAGAR: R$ %.2f\n", valorfinal);
    return 0;
}