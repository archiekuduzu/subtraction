// # addition ---- main.cpp
#include<iostream>
#include<boost/lexical_cast.hpp>

using namespace std;
// simple program that subtracts two integers
// you can use commandline arguemnts or simply launch the program.
int main (int argc, char *argv[])
{
    int a, b, c; // declare the two inputs and the output c
    
    if (argc > 1) // if arguments were provided. Remember that arg 1 is the command
    {
        if (argc != 3) 
        {
            cout << "Incorrect number of arguments" << endl;
        }
        else
        {
            a = boost::lexical_cast<int>(argv[1]); // set a
            b = boost::lexical_cast<int>(argv[2]); // set b
            c = a-b; //set c
            cout << "The result is: " << c << endl;
        }
    }
    else
    {
        // collect the 2 values
        cout << "Enter first value: ";
        cin >> a;
        cout << "Enter second value: ";
        cin >> b;
        
        // calculate and output the result
        c = a-b;

        cout << "The result is: " << c << endl;
    }

    return 0; //end

} // int main()
