/*
	Name : Muhammad Rafid Imran
	Roll No.: I19-1954
	Section : CSDF-L
*/


#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()

{
    srand(time(NULL));
    int array_1[10] = {5} , x ,i  ;

    for (i=1 ; i<10 ; i++)

    {
        array_1[i]=rand()%14+1 ;

    }

    for (i=0 ; i<10 ; i++)
    {
        x = array_1[i] ;
        cout << array_1[i] <<"\t" ;

        for (int j=1 ; j<=x ; j++)
        {
         cout << "* " ;
        }
    cout << endl ;
    }


    return 0 ;

}
