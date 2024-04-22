#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5

main() {
  int vet[TAM], x, vet2[TAM], vet3[TAM];
  for(x = 0; x < TAM; x++){
    printf("Digite o %iº número do vetor 1: ", x + 1);
    scanf("%i", &vet[x]);
  }
  printf("\n");
  for(x = 0; x < TAM; x++){
    printf("Digite o %iº número do vetor 2: ", x + 1);
    scanf("%i", &vet2[x]);
  }
  getchar();
  printf("\nVetor: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet[x]);
    }
    else{
      printf("%i - ", vet[x]);
    }
  }
  printf("Vetor 2: ");
  for(x = 0; x < TAM; x++){
    if(x == TAM - 1){
      printf("%i\n", vet2[x]);
    }
    else{
      printf("%i - ", vet2[x]);
    }
  }
  printf("Soma dos vetores: ");
  for(x = 0; x < TAM; x++){
    vet3[x] = vet[x] + vet2[x];
    if(x == TAM - 1){
      printf("%i\n", vet3[x]);
    }
    else{
      printf("%i - ", vet3[x]);
    }
  }
  getchar();
}