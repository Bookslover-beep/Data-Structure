#include<iostream>
using namespace std;
struct Node{
int data;
struct Node* next;
};
Node* head = NULL;

void insertAtTheBeginning(){
int value;
cout << "Enter the value: ";
cin >> value;

Node* newNode = new Node();
newNode->data = value;
newNode->next = head;
head = newNode;
cout << "Node inserted at beginning.\n";
}


void insertAtTheEnd(){
int value;
cout <<" Enter the value: ";
cin >> value;

Node* newNode = new Node();
newNode->data = value;
newNode->next = NULL;

if (head == NULL) {
head = newNode;
} else {
Node* temp = head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
cout << "Node inserted at end.\n";
} 

void insertAtAnyPosition() {
int value, pos;
cout << "Enter value: ";
cin >> value;

cout << "Enter position: ";
cin >> pos;

Node* newNode = new Node();
newNode->data = value;

if (pos == 1) {
newNode->next = head;
head = newNode;
return;
}
Node* temp = head;
for (int i = 1; i < pos - 1; i++) {
if (temp == NULL) {
cout << "Invalid position\n";
return;
}
temp = temp->next;
}

newNode->next = temp->next;
temp->next = newNode;
cout << "Node inserted at position " << pos << ".\n";
}

void display() {
Node* temp = head;
if (temp == NULL) {
cout << "List is empty\n";
return;
}
cout << "Linked List: ";
while (temp != NULL) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL\n";
}

int main(){
int ch;
do{
cout <<"\n----Menu----\n";
cout <<"1.Insertion at the Begining";
cout <<"2.Insertion at the End\n";
cout <<"3.Insertion at Any position\n";
cout <<"4.Display the Linked List\n";
cout <<"5.Exit\n";

cout <<" Enter Your Choice: ";
cin>>ch; 

switch (ch) {
case 1:
insertAtTheBeginning();
break;

case 2:
insertAtTheEnd();
break;

case 3:
insertAtAnyPosition();
break;

case 4:
display();
break;

case 5:
cout << "Exiting...\n";
break;

default:
cout << "Invalid choice\n";
}
} while (ch != 5);
 return 0;
}
