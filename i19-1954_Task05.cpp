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
    int array_1[5][5] , Sum_Row[5]= {0,0,0,0,0} , x ,i ,Odd_Sum = 0  ;


    cout <<"Array : "<<endl<<"\t" ;
    for (i=0 ; i<5 ; i++)        //Filling Array Ramdonly
     {
        for (int j=0 ; j<5 ; j++)
        {
            array_1[i][j] = rand() % 9 + 1 ;
            Sum_Row[i] += array_1[i][j] ;       //Row Summing

            cout << array_1[i][j]<< "\t";

            if (i%2==1 && j%2==1)
                Odd_Sum += array_1[i][j] ;      //

        }
        cout << endl << "\t" ;
    }

    cout << "\nSum Of 1st Row : "<< Sum_Row[0] << endl ;
    cout << "Sum Of 2nd Row : "<< Sum_Row[1] << endl ;
    cout << "Sum Of 3rd Row : "<< Sum_Row[2] << endl ;
    cout << "Sum Of 4th Row : "<< Sum_Row[3] << endl ;
    cout << "Sum Of 5th Row : "<< Sum_Row[4] << endl ;
    cout << "\nSum Of Elements With Odd Row No. and Column No.  : "<< Odd_Sum << endl ;

    return 0 ;

}
