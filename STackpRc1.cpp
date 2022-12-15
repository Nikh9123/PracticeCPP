using namespace std ;
#include<bits/stdc++.h>
class Stack1{
    public:
    int top,max ;
    char s[];
    Stack1();
    void push(char t);
    char pop();
    int IsEmpty();
    char getTop();
    char ISP(char);
    char ICP(char);
    void Infix_to_postfix(char infix[20],char postfix[20]);

};

Stack1 ::Stack1()
{
    top = -1 ;
    max = 20 ;
}
void Stack1::push(char t)
{
    if(top == max-1)
    {
        cout<<"stack is full"<<endl;
    }
    else 
    {
        top++ ;
        s[top] = t ;
    }

}
char Stack1 ::pop()
{
    char t ;
    if(top == -1)
    {
        cout<<"sorry 😢 stack empty"<<endl;
    }
    else{
        t = s[top] ;
        top-- ;
        
    }
    return t ;

}
int Stack1 ::IsEmpty()
{
    if(top == -1)
    {

        return 1 ;
    }
    else 
    {
        return 0 ;
    }
}
char Stack1 ::getTop()
{
    char ch ;
    if(top == -1)
    {
        cout<<"empty stack"<<endl;
    }
    else
    {
        ch = s[top];
    }
    return s[top];
}
char Stack1 ::ISP(char ch)
{
   switch(ch)
   {
    case '+':
    case '-':
    return 1;
    case '*':
    case '/':
    return 2 ;
    case '^':
    return 3 ;
    case '(':
    return 0 ;
    case '#':
    return -1 ;
   }
}
char Stack1 ::ICP(char ch)
{
    switch (ch)
    {
      case '+':
      case '-':
      return 1 ;
      case '*':
      case '/':
      return 2 ;
      case '^':
      return 3;
      case '(':
      return 4 ;
    }
}
void Stack1::Infix_to_postfix(char infix[20], char potsfix[20])
{
    Stack1 sk;
    int i = 0;
    char ch, x;
    sk.push('#');
    while (infix[i] != '\0')
    {
        ch = infix[i];
        i++;
        if (ch >= 'a' && ch <= 'z')
            cout << ch;
        else
        {
            if (ch == ')')
            {
                while (sk.getTop() != '(')
                {
                    x = sk.pop();
                    cout << x;
                }
                sk.pop(); // to remove open ( from stack
            }
            else
            {
                while (ISP(sk.getTop()) >= ICP(ch))
                {
                    x = sk.pop();
                    cout << x;
                }
                sk.push(ch);
            }
        }
    } // while loop closed  
    while(!sk.IsEmpty())
    {
        x = sk.pop();
        if(x != '#')
        
        cout<<x ;
    }

}
int main()
{
    Stack1 sk ;
    char infix[20],postfix[20];
    cout<<"enter the infix:"<<endl;
    cin>>infix;
    sk.Infix_to_postfix(infix,postfix);
}