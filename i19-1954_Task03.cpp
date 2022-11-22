/*
	Name : Muhammad Rafid Imran
	Roll No.: I19-1954
	Section : CSDF-L
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i ,Cap_Lets = 0 , Low_Lets = 0 , Vowles[5]= {0,0,0,0,0} ;
    char array_1[20] ;

    for (i=0 ; i<20 ; i++)
    {
        array_1 [i]='\0';
    }

    cout << "\nEnter A Sentence (consisting of 20 Characters including spaces) : " ;
    cin.getline(array_1 , 20);


    for (i=0 ; array_1[i] !='\0' ; i++)
    {
        if ( array_1[i]>='a' && array_1[i]<='z' ) //check of Lower Letters
        {
           Low_Lets++ ;
        }
        else if ( array_1[i]>='A' && array_1[i]<='z' ) //check of Capital Letters
        {
            Cap_Lets++ ;
        }

        if (array_1[i] == 65 || array_1[i] == 97) //check of A
        {
            Vowles[0]++;
        }

        if (array_1[i] == 69 || array_1[i] == 101) //check of E
        {
            Vowles[1]++;
        }

        if (array_1[i] == 73 || array_1[i] == 105) //check of I
        {
            Vowles[2]++;
        }

        if (array_1[i] == 79 || array_1[i] == 101) //check of O
        {
            Vowles[3]++;
        }

        if (array_1[i] == 85 || array_1[i] == 117) //check of U
        {
            Vowles[4]++;
        }
    }


    if (array_1[0]>96 && array_1[0]<123)        //For Capitalizing First Letter
                    array_1[0] -= 32;

     for (i=0 ; i<20 ; i++)    // check for Capitalizing
        {

            int x = i + 1 ;
            if (array_1[i] == ' ')
            {
                if (array_1[x] > 96  &&  array_1[x] < 123)
                   {
                       array_1[x] -= 32;
                   }
            }
        }

        cout << "\nNumber of Upper Case Letters is : " << Cap_Lets << endl ;

        cout << "Number of Lower Case Letters is : " << Low_Lets << endl ;

        cout << "\nNumber of Times 'A' or 'a' was used : " << Vowles[0] << endl ;

        cout << "Number of Times 'E' or 'e' was used : " << Vowles[1] << endl ;

        cout << "Number of Times 'I' or 'i' was used : " << Vowles[2] << endl ;

        cout << "Number of Times 'O' or 'o' was used : " << Vowles[3] << endl ;

        cout << "Number of Times 'U' or 'u' was used : " << Vowles[4] << endl ;


        cout << "\nYour Sentence After Capitalizing Each Words First Letter : " ;
        for (i=0 ; i<20 ; i++)
        {
            cout <<array_1[i];
        }

        cout << endl ;
        return 0;
}
