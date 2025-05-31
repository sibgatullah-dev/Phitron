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
Student* fun(){
    Student* rahim= new Student(45,5,3.2);
    return rahim;
}

int main(){
    Student* obj = fun();
    cout<<(*obj).roll<<"  "<<obj->clas<<"  "<<obj->gpa<<endl;
    return 0;
}   
