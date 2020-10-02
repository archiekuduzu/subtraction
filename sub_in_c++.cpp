//simple Program to subtract two numbers

#include<iostream>
using namespace std;

int main()
{

      int x, y, sub;
      cout << "Enter two integer for subtract" << endl;

      cin >> x >> y;

      //the subtract value of two numbers stored in the third variable

      sub = x - y;

      //print subtracted value

      cout << x << "-" << "=" << sub;

      return 0;

}