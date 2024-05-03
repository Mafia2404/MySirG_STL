#include<iostream>
using namespace std;
template <typename X>
X small(X a,X b){
    if(a>b)
        return b;
    return a;
}
int main(){
    cout<<small(10,20);
    return 0;
}