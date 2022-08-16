/* O código a seguir tem a função de realizar o cálculo de derivadas com base no número de polinômio que o usuário escolher e com isso no final do código é apresentado os resultados dos valores digitados.
*/
#include <stdio.h>

#define MAX 100

void deriva(float vetor[], int grau){
  for (int i = 0; i <= grau; i++){
  printf("Digite o %d° coeficiente: ", i+1);
    scanf("%f", &vetor[i]);
  }

  printf("\nValores digitados: \n");
  for (int i = 0; i <= grau; i++){
    printf("%.2fx^%d  ", vetor[i], grau-i);
  }

  printf("\n\nDerivação dos valores: \n");
  printf("f(x) = ");
  for(int i = 0; i <= grau; i++){
    if(i != 0){
      printf("+ ");
    }-
    printf("%.2fx^%d ", vetor[i]*(grau-i), grau-i-1);
  }
}

int main(void) {
    
  float vetor[MAX];
  int grau;  
  
  printf("Digite o grau do polinômio: ");
    scanf("%d", &grau);

  deriva(vetor, grau);
  
  return 0;
}