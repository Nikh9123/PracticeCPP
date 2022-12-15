using namespace std ;
#include<bits/stdc++.h>

class node 
{
    public:
    node *lchild ;
    node *rchild ;
    int data ;
};

node *root ;
class BST 
{
    public :
    BST();
    int IsEmpty();;
    void Insert(int dt);
    void preorder(node *rt);
    void inorder(node *rt);
    void postorder(node *rt);
    void search(node *rt , int key);
    node *deletNode(node *rt , int key);
    node *minValuenode(node *n);

};
BST :: BST()
{
    root = NULL ;
}

int BST ::IsEmpty()
{
    return (root == NULL);
}
void BST ::Insert(int dt)
{
//    node *temp = new node();
//    node *parent = NULL ;

//    temp->data = dt ;
//    temp->lchild = NULL ;
//    temp->rchild = NULL ;

//    if(IsEmpty())
//    {
//     root = temp ;
//    }
//    else 
//    {
//     node *ptr = root ;
//     while(ptr != NULL)
//     {
//         parent = ptr ;

//         if(dt < temp->data)
//         ptr = temp->lchild ;
//         else
//         ptr = temp->rchild;
//     }
//     if(dt < parent->data)
//     {
//         parent->lchild=temp ;
//     }
//     else
//     parent->rchild = temp ;
//    

// }
node * temp = new node();
node *parent = NULL ;

temp->data =dt;
temp->lchild = NULL ;
temp->rchild = NULL ;

if(IsEmpty())
root = temp ;

else
{
    node *ptr = root ;
    while(ptr  != NULL)
    {
        parent = ptr ;
        if(dt < ptr->data)
        ptr = temp->lchild ;
        else
        ptr = temp->rchild;
    }
    if(dt < parent->data)
    parent->lchild = temp;
    else 
    parent->rchild = temp ;
}

}

void BST :: preorder(node *rt)
{
    if(rt != NULL)
    {
        cout<<rt->data<<"\t";
        preorder(rt->lchild);
        preorder(rt->rchild);

    }
}
void BST :: inorder(node *rt)
{
    if(rt != NULL)
    {
        
        inorder(rt->lchild);

        cout<<rt->data<<"\t";
        inorder(rt->rchild);

    }
}

void BST :: postorder(node *rt)
{
    if(rt != NULL)
    {
        
        postorder(rt->lchild);
        postorder(rt->rchild);
        cout<<rt->data<<"\t";

    }
}

void BST :: search(node *rt , int key)
{
    // int d  = 0 ;
    // node *temp =  rt ;
    // node *pr = NULL ;
    // while(temp != NULL)
    // {
    //     d++ ;
    //     if(temp->data == key)
    //     {
    //       if(pr == NULL)
    //       cout<<temp->data<<"it is root element"<<endl;
    //       cout<<"the parent node :"<<pr->data<<endl;
    //       cout<<"the data found at depth :"<<d<<endl;
    //       return ;
    //     }
    //     else if(key > temp->data)
    //     {
    //       pr =  temp ;
    //       temp = temp->rchild;
    //     }
    //     else{
    //         pr = temp ;
    //         temp = temp->lchild;
    //     }
    // }
    // cout<<"The data not found"<<endl;
    // return ;

    node *temp = rt ;\
    int d = 0 ;
    node *pr = NULL ;

    while(temp != NULL)
    {
        d++ ;
        if(key == temp->data)
        {
            if(pr == NULL)
            {
                cout<<temp->data<<" the element founnd at root"<<endl;
            }
            cout<<"parent node is :"<<pr->data<<endl;
            cout<<"the data found at depth :"<<d<<endl;
        }
        else if(key < temp->data){
        pr = temp ;
        temp=temp->lchild ;
        }
        else
        {
            pr = temp ;
            temp=temp->rchild;
        }
    
    }
    cout<<"element not found"<<endl;
}
node* BST ::minValuenode(node *n)
{
    // node *cur = n ;
    // while(cur && cur->lchild!=NULL)
    // cur = cur->lchild;
    // return cur ;
    node *cur = n ;
    while(cur && cur->lchild!=NULL)
    {
        cur = cur ->lchild;
    }
    return cur ;
}
node *BST ::deletNode(node *rt , int key)
{
    BST bs ;
    if(rt == NULL)
    return rt ;
    if(key < rt->data)
    {
        rt->lchild=deletNode(rt->lchild , key);
    }
    else if(key > rt->data)
{
    rt->rchild = deletNode(rt->rchild,key);
}
else
{
    if(rt->lchild == NULL and rt->rchild == NULL)
    return NULL ;
    else if(rt->lchild == NULL)
    {
        node *temp = rt->lchild ;
        delete rt ;
        return temp ;

    }
    else if(rt->rchild == NULL){
        node *temp = rt->rchild;
        delete rt ;
        return temp ;
    }
    else
    {
        node *temp =bs.minValuenode(rt->rchild);
        rt->data= temp ->data ;
        rt->rchild = deletNode
        (rt->rchild , temp->data);
    }
}
return rt ;
}