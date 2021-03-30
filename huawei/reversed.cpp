#include<iostream>
using namespace std;
#include <string>


int main()
{
    string str;
    cin>>str;
    // getline(cin, str);
    int len = str.size();
    // cout << len << endl;
    for(int i=len-1; i>=0; i--)
    {
        cout << str[i];
    }
    system("pause");
    return 0;
}