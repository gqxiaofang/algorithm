#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int Max_length(string& str, int step) {
    int len = str.length();
    int low=0,high=0;
    int max = 0;
    if(str.empty()) {
        return 0;
    }
    for(int i=0;i<len;i++) {
        low = i;
        high = low+step;
        while(low>=0 && high<len && str[low] == str[high]) {
            low--;
            high++;
        }    
        if((high-low-1) > max ){
            max = (high-low-1);
        }
    }
    return max;
}

int main()
{
    string str;
    int len,max;
    while(cin >> str) {
        len = Max_length(str, 1);
        max = Max_length(str, 2);
        cout << (len>max?len:max) << endl;
    }
    system("pause");
    return 0;
}