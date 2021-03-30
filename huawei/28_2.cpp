#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
 
int p[100];
int visited[100];
int map[100][100];
int n1=0;
int n2=0;
bool prime (int x){
    for (int i=2; i<=sqrt(x); i++){
        if (x%i ==0){
            return false;
        }
    }
    return true;
}
int match (int i){
    for (int j=0; j<n2; j++){
        if ( map[i][j] && visited[j]==0 ){
            visited[j]=1;
            if ( p[j]==0 || match(p[j])) {
                p[j]=i;
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int n;
    while(cin>>n){
        vector<int> odd;
        vector<int> even;
        n1=0;
        n2=0;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if (x%2){
                odd.push_back(x);
                n1++;
            }
            else {
                even.push_back(x);
                n2++;
            }
        }
        for (int i=0; i<n1;i++){
            for (int j=0; j<n2; j++){
                map[i][j]=prime(odd[i]+even[j]);
            }
        }
        int cnt=0;
        for (int j=0;j<100;j++){
                p[j]=0;
            }
        for (int i=0; i<n1; i++){
            for (int j=0;j<100;j++){
                visited[j]=0;
            }
            if ( match(i) ){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}