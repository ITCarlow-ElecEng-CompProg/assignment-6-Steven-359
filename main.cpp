/**

02/10/17
Steven O' Brien
Decimal / Binary Numbering Systems Conversion
Exercise 6

*/

#include <iostream>
#include <math.h>

using namespace std;

//Function declarations
int bin_2_dec(long int );
int dec_2_bin(long int );

int main()
{
    //Displays Programme Title
    cout << "Decimal / Binary Numbering Systems Conversion" << endl;

    //Variable declarations
    char userinput;
    int n;


    //Do While loop to display menu driven program
    do
    {
        cout << "\nEnter required program.\n"<<
        "b = binary number to its decimal value.\n"<<
        "d = decimal number to its unsigned binary value.\n"<<
        "q = quit program.\n" << endl ;

        cin >> userinput ;

        //Switch case statement to impliment the users choice
        switch (userinput)
        {
            case 'b':
                        cout <<"Enter binary value" << endl ;
                        cin >> n ;
                        int bin_2_dec(long int n);
                        cout << "\nThe binary number " << n << " is " << bin_2_dec(n) << " in decimal" ;
                        break;

            case 'd':
                        cout <<"Enter decimal value" << endl ;
                        cin >> n ;
                        int dec_2_bin (long int n);
                        cout << "\n\nThe decimal number "<< n << " is " << dec_2_bin( n ) << " in binary" ;
                        break;

            case 'q': cout << "goodbye..." << endl ;
                        break;

            default : cout << "please try again..." << endl ;
                        break;
        }


    }
    while (userinput != 'q');

    return 0;
}

//Function to convert binary to decimal
int bin_2_dec(long int n )
 {
    int decimalNumber = 0, i = 0, remainder;

    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;

 }

//Function to convert decimal to binary
int dec_2_bin (long int n )
 {

    long long binaryNumber = 0;
    int remainder, i = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }

    return binaryNumber;
 }
