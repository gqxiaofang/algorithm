#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{
    int i,j,n,len,high,low,mid,temp;
    int stu[10000];
    int up[10000];  //记录每位同学的最大上升子序列
    int down[10000]; //记录每位同学的最大下降子序列
    while (cin >> n)
    {
        for(i=0;i<n;i++){
            cin >> stu[i];
            up[i]=1;    //每位同学的最大上升下降子序列初始值为1
            down[i]=1;
        }
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(stu[j]<stu[i] && up[i]<up[j]+1 ){     //前i位同学的最大上升子序列的最大值再加1
                    up[i] = up[j]+1;
                }
            }
        }
        for(i=n-1;i >= 0; i--){
            for(j=n-1;j > i; j--){
                if(stu[j]<stu[i] && down[i]<down[j]+1 ){    //前i位同学的最大下降子序列的最大值再加1
                    down[i] = down[j]+1;
                }
            }
        }
        int max  = 0;           //设每位同学所形成的最长合唱队形的最大值初值为0
        int index = 0;          //设最大值对应的索引为0
        for(i=0;i<n;i++){
            if(up[i]+down[i]-1>max){
                max = up[i]+down[i]-1;  //求得每位同学所形成的最长合唱队性的最大值
                index = i;  //求得对应的索引
            }
        }
        cout << n-max << endl;
    }
    system("pause");
    return 0;
}