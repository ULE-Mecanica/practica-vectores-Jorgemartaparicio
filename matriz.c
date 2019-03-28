#include<iostream>
using namespace std;
int main()
 {
  int A[9][9];
  for (int i=0;i<9;i++)
   {
    for (int j=0;j<9;j++)
     {
      if(j==i)
      A[i][j]=1;
      else
      A[i][j]=0;
     }
   }
  for (int i=0;i<9;i++)
   {
    for (int j=0;j<9;j++)
     {
      cout<<A[i][j];
     }
    cout<<endl;
   }
  return 0;
 }
