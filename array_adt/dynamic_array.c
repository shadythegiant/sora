#include <stdio.h>
#include <stdlib.h>

struct Array {
  int *a;
  int size;
  int length;
};

void display(struct Array arr);

int main() {
  struct Array arr;
  int n, i;

  printf("Enter size of an array: ");
  scanf("%d", &arr.size);
  arr.a = (int *)malloc(arr.size * sizeof(int));
  arr.length = 0;

  printf("\nEnter length of numbers: ");
  scanf("%d", &n);

  printf("\nEnter All Elements:\n");
  for (i = 0; i < n; ++i)
    scanf("%d ", &arr.a[i]);
  arr.length = n;

  display(arr);

  return 0;
}

void display(struct Array arr) {
  int i;

  for (i = 0; i < arr.length; ++i)
    printf("%d ", arr.a[i]);
}
