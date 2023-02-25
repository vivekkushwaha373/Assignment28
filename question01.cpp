#include<iostream>
using namespace std;
class Complex
{
int a;
public:
operator<<(ostream &o)
{
 o<<"Entered value is : "<<a;
}
friend void operator>>(istream&,Complex &s1);
};
void operator>>(istream &i,Complex &s1)//defining operator
{

cout<<"Enter the value: ";
i>>s1.a;
}
int main()
{
Complex s2;
cin>>s2;
s2<<cout;
return 0;
}