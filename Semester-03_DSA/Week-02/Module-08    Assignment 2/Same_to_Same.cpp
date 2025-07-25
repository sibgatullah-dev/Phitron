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

void print_list(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void compare(Node* head1, Node* head2) {
    Node* tmp1 = head1;
    Node* tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) {
            cout << "NO" << endl;
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (tmp1 != NULL || tmp2 != NULL) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}


int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    // Input first list
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_in_tail(head1, tail1, val);
    }

    // Input second list
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_in_tail(head2, tail2, val);
    }
    compare(head1,head2);

    return 0;
}
