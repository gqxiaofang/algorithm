#include <iostream>
#include <string>
using namespace std;
#include <algorithm>
#include <functional>
struct position{
    int x;
    int y;
};
const int N = 2e5 + 10;
int a[N];
int find(int x){
    if(x == a[x]){
        return x;
    }
    return x = a[x] = find(a[x]);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int num = 0;
        int circle = 0;
        for(int i = 1;i <= n; i++){
            a[i] = i;
        }
        for(int i = 1;i <= m; i++){
            int x,y;
            cin >> x >> y;
            if(x == y) 
                num++;
            else{
                long num_x = find(x),num_y = find(y);
                if(num_x == num_y){
                    circle++;
                }else
                {
                    a[x] = y;
                }
            }
        }
        cout << m - num + circle << endl;
    }
    system("pause");
    return 0;
}