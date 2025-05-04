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
public:
    Node *head, *tail;
    List() {
        head = tail = NULL;
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

    void reverse() {
        Node* prev = NULL;
        Node* curr = head;
        Node* nextNode = NULL;

        while(curr != NULL) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        head = prev;
    }

    int mid_node() {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};



int main() {
    List l1;
    l1.push_back(15);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(50);
    l1.push_back(60);
    l1.display();
    cout << "Head - " << l1.head->data << endl;

    cout << "Mid node : " << l1.mid_node() << endl;

    // l1.reverse();
    // l1.display();
    // cout << "Head - " << l1.head->data << endl;
}