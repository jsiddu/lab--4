#include<iostream>
using namespace std;
int arm(int x)
{
int i,j,b,n,s=0;
   j = x;
   while(j != 0)
   {
         b = j % 10;
         s += b * b * b;
         j /= 10;
   }
   return s;
}
main()
{
int a,b,c,d;
cout << "Enter two integers : ";
cin >> a >> b;
for( c=a+1 ; c<b ; c++)
{
d = arm(c);
if(d==c)
cout << c << "\n";
}
return 0;
}
