#include<iostream>
using namespace std;
#include <string>
#include<math.h>

int main()
{
    // int num[9] = {};
    int num_in = 0;
    int flag[10] = {};
    int ans = 0;
    cin>>num_in;
    int i = 0;
    int count = 0;
    while(num_in>0)
    {
        i = num_in%10;
        if(flag[i]==0)
        {
            // ans+=i*pow(10,count++);
            ans=ans*10+i;
            flag[i] = 1;
        }else{

        }
        num_in/=10;
    }
    cout << ans << endl;
    system("pause");
    return 0;
}