#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main()
{
    int x, y ,sum;
    cout<<"Enter x:"<<endl;
    cin>>x;
    cout<<"Enter y :"<<endl;
    cin>>y;
    for(int i = x ; i<=y;i++)
    sum = sum + i ;
    cout<<sum;
    return 0 ;
}
