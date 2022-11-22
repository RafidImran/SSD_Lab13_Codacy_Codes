/*
	Name : Muhammad Rafid Imran
	Roll No.: I19-1954
	Section : CSDF-L
*/


#include <iostream>

using namespace std;

int main()
{
    int i , x , y=0 , z=1 , array_1[5] = {1,2,3,4,5} , array_2[5]={6,7,8,9,10} , array_3[10] , array_4[10] , array_5[10] ;


    // ***PART I***


   for (i=0 ; i<5 ;i++)
    {
        x = i+5 ;

        array_3[i] = array_1[i] ;
        array_3[x] = array_2[i] ;

    }

    cout <<endl;

    cout << "\t\t\t***PART I***  \n" ;

    for (i=0 ; i<10 ;i++)
    {
       cout <<  array_3[i] <<"\t" ;

    }
    cout <<endl;


    // ***PART II***


   for (i=0 ; i<5 ;i++)
    {
        x = 9 - i ;

        array_4[i] = array_1[i] ;
        array_4[x] = array_2[i] ;

    }

    cout <<endl;

    cout << "\t\t\t***PART II***  \n" ;

    for (i=0 ; i<10 ;i++)
    {
       cout <<  array_4[i] <<"\t" ;

    }
    cout <<endl;



    // ***PART III***


   for (i=0 ; i<5 ;i++)
    {

        array_5[y] = array_1[i] ;
        array_5[z] = array_2[i] ;

        y+=2 ;
        z+=2 ;

    }

    cout <<endl;

    cout << "\t\t\t***PART III***  \n" ;

    for (i=0 ; i<10 ;i++)
    {
       cout <<  array_5[i] <<"\t" ;

    }
    cout <<endl;



}
