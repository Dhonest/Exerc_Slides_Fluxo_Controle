#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12) {
        printf("Criança\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else if (idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}
