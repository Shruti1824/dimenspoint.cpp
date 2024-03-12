#include<iostream.h>
#include<conio.h>
class point
{
int x,y,z;
public:
void get()
{
cout<<"Enter 3-Dimensional points:";
cin>>x>>y>>z;
}
void display()
{
cout<<x<<"\t"<<y<<z<<endl;
}
point operator+(point &t)
{
point tp;
tp.x=x+t.x;
tp.y=y+t.y;
tp.z=z+t.z;
return tp;
}
void operator-()
{
x=-x;
y=-y;
z=-z;
display();
}
};
void main()
{
point p1,p2,p3;
clrscr();
p1.get();
p1.get();
cout<<"\n First 3-Dimensional point:";
p1.display();
cout<<"\n Second 3-Dimensional point:";
p2.display();
p3=p1+p2;
cout<<"Added point:" ;
p3.display();
cout<<"\n\n Negated co-ordinate of p1: " ;
-p1;
getch();
}
\