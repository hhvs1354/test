#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string>
#include <math.h>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int input = 0;
    cin>>input;
    char tem[3]={' '};
    gets(tem);
    for(int i = 0; i<input; i++)
    {
        char arr[4] = {' '};
        gets(arr);
        if(arr[0]!=arr[2])
        {
            cout<<-1;
            continue;
        }
        char arr1[1001] = {' '};
        gets(arr1);
        int temp = 0;
        int sum = 0;
        for(int a = 0; a<1000; a++)
        {
            if(arr1[a]==arr[temp])
            {
                if(temp==2)
                {
                    sum++;
                    temp=0;
                }
                else
                {
                    temp++;
                }
            }
            else
            {
                temp = 0;
            }
        }
        cout<<sum<<endl;
    }
    system("pause");
}

