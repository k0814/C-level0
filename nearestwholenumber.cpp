#include <iostream>
using namespace std;
int main()
{
 int d=1;
 while (d>0)
 {
 double a,c;
 int b;
 cout<<"Enter number to round of to the nearest whole number\n";
 cin>>a;
 b=a;
 c=a-b;
 if(c>0.5)
 	cout<<"When rounded off to the nearest whole number "<<a<<" is "<<b+1<<endl;
 else
 	cout<<"When rounded off to the nearest whole number "<<a<<" is "<<b<<endl;
 cout<<"Enter __1__ to CONTINUE       __0__ to EXIT\n\n";
 cin>>d;
 }
return 0;
}
