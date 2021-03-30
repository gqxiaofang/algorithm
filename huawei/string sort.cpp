#include<iostream>
using namespace std;
#include <string>


int main()
{
    string str;
    string strArray[1000];
    int num = 0;
    int num_flag = 0;
    int exit_flag = 0;
    int count = 0;
    int len=0;
    cin>>num;
    num_flag = num;
    string temp;
    for(int i=0;i<num_flag; i++)
    {
        cin>>strArray[i];
    }
    for(int i=0; i<num_flag-i; i++)
    {
        for(int j=0; j<num_flag-i-1; j++)
        {
            if(strArray[i] > strArray[j])
            {
                string temp = strArray[i];
                strArray[i] = strArray[j];
                strArray[j] = temp; 
                // break;
            }    
        }
    }
    for(int i=0; i<num_flag; i++)
        cout << strArray[i] << endl;     
    system("pause");
    return 0;
}