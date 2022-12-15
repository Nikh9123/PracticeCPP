using namespace std;
#include <bits/stdc++.h>
class node
{
public:
    node *link;
    int data;
};
node *first, *last;
class LinkedList
{
public:
    LinkedList();
    void create();
    void display();
    void Insert_at_begin();
    void Insert_at_last();
    void Insert_at_pos();
    void delete_at_begin();
    void delete_at_last();
    void Delete_at_pos();
};
LinkedList ::LinkedList()
{
    first = last = NULL;
}
void LinkedList ::create()
{
    node *temp = new node();
    int data;
    cout << "enter the data you want to insert" << endl;
    cin >> data;
    temp->data = data;
    if (first == NULL)
    {
        first = temp;
        last = temp;
    }
    else
    {
        last->link = temp ;
        last = temp ;
    }
  
}
void LinkedList ::display()
{
    node *temp = first;
    if (temp == NULL)
    {
        cout << "list is empty" << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->link;
        }
        cout << "NULL" << endl;
    }
}
void LinkedList ::Insert_at_begin()
{
    node *temp = new node();
    int d;
    cout << "enter element" << endl;
    cin >> d;
    temp->data = d;
    temp->link = first;
    first = temp;
}
void LinkedList::Insert_at_last()
{
    node *temp = new node();
    int d;
    cout << "enter element to be insert at last" << endl;
    cin >> d;
    temp->data = d;
    last->link = temp;
    last = temp;
}
void LinkedList::Insert_at_pos()
{
  int d, pos, count = 1;
    node *temp, *pre, *cur;
    cout << "\nEnter the data to insert at given position :";
    cin >> d;
    cout << "\n Enter the position to insert data :";
    cin >> pos;

    pre = NULL;
    cur = first;
    temp = new node();
    temp->data = d;
    temp->link = NULL;
    while (count != pos)
    {
        pre = cur;
        cur = cur->link;
        count++;
    }
    if (count == pos)
    {
        pre->link = temp;
        temp->link = cur;
    }
    else
        cout << "Insertion is not possible" << endl;
}
void LinkedList ::delete_at_begin()
{
    node *temp = first ;
    if(temp == NULL)
    {
        cout<<"deletion not ppossible"<<endl;
    }
    else 
    {
        cout<<"the deleting element is :"<<temp->data<<endl;
        first->link = first ;
        delete temp ;
    }
    

}
void LinkedList ::delete_at_last()
{
    node *pre ,*cur ;
    pre = NULL;
    cur = first;
    while(cur != last)
    {
        pre = cur ;
        cur = cur->link;
    }
    if(cur == last)
    {
        cout<<"deleting last element :"<<cur->data<<endl;
        pre->link =NULL ;
        last = pre ;
        delete cur ;

    }
    else{
        cout<<"deletion not possible "<<endl;
    }
}
void LinkedList ::Delete_at_pos()
{
    int pos , count = 1 ;
    node *cur , *pre ;
    pre = NULL;
    cur = first ;
    while(count != pos)
    {
        pre = cur ;
        cur = cur->link;
        count++ ;
    }
    if(count == pos)
    {
        cout<<"\n deleting position element"<<cur->data<<endl;
        pre->link = cur->link;
        delete cur  ;
    }
    else 
    {
      cout<<"deletion not possible "<<endl;

    }
}
int main()
{
    LinkedList l;
    l.create();
    l.create();
    l.create();
    l.display();
    l.Insert_at_begin();
    cout << "after insertion at begining" << endl;
    l.display();
    l.Insert_at_last();
    cout << "after insertion at last" << endl;
    l.display();
    l.Insert_at_pos();
    cout << "after insertion at position" << endl;
    l.display();
    l.delete_at_begin();
    cout << "after deletion at begining" << endl;
    l.display();
    l.delete_at_last();
    cout << "after deletion at last" << endl;
    l.display();
    l.Delete_at_pos();
    l.display();
}