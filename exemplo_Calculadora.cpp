#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    int num1, num2;
    int resultado;
    char hex[20];

    printf("Escolha uma op��o:\n");
    printf("1. Adi��o\n");
    printf("2. Subtra��o\n");
    printf("3. Divis�o\n");
    printf("4. Converter decimal para bin�rio\n");
    printf("5. Converter decimal para hexadecimal\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite dois n�meros para adicionar: ");
            scanf("%d %d", &num1, &num2);
            resultado = num1 + num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 2:
            printf("Digite dois n�meros para subtrair: ");
            scanf("%d %d", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 3:
            printf("Digite dois n�meros para dividir: ");
            scanf("%d %d", &num1, &num2);
            if(num2 == 0) {
                printf("Erro: n�o � poss�vel dividir por zero.\n");
                return 0;
            }
            resultado = num1 / num2;
            printf("Resultado: %d\n", resultado);
            break;
        case 4:
            printf("Digite um n�mero decimal para converter para bin�rio: ");
            scanf("%d", &num1);
            itoa(num1, hex, 2);
            printf("Resultado em bin�rio: %s\n", hex);
            break;
        case 5:
            printf("Digite um n�mero decimal para converter para hexadecimal: ");
            scanf("%d", &num1);
            itoa(num1, hex, 16);
            printf("Resultado em hexadecimal: %s\n", hex);
            break;
        default:
            printf("Op��o inv�lida.\n");
    }

    return 0;
}
