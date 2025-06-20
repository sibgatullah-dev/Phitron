#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
};

int main() {
    int n;
    cin >> n;
    
    Student students[n];
    char sections[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
        sections[i] = students[i].section;
    }
    
    reverse(sections, sections + n);
    
    for (int i = 0; i < n; ++i) {
        students[i].section = sections[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
    }
    
    return 0;
}