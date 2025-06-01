#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int clas;
    double gpa;

    Student(int r,int c,double g)
    {
        roll = r;
        clas = c;
        gpa = g;
    }
};

int main(){
    Student rahim(45,5,3.2);
    

    cout<<rahim.roll<<"  "<<rahim.clas<<"  "<<rahim.gpa<<endl;
    return 0;
}