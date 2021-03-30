#include <iostream>
using namespace std;
#include <string>
#include <vector>

struct position{
    int x;
    int y;
};

int main()
{
    string str;
    while(cin >> str) {
        //³õÊ¼»¯×ø±ê
        position pos;
        pos.x = 0;
        pos.y = 0;
        vector<string> steps;
        int wordken = 0;
        for(int i = 0; i < str.size(); i++) {
            while(str[i] != ';')
            {
                wordken++;
                i++;
            }
            steps.push_back(str.substr(i-wordken, wordken));
            wordken = 0;
        }
        for(int i = 0; i < steps.size(); i++) {
            int num = 0;
            if(steps[i].length() == 3 && steps[i][1] <= '9' && steps[i][1] >= '0'
                && steps[i][2] <= '9' && steps[i][2] >= '0') {
                    num = (steps[i][1]-'0')*10 + steps[i][2]-'0';
                }
            if(steps[i].length() == 2 && steps[i][1] <= '9' && steps[i][1] >= '0'){
                num = steps[i][1]-'0';
            }
            switch(steps[i][0]){
                case 'A': pos.x-=num;break;
                case 'D': pos.x+=num;break;
                case 'W': pos.y+=num;break;
                case 'S': pos.y-=num;break;
                default:break;
            }   
        }
        cout << pos.x << "," << pos.y << endl;
    }
    system("pause");
    return 0;
}