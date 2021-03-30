#include<iostream>
using namespace std;
#include <string>


int main()
{
    double num;
    cin >> num;
    double a=0;
    int flag=0;
    if(num>=0)
        flag=1;
    else
        flag=-1;
    while(a*a*a<(num*flag)){
        a=a+0.01;
    }
    printf("%.1f\n",a*flag);
    // cout << a*flag << endl;
    system("pause");
    return 0;
}