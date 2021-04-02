#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
  int length;
  int breadth;
};

int main()
{
  struct Rectangle r = {10, 5};
  struct Rectangle *p = &r;

  // (*p).length = 20;
  // Same as
  p->length = 20;

  // To do the same but in the heap instead
  struct Rectangle *hp;
  hp = (struct Rectangle *)malloc(sizeof(struct Rectangle));

  hp->length = 10;
  hp->breadth = 5;

  return (0);
}