#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={3,2,5,1,4};// 0 for new element not garbage
        for(int i=1;i<v.size()-1;i++){
            if(v[i-1]>v[i] && v[i+1]>v[i])
                cout<<v[i]<<endl;
        }
    return 0;
}