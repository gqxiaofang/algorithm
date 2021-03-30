#include <iostream>
using namespace std;
#include <set>


int main()
{
    int N,value;
    set<int>s;
    while(cin>>N){
        s.clear();
        while(N--){
            cin>>value;
            s.insert(value);
        }
        for(set<int>::iterator it=s.begin();it!=s.end();it++){
            cout << *it <<endl;
        }
    }    
    system("pause");
    return 0;
}