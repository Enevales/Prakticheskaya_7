/*Написать функцию с одним целым параметром, возвращающую номер
вызова этой функции (первый вызов возвращает 1, второй — 2, третий
— 3, и т. д.), используя динамическое выделение памяти.*/

#include <iostream>
using namespace std;

int main()
{ int x = 0;
  for(int i = 0; i<10; i++)
  {
    x += 1;
    int *iPtr = &x;
    cout << x << endl;
  }
  return 0;
}