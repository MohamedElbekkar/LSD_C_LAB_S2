#include "header.h"


int isprime1(int n)
{
  if (n==1)
    return 1;
  if (n==0)
    return 10;
  if (n%2 == 0)
    return 0;
  int i;
    for (i=2 ; i< (n-1);i+2)
      {
        if (n%i == 0)
          return 0;
        else
          return 1;
      }
}

void getprime(int n)
{
  for(int i =2; i<=n; i++)
    {
      if (isprime1(i)==1)
        printf("%d\n",i);
    }
}


int isprime2(int n)
{
  int i=2;
  while(i<(sqrt((double)n)))
  {
    if (n%i == 0)
      return 0;
    else
      return 1;
    i++ ;
   }
}


void findprime(int n)
{
  for(int i =2; i<=n; i++)
  {
    if (isprime2(i)==1)
      printf("%d\n",i);
  }
}