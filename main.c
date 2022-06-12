#include <stdio.h>
#include "MinhaBiblioteca.h"

int main(void) 
{
  int nElementos;
  int max, min;
  
  printf("Insira a quantidade de entradas da cadeia desejada! \n");
  scanf("%d", &nElementos);

   int nums[nElementos];


  if(nElementos >= 2)
  {
    for(int i = 0; i < nElementos; i++)
    {
      printf("%d = ", i+1);
      scanf("%d", &nums[i]);
    }
  }
  else if(nElementos == 1)
  {
    int num;
    scanf("%d", &num);
    printf("O numero escolhido foi: %d\n", num);
    printf("Max=%d, Min=%d\n",num,num);
    return 0;
  }
  else
  {
    printf("Quantidade Invalida!\n");
    return 0;
  }
  max_min(nums, &max, &min, nElementos);
  printf("Max=%d, Min=%d", max, min);
  return 0;
}