#include <bits/stdc++.h>
using namespace std;
class node{
    public  :
    char data ;
    node *link ; 
};
node *first , *last ;
class LinkedList
{
    public:
    LinkedList();
    void create();
    void display();
    //insertion 
    void InsertInBegin();
    void InsertInlast();
    void InsertatPos();

    //search
    void search();

    //deletion 
    void Deletetfirst();
    void deleteatLast();
    void DeleteAtPos();

};
LinkedList ::LinkedList()
{
    first = NULL ;
    last = NULL;
}
void LinkedList ::create()
{
    node *temp = new node() ;
    char a ;
    cout<<"enter a data to link"<<endl;
    cin>>a;

    temp->data = a ;
    temp->link = NULL;

    if(first == NULL)
    {
        first =  temp ;
        last =  temp ;
    }
    else 
    {
        last->link = temp ;
        last = temp ;
    }
}
void LinkedList ::display()
{
    node *temp = first ;
    if(temp == NULL)
    {
        cout<<"sorry list is empty"<<endl;
    }
    while(temp != NULL)
    {
        cout<<temp->data<<"-->";
        temp = temp->link ;
    }
    cout<<"NULL"<<endl;
}
void LinkedList ::InsertInBegin()
{
    node *temp = new node();
    char d ;
    cout<<"enter data to insert at begin of list :"<<endl;
    cin>>d;
    
    temp->data = d ;
    temp->link = NULL ;
    
    temp->link = first ;
    first = temp ;

}
void LinkedList ::InsertInlast()
{
    node *temp = new node();
    char d ;
    cout<<"enter data to insert at last of list :"<<endl;
    cin>>d;

    temp->data=d;
    temp->link= NULL ;

    last->link = temp ;
    last =  temp ;

}
void LinkedList ::InsertatPos()
{
    char d ;
    int pos , count = 1;
    cout<<"enter data to insert at given position of list :"<<endl;
    cin>>d ;
    cout<<"enter position of inserting  list :"<<endl;
    cin>>pos ;

    node *temp , *curr , *pre ;

    temp = new node();

    temp->data = d ;
    temp->link = NULL;

    curr = first ;
    pre = NULL;

    while(count != pos)
    {
        pre = curr;
        curr = curr->link ;
        count++ ;
    }
    if(count == pos)
    {
        pre->link = temp;
        temp->link = curr ;

    }
    else 
    {
        cout<<"insertion not possible"<<endl;
    }


}

void LinkedList ::search()
{
    char value ;
    int pos = 0;
    cout<<"enter data you want to search"<<endl;
    cin>>value;

    if(first == NULL)
    {
        cout<<"list empty can't search"<<endl;
        return ;
    }
    bool flag = false ;
    node *temp = first ;
    while(temp != NULL)
    {
                pos++ ;
        temp = temp->link ;
        if(temp->data == value)
        {
            flag = true ;
            cout<<"element found at position = "<<pos<<endl;
            return ;
        }
    }
    if(!flag)
    {
        cout<<"element = "<<value<< "doesn't found"<<endl;
    }
}
void LinkedList ::Deletetfirst()
{
    node *temp = first ;
    if(first == NULL)
    {
        cout<<"list is empty can't delete"<<endl;
    }
    else
    {
        first = first->link ;
        delete temp ;
    }
}
void LinkedList ::deleteatLast()
{
    node *curr , *pre ;
    curr = first ;
    pre = NULL ;

    while(curr != last)
    {
       pre = curr ;
       curr = curr->link ;

    }

    if(curr = last)
    {
        cout<<"deleting last node :"<<endl;
        pre->link = NULL;
        last = pre ;
        delete curr ;
    }
}
void LinkedList ::DeleteAtPos()
{
    int pos,count = 1  ;
    cout<<"enter position of element you want to delete"<<endl;
    cin>>pos ;

    node *curr , *pre ;
    curr = first;
    pre = NULL ;

    while(count != pos)
    {
        pre = curr ;
        curr = curr->link ;
        count++;
    }
    if(count == pos)
    {
        cout<<"deleting given position node :"<<endl;
        pre->link = curr->link;
        delete curr ;
   
    }


}
int main()
{
   LinkedList l ;
   l.create();
   l.display();
   l.InsertInBegin();
   l.display();
   l.InsertInlast();
   l.display();
   l.InsertatPos();
   l.display();
//    l.search();
bool value ;
cout<<"are you sure you want to delete first node :"<<endl;
cin>>value ;
if(value){
   l.Deletetfirst();
   l.display();
}
   return 0 ;
}
