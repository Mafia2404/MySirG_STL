#include<array>
#include<iostream>
using namespace std;
int main()
{
    array <int,5>a1={10,50,30,20,40};
    array <double,4> a2={3.5,6.1,9.2,2.1};
    array <int,5>a3=a1;
    /* How to access array elements */

    //1. subscript operator [] | no bound check
    for(int i=0;i<=4;i++)
        cout<<a1[i]<<" ";
    cout<<endl;

    //2. at() | with bound checking
    for(int i=0;i<a1.size();i++)
        cout<<a1.at(i)<<" ";
    cout<<endl;
    //3. implicit iterator
    for(auto x:a1)
        cout<<x<<" ";
    cout<<endl;
    //4. explicit iterator
    array<int,5>::iterator it;
    for(it=a1.begin();it!=a1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<a1.back()<<endl;
    cout<<a1.front()<<endl;
    cout<<a1.empty()<<endl;
    cout<<*a1.data()<<endl;
    cout<<a1.size()<<endl;


    cout<<endl;
    return 0;
}