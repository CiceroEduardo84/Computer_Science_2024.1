#include <stdio.h>

int main(void){
  // Numa escola, o aluno é aprovado se sua média é maior que 5,0. O código abaixo valida uma média lida e imprime a mensagem de aprovação. Teste a execução do código, digitando médias inválidas, isto é, menores que zero ou maiores que dez. Em seguida, teste com médias válidas de alunos aprovados e reprovados.

  float nota;

  printf("Digite a nota:\n");
  scanf("%f", &nota);

  printf("%f\n", nota);

  if (nota >= 0 && nota <= 10){
    if (nota > 5.0){
      printf("Aprovado!");
    }else{
      printf("Reprovado!");
    }
  } else {
    printf("Error: media invalida!");
  }
}