#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,dp[105][105],a[105][105];
    cin >> t;           //t个数
    while (t--) {       
        cin >> n;       //n层 
        for (int i = 1; i <= n;i++) {
            for(int j = 1; j <= i; j++) {
                cin >> a[i][j];
            }
        }
        memset(dp, 0, sizeof(dp));  //
        for(int i = 1; i <= n; i++){
            dp[n][i] = a[n][i];     //最底层
        }
        for(int i = n-1; i >= 1; i--){
            for(int j = 1; j <= i; j++) {
                dp[i][j] = max(dp[i+1][j],dp[i+1][j+1])+a[i][j];
            }
        }
        cout << dp[1][1] << endl;
    }
    system("pause");
    return 0;
}