#include <bits/stdc++.h>
using namespace std;

/*
题目：
value_Dragon是一个有钱人，快过年了，所以他准备发红包，但是他发红包的方式很奇葩，
他让n个人排成一排，每次选择1-n中的一段区间[l,r]发，给区间中的每一个人一块钱，
就这样发了m次红包，发完后他想知道在[l,r]的子区间中有多少个区间满足以下要求：
1.这个区间得到钱的总数不少于s；
2.这个区间可以被分成两个不想交的子区间且每个子区间得到的钱的总数不小于w；
（注：一个区间的子区间包括自己本身）
防坑提醒：长度为1的区间比如[1,1]是不能被分成两个子区间的

输入：
第一行是一个整数T代表数据的组数；
接下来有T组数据
每组数据开头有四个整数，分别代表n m s w；
接下来m行，每行是两个数l，r代表区间[l,r]的左右端点；
其中T<=10;
n<=10^6,m<=10^5;
0<l<=r<=n;
0<=w<=s<10^8;

输出：
对于每组数据输出一行，代表符合要求的区间个数；

样例输入：
4
1 0 0 0

1000000 0 0 0

1000000 1 0 0
1 1000000

10 10 20 14
2 10
5 9
5 5?
6 8
2 6
9 10
6 7
6 10
4 5
5 7

样例输出：
0
499999500000
499999500000
8

*/
#define ll long long
const int maxn = 1e6+10;
int n,m,s,w,a[maxn],sum[maxn];

int main()
{
    int t;
    cin >> t;
    while(t--){
        memset(a, 0, sizeof(a));    
        memset(sum, 0, sizeof(sum));
        cin >> n >> m >> s >> w;
        while(m--){
            int x,y;
            cin >> x >> y;
            a[x]++;         //小技巧  l(1)----r(-1)
            a[y+1]--;       
        }       
        for(int i = 1;i <= n; i++){     //区间置1
            a[i] = a[i-1] + a[i];
        }
        for(int i = 1;i <= n; i++){     //n项和
            sum[i] = sum[i-1] + a[i];
        }
        ll ans = 0,l = 1,r = 1;
        for(int i = 1;i <= n;i++){                //得到一个满足条件的最小区间！
            while(r < i&&sum[i] - sum[r] >= w)    //i右端点 l左端点 r中间端点
                ++r;                              //l--r-1  r--i
            while(l < r-1&&sum[i] - sum[l] >= s&&
                  sum[r-1]-sum[l] >= w)
                ++l;
            if(l < r&&sum[i]-sum[l-1] >= s&&sum[i]-
               sum[r-1] >= w&&sum[r-1]-sum[l-1]>=w)
                ans += l;
        }
        cout << ans << endl;
    }
    system("pause");
    return 0;
}