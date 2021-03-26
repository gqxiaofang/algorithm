#include <bits/stdc++.h>
using namespace std;

/*
容斥定理

有n个电灯泡 编号1-n 每个灯泡有一个开关
所有灯泡初始时为不亮的
分别进行三次操作
每次操作都选一个质数x 将编号为x和x的整数倍的灯泡的开关波动一下
求最后亮着的灯的数量

input:
1<=T<=100 t组测试数据
每组第一行n表示灯泡个数
第二行三个数a b c表示每次选择的数

output:
数组最后亮着的灯的个数


1
30
2 3 5
*/

int main()
{
    int t,n;
    int a,b,c;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> a >> b >> c;
        int sum = n/a + n/b + n/c - 2*(n/a/b + n/a/c + n/b/c) + 4*(n/a/b/c);
        cout << sum << endl;
    }
    system("pause");
    return 0;
}