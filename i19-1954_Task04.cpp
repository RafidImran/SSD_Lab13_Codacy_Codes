/*
	Name : Muhammad Rafid Imran
	Roll No.: I19-1954
	Section : CSDF-L
*/


#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
int main()
{
    srand(time(NULL));
    int array_1[5][5] , x ,i  ;

   cout << "Randomly Filled 5x5 Array : "<<endl;

    for (i=0 ; i<5 ; i++)        //Printing of Randomly Filled Array

    {
        for (int j=0 ; j<5 ; j++)
        {
            array_1[i][j] = rand() % 99 + 1 ;

            cout << array_1[i][j]<< "\t\t" ;

        }
        cout << endl ;

    }

    cout << endl<<endl ;

    cout << "Revesre Of Randomly Filled Array : \n" ;
    for (i=4 ; i>=0 ; i--)       //Reverse Printing of Randomly Filled Array

    {
        for (int j=4 ; j>=0 ; j--)
        {



            cout << array_1[i][j]<< "\t\t" ;

        }
        cout << endl ;

    }





    cout << "\n\n\n InPut 25 values for 5x5 Array: " <<endl;


    for (i=0 ; i<5 ; i++)           // For Array Filled By User

    {
        for (int j=0 ; j<5 ; j++)
        {
            cout <<"Enter Value For array_1 ["<<i<<"]["<<j<<"] : " ;
            cin >> array_1[i][j] ;


        }
        cout << endl ;

    }

    cout << "User's Array : \n" ;
    for (i=0 ; i<5 ; i++)           // Printing of Array Filled By User

    {
        for (int j=0 ; j<5 ; j++)
        {
            cout << array_1[i][j]<< "\t\t" ;

        }
        cout << endl ;

    }
    cout <<endl <<endl ;


    cout << "Revesre Of User's Array : \n" ;
     for (i=4 ; i>=0 ; i--)       //Reverse Printing of Array Filled By User

    {
        for (int j=4 ; j>=0 ; j--)
        {


            cout << array_1[i][j]<< "\t\t" ;

        }
        cout << endl ;

    }

    return 0 ;

}
