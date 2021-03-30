#include <iostream>
using namespace std;
#include <string>


int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    for(int i = str.size()-1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    system("pause");
    return 0;
}