#include<iostream>
using namespace std;
template <typename X>
X greater(X a, X b)
{
    if(a>b)
        return a;
    else 
        return b;
}
template <typename X>
X smaller(X a, X b)
{
    if(a<b)
        return a;
    else 
        return b;
}
template<typename X>
void printArray(X a[],int size)
{
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
template<typename X>
void sortArray(X a[],int size)
{
    int r,temp,i;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
template<typename X>
X maxValueInArray(X a[],int size)
{
    X max;
    max=a[0];

    for(int i=1;i<size;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}