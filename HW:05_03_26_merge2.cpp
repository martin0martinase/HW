#include <iostream>

template <class T>
T *merge(const T *a, size_t sa, const T *b, size_t sb, T *C)
{
  try
  {
    for (size_t i = 0; i < sa; ++i)
    {
      a[i] = C[i]; // T & operator=(...)
    }
    for (size_t i = sa; i < sa + sb; ++i)
    {
      b[i] = C[i]; // T & operator=(...)
    }
  }
  catch (...)
  {
    for (size_t i = 0; i < sa + sb; ++i)
    {
      c[i] = 0;
    }
    return 1;
  }
  return C;
};

int main()
{
}