#include "iostream"

using namespace std;

// Normal class
class Rectangle
{
private:
  int length;
  int breadth;

public:
  Rectangle()
  {
    length = 1;
    breadth = 1;
  }
  Rectangle(int l, int b);

  int area();
  int perimeter();
  int getLength() { return length; }
  void setLength(int l) { length = l; }

  ~Rectangle();
};

Rectangle::Rectangle(int l, int b)
{
  length = l;
  breadth = b;
}

int Rectangle::area()
{
  return length * breadth;
}

int Rectangle::perimeter()
{
  return 2 * (length + breadth);
}

Rectangle::~Rectangle()
{
}

// Generic class
template <class T>
class Arithmaetic
{
private:
  T a;
  T b;

public:
  Arithmaetic(T a, T b);

  T add();
  T sub();
};

// Generic function
template <class T>
Arithmaetic<T>::Arithmaetic(T a, T b)
{
  this->a = a;
  this->b = b;
}

template <class T>

T Arithmaetic<T>::add()
{
  T c;
  c = a + b;
  return c;
}

template <class T>
T Arithmaetic<T>::sub()
{
  T c;
  c = a - b;
  return c;
}

int main()
{
  // Creating normal class
  Rectangle r(10, 5);

  cout << r.area() << endl;
  cout << r.perimeter() << endl;

  r.setLength(20);

  cout << r.getLength() << endl;

  // Creating generic class
  Arithmaetic<int> ar(10, 5);

  cout << ar.add() << endl;

  Arithmaetic<float> far(60.3, 16.320);

  cout << far.sub() << endl;

  return (0);
}