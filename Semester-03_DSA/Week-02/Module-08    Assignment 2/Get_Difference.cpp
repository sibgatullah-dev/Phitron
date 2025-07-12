#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_in_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

int highest_value(Node* head) {
    Node* j = head;
    for (Node* i = head; i != NULL; i = i->next) {
        if (i->val > j->val) {
            j = i;
        }
    }
    return j->val;
}

int lowest_value(Node* head) {
    Node* j = head;
    for (Node* i = head; i != NULL; i = i->next) {
        if (i->val < j->val) {
            j = i;
        }
    }
    return j->val;
}

void difference(int high, int low) {
    cout << high - low << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_in_tail(head, tail, val);
    }

    if (head == NULL) {
        cout << "List is empty!" << endl;
        return 0;
    }

    int high = highest_value(head);
    int low = lowest_value(head);
    difference(high, low);

    return 0;
}
