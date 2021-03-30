#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <map>
int func(string & str)
{
    int flag[4] = {0};
    for(int i = 0; i < str.size(); i++){
        if(flag[0] == 0 && str[i] <= 'Z' && str[i] >= 'A'){
            flag[0] = 1;
        } //65-90 97-122
        else if(flag[1] == 0 && str[i] >= 'a' && str[i] <= 'z' ){
            flag[1] = 1;
        }else if(flag[2] == 0 && str[i] >= '0' && str[i] <= '9' ){
            flag[2] = 1;
        }else if(flag[3] == 0)
        {
            if(str[i] <= 'Z' && str[i] >= 'A'){}
            else if(str[i] >= 'a' && str[i] <= 'z'){}
            else if(str[i] >= '0' && str[i] <= '9'){}
            else{
                flag[3] = 1;
            }
        }
    }
    return (flag[0] + flag[1] +flag[2] +flag[3] );
}
bool func2(string &str){
    int flag = 1;
    for(int i=0;i+3<str.size();i++){
        string d=str.substr(i,3);
        if(str.find(d,i+3)!=-1)
            return true;
    }
    return false;
}
int main()
{
    string str;
    while(cin >> str){
        int len = str.size();
        if(len <= 8 || func(str)<3 || func2(str)){
            cout << "NG" << endl;
        }else{
            cout << "OK" << endl;
        }
    }
    system("pause");
    return 0;
}