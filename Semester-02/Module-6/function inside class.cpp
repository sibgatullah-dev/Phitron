#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout<<"Hello from "<<name<<endl;
    }
};
int main(){
    student sakib("Sakib Ahmed",23);
    cout<<sakib.name<<endl;
    sakib.hello();
    student rakib("Rakib Ahmed",21);
    rakib.hello(); 
    return 0;
}