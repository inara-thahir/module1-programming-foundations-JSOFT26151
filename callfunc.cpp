#include<iostream>
using namespace std;

 int add(int a, int b)
 {
    return a + b;
 }
 int square(int a)
 {
    return a * a;
 }
 bool isEven(int a)
 {
     return a % 2 ==0;
 }
 int findMax(int a, int b)
 {
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
 }
 int factorial(int a)
 {
    int a=1;
    for(int i=1; i<=a; i++) 
    a=a*i
    return a;
 }

 int main()
 {
    cout<<add(3,4)<<endl;
    cout<<square(5)<<endl;
    cout<<isEven(6)<<endl;
    cout<<findMax(7,8)<<endl;
    cout<<factorial(5)<<endl;
 }
 