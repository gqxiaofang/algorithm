#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    while(getline(cin, str)){
        vector<char> v;
        for(int i = 0; i <= 25; i++){
            for(int j = 0;j < str.size(); j++){
                if(str[j]-'a' == i || str[j]-'A' == i){
                    v.push_back(str[j]);
                }
            }
        }
        for(int i=0,k=0;i<str.size()&&k<v.size();i++){
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                str[i] = v[k];
                k++;
            }    
        }
        cout << str << endl;
    }
    system("pause");
    return 0;
}