int recursive_fibo(int n)
{
  if (n==0)
    return 0;
  if (n==1)
    return 1;
  int m = recursive_fibo(n-1) + recursive_fibo(n-2);
  return m;
}



int iterative_fibo(int n)
{
  if (n==0)
    return 0;
  if (n==1)
    return 1;

  int a = 1;
  int b = 1;
  int c = 0;
  for (int i =2 ; i<n; i++)
  {
    c=a+b;
    a=b;
    b=c;
   }  
  return c;