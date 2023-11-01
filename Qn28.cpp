#include <iostream>
#include <cmath>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node()
    {
        data=0;
        next=NULL;
    }
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node* head;
    
    public:
    LinkedList()
    {
        head=NULL;
    }
    
    void insertNode(int data)
    {
        Node* newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
            return;
        }
        
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
    
    void printList()
    {
        Node* temp = head;
        if(head==NULL)
        {
            cout<<"List is empty"<<endl;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    
    void deci(int n)
    {
        int sum=0;
        Node* temp = head;
        for(int i=n-1;i>=0;i--)
        {
            sum+=temp->data*pow(2,i);
            //cout<<temp->data<<" "<<sum<<endl;
            temp=temp->next;
        }
        cout<<sum;
    }
};

int main()
{
    int n,num;
    LinkedList ll;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        ll.insertNode(num);
        
    }
    int sum=0;
    ll.deci(n);
}