#include <stdio.h>

void func(int x)
{
  if (x > 0)
  {
    // Head Recursion
    // func(x-1);
    printf("%d ", x);
    // Tail Recursion
    func(x - 1);
  }
}

int main()
{
  int a = 5;

  func(a);

  return (0);
}