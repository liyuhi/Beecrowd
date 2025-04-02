#include<stdio.h>

int main(){
    int numero, horastrabalhadas;
    float valorhora, salario;

    scanf("%d %d %f", &numero, &horastrabalhadas, &valorhora);
    
    salario = valorhora * horastrabalhadas;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}