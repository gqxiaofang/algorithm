#include<iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

string getFileName(string s)
{
    //rfind 逆向查找 返回第一个找到的
    s = s.substr(s.rfind('\\') + 1);
    if(s.size() > 16)
    {
        s = s.substr(s.size() - 16);
    }
    return s;
}
int main()
{
    string str;
    int line;
    map<string,int> m;
    vector<string> record;
    while(cin>>str>>line){
        string ss = getFileName(str)+ " " + std::to_string(line);
        map<string,int>::iterator it = m.find(ss);
        if(it != m.end()){
            it->second++;
        }else{
            record.push_back(ss);
            m.insert(make_pair(ss,1));
        }
    }
    if(record.size()>=8)
    {
        for(int i = record.size()-8;i<record.size();i++){
            cout << record[i] << " " << m[record[i]] << endl;
        }
    }else{
        for(int i = 0;i<record.size();i++){
            cout << record[i] << " " << m[record[i]] << endl;
        }
    }
    system("pause");
    return 0;
}