#include<iostream>
#include<string>
using namespace std;



int main()
{
    string str;
    while(getline(cin, str))
    {
        int start = str.size()-1;
        int end = str.size() - 1;
        while(end>=0){
            while(start>=0 && ((str[start] >= 'a' && str[start] <= 'z') || (str[start] >= 'A' && str[start] <= 'Z'))){
                start--;
            }
            cout << str.substr(start+1, end-start) << " ";
            start--;
            end = start;
        }
        cout << endl;
    }
    system("pause");
    return 0;
}