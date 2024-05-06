#include<iostream>
#include<array>
using namespace std;
class Complex{
    private:
        int x;
        int y;
    public:
       Complex(int a,int b):x(a),y(b){}
        void show(){cout<<"a= "<<x<<" b= "<<y;}
        //operator overloading
        Complex operator+(Complex C){
            Complex temp(0,0);
            temp.x=x+C.x;
            temp.y=y+C.y;
            return temp;
        }
};
Complex sumComplex(array<Complex,5> carr){
        Complex C(0,0);
        for(auto x:carr)
            C=C+x;
        return C;
}
int main(){
    array<Complex,5> carr={Complex(2,3),Complex(4,-3),Complex(-2,6),Complex(-4,-2),Complex(5,1)};
        Complex C=sumComplex(carr);
        C.show();
        return 0;
}