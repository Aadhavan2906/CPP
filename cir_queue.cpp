#include<iostream>
using namespace std;


class Queue
{
  private:
  int arr[5];
  int front;
  int rear;
  public:
  Queue()
  {
      front = rear = -1;
      for(int i=0;i<5;i++)
      {
          arr[i]=0;
      }
      
  }
  bool isEmpty()
  {
      if(front == -1&& rear == -1){return true;}
      else {return false;}
      
  }
  bool isFull()
  {
      if((rear+1)%5 == front ){return true;}
      else{return false;}
  }
  void enqueue(int data)
  {
      if(isFull())
      {
          cout<<"Queue is Full...!";
          return;
      }
      else if(isEmpty())
      {
          rear = front = 0;
          arr[front] = data;
      }
      else
      {
          rear=(rear+1)%5;
          arr[rear] = data;
      }
  }
  void dequeue()
  {
      if(isEmpty())
      {
          cout<<"Queue is Empty.......! ";
          return;
      }
      else if(rear==0&&front ==0)
      {
          arr[front]=0;
          front = rear = -1;
      }
      else
      {
          arr[front] = 0;
          front = (front+1)%5;
          
      }
  }
  void display()
  {
      cout<<"Front : "<<front<<endl;
      cout<<"Rear : "<<rear<<endl;
      if(front != -1&&rear !=-1)
      {
          
      cout<<"The Queue : ";
      for(int i=0;i<5;i++)
      {
          cout<<arr[i]<<" ";
      }
      }
  }
};

int main()
{ 
    Queue q;
    int choice,ele;
    while(1)
    {
        cout<<"\n1.Enqueue.\n";
        cout<<"2.Dequeue.\n";
        cout<<"3.Display\n";
        cout<<"4.Exit.\n";
        
        cout<<"Enter the Choice : ";
        cin>>choice;
        if(choice==4)
        {
            break;
        }
        if(choice>=5||choice<=0)
        {
            continue;
        }
        
        switch(choice)
        {
            case 1:
            cout<<"Enter the element add : ";
            cin>>ele;
            q.enqueue(ele);
            break;
            case 2:
            q.dequeue();
            break;
            case 3:
            q.display();
            break;
        }
    }
    
}