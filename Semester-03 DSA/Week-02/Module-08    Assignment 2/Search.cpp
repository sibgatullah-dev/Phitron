  #include<bits/stdc++.h>
  using namespace std;
  class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
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


void find_the_index(Node* head, int target) {
    Node* tmp = head;
    int index = 0;
    while (tmp != NULL) {
        if (tmp->val == target) {
            cout << index << endl;
            return;
        }
        tmp = tmp->next;
        index++;
    }
    cout << -1 << endl; 
}

int main(){
   int tc;cin>>tc;
   while (tc--)
   {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        insert_in_tail(head,tail,val);
        
    }
    int num;cin>>num;
    find_the_index(head,num);
   }
   
    return 0;
}