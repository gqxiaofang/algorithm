#include <bits/stdc++.h>
using namespace std;

/*
�ݳⶨ��

��n������� ���1-n ÿ��������һ������
���е��ݳ�ʼʱΪ������
�ֱ�������β���
ÿ�β�����ѡһ������x �����Ϊx��x���������ĵ��ݵĿ��ز���һ��
��������ŵĵƵ�����

input:
1<=T<=100 t���������
ÿ���һ��n��ʾ���ݸ���
�ڶ���������a b c��ʾÿ��ѡ�����

output:
����������ŵĵƵĸ���


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