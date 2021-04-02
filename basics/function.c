#include <stdio.h>
#include <stdlib.h>

// This call by address
// in c++ we can use call by reference
// the only thing we need is to add & before param
// void swap(int &x, int &y)
void swap(int *x, int *y)
{
  int temp = *y;
  *y = *x;
  *x = temp;
}

// Return a array from function
int *fun(int n)
{
  int *p;
  p = (int *)malloc(n * sizeof(int));
  p[0] = 43;
  p[1] = 23;
  return (p);
}

struct Rectangle
{
  int length;
  int breadth;
};
// Change struct by refrence or address
void changeLength(struct Rectangle *r, int l)
{
  r->length = l;
}

int main()
{
  int a = 10;
  int b = 14;

  swap(&a, &b);

  printf("a = %d and b = %d\n", a, b);

  int *A;
  A = fun(5);

  printf("array from fun %d", A[0]);

  struct Rectangle r = {23, 34};

  changeLength(&r, 34);

  return (0);
}