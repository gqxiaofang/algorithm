#include<iostream>
using namespace std;
#include <string>
#include <algorithm>
bool myCompare(string a, string b) {
    return a<b;
}
int main()
{   
    string str[1001];
    int num = 0;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> str[i];
    }
    sort(str,str+num,myCompare);
    for(int i = 0; i < num; i++)
    {
        cout << str[i] << endl;
    }
    system("pause");
    return 0;
}