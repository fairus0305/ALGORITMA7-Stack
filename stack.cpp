#include <iostream>
using namespace std;

//Node class representing a singgke node in the linked list
class Node
{
    public :
        int data;
        Node *next;

        Node()
        {
            next = NULL;
        }
};

class stack
{
    private:
        Node *top; 

    public:
        stack()
        {
            top = NULL; 
        }

        int push(int value)
        {
            Node *newNode = new Node();
            newNode->data = value;
            newNode->next = top;
            top = newNode;
            cout << "push value: " << value << endl;
            return value;
        }

        void pop()
        {
            Node *temp = top;
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
                return;
            }

            cout << "Popped value: " << temp->data << endl;
            top = temp->next;
            delete temp;
        }

        void peek()
        {
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current = current->next;
                }
                cout << endl;
            }
        }

        bool isEmpty()
        {
            return top == NULL;
        }
};

int main()
{
    Stack stack;

    int choise = 0;
    int value;
}