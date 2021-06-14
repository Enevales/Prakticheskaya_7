/* Написать функцию с целым параметром m, результат которой равен
сумме параметров трех последних вызовов этой функции.*/

#include <iostream>
using namespace std;

int sum(){
    static int n = 0;
    static int sum = 0;
    int m;
    if(n==0)
  {
    cout<<"Введите число: "<<endl;
    cin>>m; sum=m;
    n+=1;
    return sum;
  }
  if(n==1)
  {
    cout<<"Введите число: "<<endl;
    cin>>m; sum+=m;
    n+=1;
    return sum;
  }
  if(n==2)
  {
    cout<<"Введите число: "<<endl;
    cin>>m; sum += m;
    n = 0;
    return sum;
  }

}
int main(){
    int x;
    for(int i=0; i<10; i++){
        cout<<sum()<<endl;;
    }
    return 0;
}