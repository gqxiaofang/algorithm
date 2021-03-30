#include<iostream>
using namespace std;
#include<string>

int main()
{
    string str;
    getline(cin,str);
    int count=0;
    int len=str.length();
    for(int i=len-1;i>=0;i--)
    {
        if(str[i] != ' ')
        {
            count++;
        }else
        {
            break;
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}