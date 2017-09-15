#include<iostream>
using namespace std;

int prime(int x)
 {
  int i,j=0;
  for(i=1 ; i<=x ; i++)
  {
        if(x%i==0)
          j++;
  }
  return j;
 }
int arm(int x)
 {
  int k,b,n,s=0;
  n = x;
  while(n != 0)
    {
      b = n % 10;
      s += b * b * b;
      n /= 10;
    }
  if(s == x)
  k = 1;
  return k;
 }
int perf(int x)
 {
  int num,i,l,s=0;
  num = x;
  for( i=1 ; i<num ; i++)
    {
     if(num%i==0)
     s += i;
    }
  if(s==x)
  l = 1;
  return l;
 }
main()
 {
 int x,a,b,c;
 cout << "Enter an integer : ";
 cin >> x;
 a = prime(x);
 b = arm(x);
 c = perf(x);
 if(a==2)
   cout << "PRIME\n";
   else
    cout << "NOT PRIME\n";
    if(b==1)
      cout << "ARMSTRONG NUMBER\n";
if(c==1)
  cout << "PERFECT NUMBER";
}
