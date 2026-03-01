#include <iostream>

template <class T>
struct List
{
  T val;
  List<T> *next;
};

template <class T>
T *merge(const T *a, size_t sa, const T *b, size_t sb, T *C)
{
  while (a)
  {
    c->val = a.val;
    List<T> *t = new List<T>{0, nullptr}; // T(); + T*();
    c->next = t;
    a = a->next;
    c = c->next;
  }
  while (b)
  {
    c->val = b.val;
    List<T> *t = new List<T>{0, nullptr}; // T(); + T*();
    c->next = t;
    b = b->next;
    c = c->next;
  }
  return *C;
};

int main()
{
}