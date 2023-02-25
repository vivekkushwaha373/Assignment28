#include<iostream>
using namespace std;
class Complex
{   int x;
    int y;
    public:
    setData(int x,int y)
    {
      this->x=x;
      this->y=y;
    }
    showData()
    {
        cout<<"The values are: ";
        cout<<x<<" "<<y;
    }
};
int main()
{
    Complex s1;
    s1.setData(2,3);
    s1.showData();
    return 0;
}