#include <iostream>
using namespace std;
int Stack[10], Top =0, Maxsize=9;
bool isEmpty()
{
    if (Top==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{

    if(Top==Maxsize)
    {

        return true;
    }
    else{
        return false;
    }
}
bool push(int element)
{
    if(isFull())
    {
        cout<<"Stack is full"<<endl;
        return false;
    }
    else{
        Top++;
        Stack[Top]=element;
        return true;
    }
}

bool pop()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return false;
    }
    else{
        Top--;
        return true;
    }
}
int topelement()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;

    }
    else{
        cout<<"the top element is: "<<Stack[Top]<<endl;
    }
}

void show()
{

    if (isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
        {
            for(int i=Top;i>=0;i--)
        {
        cout<<Stack[i]<<endl;
        }
    }
}

int main()
{

    cout<<"after pushing the new stack is: "<<endl;
    push(8);
    push(6);
    push(3);
    push(4);
    push(19);
    push(11);
    push(5);
    push(2);
    show();
    cout<<endl;
    topelement();

        cout<<"after popping the new stack is: "<<endl;
        pop();
        show();
        topelement();
}
