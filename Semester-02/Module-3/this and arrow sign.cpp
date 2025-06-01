#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int clas;
    double gpa;

    Student(int roll,int clas,double gpa)
    {
        this->roll = roll;
        this->clas = clas;
        this->gpa = gpa;
    }
};

int main(){
    Student rahim(45,5,3.2);
    cout<<rahim.roll<<"  "<<rahim.clas<<"  "<<rahim.gpa<<endl;
    return 0;
}