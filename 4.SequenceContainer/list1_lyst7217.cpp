#include<list>
#include<iostream>
using namespace std;
int main()
{
    list<int>l1={20,40,30,10};
    /* How to access list elements */

    
    //1. implicit iterator
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    //2. explicit iterator
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<l1.back()<<endl;
    cout<<l1.front()<<endl;
    cout<<l1.empty()<<endl;
    cout<<l1.size()<<endl;
    //delete all elements from the list
    //l1.clear();
    //Add new element at the end of list
    l1.push_back(80); //l1.emplace_back(80)
    //Add new element at the front of list
    l1.push_front(50); //l1.emplace_front(50)
     for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    //Remove last element
    l1.pop_back();
    //Remove first element
    l1.pop_front();
    //Add new element at given position
    l1.insert(l1.begin(),25); //l1.emplace(l1.begin(),25);
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    l1.reverse();
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    it=l1.erase(l1.begin());
    cout<<*it;

    return 0;
}
