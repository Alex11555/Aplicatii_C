#include <iostream>
using namespace std;

// Definirea constantelor pentru stiva și coada
const int MAX_SIZE = 100;

// Definirea variabilelor pentru stiva și coada
int top = -1;
int stack[MAX_SIZE];

int front = -1;
int rear = -1;
int queue[MAX_SIZE];

// Funcția push() adaugă un element în vârful stivei
void push(int data) {
    if (top == MAX_SIZE - 1) {
        cout << "Stiva este plină." << endl;
    }
    else {
        top++;
        stack[top] = data;
    }
}

// Funcția pop() îndepărtează elementul din vârful stivei și îl returnează
int pop() {
    if (top == -1) {
        cout << "Stiva este goală." << endl;
        return -1;
    }
    else {
        int data = stack[top];
        top--;
        return data;
    }
}

// Funcția isempty() verifică dacă stiva este goală sau nu
bool isempty() {
    return top == -1;
}

// Funcția peek() returnează elementul din vârful stivei, fără a-l îndepărta
int peek() {
    if (top == -1) {
        cout << "Stiva este goală." << endl;
        return -1;
    }
    else {
        return stack[top];
    }
}

// Funcția enqueue() adaugă un element la sfârșitul cozii
void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        cout << "Coada este plină." << endl;
    }
    else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

// Funcția dequeue() îndepărtează elementul din fața cozii și îl returnează
int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Coada este goală." << endl;
        return -1;
    }
    else {
        int data = queue[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
        return data;
    }
}

// Funcția isempty() verifică dacă coada este goală sau nu
bool isempty() {
    return front == -1 || front > rear;
}

// Funcția peek() returnează elementul din fața cozii, fără a-l îndepărta
int peek() {
    if (front == -1 || front > rear) {
        cout << "Coada este goală." << endl;
        return -1;
    }
    else {
        return queue[front];
    }
}
