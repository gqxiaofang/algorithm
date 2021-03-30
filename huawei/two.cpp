#include<iostream>
using namespace std;
#include <string>


int main()
{
    int num = 0;
    cin >> num;
    int count = 0;
    while(num>0)
    {
        if(num%2==1)
        {
            count++;
        }
        num/=2;
    }
    cout << count << endl;
    system("pause");
    return 0;
}