#include<iostream>
using namespace std;
#include <string>
#include<math.h>
int main()
{
    long num = 0;
    cin>>num;
    long i,m=num;
    for(i=2;i<sqrt(m);i++)
    {
        while(num%i==0){
            cout << i << " ";
            num/=i;
        }
    }
    if(num>1){
        cout << num << " ";
    }
    system("pause");
    return 0;
}