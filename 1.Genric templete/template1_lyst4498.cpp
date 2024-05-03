#include<iostream>
using namespace std;

template <typename X>
X bigger(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}

template <class X,class Y>
class Group
{
    private:
        X a;
        Y b;
    public:
        void setData(X x,Y y) { a=x; b=y;}
        void showData(){ cout<<"\na="<<a<<" b="<<b;}

};
int main()
{
    Group <int,double> g1;
    Group <int,int> g2;
    g1.setData(10,20.5);
    g2.setData(4,6);
    g1.showData();
    g2.showData();
   
   
   
    //cout<<bigger(10,20);
    //cout<<bigger(3.4,2.1);
    cout<<endl;
    return 0;
}