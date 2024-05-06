#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int ,5> arr={3,2,5,1};// 0 for new element not garbage
    //print r to l using explicit iterator
    array<int,5>::reverse_iterator it;
    for(it=arr.rbegin();it!=arr.rend();it++)
        cout<<*it;
    return 0;
}