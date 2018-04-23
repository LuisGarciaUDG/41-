/* Programa 41 llenar dos tablas A y B con numeros enteros tamaño 3 x 4
                tomar el valor de la celda 0,0 de la tabla A,
                y sumar el valor de 0,0 de la tabla B,
                depositar el resultado en la tabla C y así sucesivamente
                hasta llenar las tres tablas.
                imprimir las tablas A, B, C.
Estructura for y arreglos bidimencionales
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 17 de marzo de 2015

*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int matrixA [3] [4], matrixB [3] [4], matrixC [3] [4], j, i;
for (i=0;i<3;i++)
{
    for (j=0;j<4;j++)
    {
    matrixA [i] [j]=0;
    matrixB [i] [j]=0;
    matrixC [i] [j]=0;
    }
}

    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            cout<<"introduce los valores de la matriz A fila: "<<i<<" columna: "<<j<<"  ";
            cin>>matrixA[i][j];
            //matrixC[i] [j] = matrixA [i] [j] + matrixB [i] [j];
            //sumac[j]=sumac[j]+matrix[i][j];
       }
    }

    cout<<"\n\n\n---------------------------------------------\n\n";

      for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            cout<<"introduce los valores de la matriz B fila: "<<i<<" columna: "<<j<<"  ";
            cin>>matrixB[i][j];
       }
    }


cout<<"\n\nCreando matriz A "<<"\n\n";
    Sleep(500);
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
        cout<<" "<<matrixA [i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n\n";


cout<<"\n\nCreando matriz B "<<"\n\n";
    Sleep(500);
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
        cout<<" "<<matrixB [i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n\n";

for (i=0;i<3;i++)
{
    for (j=0;j<4;j++)
    {
    matrixC [i] [j] = matrixB [i] [j]+ matrixA [i] [j];
    }
}


cout<<"\n\nCreando matriz C "<<"\n\n";
    Sleep(500);
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
        cout<<" "<<matrixC [i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n\n";

system ("pause");
return 0;
}
