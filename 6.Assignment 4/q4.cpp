#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={3,2,5,1};// 0 for new element not garbage
        vector<int>::iterator it;
        for(it=v.begin();it!=v.end();it++)
            cout<<*it<<endl;
    return 0;
}