#include <stdio.h>
#include <stdlib.h>
#define size 10
int queue[size];
int front = -1,rear = -1;


// function to enter an element into the queue
void enque() {
    int temp;
    if(rear == size-1)
    printf("\nQueue is empty.....");
    else if(front == -1 && rear == -1){
        printf("\nEnter an Element : ");
        scanf("%d",&temp);
        front++;
        rear++;
        queue[front] = temp;
    }
    else{
        printf("\nEnter an Element : ");
        scanf("%d",&temp);
        rear++;
        queue[rear] = temp;
    }
    
}


//Function to remove element from the queue
int deque() {
    if((front == -1 && rear == -1) || (rear < front)) {
        printf("\nQueue is empty.....");
        return 0;
    }
    else {
        int temp;
        temp = queue[rear];
        rear--;
        return temp;
    }
}


//Function to check if a particular element is present or not present in the queue
void peek() {
    if((front == -1 && rear == -1) || (rear < front)) {
        printf("\nQueue is empty.....");
    }
    else 
    printf("\n%d ",queue[front]);
}

//Function to display all the elements in the queue
void display() {
    int p;
    if((front == -1 && rear == -1) || (rear < front)) {
        printf("\nQueue is empty.....");
    }
    else {
        printf("\nThe Elements in the Queue are : ");
        for(p=front;p<=rear;p++) {
            printf("%d ,",queue[p]);
        }
    }
}

// Function to check if the stack is empty
void is_empty() {
    if((front == -1 && rear == -1) || (rear < front))
    printf("\nQueue is empty.....");
    else
    printf("\nQueue is not empty.....");
}


//Main Function
int main() {
    int option;
    printf("\n<--Queue implementation-->");
    while(1) {
        printf("\n1)Enque\n2)Deque\n3)peek\n4)Display\n5)Is Empty\nEnter any option : ");
        scanf("%d",&option);
        
        if(option == 1) 
        enque();
        else if(option == 2)
        printf("\nElement %d is removed.",deque());
        else if(option == 3)
        peek();
        else if (option == 4)
        display();
        else if(option == 5)
        is_empty();
        else
        break;
    }
    return 0;
}
