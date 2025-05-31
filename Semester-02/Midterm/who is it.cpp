#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        int id;
        string name;
        char section;
        int marks;
};


int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        Student students[3];

        for (int i = 0; i < 3; i++) {
            cin>>students[i].id>>students[i].name>>students[i].section>>students[i].marks;
        }

        Student topstudent = students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].marks>topstudent.marks) {
                topstudent= students[i];
            } else if (students[i].marks==topstudent.marks&&students[i].id<topstudent.id) {
                topstudent =students[i];
            }
        }

        cout<<topstudent.id <<" "<<topstudent.name<<" "<<topstudent.section<<" "<<topstudent.marks<<endl;
    }
    
    return 0;
}