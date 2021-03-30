#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<set>
using namespace std;

// void printMap(map<char,int> &map) {
//     for(map<char,int>::iterator it = m.begin(); it != m.end(); it++){
//         cout << it->first << ":" << it->second << endl;
//     }
//     cout << endl;
// }
int main()
{
    string str;
    int count = 0;
    cin >> str;
    int len = str.size();
    for(int i = 0; i < len; i++) {
        char tmp = str[i];
        int j = i+1;
        int flag = 0;
        while(1){
            if(tmp == str[j]){
                count++;
            }else{
                break;
            }
            j++;
        }
    }
    cout << count+len << endl;
    system("pause");
    return 0;
}