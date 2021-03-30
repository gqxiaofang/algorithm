#include<iostream>
using namespace std;
#include <string>

int main()
{
    string str;
    while(cin >> str) {
        while(str.length()>8)
        {
            cout << str.substr(0,8) << endl;
            str = str.substr(8);
        }
        if(str.length() <= 8 )
        {
            for(int i = str.length();i<8;i++)
            {
                str += '0';
            }
            cout << str << endl;
        }
    }
    system("pause");
    return 0;
}