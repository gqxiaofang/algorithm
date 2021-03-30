#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
 

long transf1(string& str){
    int bit[32] = {0};
    int flag = 0;
    int tmp = 0;
    int b_bit = 0;
    for(int i = str.size()-1; i >= 0; i--){
        if(str[i] == '.' || i == 0){
            for(int j = 0; j < 8; j++){
                if(tmp % 2 == 0){
                    bit[j+flag*8] = 0;    
                }else
                    bit[j+flag*8] = 1;
            }
            tmp = 0;
            flag++;
            b_bit = 0;    
        }else{
            tmp = (str[i] - '0')*pow(10,b_bit++);   //작속
        }
    }
    long ans = 0;
    for(int i = 3; i >= 0;i--){
        for(int j = 0;j < 8; j++){
            ans += bit[i*8+j]*pow(2,(j+(3-i)*8));
        }
    }
    return ans;
}
string transf2(long num){

}

int main()
{
    string str1, str2;
    // while(cin >> str1){
    //     cout << transf1(str1) << endl;
    // }

    str1 = "10.0.3.193";
    int bit[32] = {0};
    int flag = 0;
    int tmp = 0;
    int b_bit = 0;
    for(int i = str1.size()-1; i >= 0; i--){
        if(str1[i] == '.' || i == 0){
            if(i == 0){
                tmp += (str1[i] - '0')*pow(10,b_bit++);
            }
            int j = 7;
            while(tmp > 0 && j >= 0){
                if(tmp % 2 == 0){
                    bit[j+flag*8] = 0;
                }else{
                    bit[j+flag*8] = 1;
                }
                j--;
            }
            // for(int j = 7; j >= 0; j--){
            //     if(tmp % 2 == 0){
            //         bit[j+flag*8] = 0;    
            //     }else{
            //         bit[j+flag*8] = 1;
            //     }
            // }
            cout << tmp << endl;
            tmp = 0;
            flag++;
            b_bit = 0;    
        }else{
            tmp += (str1[i] - '0')*pow(10,b_bit++);   //작속
        }
    }
    // long ans = 0;
    // for(int i = 3; i >= 0;i--){
    //     for(int j = 0;j < 8; j++){
    //         ans += bit[i*8+j]*pow(2,(j+(3-i)*8));
    //     }
    // }
    // for(int i = 3; i >= 0;i--){
    //     for(int j = 0;j < 8; j++){
    //         // ans += bit[i*8+j]*pow(2,(j+(3-i)*8));
    //         cout << bit[(3-i)*8+j];
    //     }
    //     cout << endl;
    // }
    for(int i = 1; i <= 32; i++){
        cout << bit[i-1];
        if(i % 8 == 0){
            cout << endl;
        }
    }
    
    system("pause");
    return 0;
}