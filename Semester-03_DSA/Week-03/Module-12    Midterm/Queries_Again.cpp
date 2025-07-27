#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int get_length(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void insert_at_position(Node*& head, Node*& tail, int index, int val) {
    int len = get_length(head);
    if (index < 0 || index > len) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newnode = new Node(val);

    if (index == 0) {
        // Insert at head
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    } else if (index == len) {
        // Insert at tail
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    } else {
        // Insert at middle
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    // Print result after valid insertion
    cout << "L -> ";
    Node* tempL = head;
    while (tempL != NULL) {
        cout << tempL->val << " ";
        tempL = tempL->next;
    }
    cout << endl;

    cout << "R -> ";
    Node* tempR = tail;
    while (tempR != NULL) {
        cout << tempR->val << " ";
        tempR = tempR->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int Q;
    cin >> Q;

    while (Q--) {
        int X, V;
        cin >> X >> V;
        insert_at_position(head, tail, X, V);
    }

    return 0;
}
