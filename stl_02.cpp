#include <bits/stdc++.h>
using namespace std;


/*
һ������Ϊn�����У�����m��ѯ�ʣ�ÿ��˵��һ������x���ش���x������c�г��ֵĴ���

input:
��һ����������n,m n��ʾ����c�ĳ��� m��ʾѯ�ʵĴ��� (1<=n,m<=100000)
�ڶ���Ϊn���ո����������ci 
�����е���m+2�� ÿ��һ������x

output:
m�У�ÿ��һ������y����ʾ����x������c���ֵĴ���

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
        sort(p+1,p+n+1);    //����
        for(ll i = 1;i <= m; i++){
            cin >> q;
            int k = upper_bound(p+1,p+n+1,q) - lower_bound(p+1,p+n+1,q);
            cout << k << endl;
        } 
    }
    system("pause");
    return 0;
}