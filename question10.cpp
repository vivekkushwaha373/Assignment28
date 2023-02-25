#include<iostream>
using namespace std;
class Distance
{
int feet;
int inches;
public:
Distance(){}//default constructor
Distance(int a,int b)
{
    feet=a;
    inches=b;
}
operator()(int a,int b,int c)
{
feet=a+c+5;
inches=a+b+15;
}
void display()
{
    cout<<"feet= "<<feet<<endl;
    cout<<"inches= "<<inches<<endl;
}
};
int main()
{
int x,y,z;
Distance s1(2,3);
s1.display();
cout<<"Enter three values: ";
cin>>x>>y>>z;
s1(x,y,z);
s1.display();
    return 0;
}