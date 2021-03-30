#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;


int main()
{
    string str;
    while(cin >> str) {
        int flag[26] = {0};
        int min = 20;
        for(int i = 0; i < str.size(); i++)
        {
            flag[(str[i]-'a')]++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(flag[i] && flag[i] < min)
            {
                min = flag[i];
            }
        }
        for(int i = 0; i < str.size(); i++)
        {
            if(flag[str[i]-'a'] > min)
            {
                cout << str[i];
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}