#include<iostream>
#include<array>
using namespace std;
int main(){
    array<float,5> arr={3,6,2.4,7,1.3};
    float avg=0;
    array<float,5>::iterator it;
    for(it=arr.begin();it!=arr.end();it++)
        avg+=*it;
    cout<<"Avg:"<<avg/arr.size();
    return 0;
}