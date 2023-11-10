// Solution not possible in C
// But we can implement through stacks and queues 
// ***(I have done through Linked Lists)***

// Through Stack:
#include <stdio.h>
struct Node {
int data;
struct Node *next;
};
struct Node* top = NULL;
void push(int value) {
struct Node *newNode;
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = value;
if (top == NULL) {
newNode->next = NULL;
} else {
newNode->next = top; }
top = newNode;
}
int pop() {
if (top == NULL) {
printf("Stack Underflow");
} else {
struct Node *temp = top;
int temp_data = top->data;
top = top->next;
free(temp);
return temp_data;
}}
void display() {
if (top == NULL) {
printf("Stack Underflow");
} else {
printf("The stack is \n");
struct Node *temp = top;
while (temp->next != NULL) {
printf("%d\n", temp->data);
temp = temp->next; }
printf("%d\n", temp->data);
}}
int main() {
int choice, value;
printf("\nStack implementation using linked list\n");
printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
while(1){
printf("\nEnter the choice");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("\nEnter a value to be pushed in stack");
scanf("%d", &value);
push(value);
break;
case 2:
printf("The popped element is%d\n", pop());
break;
case 3:
display();
break;
case 4:
printf("Exiting from the program");
exit(0);
break;
default:
printf("\nWrong Choice\n");
}}}


// Through Queue:
#include<stdio.h>   
struct node   
{  
int data;   
struct node *next;  
};  
struct node *front;  
struct node *rear;   
void insert();  
void delete();  
void display();  
void main ()  
{  
int choice;   
printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");  
while(choice != 4)   
{    
printf("\nEnter the choice ");  
scanf("%d",& choice);  
switch(choice)  
{  
case 1:  
insert();  
break;  
case 2:  
delete();  
break;  
case 3:  
display();  
break;  
case 4:  
exit(0);  
break;  
}}}
void insert()  
{  
struct node *ptr;  
int item;   
ptr = (struct node *) malloc (sizeof(struct node));  
if(ptr == NULL)  
{  
printf("\nOVERFLOW\n");  
return;  
}  
else  
{   
printf("\nEnter value ");  
scanf("%d",&item);  
ptr -> data = item;  
if(front == NULL)  
{  
front = ptr;  
rear = ptr;   
front -> next = NULL;  
rear -> next = NULL;  
}  
else   
{  
rear -> next = ptr;  
rear = ptr;  
rear->next = NULL;  
}}}
void delete ()  
{  
struct node *ptr;  
if(front == NULL)  
{  
printf("\nUNDERFLOW\n");  
return;  
}  
else   
{  
ptr = front;  
front = front -> next;  
free(ptr);  
printf("\nElement deleted");
}}  
void display()  
{  
struct node *ptr;  
ptr = front;      
if(front == NULL)  
{  
printf("\nEmpty queue\n");  
}  
else  
{  printf("Queue elements are");
while(ptr != NULL)   
{  
printf(" %d",ptr -> data);  
ptr = ptr -> next;  
}}}
