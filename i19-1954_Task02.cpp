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
    int x ,i ;

    for (i=0 ; i<3 ; i++)
    {
        x=rand()%9+1 ;
        cout << x <<"\t" ;

        for (int j=1 ; j<=x ; j++){
         	cout << "* " ;
        }
	    
   	 cout << endl ;
    }
	
    return 0 ;

}
