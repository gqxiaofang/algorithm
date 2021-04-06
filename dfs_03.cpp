#include <bits/stdc++.h>
using namespace std;

/*
深搜优先搜索DFS解决迷宫问题
*/
int m,n,startx,starty,p,q,num_min=99999;   //终点坐标
int a[100][100];  //1表示空地 2表示障碍物
int visited[100][100];  //0表示未访问 1表示访问
int dx[4] = {0,1,0,-1}; 
int dy[4] = {1,0,-1,0}; 
void dfs(int x,int y,int step){
    if(x==p&&y==q){
        if(step < num_min){
            num_min = step;
        }
        return;
    }
    //顺时针试探 右 下 左 上
    for(int k=0;k<3;k++){
        int tx,ty;
        tx=x+dx[k];
        ty=y+dy[k];
        if(a[tx][ty]==1 && visited[tx][ty]==0){
            visited[tx][ty]=1;
            dfs(tx,ty,step+1);
            visited[tx][ty]=0;
        }
    }
    return;
}
/*
5 4
1 1 2 1
1 1 1 1
1 1 2 1
1 2 1 1
1 1 1 2
1 1 4 3
*/
int main()
{
    cin >> m >> n;
    for(int i=1; i <= m; i++){
        for(int j = 1;j <= n; j++){
            cin >> a[i][j];
        }
    }
    cin >> startx >> starty;
    cin >> p >> q;
    visited[startx][starty] = 1;
    dfs(startx,starty,0);
    cout << num_min << endl;
    system("pause");
    return 0;
}