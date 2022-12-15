#include<bits/stdc++.h>
using namespace std ;
class node 
{
    public:
    node *link ;
    int data ;
};
node *first , *last ;
class Link
{
   public:
   Link();
   void create();
   void display();
   void insert_at_begin();
   void insert_at_last();
   void insert_at_postion();
   void delete_at_begin();
   void delete_at_last();
   void delete_at_postion();
   void Traversal_reverse(node *h);
   void search();


};
Link :: Link()
{
    first = last = NULL ;
}
void Link ::create()
{
    int a ;
    node *temp;
    temp = new node();
    cout << "Enter the data element : ";
    cin>>a;
    temp->data=a;
    temp->link = NULL;
    if(first == NULL)
    {
        first=temp;
        last = temp;
    }
    else{
        last->link=temp;
        last = temp;
    }

}
void Link ::display()
{
node *temp = first;
    if (temp == NULL)
        cout << "List is Empty" << endl;
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << "===>";
            temp = temp->link;
        }
        cout << "NULL";
    }
}
void Link ::insert_at_begin()
{
    int n ;
    node *temp = new node();
    cout << "\nEnter the data to insert at begin..";
    cin>>n;
    temp->data = n ;
    temp->link = NULL;
    temp->link = first ;
    first = temp;
}
void Link ::insert_at_last()
{
    int n ;
    node *temp = new node();
    cout << "\nEnter the data to insert at last :";
    cin>>n;
    temp->data = n ;


    temp->link = NULL;

    last->link = temp;
    last = temp;
}
void Link ::insert_at_postion()
{
    // int d, pos, count = 1;
    // node *temp, *pre, *cur;
    // cout << "\nEnter the data to insert at given position :";
    // cin >> d;
    // cout << "\n Enter the position to insert data :";
    // cin >> pos;

    // pre = NULL;
    // cur = first;
    // temp = new node();
    // temp->data = d;
    // temp->link = NULL;
    // while (count != pos)
    // {
    //     pre = cur;
    //     cur = cur->link;
    //     count++;
    // }
    // if (count == pos)
    // {
    //     pre->link = temp;
    //     temp->link = cur;
    // }
    // else
    //     cout << "Insertion is not possible" << endl;
    int d , pos , count = 1 ;
    node  *pre, *cur,*temp;
    cout << "\nEnter the data to insert at given position :";
    cin>>d;
    cout << "\n Enter the position to insert data :";
    cin >> pos;


    pre = NULL;
    cur = first;
    temp = new node();
    temp->data = d ;
    temp->link = NULL;
    while(count != pos)
    {
        pre = cur ;
        cur = cur->link;
        count++ ;
    }
    if(count == pos)
    {
        pre->link = temp ;
        temp->link= cur ;
    }
    else
        cout << "Insertion is not possible" << endl;


}
void Link ::delete_at_begin()
{
    // node *temp = first ;
    // if(temp == NULL)
    //     cout << "Deletion is not possible" << endl;
    
    // else 
    // {
    //     cout<<"\n deleting 1st element : "<<temp->data<<endl;
    //     first = first->link;
    //     delete temp ;

    // }
    node *temp = first ;
    if(temp == NULL)
    cout<<"deletion isn't possible "<<endl;
    else{
        cout<<"deleting 1st element"<<temp->data<<endl;
        first = first->link;
        delete temp ;
    }
}
void Link ::delete_at_last()
{
    // int count = 1 ; 
    node *cur , *pre ;
    pre = NULL;
    cur = first;
    while (cur != last)
    {
        /* code */
        pre = cur ;
        cur = cur->link ;

    }
    if(cur == last)
    {
        cout << "\n The last Element deleted :" << cur->data << endl;
        pre->link = NULL;
        last = pre ;
        delete cur ;
    }
    else 
    {
        cout<<"deletion not possible"<<endl;
    }
}
void Link ::delete_at_postion()
{
    int pos , count =1;
    node *cur , *pre ;
    pre = NULL;
    cur = first;
    cout << "\n Enter the position of element to delete : ";
    cin >> pos;
    while(count != pos)
    {
        pre = cur ;
        cur = cur->link;
        count++;
    }
    if(count == pos)
    {
        cout<<"\n deleting position element"<<cur->data<<endl;
        pre->link = cur->link;
        delete  cur ;
    }
    else
    {
        cout<<"deletion is not posiibel"<<endl;
    } 
}
void Link ::Traversal_reverse(node *t)
{
    if(t == NULL)
    return ;
    Traversal_reverse(t->link);
    cout<<t->data <<"==>";
}
void Link::search()
{
int value,pos=0;
bool flag=false;
if(first==NULL) {
cout<<"List is Empty";
return;
}
cout<<"\n Enter the Value to be Searched: ";
cin>>value;
node *temp;
temp=first;
while(temp!=NULL) {
pos++;
if(temp->data==value) {
flag=true;
cout<<"Element "<<value<<" is Found at "
<<pos<<" Position";
return;
}
temp=temp->link;
}
if(!flag) {
cout<<"Element "<<value<<" not Found in the List";
}
}
int main()
{
    Link l ;
    int size;
    cout<<"enter the size of list"<<endl;
    cin>>size;
    for(int i = 0 ; i < size ; i++)
    l.create();
    l.display();
    l.insert_at_begin();
    l.display();
    l.insert_at_last();
    l.display();
    l.insert_at_postion();
    l.display();
    cout<<"in deleting function"<<endl;
    l.delete_at_begin();
    l.display();
    cout<<"in deleting last function"<<endl;
    l.delete_at_last();
    l.display();
    cout<<"in deleting position function"<<endl;
    l.delete_at_postion();
    l.display();
    l.Traversal_reverse(first);
    l.display();
    
}
