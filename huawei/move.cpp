#include<iostream>
using namespace std;
#include <string>
#include<cstring>

struct position {
    int x;
    int y;
};
void move(string m,position &cur);
int main()
{
    string s;
    while(getline(cin,s)){
        position pos;
        pos.x=0;
        pos.y=0;
        string cur = "";
        for(int i=0;i<s.length();i++){
            if(s[i]==';'){
                move(cur,pos);
                cur = "";
                continue;
            }
            cur+=s[i];
        }
        cout<<pos.x<<","<<pos.y<<endl;
    }
    system("pause");
    return 0;
}
void move(string m,position &pos)
{
    if(m.length()<=1)return;
    string diss = "";
    for(int i=1;i<m.length();i++){
        if(m[i]<'0'||m[i]>'9') return;
        diss+=m[i];
    }
    int dis = (m[1]-'0')*10 + (m[2]-'0');
    switch(m[0]){
        case 'A': {
              pos.x-=dis; 
            }break;
        case 'D' :{
              pos.x+=dis; 
            }break;
        case 'S' :{
              pos.y-=dis; 
            }break;
        case 'W' :{
              pos.y+=dis; 
            }break;
    }
}