#include <iostream>
#include <string>
using namespace std;

char encrpy(char x){
    if(x >= '0' && x <= '9'){
        if(x == '9'){
            x = '0';
        }else
            x = 1 + x;
    }else if(x >= 'a' && x <= 'z'){
        if(x == 'z'){
            x = 'A';
        }else
            x = x - 31;
    }else if(x >= 'A' && x <= 'Z'){
        if(x == 'Z'){
            x = 'a';
        }else
            x = x + 33;
    }
    return x;
}
char decode(char x){
    if(x >= '0' && x <= '9'){
        if(x == '0'){
            x = '9';
        }else
            x = x - 1;
    }else if(x >= 'a' && x <= 'z'){
        if(x == 'a'){
            x = 'Z';
        }else
            x = x - 33;
    }else if(x >= 'A' && x <= 'Z'){
        if(x == 'A'){
            x = 'z';
        }else
            x = x + 31;
    }
    return x;
}

int main()
{
    string str1,str2;
    while(cin >> str1 >> str2){
        string str3,str4;
        for(int i=0; i<str1.length(); i++){
            str3 += encrpy(str1[i]);
        }
        for(int i=0; i<str2.length(); i++){
            str4 += decode(str2[i]);
        }
        cout << str3 << endl;
        cout << str4 << endl;
    }
    system("pause");
    return 0;
}