#include <iostream>
#include <math.h>
using namespace std;

main()
{
  cout<<"Enter any number:";
  int b;
  cin>>b;
  cout<<endl;
  cout<<endl<<"Enter thr used base:";
  int q;
  cin>>q;
  int dec=0;
  int x[100];
  int i,k=0;
  while (b>0)
  {
    x[k]=b%10;
    b=b/10;
    k++;
  }
  for(i=0;i<k;i++)
  {
    dec=dec+x[i]*pow(q,i);
  }
  cout<<"Decimal:"<<dec;
}
