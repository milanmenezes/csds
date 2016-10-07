#include<iostream>
#include<stdlib.h>
using namespace std;
class mat
{
 int a[100][100];
 int r;
 int c;
 public:
 mat operator +(mat &b){
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++)
 {
  cout<<a[i][j]+b.a[i][j]<<" "; 
 }
 cout<<endl;
}
return *this;
}

  mat operator -(mat &b){
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++)
 {
  cout<<a[i][j]-b.a[i][j]<<" ";
 }
 cout<<endl;
 }
 return *this;  
}
int operator==(mat &b){
 if(r==b.r && c==b.c)
  return 1;
 
 return 0;
 }

 void order()
 {
  cin>>r>>c;
 }
 
 void input()
 {
  for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
 {
 cin>>a[i][j];
 }
 }
 }
};
int main()
{
 int t;
 mat m1;
 mat m2;
 cout<<"Enter the order of the first matrix"<<endl;
 m1.order();
 cout<<"Enter the elements of the first matrix"<<endl;
 m1.input();
 cout<<"Enter the order of the second matrix"<<endl;
 m2.order();
 cout<<"Enter the elements of the second matrix"<<endl;
 m2.input();

 if(m1==m2)
 {
  cout<<"Enter 1.to add, 2. to subtract"<<endl;
  cin>>t;
  if(t==1)
   m1+m2;
 
  else
   m1-m2;
 }
 else {
 cout<<"Order mismatch"<<endl;
 }
return 0;
}
