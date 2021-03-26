#include <bits/stdc++.h>
using namespace std;

/*
Home_W有n个数字组成的数列，且后一个数字严格大于前一个(a[i+1] > a[i])
V_Dragon进行Q此猜数，每次他都猜一个x，若x在数列中，V_Dragon的得分加上这个数的大小
如:数列1 2 3 4 5 6 V_Dragon猜五次，分别为1 1 3 5 7那得分是1+1+3+5=10
现在请你告诉V_Dragon他的得分是多少?

Input:
第一行输入一个T(0<T<=100)
接下来T组测试数据
每组第一行两个数n,q(1<=n,q<=1000000)
接下来一行n个数a1,a2,...an
在接下来一行q个数b1,b2,...bq

Output:
输出Home_W的得分

1
6 5
1 2 3 4 5 6 
1 1 3 5 7

*/
#define ll long long
const int maxn = 1000005;
int t,n,m,p[maxn],q[maxn];
ll sum = 0;

int main()
{
    cin >> t;
    while(t--){
        sum = 0;
        memset(p, 0, sizeof(p));
        memset(q, 0, sizeof(q));
        cin >> n >> m;
        for(ll i = 1;i <= n; i++){
            cin >> p[i];
        }
        for(ll i = 1;i <= m; i++){
            cin >> q[i];
            if(q[i] == p[lower_bound(p+1,p+1+n,q[i])-p])    
                sum += q[i];
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}

// //这个算法中，first是最终要返回的位置
// int lower_bound(int *array, int size, int key)
// {
//     int first = 0, middle;
//     int half, len;
//     len = size;

//     while(len > 0) {
//         half = len >> 1;
//         middle = first + half;
//         if(array[middle] < key) {     
//             first = middle + 1;          
//             len = len-half-1;       //在右边子序列中查找
//         }
//         else
//             len = half;            //在左边子序列（包含middle）中查找
//     }
//     return first;
// }
// int upper_bound(int *array, int size, int key)
// {
//     int first = 0, len = size-1;
//     int half, middle;

//     while(len > 0){
//         half = len >> 1;
//         middle = first + half;
//         if(array[middle] > key)     //中位数大于key,在包含last的左半边序列中查找。
//             len = half;
//         else{
//             first = middle + 1;    //中位数小于等于key,在右半边序列中查找。
//             len = len - half - 1;
//         }
//     }
//     return first;
// }