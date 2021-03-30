#include <iostream>
using namespace std;
#include <string>

int main()
{
    string str;
    getline(cin, str);
    char ch;
    cin >> ch ;
    int count = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if( toupper(str[i]) == toupper(ch) )
        {
            count++;
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}