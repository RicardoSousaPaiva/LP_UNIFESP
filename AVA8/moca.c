#include <stdio.h>
#include <math.h>

int funcao(int *a, int *b)
{
  *a= 17;
  *b= 18;

  return 34;
}

int main()
{
  int *x;
  int *y;
  int a;
  
  a = funcao(x,y);

  printf("a = %d, ponteiro = %d %d\n", a, *x,*y);

  return 0;

}
