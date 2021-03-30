#include<iostream>
using namespace std;
#include<stdlib.h>
#include <string>
#include<time.h>

int main()
{
    srand(time(NULL));
    int N,n;
    int a[1001]={0,0};
    cin >> N;
    while(N--){
        cin>>n;
        a[n]=1;
    }
    for(int i=0;i<1001;i++)
    {
        if(a[i])
        {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}