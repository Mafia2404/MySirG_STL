#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list <int> f1={20,50,70,10,30};
    /* How to access list elements */

    
    //1. implicit iterator
    for(auto x:f1)
        cout<<x<<" ";
    cout<<endl;
    //2. explicit iterator
    forward_list<int>::iterator it;
    for(it=f1.begin();it!=f1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<*f1.begin()<<endl;
    cout<<*f1.before_begin()<<endl;

    cout<<f1.empty()<<endl;
    cout<<f1.front()<<endl;
    f1.insert_after(f1.before_begin(),100); //f1.emplace_after(f1.begin(),100);

    for(auto x:f1)
        cout<<x<<" ";
    cout<<endl;
    f1.erase_after(f1.before_begin());
    for(auto x:f1)
        cout<<x<<" ";
    cout<<endl;
    f1.push_front(80);
    f1.emplace_front(12);
    f1.sort();
    for(auto x:f1)
        cout<<x<<" ";
    cout<<endl;
    f1.pop_front();
    f1.reverse();
    f1.clear(); //make f1 empty

    cout<<endl;
    return 0;
}