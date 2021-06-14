/* Написать функцию без параметров, возвращающую при каждом
вызове следующее простое число (первый вызов возвращает 2,
следующий — 3, третий — 5, и т. д.), используя динамическое выделение памяти.*/

#include <iostream>  
using  namespace std;

int func(int n) 
{  
    int a, b;
 
    for ( a = n+1; ; a++) 
    { 
        for ( b = 2; b <= ( a / b); b++) 
            if(!( a % b)) 
                break;  
        if( b > ( a / b)) 
               break; 
    } 
 
    return a;
}
 
int main() 
{
    for(int i=1; i<=17; i++){
        if(func(i)>func(i-1)){
            cout<<func(i)<<endl;
        }
    }
    return 0;
}