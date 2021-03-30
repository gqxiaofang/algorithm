#include<iostream>
using namespace std;
#include <string>


int main()
{
    char ch;
    string str;
    int count = 0;
    int flag[128]={};
    cin>>str;
    int i = 0;
    while(str[i]!='\0')
    {
        if(flag[(int)str[i]]==0)
        {
            count++;
            flag[(int)str[i]]=1;
        }
        i++;
    }
    cout << count << endl;
    // cin >> ch;
    // ch = '1';
    // cout << (int)ch << endl;
    system("pause");
    return 0;
}