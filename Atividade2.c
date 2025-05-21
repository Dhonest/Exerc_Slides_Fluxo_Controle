#include <stdio.h>

int main() {
    float num1, num2;
    char operador;

    printf("Digite dois números e um operador (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero!\n");
            } else {
                printf("Resultado: %.2f\n", num1 / num2);
            }
            break;
        default:
            printf("Operador inválido!\n");
    }

    return 0;
}
