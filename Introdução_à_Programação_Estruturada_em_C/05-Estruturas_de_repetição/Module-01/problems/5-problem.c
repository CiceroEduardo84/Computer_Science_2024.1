#include <stdio.h>
#include <stdlib.h>

int main(){
    float percreaj, salario, salarioreaj, maiorsal;
    int cont;
    maiorsal=0;

    printf("Percentual de reajuste salarial: \n");
    scanf ("%f",&percreaj);
    for (cont = 1; cont <= 8; cont++){
            printf("Informe o salário do funcionário:\n");
            scanf("%f",&salario);

            salarioreaj=salario+(salario*percreaj/100);
            printf("O salário reajustado e : %.2f \n\n",salarioreaj);
            if (salarioreaj > maiorsal)
                maiorsal = salarioreaj;
        }
    printf("O maior salário reajustado e : %.2f",maiorsal);
    return 0;
}