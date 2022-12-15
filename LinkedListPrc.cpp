using namespace std ;
#include<bits/stdc++.h>
//single Linked list
class node 
{
    public:
    node *link;
    int data ;

};
node *first , *last ;
class List {
    public :
    List();
    void create();
    void display();
    void Insert_at_begin();
    void Insert_at_last();
    void Insert_at_Pos();
    void Delete_at_first();
    void Delete_at_last();
    void Delete_at_Pos();
    void search();
    
};
List ::List()
{
   first = last = NULL;
}
void List ::create()
{
    int a ;
    cout<<"enter element"<<endl;
    cin>>a;
    node *temp = new node();
    temp->data=a ;
    temp->link = NULL;
    if(first == NULL)
    {
        first = temp ;
        last = temp;
    }
    else 
    {
        last->link = temp ;
        last = temp ;
    }
}
void List ::display()
{
    node *temp = first ;
    if(temp == NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else 
    {
        while(temp != NULL)
        {
            cout<<temp->data<<"-->";
            temp = temp->link;
        }
        cout<<"NULL";
        cout<<endl;
    }
}
void List ::Insert_at_begin()
{
	int  a ;
	cout<<"enter the element you want to insert at begin"<<endl;
	cin>>a;
	node *temp = new node();
	
	temp->data=a;
	temp->link= NULL ;
	
	temp->link = first ;
	first = temp;
}
void List ::Insert_at_last()
{
	int n ;
	cout<<"enter the element you want to insert at last"<<endl;
    cin>>n;
    node *temp = new node();
    temp->data=n ;
    temp->link = NULL;
    
    last->link = temp ;
    last =  temp ;

}
void List :: Insert_at_Pos()
{
	int d , pos , count = 1 ;
	node *cur , *pre , *temp ;
	cout<<"enter the data you want to insert at position "<<endl;
	cin>>d;
	cout<<"enter the position of data"<<endl;
	cin>>pos;
	temp = new node();
	temp->data= d ;
	temp->link = NULL;
	
	pre = NULL;
	cur = first;
	
	while(count != pos)
	{
		pre = cur ;
		cur = cur->link;
		count++ ;
	}
	if(count == pos)
	{
		pre->link = temp ;
		temp->link = cur ;
	}
	else
	{
		cout<<"insertion not possible"<<endl;
	}
}
void List ::Delete_at_first()
{
	node *temp = first ;
	if(temp == NULL)
	{
		cout<<"list is empty"<<endl;
	}
	else 
	{
        cout << "\nFirst Element Deleted : " << temp->data << endl;		
		first = first->link ;
		delete temp;
	}
}
void List ::Delete_at_last()
{
	node *cur , *pre ;
	cur = first ;
	pre = NULL;
	
	while(cur != last)
	{
		pre = cur ;
		cur = cur->link;
		
	}
	if(cur == last)
	{
        cout << "\n The last Element deleted :" << cur->data << endl;
		
		pre->link = NULL ;
		last = pre ;
		delete cur ;
		
	}
	 else
        cout << "Deletion is not possible"<<endl;
}
void List :: Delete_at_Pos()
{
	int pos , count = 1 ;
	node *pre , *cur ;
	cout<<"enter pos to delete"<<endl;
	cur = first ;
	pre = NULL;
	whiile(count != pos)
	{
		pre = cur ;
		cur = cur->link;
		count++;
	}
	if(count == pos)
	{
        cout << "Deleted element :" << cur->data << endl;
		
		pre->link = cur->link ;
		delete cur ;
	}
}
void List ::search()
{
int value , pos = 0 ;
if(first == NULL)
{
	cout<<"list empty"<<endl;
	return ;
}
cout<<"enter the value to be searched"<<endl;
cin>>value;
node *temp = first ;
bool flag = false ;
while(temp != NULL)
{
	pos++ ;
	if(temp->data = value)
	{
		flag = true ;
 cout<<"Element "<<value<<" is Found at "
			 <<pos<<" Position";
			 return ;
	}
	temp = temp->link;
}
	 if(!flag) {
 cout<<"Element "<<value<<" not Found in the List";
 }
}
int main()
{
List l;
l.create();
l.create();
l.create();
l.display();

l.Insert_at_begin();
l.display();

l.Insert_at_last();
l.display();

l.Insert_at_Pos();
l.display();

l.Delete_at_first();
l.display();

l.Delete_at_last();
l.display();

l.Delete_at_Pos();
l.display();
}
