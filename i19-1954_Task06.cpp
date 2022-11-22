/*
	Name : Muhammad Rafid Imran
	Roll No.: I19-1954
	Section : CSDF-L
*/


#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    int Matrix_1[3][2] , Matrix_2[2][2] ,Product[3][2] ,i ,j ,k ,x,y  ;

    srand(time(NULL));

    cout << "Randomly Filling Both Arrays :\n\n";

    for (i=0 ; i<3 ; i++)        //Printing of Randomly Filled Array

    {
        for (int j=0 ; j<2 ; j++)
        {
            Matrix_1[i][j] = rand() % 11 ;
            Product[i][j] = 0;

            if (i<2)
            {
                Matrix_2[i][j] = rand() % 11 ;
            }
        }
    }


    cout << "MATRIX NO.1 : "<< endl << setw(15) ;
    for (i=0 ; i<3 ; i++)                    //Printing 1st Matrix
    {

       for (int j=0 ; j<2 ; j++)
        {
            cout << Matrix_1[i][j]<< setw(6) ;

        }

        cout << endl << setw(15) ;
    }


    cout << "\nMATRIX NO.2 : "<< endl << setw(15) ;
    for (i=0 ; i<2 ; i++)                   //Printing 2nd Matrix
    {
        for (int j=0 ; j<2 ; j++)
        {
            cout << Matrix_2[i][j]<< setw(6) ;

        }
        cout << endl << setw(15) ;
    }


    for(i=0; i<3; ++i)          //Matrix Multiplication
    {
        for(j=0; j<2; ++j)
        {
            for(k=0; k<2; ++k)
            {
                Product[i][j] += Matrix_1[i][k] * Matrix_2[k][j] ;
            }
        }
    }


    cout << "\nProcuct Of Both Matrix : "<< endl << setw(27) ;
    for (i=0 ; i<3 ; i++)                    //Printing Product
    {
        for (int j=0 ; j<2 ; j++)
        {
            cout << Product[i][j]<< setw(7) ;
        }
        cout << endl << setw(27)  ;
    }

    return 0 ;

}
