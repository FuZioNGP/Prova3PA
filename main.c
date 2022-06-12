#include <stdio.h>
#include "MinhaBiblioteca.h"

int main(void) 
{
  int nElementos;
  int max, min;
  
  printf("Insira a quantidade de entradas da cadeia desejada! \n");
  scanf("%d", &nElementos);

  //vetor
  int nums[nElementos];
  //cadeia maior que 2 ou igual a 2
  if(nElementos >= 2)
  {
    for(int i = 0; i < nElementos; i++)
    {
      printf("%d = ", i+1);
      scanf("%d", &nums[i]);
    }
  }
  //cadeia de apenas um numero entra nesta função
  else if(nElementos == 1)
  {
    int num;
    printf("Num = ");
    scanf("%d", &num);
    printf("O numero escolhido foi: %d\n", num);
    printf("Max=%d, Min=%d\n",num,num);
    return 0;
  } 
  else //caso insira um numero invalido por exemplo 0 ou -1 cai neste erro.
  {
    printf("Quantidade Invalida!\n");
    return 0;
  }

  printf("Os numeros inseridos foram: \n");
  //função que separa a cadeia por virgulas ("1,2,3,4,5\n")
  for (int i = 0; i < nElementos; i++) 
  {
    printf("%d", nums[i]);
    if (i == (nElementos-1))
    {
      printf("\n");
    } 
    else 
    {
      printf(",");
    }
  }
  //função void sem retorno.
  max_min(nums, &max, &min, nElementos);
  //resultado da função
  printf("Max=%d, Min=%d", max, min);

  return 0;
}