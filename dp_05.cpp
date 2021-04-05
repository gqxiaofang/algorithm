#include <bits/stdc++.h>
using namespace std;

/*
给定一个正整数s, 判断一个数组arr中，是否有一组数字加起来等于s。
*/

bool rec_subset(int arr[],int i,int s)
{
    if(s==0) return true;
    else if(i==0) return arr[0]==s;
    else if(arr[i]>s){
        return rec_subset(arr,i-1,s);
    }else{
        return (rec_subset(arr,i-1,s)||rec_subset(arr,i,s-arr[i]));
    }
}
int dp_subset(int arr[],int len,int s)
{
    int subset[len][s+1];
    memset(subset,0,sizeof(subset));
    for(int i = 0; i < len; i++){
        subset[i][0] = 1; 
    }
    if(arr[0] <= s){
        subset[0][arr[0]] = 1;
    }
    for(int i = 1; i < len; i++){
        for(int j = 1; j <= s; j++) {
            if(arr[i] > j){
                subset[i][j] = subset[i-1][j];
            }else{
                subset[i][j] = (subset[i-1][j] or subset[i-1][j-arr[i]]);
            }
        }
    }
    return subset[len-1][s];
}
int main()
{
    int arr[] = {3, 34, 4, 12, 5, 2};
    int s = 9;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << rec_subset(arr,len,s) << endl;
    cout << dp_subset(arr,len,s) << endl;
    system("pause");
    return 0;
}