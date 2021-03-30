#include<iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <math.h>

int main()
{
    string str;
    while(cin >> str)
    {
        int bit = 0;
        int ans = 0;
        for(int i = str.size()-1; i >= 0; i--)
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                ans += (int)(str[i] - '0')*pow(16,bit++);
            }else if(str[i] >= 'A' && str[i] <= 'F'){
                ans += (int)(str[i] - 'A'  + 10) * pow(16,bit++);
            }
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}