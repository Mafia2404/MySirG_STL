#include<iostream>
using namespace std;
template <typename X>
X great(X a,X b){
if(a>b)
    return a;
else 
    return b;
}
int main(){
    
    cout<<great(10,20);
    return 0;
}