using namespace std;
#include <bits/stdc++.h>
class node
{
public:
   
    int data;
    node *right;
    node *left;
    node(int d)
    {
        this->data = d;
        this ->right = NULL ;
        this->left = NULL;
    }
};
node* buildTree(node* root)
{
cout<<"enter the data :" ;
int data ;
cin>>data ;
root = new node(data);

if(data == -1)
{
    cout<<"you entered data for tree NULL"<<endl;
    return NULL ;
}

cout<<"enter for inserting data in left of"<<data<<endl;
   root->left = buildTree(root->left);
cout<<"enter for inserting data in right of"<<data<<endl;
 root->right = (root->right);

 return root ;

}
void levelOrderTraversal(node* root){
    queue<node*> q ;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;

            if(!q.empty())
            {
                q.push(NULL) ;
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }




}
int main()
{
   node* root = NULL ;
   buildTree(root);
   

   levelOrderTraversal(root);
   return 0 ;



}