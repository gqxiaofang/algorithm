#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    int n = 0;
    while(cin >> n) {
        vector<string>v;
        int i,j;
        string m;
        for(i=0;i<n;i++) {
            cin >> m;
            v.push_back(m);
        }
        
        string target;
        cin >> target;
        int k;
        cin>> k;
    
        vector<string>pur;
        string str = target;
        
        sort(str.begin(), str.end());
        pur.push_back(str);
        //È«ÅÅÁĞ
        while(next_permutation(str.begin(), str.end())){
            pur.push_back(str);
        }
        int count = 0;
        vector<string>b;
        int flag = 0;
        for(i=0;i<v.size();i++){
            for(j=0;j<pur.size();j++){
                if(v[i]==pur[j]&& v[i]!=target){
                    count++;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                b.push_back(v[i]);
                flag= 0;
            }
        }
        sort(b.begin(), b.end());
        cout << count << endl;
        if(b.size()>=k){
            cout << b[k-1] << endl;
        }

    }

    system("pause");
    return 0;
}