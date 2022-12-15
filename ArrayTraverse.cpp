#include <iostream>
using namespace std;

class Array
{
    int x[100];
    int maxsize;

public:
    Array();
    void Read_Element();
    void Display_Element_Forward();
    void Display_Element_Backward();
};
Array::Array()
{
    cout << "ENter the size of array:";
    cin >> maxsize;
}
void Array::Read_Element()
{
    if (maxsize > 100)
    {
        cout << "Array max size is 100";
        exit(0);
    }
    else
    {

        cout << "ENter the Element of array" << endl;
        for (int i = 0; i < maxsize; i++)
        {
            cin >> x[i];
        }
    }
}
void Array::Display_Element_Forward()
{
    cout << "ENter the Element of array" << endl;
    for (int i = 0; i < maxsize; i++)
    {
        cout << x[i];
    }
}
void Array::Display_Element_Backward()
{
    cout << "ENter the Element of array" << endl;
    for (int i = maxsize - 1; i >= 0; i--)
    {
        cout << x[i];
    }
}
int main()
{
    Array a;
    a.Read_Element();
    a.Display_Element_Forward();
    a.Display_Element_Backward();
    return 0;
}