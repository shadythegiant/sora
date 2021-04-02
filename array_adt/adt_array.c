#include <stdio.h>
#include <stdlib.h>

struct Array {
  int a[20];
  int size;
  int length;
};

void display(struct Array arr);
void append(struct Array *arr, int value);
void insert(struct Array *arr, int index, int value);

int main() {
  struct Array arr = {{3,4,2,7,5}, 20, 5};

  insert(&arr, 3, 1);
  display(arr);

  return 0;
}

void display(struct Array arr) {
  int i;

  for (i = 0; i < arr.length; ++i)
    printf("%d ", arr.a[i]);
}

void append(struct Array *arr, int value) {
  if (arr->length < arr->size)
    arr->a[arr->length++] = value;
}

void insert(struct Array *arr, int index, int value) {

}
