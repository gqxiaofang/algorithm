#include <bits/stdc++.h>
using namespace std;

/*
������������DFS����Թ�����
*/
int m,n,startx,starty,p,q,num_min=99999;   //�յ�����
int a[100][100];  //1��ʾ�յ� 2��ʾ�ϰ���
int visited[100][100];  //0��ʾδ���� 1��ʾ����
int dx[4] = {0,1,0,-1}; 
int dy[4] = {1,0,-1,0}; 
void dfs(int x,int y,int step){
    if(x==p&&y==q){
        if(step < num_min){
            num_min = step;
        }
        return;
    }
    //˳ʱ����̽ �� �� �� ��
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