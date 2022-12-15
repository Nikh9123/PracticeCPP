//stacks
#include <iostream>
using namespace std;
class Stack
{
public:
    char s[20];
    int top, MAX;
    Stack();
    void push(char t);
    char pop();
    int IsEmpty();
    char getTop();
    char ISP(char); // In Stack Priority
    char ICP(char); // In Coming Priority
    void Infix_to_Postfix(char infix[20], char postfix[20]);
};
Stack :: Stack()
{
	top = -1 ;
	MAX=20;
}
void Stack ::push(char t)
{
	if(top == MAX-1)
	{
		cout<<"stack overflow"<<endl;
	}
	else
	{
		top++;
		s[top] = t ;
	}
 } 
 char Stack :: pop()
 {
 	char ch ;
 	if(top == -1)
 	cout<<"stack underflow"<<endl;
 	else 
 	{
 		ch = s[top];
 		top-- ;
 		
	 }
	 return ch ;
 }
 int Stack :: IsEmpty()
 {
 	if(top == -1)
 	return 1 ;
 	else 
 	return -1 ;
 }
 char Stack :: getTop()
 {
 	char ch ;
 	if(top == -1)
 	cout<<"empty stack"<<endl;
 	else
 	{
 		ch = s[top];
	 }
//	 cout<<ch<<endl; top show hoga 
	 return ch ;
 }
 int Stack ::ISP(char ch)
 {
 	switch(ch)
 	{
 		case '+':
 		case '-':
 			return 1 ;
 		case '*':
 		case '/':
		    return 2 ;
		case '^':
	     	return 3 ;
		case ')':
		    return 0 ;
		case '#':
			return -1 ;
			
	 }
 }
 int Stack ::ICP()
 {
 	switch(ch)
 	{
 		case'+':
 		case'-':
 			return 1 ;
 		case'*':
		case'/':
		    return 2 ;
		case '^':
		    return 3;
		case '(':
			return 4;
		     	
	 }
 	
 }
 void Stack::Infix_to_Postfix()
 {
 Stack sk ;
 int i=0;
 char ch , x ;
 sk.push('#');
 while(infix[i] != '\0')
 {
 	ch = infix[i];
 	i++ ;
 	if(ch >= 'a' && ch <='z')
 	{
 		cout<<ch;
	 }
	 else
	 {
	 	if(ch ==')')
	 	{
	 		while(sk.getTop() != '(')
	 		{
	 			x=sk.pop();
	 			cout<<x;
	 			
			 }
			 sk.pop();
		 }
		 else 
		 {
		 	while(ISP(sk.getTop()) >= ICP(ch))
		 	{
		 		x=sk.pop();
		 		cout<<x;
			 }
			 sk.push();
		 }
	 }
 }
 while(!sk.IsEmpty())
 {
 	x=sk.pop();
 	if(x != '#')
 	cout<<x;
 }
  } 
 int main()
 {
 	Stack sk ;
// 	s.push('e');
// 	s.push('o');
// 	cout<<s.getTop()<<endl;
// 	s.pop();
// 	s.pop();
// 	s.pop();
char infix[20] , postfix[20];
cout<<"enter the infix expression"<<endl;
cin>>infix;
sk.Infix_to_Postfix(infix , postfix);
return 0 ;

 	
// 	s.getTop();
 }
