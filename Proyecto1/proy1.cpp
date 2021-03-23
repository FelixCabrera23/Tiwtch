/* proyecto 1 (Twitch)

* Programa que crea una matriz loca

* instrucciónes para compilar:
*$ g++ -Wall -pedantic -o proy1 proy1.cpp

*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    // Declaramos algunas variables importantes

    int n_i; // Estas son las dimensiones de la caja

    // Pedimos al usuario el valor de n
    cout << "ingrese el tamaño de la caja: ";
    cin >> n_i;
    cout << endl;

    const int n = n_i;

    int A[n] = {0}; // Estas son las listas auxiliares
    int B[n] = {0};

    int i,j; // Variables auxiliares de conteo

    for( i=0; i<n; i++) // Este ciclo corre por cada fila
    {
          if( i==0 ) // si nuestra fila es la 0 la llenamos asi:
          {
              for( j=0; j<n; j++)
              {
                  A[j]= j+1;
              }
              for (const auto& e : A)
              {
                  cout << e << " ";
              }
              cout << endl;
          }
          else // si nuestra fila es distina a la 0 entonces:
          {
              for( j=0; j<n;j++) // este cilco va cambiando las columnas
              {
                  if(j==0)
                  {
                      B[0] = i+1;
                  }
                  else
                  {
                      B[j] = B[j-1]+A[j];
                  }
              }
              for (const auto& e : B)
              {
                  cout << e << " ";
              }
              cout << endl;
              for( j=0;j<n;j++ )
              {
                  A[j] = B[j];
              }
          }
    }
}
