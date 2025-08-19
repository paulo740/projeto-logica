#include <stdio.h>

int main() {
      // Declaração de variáveis
    float preco, desconto, precoComDesconto, imposto = 0.0, precoFinal;
    float limite = 100.0;  // Exemplo: limite para aplicar imposto
    float percentualImposto = 10.0; //Exemplo: 10% de imposto sobre o valor final após desconto

    //Entrada de dados
      printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto(ex:15 para 15%%): ");
      scanf("%f", &desconto);

       // Cálculo do preço com desconto
    precoComDesconto = preco - (preco * (desconto / 100.0));

    // Verificação para aplicar impostos
    if(precoComDesconto > limite) {
        imposto = precoComDesconto * (percentualImposto / 100.0);
    }

    // Cálculo do preço final 
      precoFinal = precoComDesconto + imposto;

      
    // Exibição dos resultados
    printf("\nPreco original: R$ %.2f\n", preco);
    printf("Preco com desconto: R$ %.2f\n", precoComDesconto);
    if(imposto > 0) 
       printf("Imposto aplicado: R$ %.2f\n", imposto);
    else
        printf("Imposto nao aplicado.\n");
     
     printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}



