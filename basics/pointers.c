#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 10;

  // pointer decleration
  // p will take space in the stack
  // it will have it's own address in memory
  int *p;

  // pointer initializition
  // p now will have the memory address of a
  p = &a;

  // Derefrencing p
  // if we call p directly, it will give the
  // memory address of a but if we
  // derefrence it; we get a's value
  printf("%d\n", *p);

  // to allocate memory from the heap
  // instead of the stack
  int *hp;

  // in c this will allocate a array of size of 5
  // in the heap
  p = (int *)malloc(5 * sizeof(int));
  // in c++ we use the "new" keyword
  // p = new int[5]

  return (0);
}