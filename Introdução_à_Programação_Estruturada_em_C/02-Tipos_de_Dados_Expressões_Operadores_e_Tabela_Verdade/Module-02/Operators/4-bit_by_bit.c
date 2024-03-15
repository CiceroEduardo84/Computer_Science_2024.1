#include <stdio.h>

int main() {
    // Esse operadores irão trabalhar diretamente com os bits
    // ex. aplicando AND(&): 
    //                0000101
    //                1000011
    //Resultado:      0000001

    int a = 10; // 1010 em binário
    int b = 2; // O deslocamento será realizado 2 vezes

    // Operador AND Bit a Bit
    int resultado_AND = a & b;
    printf("Operador AND Bit a Bit:\n");
    printf("a & b = %d\n", resultado_AND);

    // Operador OR Bit a Bit
    int resultado_OR = a | b;
    printf("Operador OR Bit a Bit:\n");
    printf("a | b = %d\n", resultado_OR);

    // Operador XOR Bit a Bit
    int resultado_XOR = a ^ b;
    printf("Operador XOR Bit a Bit:\n");
    printf("a ^ b = %d\n", resultado_XOR);

    // Operador Deslocamento à Esquerda (Shift Left)
    int resultado_deslocamento_esquerda = a << b;
    printf("Operador Deslocamento à Esquerda (Shift Left):\n");
    printf("a << b = %d\n", resultado_deslocamento_esquerda);

    // Operador Deslocamento à Direita (Shift Right)
    int resultado_deslocamento_direita = a >> b;
    printf("Operador Deslocamento à Direita (Shift Right):\n");
    printf("a >> b = %d\n", resultado_deslocamento_direita);

    // Operador NOT Bit a Bit
    int resultado_NOT_a = ~a;
    int resultado_NOT_b = ~b;
    printf("Operador NOT Bit a Bit:\n");
    printf("~a = %d\n", resultado_NOT_a);
    printf("~b = %d\n", resultado_NOT_b);

    return 0;
}
