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
  void insert_in_tail(Node* &head,Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head==NULL){// Corner case
        head = newnode;
        tail = newnode;
        return;
    }

    Node* tmp = head;
    while (tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tail->next = newnode;
    tail = newnode;
    
}

void delete_at_head(Node* &head){
    Node* delete_node = head;
    head = head->next;
    delete delete_node;
}

void print_linked_list(Node* head){
    Node* tmp= head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
    
}

  int main(){
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
    delete_at_head(head);
    print_linked_list(head);

    return 0;
  }