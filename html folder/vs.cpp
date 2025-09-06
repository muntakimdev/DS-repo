#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class List
{
        Node* head;
        Node* tail;
public:
    List()
    {
        head = tail = nullptr;
    }
    void Push_front(int val)
    {
        Node* new_node = new Node(val);
        if(head==nullptr)
        {
            head = tail = new_node;
            return;
        }
        else
        {
            new_node->next=head;
            head = new_node;
        }

    }
    void Push_Back(int val)
    {
        Node* new_node= new Node(val);
        if(head==nullptr)
        {
            head =tail=new_node;
        }
        else
        {
            tail->next=new_node;
            tail=new_node;
        }

    }
    void print()
    {
        if(head==nullptr)
        {
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* temp = head;
        while(temp != nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void Insert(int val,int pos)
    {
        if(pos<0)
        {
            cout<<"Invalid Position"<<endl;
            return;
        }
        if(pos==0)
        {
            Push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1 && temp!=nullptr; i++)
        {
            temp=temp->next;
        }
        if(temp==nullptr)
        {
            cout<<"Invalid Position"<<endl;
            return;
        }
        Node* new_node= new Node(val);
        new_node->next=temp->next;
        temp->next= new_node;
        if(new_node->next==nullptr)
        {
            tail=new_node;
        }

    }
    void PoP_Front()
    {
        if(head==nullptr)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next=nullptr;
        if(head==nullptr)
            tail=nullptr;
        delete temp;

    }
    void Pop_Back()
    {
        if(head==nullptr)
        {
            cout<<"List is empty!"<<endl;
            return;
        }
        if(head==tail)
        {
            delete head;
            head=tail=nullptr;
            return;
        }
        Node* temp = head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=nullptr;
    }
    int Search(int key)
    {
        Node* temp = head;
        int idx =0;
        while(temp!=nullptr)
        {
            if(temp->data==key)
            {
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    void DeleteAtPos(int pos)
    {
        if(pos<0 || head==nullptr)
        {
            cout<<"Invalid position!"<<endl;
            return;
        }
        if(pos==0)
        {
            PoP_Front();
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1 && temp!=nullptr; i++)
        {
            temp=temp->next;
        }
        if(temp==nullptr || temp->next==nullptr)
        {
            cout<<"Invalid position!"<<endl;
            return;
        }
        Node* del = temp->next;
        temp->next = del->next;
        if(del==tail)
        {
            tail=temp;
        }
        delete del;
    }

};
int main()
{
   List ll;
   ll.Push_front(1);
   ll.Push_front(2);
   ll.Push_front(3);
   ll.Push_front(4);
   ll.PoP_Front();
   ll.Push_Back(4);
   ll.Pop_Back();
   ll.Insert(4,0);
   ll.print();
   cout<<ll.Search(2)<<endl;
   ll.DeleteAtPos(2);
   ll.print();
}
