#include<iostream>
using namespace std;
class Complex
{
int real,imaginery;
public:
operator=(int y)
{
real=y;
imaginery=2*y;
}
void display()
{
    cout<<"real= "<<real<<endl;
    cout<<"imaginery= "<<imaginery;
}


};
int main()
{
    Complex s1;
    s1=3;
    s1.display();

    return 0;
}