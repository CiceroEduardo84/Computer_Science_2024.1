#include <stdio.h>

int main(){
  int cadastro, ativo, logado;
  char opcao;

  cadastro = ativo = logado = 0;

  printf("Deseja cadastrar sua conta? S/N \n");
  scanf(" %c", &opcao);
  if (opcao == 'S'){
    cadastro = 1;
    printf("\nConta cadastrada!\n");
  }

  printf("Deseja ativar sua conta? S/N\n");
  scanf(" %c", &opcao);

  if (opcao == 'S'){
    ativo = 1;
    printf("\nConta ativada. \n");
  }
  
  printf("Deseja logar na sua conta? S/N\n");
  scanf(" %c", &opcao);
  
  if (opcao == 'S'){
    logado = 1;
    printf("\nConta logada. \n");
  }

  if ((cadastro == 1) && (ativo == 1) && (logado == 1)){
    printf("\nSeja bem vindo!\n");
  } else {
    printf("\nAlgo deu errado.\n");
  }
  
}