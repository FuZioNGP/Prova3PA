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
}