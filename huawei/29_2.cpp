#include <iostream>
#include <string>
 
using namespace std;
char encode(char ch){
    if(ch>='A'&&ch<='Y') ch+=33;
    else if(ch>='a'&&ch<='y') ch-=31;
    else if(ch=='Z')  ch = 'a';
    else if (ch=='z')  ch = 'A';
    else if(ch>='0'&&ch<='8') ch++;
    else if(ch=='9') ch = '0'; 
    return ch;
}
char decode(char ch){
    if(ch>='B'&&ch<='Z')return ch+32-1;
    else if(ch>='b'&&ch<='z')return ch-32-1;
    else if(ch=='A') return 'z';
    else if (ch=='a') return 'Z';
    else if(ch>='1'&&ch<='9')return ch-1;
    else if(ch=='0')return '9';
}
int main()
{
    string sourcestr;
    string aimstr;
     
    for(;cin>>sourcestr;)
    {
    string sourceaim;
 
    for(int i=0;i<sourcestr.length();i++){
        sourceaim+=encode(sourcestr[i]);
    }
 
    // string aimsource;
    // for(int i=0;i<aimstr.length();i++){
        // aimsource+=decode(aimstr[i]);
    // }
    cout<<sourceaim<<endl;
    // cout<<aimsource<<endl;
    }
   
}