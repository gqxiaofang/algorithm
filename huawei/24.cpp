#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{
    int i,j,n,len,high,low,mid,temp;
    int stu[10000];
    int up[10000];  //��¼ÿλͬѧ���������������
    int down[10000]; //��¼ÿλͬѧ������½�������
    while (cin >> n)
    {
        for(i=0;i<n;i++){
            cin >> stu[i];
            up[i]=1;    //ÿλͬѧ����������½������г�ʼֵΪ1
            down[i]=1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(stu[j]<stu[i] && up[i]<up[j]+1 ){     //ǰiλͬѧ��������������е����ֵ�ټ�1
                    up[i] = up[j]+1;
                }
            }
        }
        for(i=n-1;i >= 0; i--){
            for(j=n-1;j > i; j--){
                if(stu[j]<stu[i] && down[i]<down[j]+1 ){    //ǰiλͬѧ������½������е����ֵ�ټ�1
                    down[i] = down[j]+1;
                }
            }
        }
        int max  = 0;           //��ÿλͬѧ���γɵ���ϳ����ε����ֵ��ֵΪ0
        int index = 0;          //�����ֵ��Ӧ������Ϊ0
        for(i=0;i<n;i++){
            if(up[i]+down[i]-1>max){
                max = up[i]+down[i]-1;  //���ÿλͬѧ���γɵ���ϳ����Ե����ֵ
                index = i;  //��ö�Ӧ������
            }
        }
        cout << n-max << endl;
    }
    system("pause");
    return 0;
}