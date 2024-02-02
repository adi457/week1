#include<iostream>
using namespace std;
int main()
{
    int i,key,n,arr[10],x,flag=0,j;
    cout<<"ENTER NUMBER OF ITERATION"<<endl;
    cin>>x;
    for(i=1;i<=x;i++)
    {
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>n;
    cout<<"ENTER ELEMENT"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"ENTER KEY"<<endl;
    cin>>key;
    for(j=0;j<n;j++)
    {
    if(arr[j]==key)
    {
        flag=0;
        cout<<"ELEMENT FOUND"<<endl;
        break;
    }
    else
    {
        flag=1;
    }
    }
    if(flag==1)
    {
        cout<<"ELEMENT NOT FOUND";
    }
    }
    
}