#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using  namespace std;


int main()
{
    string str;
    while(getline(cin, str)){
        vector<string> v;
        string tmp;
        for(int i=0; i<str.size(); i++){
            if(isalpha(str[i])){    //判断是否是英文字母
                tmp+=str[i];
            }
            else{
                if(!tmp.empty()){   //不是英文字母 
                    v.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        if(!tmp.empty()){
            v.push_back(tmp);
        }
        string ans;
        for(int i=0; i<v.size(); i++){
            ans = " " + v[i] + ans;
        }
        cout << ans.substr(1) << endl;
    }
    system("pause");
    return 0;
}