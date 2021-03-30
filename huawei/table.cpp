#include<iostream>
using namespace std;
#include <string>


int main()
{
    int tab[1000]={0};
    int num=0;
    int index=0;
    int value=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>index;
        cin>>value;
        tab[index]+=value;
        // tab[num][0]=index;
        // tab[num][1]+=value;
    }
    for(int i=0;i<1000;i++)
    {
        if(tab[i]!=0)
        {
            cout << i << " " << tab[i] << endl;
        }
    }
    system("pause");
    return 0;
}