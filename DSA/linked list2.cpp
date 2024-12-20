#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    node(int new_data) {
        data = new_data;
        next = NULL;
    }
};
struct node* DeletionAtBeginning(struct node* head) {
    struct node* ptr=head;
    struct node* p=head->next;
    free(ptr);
    return head;
}
struct node* deleteAtIndex(struct node* head, int index) {
    struct node* ptr=head;
    struct node* p=head->next;
    for (int i=0;i<index-1; i++) {
        ptr = ptr->next;
    }
    p=ptr->next;
    ptr->next = p->next;
    free(p);
    return head;
}
struct node* DeleteAtEnd(struct node* head){
    struct node* ptr=head;
    struct node* p=head->next;
    while(p->next!=NULL){
        ptr=ptr->next;
        p=p->next;
    }
    p=ptr->next;
    ptr->next=NULL;
    free(p);
    return head;
}
struct node* start(struct node* head, int data) {
    struct node* ptr = new node(data);
    ptr->next = head;
    return ptr;
}
struct node* between(struct node* head, int index, int data) {
    struct node* ptr = new node(data);
    struct node* p = head;
    for (int i = 0; i < index - 1 && p != NULL; i++) {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
void traverse(struct node* head) {
    struct node* ptr = head;
    while (ptr != NULL) {
        cout << "->" << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main() {
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head = start(head, 5);
    head = between(head, 3, 25);
    head = DeleteAtEnd(head);
    traverse(head);

    return 0;
}
