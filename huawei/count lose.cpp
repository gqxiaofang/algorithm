#include<iostream>
using namespace std;
#include <string>


int main()
{
int count = 0;
    int a = 0, total = 0;
     
    int cur;
     
    while(cin>>cur){
        if(cur < 0)
            count++;
        else{
            a++;
            total += cur;
        }
    }
    double res = 0;
    if(a == 0)
        res = 0;
    else
        res = (double) total / (double) a;
     
    cout<<count<<endl;
    printf("%.1f\n",res);
    // system("pause");
    return 0;
}
