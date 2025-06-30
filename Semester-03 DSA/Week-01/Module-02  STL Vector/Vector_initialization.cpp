// Vector is actially a dynamic array

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v0;//-- Construct a vector with 0 element
    vector<int>v1(10);//-- Construct a vector with N element
    vector<int>v2(10,1);//-- Construct a vector with N elements and all the values will be V (here all the 10 elements are 1)
    vector<int>v3(v2);//-- Construct a vector by copying another vector
    int a[5] = {1,2,3,4,5};
    vector<int>v4(a,a+5);//-- Construct a vector by copying an N sized array
    vector<int>v5 =  {1,2,3,4};//-- Construct a vector with default values
    return 0;
    //-- You can access the values of a vector array with a loop or every other way like a regular array
}