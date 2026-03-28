#include <stdio.h>
#include <math.h> 

int main() {
    int opcao;
    double num1, num2, resultado;

    printf("CALCULADORA TECNICA EM C.\n");

    do {
        
        printf("\nEscolha uma operacao:\n");
        printf("1. Soma (+)\n");
        printf("2. Subtracao (-)\n");
        printf("3. Multiplicacao (*)\n");
        printf("4. Divisao (/)\n");
        printf("5. Potencia (x elevado a y)\n");
        printf("6. Raiz Quadrada\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        
        if (opcao == 0) {
            break;
        }

        switch(opcao) {
            case 1: 
                printf("Digite os dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 2: 
                printf("Digite os dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 3: 
                printf("Digite os dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 4: // DIVISÃO
                printf("Digite o dividendo e o divisor: ");
                scanf("%lf %lf", &num1, &num2);
            
                if (num2 == 0) {
                    printf("Erro: Nao e possivel dividir por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;

            case 5: 
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = pow(num1, num2); 
                printf("Resultado: %.2lf\n", resultado);
                break;

            case 6: 
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Erro: Nao existe raiz real de numero negativo.\n");
                } else {
                    resultado = sqrt(num1); 
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("\nPrograma encerrado. Bons estudos!\n");

    return 0;
}