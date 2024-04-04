#include<iostream>
using namespace std;
class Stack
{
    private:
    int arr[5];
    int top;
    int count;
    public:
    Stack()
    {
        top = -1;
        for(int i=0;i<4;i++)
        {
            arr[i]=0;
        }
        count =0;
    }
    void push(int data)
    {
        if(isFull())
        {
            cout<<"\nStack is Full....!";
            return;
        }else
        {
        top++;
        arr[top]= data;
        count++;
        }
            
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"\nStack is Empty....!";
            return;
        }
        else
        {
            
        cout<<"\nThe Last Element "<<arr[top]<<" deleted !";
        arr[top] = 0;
        top--;
        count--;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
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
        if(top>4)
        {
            return true;
        }
        else 
        {
            return false;
        }
        
    }
    void peek(int pos)
    {
        if(pos-1<=top && pos>0)
        {
            cout<<"\nThis is the element "<<arr[pos-1]<<" at position "<<pos; 
        }
        else
        {
            cout<<"No Position is found...!";
        }
    }
    void change(int pos,int data)
    {
        if(pos-1<=top && pos>0)
        {
            
        arr[pos-1]=data;
        cout<<"The Element at "<<pos<<" is changed to "<<data; 
        }else
        {
            
            cout<<"No Position is found...!";
        }
    }
    int countElement()
    {
        return count;
    }
    void display()
    {
        cout<<"\nTop Position : "<<top;
        cout<<"\nThe Stack Elements are : ";
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    
};
int main()
{
    Stack s;
    int ch,ele,count,pos;
    while(1)
    {
        cout<<"\n1.Push Element in stack ";
        cout<<"\n2.Pop Element in stack ";
        cout<<"\n3.Is Empty ()";
        cout<<"\n4.Is Full ()";
        cout<<"\n5.Peek Element at i-th position";
        cout<<"\n6.Change Element at i-th position";
        cout<<"\n7.Count Element ";
        cout<<"\n8.Display Stack";
        cout<<"\n9.Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        if(ch==9)
        {
            cout<<"\nThank You...........!";
            break;
        }
        if(ch<=0||ch>9)
        {
            continue;
        }
        switch(ch)
        {
            case 1:
            cout<<"\nEnter the Element to Push : ";
            cin>>ele;
            s.push(ele);
            break;
            case 2:
            s.pop();
            break;
            case 3:
            cout<<"\n"<<s.isEmpty();
            break;
            case 4:
            cout<<"\n"<<s.isFull();
            break;
            case 5:
            cout<<"\nEnter the position you need to access : ";
            cin>>pos;
            s.peek(pos);
            break;
            case 6:
            cout<<"Enter the position to change : ";
            cin>>pos;
            cout<<"Enter the Value : ";
            cin>>ele;
            s.change(pos,ele);
            break;
            case 7:
            count = s.countElement();
            cout<<"\nTotal Number of Elements : "<<count;
            break;
            case 8:
            s.display();
            break;
            
            
        }
    }
}