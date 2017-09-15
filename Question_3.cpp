#include<iostream>
using namespace std;
int m1(int x , int y )
{
        int maxi;
        if(x>y)
          maxi = x;
        else
          if(x<y)
             maxi = y;
  return maxi;
}
int m2(int x , int y )
{
        int mini;
        if(x<y)
          mini = x;
        else
           if(x>y)
             mini = y;
  return mini;
}
main()
{
int x,y,max1,min1;
cout << "Enter two integers : ";
cin >> x >> y;
max1 = m1(x,y);
min1 = m2(x,y);
cout << "Maximum = " << max1 << "\nMinimum = " << min1;
}
