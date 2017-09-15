#include<iostream>
using namespace std;
int even(int x)
{
        int z = 0;
        if(x%2==0)
          z = 1;
        return z;
}
main()
{
int x,a;
cout << "Enter an integer : ";
cin >> x;
a = even(x);
if(a==1)
cout << "EVEN";
else
cout << "ODD";
}
