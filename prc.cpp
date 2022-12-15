using namespace std ;
#include<bits/stdc++.h>
class Queue
{
	int q[50];
	int front , rear ,max ;
	public :
	Queue();
	int IsEmpty();
	int IsFull();
	void Insert(int);
	int Delete();
		
}
Queue :: Queue()
{
	front = rear = -1 ;
	max = 50 ;
}
int Queue ::IsFull()
{
	if(rear == max-1)
	return 1 ;
	else 
	return -1 ;
}
void Queue ::IsEmpty()
{
	if(front == rear)
	return 1 ;
}
void Queue ::Insert(int t)
{
	if(rear == max-1)
	cout<<"cout queue is full"<<endl;
	else
	{
		rear++;
		q[rear] = t ;
	}
}
int Queue ::Delete()
{
	if(rear == front)
	cout<<"queue is empty"<<endl
	else 
	{
		front++ ;
	     return q[++front];
	}
	
}

int main()
{
	
}
