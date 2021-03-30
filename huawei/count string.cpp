#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(void)
{  
    char str[1000];
    while(cin>>str)
    {
         
        int count[256]={0};
        int max=0;
        for(int i=0;i<strlen(str);i++)
        {
            count[str[i]]++;
            if(count[str[i]]>max)
            {
                max=count[str[i]];
            }
        }
        while(max)
        {
            for(int i=0;i<256;i++)
            {
                if(count[i]==max)
                {
                    printf("%c",i);
                }
            }
            max--;
        }
        printf("\n");
    }
    return 0;
}