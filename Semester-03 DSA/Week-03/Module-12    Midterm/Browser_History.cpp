#include <bits/stdc++.h>
using namespace std;


// Node class starts with constructor
class Node {
public:
    string url;
    Node* next;
    Node* prev;

    Node(string url) {
        this->url = url;// website address
        this->next = NULL;
        this->prev = NULL;
    }
};
// Node class ended


// Inserting the input at tail
void insert_in_tail(Node* &head, Node* &tail, string url, unordered_map<string, Node*> &addressMap) { //stores the node in a map (addressMap) for quick lookup by address.
    Node* newnode = new Node(url);
    addressMap[url] = newnode;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}
// Inserting ended

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    unordered_map<string, Node*> addressMap; // Storing Node in a map

    string url;
    while (cin >> url && url != "end") { // Reading input
        insert_in_tail(head, tail, url, addressMap);
    }

    int Q;
    cin >> Q;
    cin.ignore(); 

    Node* current = head;

    for (int i = 0; i < Q; ++i) {
        string commandLine;
        getline(cin, commandLine);

        if (commandLine.substr(0, 5) == "visit") {
            string address = commandLine.substr(6);
            if (addressMap.count(address)) { // visit address
                current = addressMap[address];
                cout << current->url << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (commandLine == "next") {
            if (current && current->next) { // visit next
                current = current->next;
                cout << current->url << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (commandLine == "prev") {
            if (current && current->prev) { // visit prevuious
                current = current->prev;
                cout << current->url << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
