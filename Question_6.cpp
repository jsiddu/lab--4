#include<iostream>
using namespace std;
int primes(int x)
{
int j=0,i;
for( i=1 ; i<=x ; i++)
{
	if(x%i==0)
	  j++;
}
return j;;
}
main()
{
int a,b,c,d;
cout << "Enter two integers : ";
cin >> a >> b;
for( c=a+1 ; c<b ; c++)
{
d = primes(c);
if(d==2)
cout << c << "\n";
}
return 0;
}
