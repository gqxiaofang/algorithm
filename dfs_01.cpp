#include <bits/stdc++.h>
#include <string>
using namespace std;

/*  
油田问题
Sample Input
1 1
*
3 5
@@*
@
@@*
1 8
@@**@*
5 5
**@
@@@
@*@
@@@*@
@@**@
// 0 0

Sample Output
0
1
2
2
*/

char m[110][110];
int move[8][2] = {1,0, -1,0, 0,1, 0,-1, 1,1, -1,-1, 1,-1, -1,1};
int h,w;
int visited[110][110];

int check(int next_x,int next_y){   //检查条件
    if(next_x >= 0 && next_x <=h && next_y >= 0 && next_y <=w)
        return 1;
    return 0;
}

void dfs(int x, int y){
    int next_x,next_y;  
    m[x][y] = '*';                //visited
    // visited[x][y] = 1;               
    for(int i=0; i<8; i++){         //遍历  
        next_x = x + move[i][0];    
        next_y = y + move[i][1];    
        if(check(next_x,next_y)) { //未越界
            if(m[next_x][next_y] == '@'){                         //
                dfs(next_x, next_y);
            }
        }
    }
}

int main()
{
    int i,j,sum;
    while(cin >> h >> w){
        memset(visited,0,sizeof(visited));
        for(i = 0;i<h;i++){ 
            cin >> m[i];
        }
        sum = 0;
        for(i = 0;i <h;i++){
            for(j=0;j<w;j++){
                if(m[i][j] == '@'){
                    dfs(i,j);
                    sum++;      
                }
            }
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}

