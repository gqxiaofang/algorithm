#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//传入一个字符串
int Max_length(string& str) {

    // int middle_positon = 1;
    // int max_positon = 0;
    // string tmp;
    // int flag = 0;
    // for(int i = 0; i < str.size()/2; i++) {
    //     for(int j = 0; j <= i; j++) {   //
    //         tmp += str[j];
    //     }
    //     int len = tmp.length();     //读出长度
    //     int count = len-1;          //
    //     for(int k = i+1; k <= i + tmp.size(); k++) {
    //         if(str[k] != tmp[count--]) {
    //             // break;
    //             return max_positon*2;
    //         }
    //     }
    //     if(count == -1) {
    //         max_positon = len;
    //     }
    //     tmp.clear();
    // }
    // return max_positon*2;
}

int main()
{   
    string str;
    while(cin >> str){
        int max_positon = 0;
        int len = 0;
        // for(int i = 0;i < str.size(); i++)
        // {   
        //     string tmp = str.substr(i);
        //     len = Max_length(tmp);
        //     if(len > max_positon){
        //         max_positon = len;
        //     }
        // }
        cout << max_positon << endl;
    }
    system("pause");
    return 0;
}