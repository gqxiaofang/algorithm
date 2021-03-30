#include <iostream>
using namespace std;
#include <string>


int main()
{
    double num;
    while(cin >> num) {
        cout << (int)(num+0.5) << endl;
    }
    system("pause");
    return 0;
}