#include<iostream>
#include<array>
#include<limits.h>
using namespace std;
int main(){
    array<int,5> arr;
    array<int ,5>::iterator it;
    cout<<"Enter 5 elements";
    for(it=arr.begin();it!=arr.end();it++)
        cin>>*it;
    int max=INT_MIN;
    for(it=arr.begin();it!=arr.end();it++)
        if(max<*it)
            max=*it;
    
    cout<<"Max is:"<<max;
    return 0;
}