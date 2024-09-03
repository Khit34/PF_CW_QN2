#include <iostream>
using namespace std;


 //QUESTION TWO (2)
int main()
//DETAILING THE USER ON HOW THE PROGRAM WILL BEHAVE
{   cout << "This program is designed to exhibit the positive divisors of positive integers that you will enter." << endl;
    cout << "The program will repeatedly ask you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    //USING THE WHILE LOOP
    while (true) {
        int integer;
        cout << "Please enter a positive integer: ";
        cin >> integer;

        while (integer <= 0) { //checking if the integer entered is not a negative or zero

            cout << integer << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";// system will continue if the integer is a positive
            cin >> integer;
        }

        // Print divisors in decreasing order
        for (int k = integer; k >= 1; --k) {
            if (integer % k == 0) {
                cout << k << endl;
            }
        }

        char opinion;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> opinion;

        //using a switch statement to handle the users opinion
        switch (opinion) {
            case 'Y':
            case 'y':
                continue; // Starting the loop again
            case 'N':
            case 'n':
                cout <<"--------------------------------------------\n";
                cout << "****Program is halted. ENJOY YOURSELF****" << endl;
                cout <<"--------------------------------------------\n";
                return 0;
            default:
                cout << "Please respond with **Y/y** for yes and **N/n** for no." << endl;
                break;
        }
    }

    return 0;

}
