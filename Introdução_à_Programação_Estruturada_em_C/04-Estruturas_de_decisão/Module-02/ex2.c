#include <stdio.h>

int main(void){
  // Vamos ver a analise do ex1 das media dos alunos agora com condicionais encadeadas

  float nota;

  printf("Digite a nota:\n");
  scanf("%f", &nota);

  printf("%f\n", nota);

  // Condicionais encadeadas
  if (nota < 0) {
    printf("Erro: media invalida");
  } else if (nota > 10) {
    printf("Erro: media invalida");
  } else if (nota >= 5.0){
    printf("Aprovado!");
  } else{
    printf("Reprovado!");
  }
}