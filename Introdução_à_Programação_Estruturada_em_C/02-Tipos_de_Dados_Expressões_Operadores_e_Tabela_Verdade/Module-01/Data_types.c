// https://engenhariasoftware.wordpress.com/2020/05/11/notacao-hungara-para-denominar-uma-variavel/
#include <stdio.h>// Biblioteca padrão de entrada e saída 
#include <stdbool.h> // Para usar o tipo de dados bool

int main() {
    // Case Sensitive: "ABC" != "abc"
    const char *cName = "Hello World!"; //cName é um ponteiro para o primeiro de uma sequência de caracteres que formam uma string.
    const int nQuantidade = 10;
    const float fPi = 3.141592;
    const double dVerdade = 1.0;
    const bool bVerdade = true; // Use bool em vez de double para representar valores booleanos
    // bool não existe no C, para isso associamos 0-falso e Qualquer outro valor - verdadeiro.

    printf("cName: %s\n", cName);
    printf("nQuantidade: %d\n", nQuantidade);
    printf("fPi: %f\n", fPi);
    printf("bVerdade: %d\n", bVerdade); // %d para imprimir um valor bool como 0 ou 1
    printf("dVerdade: %lf\n", dVerdade);
    
    return 0;
}
