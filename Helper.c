
#include "Header.h"

void DisplayNo()
{
  printf("1 \n");
  printf("2 \n");
  printf("3 \n");
  printf("4 \n");
  printf("5 \n");
  printf("\n");
}

void DisplayNoX()
{
  int iCnt = 0;
  
  for(iCnt = 1;iCnt <= 5;iCnt++)
  {
    printf("%d\n",iCnt);
  }
}