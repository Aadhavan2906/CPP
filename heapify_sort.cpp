#include <iostream>

using namespace std;

class Heap
{
  private:
  int *arr;
  int size;
  public:
  Heap()
  {
      cout<<"Enter the size of arr : ";
      cin>>size;
      arr = new int[100];
      create_arr();
  }
  void create_arr()
  {
    cout<<"Enter the elements : ";
    for(int i=0;i<size;i++)
    {
    cin>>*(arr+i);
    }
    build_heap();
  }
  void build_heap()
  {
    
    for(int i=(size/2)-1;i>=0;i--)
    {
    max_heap(arr,size,i);
    }
    
  }
  void swap(int *ai,int *an)
  {
      int temp = *ai;
      *ai = *an;
      *an = *ai;
  }
  void max_heap(int *arr,int size,int i)
  {
      int largest = i,L=(2*i)+1,R=(2*i)+2;
      if(L<size&&arr[L]>arr[largest])
      {
          largest = L;
      }
      if(R<size&&arr[R]>arr[largest])
      {
          largest = R;
      }if(largest!=i)
      {
          swap(arr,i,largest);
          max_heap(arr,size,largest);
      }
  }
  void insert_heap(int data)
  {
      size++;
      *(arr+size-1)  =data;
      build_heap();
  }
    void delete_heap(int pos)
  {
      if(pos<size)
      {
      int temp = *(arr+(size-1));
      *(arr+(size-1)) = *(arr+(pos-1));
      *(arr+(pos-1)) = temp;
      size--;
      build_heap();
      }
  }
  void swap(int *arr,int i,int largest)
  {
      int temp = *(arr+i);
      *(arr+i) = *(arr+largest);
      *(arr+largest) = temp;
  }
  void display()
  {
       cout<<"The MAX Heapified Array : ";
      for(int i=0;i<size;i++)
      {
         cout<<*(arr+i)<<" ";
      }
      cout<<endl;
  }
};

int main()
{
    Heap h;
    h.build_heap();
    h.display();
    h.insert_heap(90);
    h.display();
    h.delete_heap(2);
    h.display();
    
}
