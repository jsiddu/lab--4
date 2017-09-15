#include<iostream>
using namespace std;
int perf(int x)
{
int j,s=0;
for( j=1 ; j<x ; j++)
       {
        if(x%j==0)
        s += j;
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
d = perf(c);
if(d==c)
cout << c << "\n";
}
return 0;
}
