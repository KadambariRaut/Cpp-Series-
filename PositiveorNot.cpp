#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    if(n>0)
    cout<<"The number is +ve";
    else if(n<0)
    cout<<"The number is -ve";
    else
    cout<<"Zero";

    return 0;
}