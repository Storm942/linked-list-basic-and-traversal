#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
}
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    
    head=(struct node*)malloc(sizeof(struct Node));
    second=(struct node*)malloc(sizeof(struct Node));
    third=(struct node*)malloc(sizeof(struct Node));

    head->data=8;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=11;
    third->next=NULL;

    traversal(head);
    return 0;
}