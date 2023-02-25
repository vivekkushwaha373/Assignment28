#include<iostream>
using namespace std;
class Integer
{
int x;
public:
Integer(int y)
{
    x=y;
}
void display();

operator!()
{
    x=-x;
}

};
void Integer::display()
{
cout<<x;
}
int main()
{
Integer s1(9);
!s1;
s1.display();

    return 0;
}