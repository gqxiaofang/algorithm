#include<iostream>
using namespace std;
#include <string>


int main()
{
    string str;
    char ch;
    int count = 0;
    getline(cin,str);
    cin>>ch;
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(toupper(str[i])== toupper(ch))
        {
            count++;
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}