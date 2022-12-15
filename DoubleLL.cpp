using namespace std ;
#include<bits/stdc++.h>
class node{
    public:
    node *pre ;
    int data ;
    node *next;
};
class LinkedList 
{
    public :
    node *first ;
    node *last ;
    LinkedList();
    void create();
    void display();
    void travelForward();
    void travelBackward();

};

LinkedList ::LinkedList()
{
    first = NULL ;
    last = NULL ;

}

void LinkedList ::create()
{
    node *temp = new node();
    int d ;
    cout<<"enter a data in link"<<endl;
    cin>>d;

    temp->data = d ;
    temp->next = NULL;
    temp->pre = NULL ;

    if(first == NULL)
    {
        first = temp ;
        last = temp ;
    }
    else 
    {
        last->next = temp;
        temp->pre = last ;
        last = temp ;
    }
}

// void LinkedList ::travelForward()//same as display function
void LinkedList ::display()
{
    node *temp = first ;
    if(first == NULL)
    {
        cout<<"list is Null"<<endl;
    }
    else 
    {
        while(temp != NULL)
        {
            cout<<temp->data<<"-->";
           temp = temp->next ;
        }
        cout<<"NULL"<<endl;
    }
} 
void LinkedList ::travelBackward()
{
    node *temp = last ;
    if(last == NULL)
    {
        cout<<"list is Null"<<endl;
    }
    else 
    {
        while(temp != NULL)
        {
            cout<<temp->data<<"-->";
           temp = temp->pre ;
        }
        cout<<"NULL"<<endl;
    }
} 
int main()
{
   LinkedList l ;

   for(int i=0; i <3 ; i++)
   l.create();

   l.display();
   l.travelBackward();
}