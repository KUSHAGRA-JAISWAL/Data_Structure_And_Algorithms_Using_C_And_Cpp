#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int a[], int n){
    int i;
    struct Node *t, *last;
    first = new Node;
    first -> data = a[0];
    first -> next = NULL;
    last = first;

    for(i=1; i<n; i++){
        t= new Node;
        t -> data=a[i];
        t->next=NULL;
        last -> next = t;
        last=t;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main(){
    int arr[] = {3,5,7,10,15};
    create(arr,5);
    display(first);
    return 0;
}