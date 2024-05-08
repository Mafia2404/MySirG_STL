#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque <int>d1 = {10,35,22,18,70};
    /* How to access deque elements? */

    //1. []
    for(int i=0;i<d1.size();i++)
        cout<<d1[i]<<" ";
    cout<<endl;

    //2. at()
    for(int i=0;i<d1.size();i++)
        cout<<d1.at(i)<<" ";
    cout<<endl;
    //3. Implicit Iterator
    for(auto x:d1)
        cout<<x<<" ";
    cout<<endl;

    //4. Explicit Iterator
    deque<int>::iterator it;
    for(it=d1.begin();it!=d1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    
    //deque methods
    cout<<d1.empty()<<endl;
    cout<<d1.front()<<endl;
    cout<<d1.back()<<endl;
    d1.push_front(20); //d1.emplace_front(20);
    d1.push_back(90); //d1.emplace_back(90);
    for(auto x:d1)
        cout<<x<<" ";
    cout<<endl;
    d1.pop_front();
    d1.pop_back();
    for(auto x:d1)
        cout<<x<<" ";
    cout<<endl;

    d1.insert(d1.begin()+2,50); //d1.emplace(d1.begin()+2,50);
    for(auto x:d1)
        cout<<x<<" ";
    cout<<endl;
    d1.erase(d1.end()-2);
    
    cout<<endl;
    return 0;
}