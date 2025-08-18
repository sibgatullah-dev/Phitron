#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public:
    bool operator()(Student l, Student r){// This is the syntax of operator()() function
        if(l.marks<r.marks) return true; // This works in reverse in priority queue as it will start from higest number to lowest number in decending order
        else if(l.marks>r.marks) return false;// If the marks are same then sorting by the lowest roll
        else {
            return l.roll>r.roll;
        }

    }
};

int main(){
    priority_queue<Student, vector<Student>,cmp> pq; // this is the syntax of custom queue compare
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        string name; int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);   
    }

    while (!pq.empty())
    {
        cout<<pq.top().name<<' '<<pq.top().roll<<' '<<pq.top().marks<< endl;
        pq.pop();
    }
    
    return 0;
}