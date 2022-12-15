#include<iostream>
using namespace std;
class node
{
 public :
 int data; 
 node *link;
};
node *first,*last;
class List
{
 public:
// node *first,*last;
 	List();
 	void Create();
 	void Display();
 	void Insert_At_Begin();
 	void Insert_At_End();
 	void Insert_At_Given_Position();
 	// Deletion
 	void Delete_First();
 	void Delete_Last();
 	void Delete_At_Given_Position();
 	void Traversal_Reverse(node* head);
 	void Search() ;
};
List::List()
 {
 first=NULL;
 last=NULL;
 }
void List :: Create()
{
 node *temp;
 temp=new node;
 int n;
 cout<<"\nEnter an Element:";
 cin>>n;
 temp->data=n;
 temp->link=NULL;
 if(first==NULL)
 {
 first=temp;
 last=first;
 }
 else
 {
 last->link=temp;
 last=temp;
 }
}

			
void List::Display()
{
 node *temp=first;
 if(temp==NULL)
 {
 cout<<"\nList is Empty";
 }
 while(temp!=NULL)
 {
 cout<<temp->data;
 cout<<"-->";
 temp=temp->link;
 }
 cout<<"NULL";
}
void List::Insert_At_Begin()
{
 int n;
	node *temp=new node;
 cout<<"\nEnter an Element to insert at begining :";
 cin>>n;
 temp->data=n;
 temp->link=NULL;
 temp->link=first;
 first=temp;
 
}
void List::Insert_At_End()
{
 int n;
 node *temp=new node;
 cout<<"\nEnter an Element to insert at last :";
 cin>>n;
 temp->data=n;
 temp->link=NULL; 
 last->link=temp;
 last=temp;
}
void List::Insert_At_Given_Position()
{
	node *prev,*cur;
 prev=NULL;
 cur=first;
 int count=1,pos,ch,n;
 node *temp=new node;
 cout<<"\nEnter an Element to insert:";
 cin>>n;
 temp->data=n;
 temp->link=NULL;
 
	cout<<"\nEnter the Position to Insert:";
 cin>>pos;
 while(count!=pos)
 {
 prev=cur;
 cur=cur->link;
 count++;
 }
if(count==pos)
 {
 prev->link=temp;
 temp->link=cur;
 }
 else
 cout<<"\n Not Able to Insert";
}
// Deletion Operation 
void List::Delete_First()
{
 if(first!=NULL)
 {
 cout<<"\n First Element Deleted : "<<first->data<<endl;
 first=first->link;
 }
 else
 cout<<"\n Not Able to Delete"; 
}
void List::Delete_Last()
{
	node *prev=NULL,*cur=first;
	while(cur!=last)
 {
 prev=cur;
 cur=cur->link;
 }
 if(cur==last)
 {
 cout<<"\nThe Last Element deleted : "<<cur->data<<endl;
 prev->link=NULL;
 last=prev;
 }
 else
 cout<<"\nNot Able to Delete";
}
void List::Delete_At_Given_Position()
{
	 node *prev=NULL,*cur=first;
 int count=1,pos;
	cout<<"\n Enter the Position of Deletion:";
 cin>>pos;
 while(count!=pos)
 {
 prev=cur;
 cur=cur->link;
 count++;
 }
 if(count==pos)
 {
 cout<<"\n Deleted Element is: "<<cur->data<<endl;
 prev->link=cur->link;
 }
 else
 cout<<"\n Not Able to Delete";
}
void List:: Traversal_Reverse(node* head)
{
 if (head == NULL) // Base case
 return;
 // print the list after head node
 Traversal_Reverse (head->link);
 
 // After everything else is printed, print head
 cout << head->data << "-->";
}
void List::Search() 
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
	List l;
 	l.Create();
 	l.Create();
 	l.Create();
	l.Display();
	l.Insert_At_Begin();
	l.Display();
	l.Insert_At_End();
	l.Insert_At_Given_Position();
	l.Display(); 
	l.Delete_First();
	l.Display();
	l.Delete_Last();
	l.Display();
	l.Delete_At_Given_Position();
	l.Display();
 	l.Search();
 	cout<<"\n The List in Reverse Order "<<endl;
 	l.Traversal_Reverse(first);
 	cout<<"NULL";
 return 0;
}