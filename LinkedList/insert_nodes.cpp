#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node *head, *tail;
public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if(head) {
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            cout << "Empty List\n";
            return;
        }
    }

    void pop_back() {
        if(head == NULL) {
            cout << "Empty List\n";
            return;
        }

        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp -> next;
        }
        cout << "null" << endl;
    }
};

int main() {
    List l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_front(5);
    //l1.pop_front();
    //l1.pop_back();
    l1.display();
}