#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<float> v={3.2,2,5.9,2.1};
        for(int i=0;i<v.size();i++)
        cout<<v.at(i);
    return 0;
}