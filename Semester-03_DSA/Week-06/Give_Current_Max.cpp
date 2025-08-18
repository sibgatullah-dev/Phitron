#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll;
    int marks;
};

// Custom comparator for max-heap
struct Compare {
    bool operator()(const Student &a, const Student &b) const {
        if (a.marks == b.marks) {
            return a.roll > b.roll; // smaller roll has higher priority
        }
        return a.marks < b.marks; // larger marks has higher priority
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    priority_queue<Student, vector<Student>, Compare> pq;

    // Insert initial students
    for (int i = 0; i < N; i++) {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push(s);
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 0) {
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            if (!pq.empty()) {
                auto top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << "\n";
            } else {
                cout << "Empty\n";
            }
        } 
        else if (type == 1) {
            if (!pq.empty()) {
                auto top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << "\n";
            } else {
                cout << "Empty\n";
            }
        } 
        else if (type == 2) {
            if (!pq.empty()) {
                pq.pop();
                if (!pq.empty()) {
                    auto top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << "\n";
                } else {
                    cout << "Empty\n";
                }
            } else {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}
