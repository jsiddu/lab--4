using namespace std;
int strongs(int x)
{
int a,b,c,i,j,s=0;
    b = x;
    while(b != 0)
    {
      j = 1;
      c = b % 10;
      for( i=1 ; i<=c ; i++ )
         {
          j *= i;
         }
      s += j;
      b /= 10;
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
d = strongs(c);
if(d==c)
cout << c << "\n";
}
return 0;
}
