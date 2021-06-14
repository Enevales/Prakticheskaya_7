/*Написать процедуру без параметров, при первом вызове печатающую
«Good morning!», при втором — «Good afternoon!», при третьем —
«Good evening!», при четвертом — снова «Good morning!», и далее по
циклу, используя динамическое выделение памяти.*/

#include <iostream>
using namespace std;

void greetings()
{
  int *n = new int;
  *n = 0;
  if(*n==0)
  {
    cout<<"Good morning!"<<endl;
    *n+=1;
  }
  else if(*n==1)
  {
    cout<<"Good afternoon!"<<endl;
    *n+=1;
  }
  else if(*n==2)
  {
    cout<<"Good evening!"<<endl;
    *n = 0;
  }
}

int main()
{
  for(int i=0; i<12; i++)
  {
    greetings();
  }
  return 0;
}