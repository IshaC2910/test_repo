#include<bits/stdc++.h>
using namespace std;
void revarr(char arr[],int strt,int end)
{
    int t;
    while(strt<end)
    {
        t=arr[strt];
        arr[strt]=arr[end];
        arr[end]=t;
        strt++;
        end--;
    }
}
void print(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cout<<"enter size of array:";
    cin>>size;
    char arr[size];
    cout<<"\nenter array elements:"<<endl;
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cout<<"\noriginal array:"<<endl;
    print(arr,size);
    revarr(arr,0,(size-1));
    cout<<"\nreversed array:"<<endl;
    print(arr,size);
    return 0;
}
