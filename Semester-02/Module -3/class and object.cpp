#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    Student a,b,c;

    cout<<"student a"<<endl;
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore();
    
    cout<<"student b"<<endl;
    cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;
    cin.ignore();

    cout<<"student c"<<endl;
    cin.getline(c.name,100);
    cin>>c.roll>>c.gpa;
    cin.ignore();

    cout<<a.name<<"  "<<a.roll<<"  "<<a.gpa<<endl;
    cout<<b.name<<"  "<<b.roll<<"  "<<b.gpa<<endl;
    cout<<c.name<<"  "<<c.roll<<"  "<<c.gpa<<endl;
    return 0;
}