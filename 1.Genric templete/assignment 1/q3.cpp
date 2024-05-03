#include<iostream>
using namespace std;
template <typename X>
void printt(X arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
}
int main(){
    float arr[]={1.1,2,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    printt(arr,n);
    return 0;
}