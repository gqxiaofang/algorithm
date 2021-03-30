#include<iostream>
using namespace std;
#include <string>


int main()
{   
    string str;
    getline(cin,str);

    int start = str.size()-1;
    int end = str.size()-1;
    string str2=" ";
    
    while(end>=0)
    {
        while(start>=0&&str[start]!=' ')
        {
            start--;
        }
        cout << str.substr(start+1,end-start) << " ";
        start -= 1;
        end = start;
    }
    cout << endl;
    system("pause");
    return 0;
}