#include <iostream>
#include <string>
#include <vector>
using namespace std;


int myfun(int n)
{
    if(n <= 1)
        return 0;
    if(n == 2)
        return 1;
    return n/3 + myfun(n/3+n%3);
}
int main()
{
    int n;
    while(cin >> n)
    {
        if(n == 0)
            break;
        cout << myfun(n) << endl;
    }
    system("pause");
    return 0;
}