#include<iostream>
using namespace std;
#include <string>


int main()
{
    int num = 0;
    cin>>num;
    string str;
    int i= 0;
    // str = num;
    // cout << str << endl;
    while(num>0)
    {
        cout << num%10;
        // str[i++]= (char)num%10;
        num /= 10;
    }
    // cout << str << endl;
    system("pause");
    return 0;
}