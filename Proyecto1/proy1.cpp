/* proyecto 1 (Twitch)

* Programa que crea una matriz loca

* instrucciónes para compilar:
* $ g++ -Wall -pedantic -o proy1 proy1.cpp

*/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  // Declarar variables
  int x;

  cout << "ingrese tamaño: ";
  cin >> x;
  cout << endl;

  const int n = x;

  int lis1[n] = {0};
  int lis2[n] = {0};

  int i,j,k,l;

  for(i=0;i<n;i++)
  {
      if(i==0)
      {
          for(j=0;j<n;j++)
          {
              lis1[j]=j+1;
          }
          for (const auto& e : lis1)
          {
              cout << e <<" ";
          }
          cout << endl;
      }
      else
      {
          for(k=0;k<n;k++)
          {
              if(k==0)
              {
                 lis2[k]=i+1;
              }
              else
              {
                  lis2[k] = lis1[k]+lis2[k-1];
              }
          }
          for (const auto& e : lis2)
          {
              cout << e <<" ";
          }
          cout << endl;
          for(l=0;l<n;l++)
          {
              lis1[l] = lis2[l];
          }
      }
  }
// fin
}
