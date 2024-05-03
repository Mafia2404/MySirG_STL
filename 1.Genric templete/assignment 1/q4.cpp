#include<iostream>
using namespace std;
template <typename X>
void sorting(X arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
        }
    }
}
int main()
{
    float arr[]={6,8,10,1.1,2,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorting(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
        return 0;
}