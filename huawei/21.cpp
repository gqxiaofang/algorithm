#include<iostream>
#include<string>
#include<vector>
using namespace std;
int a[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
char encrypt(char &ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        if(ch == 'Z')
        {
            ch = 'a';
        }else
            ch = ch + 33;
    }else if(ch >= 'a' && ch <= 'z')
    {
        ch = '0' + a[ch-'a'];
    }
    return ch;
}
int main()
{
    string str;
    while(cin>>str){
        for(int i=0;i<str.size(); i++)
        {
            str[i] = encrypt(str[i]);
        }
        cout << str << endl;
    }
    
    system("pause");
    return 0;
}