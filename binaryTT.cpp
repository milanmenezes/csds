#include <bits/stdc++.h>

using namespace std;
int main()
{ int n,b;
  cout<<"enter no of inputs\n";
  cin>>n;
 int *a=(int*)malloc(n*pow(2,n)*sizeof(int));
 for(int i=0;i<pow(2,n);i++)
    for(int j=0;j<n;j++)
        *(a+i*n+j)=0;

  for(int i=0;i<pow(2,n);i++)
  {
      int j=n-1,t=i;
  while((t!=0)&&(j>=0))
  { b=t%2;
    *(a+i*n+j)=b;
    j--;
    t=t/2;
  }}
  for(int i=0;i<pow(2,n);i++)
  {
       for(int j=0;j<n;j++)
        cout<<*(a+i*n+j)<<" ";
    cout<<"\n";
}
 free(a);
return 0;
}
