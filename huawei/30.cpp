#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

char transf(char ch) {
    int bit[4] = {0};
    int x ;
    int ans = 0;
    char ans_back;
    if(ch >= '0' && ch <= '9') {
        x = ch - '0';
    }else if(ch >= 'a' && ch <= 'f') {
        x = ch - 'a' + 10;
    }else if(ch >= 'A' && ch <= 'F') {
        x = ch - 'A' + 10;
    }else{
        return ch;
    }
    for (int i = 0; i < 4; i++) {
        bit[i] = x % 2;
        x /= 2;
    }
    for(int i = 0; i < 4; i++){
        ans += bit[i] * pow(2,3-i);
    }
    if(ans<=9) ans_back = '0' + ans;
    else ans_back = 'a' + ans - 10 - 32;
    return ans_back;
}


int main()
{
    string str1,str2;
    while(cin >> str1 >> str2) {
        string str3;
        int flag = 0;
        str3 = str1 + str2;
        vector<char> v1;
        vector<char> v2;
        for(int i = 0;i< str3.size();i++) {
            if(flag == 0) {
                flag = 1;
                v1.push_back(str3[i]);
            }else{
                flag = 0;
                v2.push_back(str3[i]);
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(vector<char>::iterator it = v1.begin(); it != v1.end(); it++){
            *it = transf(*it);
            // cout << *it << endl;
        }
        for(vector<char>::iterator it = v2.begin(); it != v2.end(); it++){
            *it = transf(*it);
            // cout << *it << endl;
        }
        int flag_c = 0;
        vector<char>::iterator it1 = v1.begin();
        vector<char>::iterator it2 = v2.begin();
        for(int i = 0; i < str3.size(); i++){
            if(flag_c == 0){
                flag_c = 1;
                cout << *it1;
                it1++;
            }else
            {
                flag_c = 0;
                cout << *it2;
                it2++;
            }
        }
        cout << endl;
    }
    // cout << transf('7') << endl;
    system("pause");
    return 0;
}