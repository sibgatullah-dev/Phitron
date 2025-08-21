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

void insert_in_head(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
}

void insert_in_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void delete_at_index(Node*& head, Node*& tail, int index) {
    if (head == NULL) return;
    if (index == 0) {
        Node* delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL) tail = NULL;
        return;
    }
    
    Node* temp = head;
    int i = 0;
    while (temp != NULL && i < index - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL) return;

    Node* delNode = temp->next;
    temp->next = delNode->next;
    if (delNode == tail) tail = temp;
    delete delNode;
}

void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;
        if (x == 0) {
            insert_in_head(head, tail, v);
        } else if (x == 1) {
            insert_in_tail(head, tail, v);
        } else if (x == 2) {
            delete_at_index(head, tail, v);
        }
        print_list(head);
    }

    return 0;
}
