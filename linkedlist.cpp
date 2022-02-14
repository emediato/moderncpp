
#include <iostream>
#include <vector>
#include <fstream> //reading files
#include <list>
#include <string>

#define USE_VECTOR

using namespace std;

struct Node {
    int data;
    Node *next;
};
void insert(struct Node** head, int newData);
void printList(struct Node *head);
void deleteNode(struct Node** head, int position)


int main(){
    Node* head = NULL;
    insert(&head, 7);
    insert(&head, 1);
    insert(&head, 3);
    insert(&head, 8);
    insert(&head, 2);
    insert(&head, 6);
    insert(&head, 4);

    cout << "created!" << endl;
    printList(head);
    deleteNode(&head, 4);
    cout << "after deletion of position 4 = " << endl;
    printList(head);


    return 0;
}
//print
void printList(struct Node *head){
    while (head !=NULL ){
        cout << head->data;
        head = head->next;
    }
}

// insert
void insert(struct Node** head, int newData){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}
//delete at desired position
void deleteNode(struct Node**, int position){
    if (*head == NULL)
        return;

    struct Node* temp = *head; //temp point to my head
    if (position ==0){
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i=0; temp!=NULL && i<position-1; i++){
        temp = temp->next;
    }
    if (temp == NULL || temp->next==NULL)
        return;
    
    struct Node *next = temp->next->next;//create new pointer to point to positions pointer
    free(temp->next);//delete position
    temp->next =next;//unlink node

}