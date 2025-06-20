#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp(Student l, Student r) {
    if (l.total_marks > r.total_marks) {
        return true;
    } else if (l.total_marks == r.total_marks) {
        return l.id < r.id;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}