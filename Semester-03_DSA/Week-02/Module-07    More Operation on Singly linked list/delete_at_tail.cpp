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

void delete_at_any_pos(Node* &head,int idx,Node* &tail){
    Node* tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tail = tmp;
    delete deleteNode;
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
    cout<<"input the index of the node :"<<endl;
    int idx;cin>>idx;
    delete_at_any_pos(head,idx,tail);
    print_linked_list(head);

    return 0;
  }