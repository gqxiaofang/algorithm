#include<iostream>
using namespace std;
#include <string>


int main()
{
    string str;
    cin >> str;
    int len = str.size();
    for(int i = len - 1; i >= 0; i--)
    {
        cout << str[i] ;
    }
    system("pause");
    return 0;
}