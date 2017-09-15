#include<iostream>
using namespace std;
int pwr(int x , int y )
{
        int z = 1;
        while(y>0)
        {
                z = z * x;
                y--;
        }
        return z;
}
main()
{
int a,b,c;
cout << "Enter an integer : ";
cin >> a;
c = pwr(a,3);
cout << "Cube = " << c;
}
