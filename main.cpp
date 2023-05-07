#include <iostream>
#include  <bits/stdc++.h>

using namespace std;

int main()
{
    char Option;
    do
    {
    cout << "Menu Options\n" << endl;
    cout << "A). Option A" << endl;
    cout << "B). Option B" << endl;
    cout << "C). Option C" << endl;
    cout << "X). Option X" << endl;
    cin >> Option;

        switch(Option)
        {
        case 'A':
            {
                 int n;
    cout << "Enter number of terms:";
    cin >> n;
     while(cin.fail()){ /* the while loop is used to so that if the user inputs the incorrect input, the program will enter this loop which
                                              which will print the error message and clears the input stream error state using the "cin.clear()" .
                        The the program ignores any remaining characters in the input stream using "cin.ignore()" before prompting the user to enter a valid input again*/
                cout << "Invalid input. Please enter a valid number: ";
                cin.clear();
                cin.ignore(100, '\n');/* by clearing and ignoring any remaining characters in the inpu stream, the program can prevent multiple error messages from being printed in a loop*/
                cin >> n;
                }

    cout << "\n";
    int i;
    for (i = 2; i < n; i+=2)
    {
         int m = 2*i;
       cout << i << " ";
       cout << m << " ";
    }
    cout << "\n";

            }
            break;

        case 'B':
            {
                cout << "Option B selected \n" << endl;
    int x; // starting value//
    cout << "Enter starting value:";
    cin >> x;

    while(cin.fail()){ /* the while loop is used to so that if the user inputs the incorrect input, the program will enter this loop which
                                              which will print the error message and clears the input stream error state using the "cin.clear()" .
                        The the program ignores any remaining characters in the input stream using "cin.ignore()" before prompting the user to enter a valid input again*/
                cout << "Invalid input. Please enter a valid number: ";
                cin.clear();
                cin.ignore(100, '\n');/* by clearing and ignoring any remaining characters in the input stream, the program can prevent multiple error messages from being printed in a loop*/
                cin >> x;
    }

    int y; // stopping value//
    cout << "Enter stopping value:";
    cin >> y;

    while(cin.fail()){ /* the while loop is used to so that if the user inputs the incorrect input, the program will enter this loop which
                                              which will print the error message and clears the input stream error state using the "cin.clear()" .
                        The the program ignores any remaining characters in the input stream using "cin.ignore()" before prompting the user to enter a valid input again*/
                cout << "Invalid input. Please enter a valid number: ";
                cin.clear();
                cin.ignore(100, '\n');/* by clearing and ignoring any remaining characters in the input stream, the program can prevent multiple error messages from being printed in a loop*/
                cin >> y;
    }

    int z; // step value//
    cout << "Enter the step value:";
    cin >> z;

    while(cin.fail()){ /* the while loop is used to so that if the user inputs the incorrect input, the program will enter this loop which
                                              which will print the error message and clears the input stream error state using the "cin.clear()" .
                        The the program ignores any remaining characters in the input stream using "cin.ignore()" before prompting the user to enter a valid input again*/
                cout << "Invalid input. Please enter a valid number: ";
                cin.clear();
                cin.ignore(100, '\n');/* by clearing and ignoring any remaining characters in the input stream, the program can prevent multiple error messages from being printed in a loop*/
                cin >> z;
    }

    cout << "\n";

    int m = x;
    cout << m;

    while(x < y)
    {
        int k = x+=z;
        cout <<"\t";
        cout << k;
    }
    cout << "\n" <<endl;
            }
            break;

        case 'C':
            {
                 cout << "Option C selected \n" << endl;

    string strWord;
    char Alphabet = '\0';
    int counter = 0;

    cout << "Enter string:";
    cin >> strWord;

    for(auto &Alphabet : strWord)
    {
        if((Alphabet >= 'a' and Alphabet <= 'z' ) or (Alphabet >= 'A' and Alphabet <= 'Z') )
        {
            counter++;
        }
    }
    cout << "There are "<< "\t" << counter++ << "\t" << "Characters in the string" << endl;
            }
            break;

        case 'X':
            {
                cout << "\n Exiting program..." << endl;
            }
            break;

            while(cin.fail()){

            default:
                /* The default works as a validation of the user`s input and it is used to specify the set of statements to execute if there is no case match.*/
                cout << "Invalid choice. Try again." << endl;
                cin.clear();
                cin.ignore(100, '\n');}/* by clearing and ignoring any remaining characters in the input stream, the program can prevent multiple error messages from being printed in a loop*/
                break;
        }
    }
     while (Option != 'X');


}
