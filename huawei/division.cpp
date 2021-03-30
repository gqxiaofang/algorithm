#include<iostream>
using namespace std;
#include <string>

int main()
{
    string str;
    int less = 0;
    while(cin >> str) {
        int left =  str.size()%8;
        while (str.size()>=8)
        {
            cout << str.substr(0,8)<<endl;
            str = str.substr(8);
        }
        if(left)
        {
            less=8-left;
            str.append(less,'0');
            cout << str << endl;
        }
        // cout << left<<endl;
    }
    system("pause");
    return 0;
}