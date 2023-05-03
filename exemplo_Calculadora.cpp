#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    int num1, num2;
    int resultado;
    char hex[20];

    printf("Escolha uma opção:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Divisão\n");
    printf("4. Converter decimal para binário\n");
    printf("5. Converter decimal para hexadecimal\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite dois números para adicionar: ");
            scanf("%d %d", &num1, &num2);
            resultado = num1 + num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 2:
            printf("Digite dois números para subtrair: ");
            scanf("%d %d", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 3:
            printf("Digite dois números para dividir: ");
            scanf("%d %d", &num1, &num2);
            if(num2 == 0) {
                printf("Erro: não é possível dividir por zero.\n");
                return 0;
            }
            resultado = num1 / num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 4:
            printf("Digite um número decimal para converter para binário: ");
            scanf("%d", &num1);
            itoa(num1, hex, 2);
            printf("Resultado em binário: %s\n", hex);
            break;
        case 5:
            printf("Digite um número decimal para converter para hexadecimal: ");
            scanf("%d", &num1);
            itoa(num1, hex, 16);
            printf("Resultado em hexadecimal: %s\n", hex);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
