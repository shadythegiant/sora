#include <stdio.h>

struct Array
{
  int a[20];
  int length;
  int size;
};

void display(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
  {
    printf("%d\n", arr.a[i]);
  }
}

void appened(struct Array *arr, int x)
{
  if (arr->length < arr->size)
  {
    arr->a[arr->length++] = x;
  }
}

void insert(struct Array *arr, int index, int x)
{
  if (index >= 0 && index <= arr->length)
  {
    for (int i = arr->length; i > index; i--)
    {
      arr->a[i] = arr->a[i - 1];
    }
    arr->a[index] = x;
    arr->length++;
  }
}

int del(struct Array *arr, int index)
{
  int x = -1;
  if (index >= 0 && index < arr->length)
  {
    for (int i = index; i < arr->length - 1; i++)
    {
      arr->a[i] = arr->a[i + 1];
    }

    int x = arr->a[index];
    arr->length--;
  }
  return x;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int linearSearch(struct Array *arr, int key)
{
  for (int i = 0; i < arr->length; i++)
  {
    if (arr->a[i] == key)
    {
      swap(&arr->a[i], &arr->a[i - 1]);
      return i - 1;
    }
  }
  return -1;
}

int binarySearch(struct Array *arr, int key)
{
  int l, mid, h;
  l = 0;
  h = arr->length - 1;

  while (l <= h)
  {
    mid = (l + h) / 2;

    if (key == arr->a[mid])
      return mid;
    else if (key < arr->a[mid])
      h = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}

int get(struct Array arr, int index)
{
  if (index >= 0 && index < arr.length)
    return arr.a[index];
  return -1;
}

void set(struct Array *arr, int index, int key)
{
  if (index >= 0 && index < arr->length)
    arr->a[index] = key;
}

int min(struct Array *arr)
{
  int min = arr->a[0];
  for (int i = 1; i < arr->length; i++)
  {
    if (arr->a[i] < min)
    {
      min = arr->a[i];
    }
  }
  return min;
}

int max(struct Array *arr)
{
  int max = arr->a[0];
  for (int i = 1; i < arr->length; i++)
  {
    if (arr->a[i] > max)
    {
      max = arr->a[i];
    }
  }
  return max;
}

int sum(struct Array *arr)
{
  int sum = 0;
  for (int i = 0; i < arr->length; i++)
  {
    sum += arr->a[i];
  }
  return sum;
}

struct Array merge(struct Array a, struct Array b)
{
  int size = a.size;
  int length = a.length + b.length;
  struct Array arr = {{0}, 0, size};

  for (int i = 0; i < length; i++)
  {
    if (arr.length < a.length)
    {
      arr.a[i] = a.a[i];
      arr.length++;
    }
    else
    {
      arr.a[i] = b.a[i - a.length];
      arr.length++;
    }
  }

  return arr;
}

int main()
{
  struct Array arrA = {{2, 4, 6}, 3, 20};
  struct Array arrB = {{4, 3, 6, 10, 12}, 5, 20};
  struct Array arrC = merge(arrA, arrB);

  // appened(&arr, 15);
  // insert(&arr, 6, 17);
  // printf("key %d was found at index %d\n", 10, linearSearch(&arr, 10));
  // printf("key %d was found at index %d\n", 15, binarySearch(&arr, 15));
  display(arrC);

  return 0;
}