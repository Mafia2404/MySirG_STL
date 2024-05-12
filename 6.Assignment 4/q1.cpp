#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={3,2,5,1};// 0 for new element not garbage
        for(int i=0;i<v.size();i++)
        cout<<v[i];
    return 0;
}