#include<vector>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    vector<int>v1={11,55,44,22,66};
    vector<string> v2={"Bhopal","Ayodhya","Vellore"};
    /* How to access vector elements */

    //1. subscript operator [] | no bound check
    for(int i=0;i<=4;i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    //2. at() | with bound checking
    for(int i=0;i<v1.size();i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;
    //3. implicit iterator
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;
    //4. explicit iterator
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Add new element at the end
    v1.push_back(77);
    //Add new element at given position
    v1.insert(v1.begin()+1,25);
    v1.emplace(v1.begin(),90);
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;
    v1.erase(v1.begin()+1,v1.begin()+4);
     for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}