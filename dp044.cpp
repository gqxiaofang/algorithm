#include <bits/stdc++.h>
using namespace std;
/*
一组数据中 不能有相邻的数 使和最大
*/
const int maxn = 1000;

int rec_opt(int arr[],int i){   //递归产生很多重复问题 时间复杂度高
    if(i==0)    return arr[0];
    else if(i==1) return max(arr[1],arr[0]);
    else
        return max(rec_opt(arr,i-1),rec_opt(arr,i-2)+arr[i]); 
}
int dp_opt(int arr[],int size){ //非递归 记忆性
    int dp[size];
    dp[0] = arr[0];
    dp[1] = max(arr[1],arr[0]);
    for(int i = 2;i < size;i++){
        dp[i] =  max(dp[i-1],dp[i-2]+arr[i]);
    }
    return dp[size-1];
}
int main()
{
    int arr[] = {1, 2, 4, 1, 7, 8, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << rec_opt(arr,size-1) << endl;
    cout << dp_opt(arr,size) << endl;
    system("pause");
    return 0;
}