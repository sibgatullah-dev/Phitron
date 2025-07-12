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

void remove_duplicates(Node* head) {
    Node* current = head;

    while (current != NULL) {
        Node* prev = current;
        Node* runner = current->next;

        while (runner != NULL) {
            if (runner->val == current->val) {
                prev->next = runner->next;
                delete runner;
                runner = prev->next;
            } else {
                prev = runner;
                runner = runner->next;
            }
        }

        current = current->next;
    }
}

void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_in_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_list(head);

    return 0;
}
