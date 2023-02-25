#include<iostream>
using namespace std;
class Complex
{  
  int arr[7];
  public:
  void operator[](int index)
  { 
    if(index>6)
    cout<<"Invalid assignment";
    else
    arr[index]= index;
  }
  void showdata(int index)
  {
   if(index>6)
   exit(0);
   cout<<arr[index];
  }
};
int main()
{
    Complex s1;
    int index;
    cout<<"Enter the index: ";
    cin>>index;
    s1[index];
    s1.showdata(index);

    return 0;
}