#include<stdio.h>

int main(){
    char nomevendedor;
    double salariofixo, totaldevendas, total;

    scanf("%s %lf %lf", &nomevendedor, &salariofixo, &totaldevendas);
    total = (totaldevendas * 0.15) + salariofixo;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}