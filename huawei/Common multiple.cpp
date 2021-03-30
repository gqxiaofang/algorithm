#include<iostream>
using namespace std;
#include <string>
int gcd(int x, int y)
{
    int z=y;
    while(x%y!=0)
    {
        z=x%y;
        x=y;
        y=z;
    }
    return z;
}
int main()
{
    int a,b;
    int ans=0;
    cin>>a>>b;
    cout<< (a*b)/gcd(a,b) << endl;
    system("pause");
    return 0;
}