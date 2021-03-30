#include <iostream>
using namespace std;
#include <string>
#include <set>

int main()
{
    bool flag[10];
    for (int i = 0; i < 10; i++)
    {
        flag[i] = false;
    }
    int num = 0;
    int bit = 0;
    cin >> num;
    while(num > 0) {
        bit = num % 10;
        num /= 10;
        if(flag[bit] == false)
        {
            cout << bit;
            flag[bit] = true;
        }
    }
    system("pause");
    return 0;
}