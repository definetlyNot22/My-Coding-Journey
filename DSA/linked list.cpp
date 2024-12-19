// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    node(int new_data){
        data=new_data;
        next=NULL;
    }
};
node* start(struct node* head,int data){
    struct node* ptr=new node(data);
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
node* between(struct node* head,int index,int data){
    struct node* ptr=new node(data);
    struct node* p=head;
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
node* end(struct node* head,int data){
    node* ptr=new node(data);
    node* p=head;
    ptr->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
node* traverse(struct node* head){
    struct node* ptr=head;
    while(ptr!=NULL){
        cout<<"->"<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
    return ptr;
}
 

int main() {
    // Write C++ code here
  
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head=start(head,5);
    head=between(head,4,35);
    head=end(head,40);
    traverse(head);

    return 0;
}