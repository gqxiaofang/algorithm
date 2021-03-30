#include <iostream>
using namespace std;
#include <string>
#include <set>


int main()
{
    set<char>s;
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] >= 0 && str[i] <= 127)
        {
            s.insert(str[i]);
        }
    }
    cout << s.size() << endl;
    system("pause");
    return 0;
}