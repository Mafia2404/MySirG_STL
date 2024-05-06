#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int ,5> arr={2,6,1,7,8};
    sort(arr.begin(),arr.end());
    //this also works
    for(int i=0;i<5;i++)
        cout<<arr[i];
        //or
        cout<<endl;
    array<int,5>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
        cout<<*it;
    return 0;

}