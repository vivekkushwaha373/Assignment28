#include<iostream>
using namespace std;
class Coordinate
{
int x,y,z;
public:
Coordinate(){};
Coordinate(int a,int b,int c)
{
     x=a;
     y=b;
     z=c;
}
Coordinate operator,(Coordinate s1)
{
Coordinate c1;
c1=s1;
return c1;
}

void display()
{
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<z<<endl;
}
};


int main()
{
Coordinate c1(1,2,3),c2(1,3,2),c3(3,3,3);
c3=(c1,c2);
c3.display();
 return 0;
}
