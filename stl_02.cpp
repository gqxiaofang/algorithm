#include <bits/stdc++.h>
using namespace std;


/*
一个长度为n的数列，经过m次询问，每次说出一个整数x，回答数x在数列c中出现的次数

input:
第一行两个整数n,m n表示数列c的长度 m表示询问的次数 (1<=n,m<=100000)
第二行为n个空格隔开的整数ci 
第三行到第m+2行 每行一个整数x

output:
m行，每行一个整数y，表示整数x在数列c出现的次数

5 3
9 6 3 3 2
1
3
9


0
2
1
*/

#define ll long long
const int maxn = 100005;
int n,m,p[maxn];
ll q;

int main()
{
    while(cin >> n >> m){
        for(ll i = 1;i <= n; i++){
            cin >> p[i];
        }
        sort(p+1,p+n+1);    //排序
        for(ll i = 1;i <= m; i++){
            cin >> q;
            int k = upper_bound(p+1,p+n+1,q) - lower_bound(p+1,p+n+1,q);
            cout << k << endl;
        } 
    }
    system("pause");
    return 0;
}