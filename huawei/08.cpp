#include <iostream>
using namespace std;
#include <string>
#include <map>

int main()
{
    map<int,int> m;
    int num = 0;
    cin >> num;
    int first = 0;
    int second = 0;
    for(int i = 0; i < num; i++)
    {
        cin >> first >> second;
        if(m.find(first) != m.end())
        {
            m[first] += second;
        }else
        {
            m[first] = second;
        }
    }
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    system("pause");
    return 0;
}