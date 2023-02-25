#include<iostream>
using namespace std;
class Integer
{
int a;
public:
Integer(int y)
{
a=y;
}
operator int()
{
return a;
}
};
int main()
{
int x;
Integer c1(0);
x=c1;
cout<<x;
return 0;
}
