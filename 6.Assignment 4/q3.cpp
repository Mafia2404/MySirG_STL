#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> v={"apple","mango","grapes"};// 0 for new element not garbage
      //implicit way
      for(auto x:v)
        cout<<x<<endl;
      
    return 0;
}