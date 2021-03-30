#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;

//maxn
const int maxn = 100;
int n1,n2;
int line[maxn][maxn],used[maxn],nxt[maxn];  

bool Find(int x){
    for(int j = 0; j < n2; j++){
        if(line[x][j] && used[j] == 0){
            used[j] = 1;
            if(nxt[j] == -1 || Find(nxt[j])){
                nxt[j] = x; 
                return true;
            }
        }
    }
    return false;
}

int match(){
    int sum = 0;
    for(int i = 0; i < n1; i++){
        memset(used,0,sizeof(used));  //¹éÁã
        if(Find(i)){
            sum++;
        }
    }
    return sum;
}

bool is_prime(int num){
    int m = num;
    for(int i = 2; i <= sqrt(m); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    while(cin >> n){
        memset(line, 0, sizeof(line)); 
        memset(nxt, -1, sizeof(nxt)); 
        vector<int> even; //Å¼Êý
        vector<int> odd; //ÆæÊý
        int val = 0;
        for(int i = 0; i < n; i++){
            cin >> val;
            if(val % 2 == 0){
                even.push_back(val);
            }else{
                odd.push_back(val);
            }
        }
        n2 = even.size();
        n1 = odd.size();
        for(int i = 0;i < n1; i++){
            for(int j = 0; j < n2; j++){
                line[i][j] = is_prime(odd[i] + even[j]);
            }
        }
        cout << match() << endl;
    }
    system("pause");
    return 0;
}