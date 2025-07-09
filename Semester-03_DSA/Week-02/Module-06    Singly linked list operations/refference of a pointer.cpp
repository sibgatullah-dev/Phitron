#include<bits/stdc++.h>
using namespace std;

void fun(int* p){//-- IF we take the pointer with it's refference like this (&p) the pointer address of fun and main will be same and the valu put in them will change 
    int f = 50;
    p = &f;// after changing the address in pointer the pointer in fun function will print different then the main fun
    cout<<"Pointer in fun : "<<*p<<endl;
//-- The address of the pointer in fun and main are different that's why we can put different address in these pointer
cout<<"Pointer address of fun: "<<&p<<endl;
}

int main(){
    int x = 10;
    int* p = &x;
    fun(p);
    cout<<"pointer in main : "<<*p<<endl;

cout<<"Pointer address in main: "<<&p<<endl;//-- The address are different 
    return 0;
}