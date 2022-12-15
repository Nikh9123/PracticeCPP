#include <bits/stdc++.h>
using namespace std;
class Array
{
    int x[100];
    int maxSize;

public:
    Array();
    void Read_element();
    void DisplayElement_froward();
    void DisplayBackward();
    void deleteInForward();
    void Deletebackward();
    void InsertAtPos();
};
Array ::Array()
{
    cout << "enter the size of array :" << endl;
    cin >> maxSize;
}
void Array ::Read_element()
{
    if (maxSize > 100)
    {
        cout << "Arrayy maxsize is 100 " << endl;
        exit(0);
    }
    else
    {
        cout << "enter the element of array" << endl;
        for (int i = 0; i < maxSize; i++)
        {
            cin >> x[i];
        }
    }
}
void Array ::DisplayElement_froward()
{
    cout << "showing elements in forward " << endl;
    for (int i = 0; i < maxSize; i++)
        cout << "element " << i << " :" << x[i] << endl;
}
void Array ::DisplayBackward()
{
    cout << "showing elements in backward " << endl;
    for (int i = maxSize - 1; i >= 0; i--)
        cout << "element " << i << " :" << x[i] << endl;
    // cout<<endl;
}
void Array ::deleteInForward()
{
    cout << "printing element after deleteing front element :" << endl;

    for (int i = 1; i < maxSize; i++)
    {
        cout << "element " << i << " :" << x[i] << endl;
    }
}
void Array ::Deletebackward()
{
    cout << "printing element after deleteing back  element :" << endl;
    for (int i = 0; i < maxSize - 1; i++)
        cout << "element " << i << " :" << x[i] << endl;
}
void Array ::InsertAtPos()
{
    int Index;
    cout << "enter the index where you want to Insert :" << endl;
    cin >> Index;
    int number;
    cout << "enter the inserting number " << endl;
    cin >> number;
    maxSize = maxSize + 1;
    for (int i = 0; i < Index; i++)
        cout << "element " << i << " :" << x[i] << endl;

    x[Index] = number;
    for (int i = Index; i < maxSize; i++)
        cout << "element " << i << " :" << x[i] << endl;
}
int main()
{
    Array a;
    a.Read_element();
    a.DisplayElement_froward();
    //   a.DisplayBackward();
    //   a.deleteInForward();
    //   a.Deletebackward();
    a.InsertAtPos();
    a.DisplayElement_froward();
}

