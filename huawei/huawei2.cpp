#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<set>
#include<cmath>
using namespace std;


void printSet(set<int> &s){
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    set<int> s;
    string str;
    cin >> str;
    int len = str.size();
    int bit = 0;
    int tmp = 0;
    for(int i = len-1; i >= 0; i--){
        if(i == 0){
            tmp += (str[i] - '0') * pow(10,bit++);
            s.insert(tmp);
            tmp = 0;
            bit = 0;
        }
        if(str[i] == ','){
            s.insert(tmp);
            tmp = 0;
            bit = 0;
        }else{
            tmp += (str[i] - '0') * pow(10,bit++);
        }
    }
    // printSet(s);

    int ans = 0;
    int flag = 0;
    int a[1000] = {0};
    int n = 0;
    for(set<int>::iterator it = s.begin(); it != s.end(); it++,n++){
        a[n] = *it;
    }
    for(int i = n-1;i>= 0;i--){
        // cout << a[i] << endl;
        ans += a[i];
    }
    // cout << ans << endl;
    int max = 0;
    // int xmax[1000];
    // int xmin[1000];
    int xmax = 0;
    int xmin = 0;
    if(2*a[n-1] > ans)
        cout << '0' << endl;
    else{ 
        // xmax = a[n-1];
        for(int k = n-1; k >= 0;k--){
            xmax = a[k];
            for(int t = k; t >= 0; t--){
                if(xmax > xmin){
                    xmin += a[t];
                }else if(xmax < xmin){
                    xmax += a[t]; 
                }
                if(xmax == xmin){
                    if(xmax > max){
                        max = xmax;
                        // cout << max << endl;
                    }
                }
            }
        }
        cout << max << endl;
    }
    system("pause");
    return 0;
}