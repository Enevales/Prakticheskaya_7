/*Написать функцию с одним вещественным параметром x,
возвращающую среднее арифметическое всех переданных этой
функции параметров, включая последний, т. е. при первом вызове
возвращается значение параметра, при втором — среднее
арифметическое значения параметра второго вызова и значения
параметра первого вызова, и т. д. Например, если было сделано 3
вызова f(3.0), f(5.0), f(13.0), возвращаемые значения будут 3.0, 4.0, 7.0*/

#include <iomanip>
#include <iostream>
using namespace std;

double func(double n){
  static int count;
  static double sum;
  if(n!=0){
    count++;
    sum += n;
    }
  double res = sum/count;
  return res; 
}
int main()
{
  double x;
  for(int i=0;i<10;i++){
    cout<<"Введите число: "<<endl;
    cin>>x;
    cout<<fixed << setprecision(1)<<func(x)<<endl; //один знак после запятой.
  }
  return 0;
}