#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int main()
 {
  srand(time(NULL));
  int matriz [5][5];
  for(int fila=0;fila<5;fila++)
   {
    for (int col=0;col<5;col++)
     {
      matriz[fila][col]=rand() % (13)+3;
      cout << matriz [fila][col] << " ";
     }
    cout<<endl;
   }
  return 0;
 }
