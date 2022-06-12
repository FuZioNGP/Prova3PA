#include "MinhaBiblioteca.h"

void max_min(int nums[], int *max, int *min, int nElementos)
{
  if (nums[0] > nums[1])
  {
    *max = nums[0];
    *min = nums[1];
  }
  else
  {
    *max = nums[1];
    *min = nums[0];
  }
  
  for(int i = 2; i < nElementos; i++)
  {
    if (nums[i] > *max){
      *max = nums[i];
    } 
      
         
    if (nums[i] < *min) {
      *min = nums[i];
    } 
  }
}