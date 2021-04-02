#include <stdio.h>

struct Rectangle
{
  int length;
  int breadth;
};

struct Card
{
  int face;
  int shape;
  int color;
};

int main()
{
  struct Rectangle r = {20, 4};

  printf("The area of the rectangle is %d\n", r.length * r.breadth);

  struct Card decks[2] = {{1, 3, 1}, {2, 2, 0}};

  printf("%d\n", decks[0].face);
  printf("%d\n", decks[0].shape);

  return (0);
}