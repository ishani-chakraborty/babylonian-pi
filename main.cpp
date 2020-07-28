#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
/* Ishani Chakraborty
Homework 6
This program estimates the value of 
PI using the Babylonian method
*/
using namespace std;

int main()
{
    cout << "This program estimates the value of PI using the Babylonian method" << endl << endl;

    //number of iterations
    //the larger the input, the closer the accuracy to the value of M_PI in the cmath library
    int termCount;
    cout << "Enter a count that will be used for series iterations: ";
    cin >> termCount;
    cout << endl;

    while (termCount <= 0) {
        cout << "The input count must be greater 0" << endl;
        cout << "Try again: ";
        cin >> termCount;
    } 

    double babylonian_pi;
    //m-value in the babylonian method
    int m_count = 1;
    int factor = 1;
    int i;
    const double first = sqrt(12);
    for (i = 0; i < termCount; i++)
    {
        babylonian_pi += first * (factor * (1 / (m_count * pow(3, i))));
        m_count += 2;
        factor = -factor;
        cout << fixed << setprecision(15);
        cout << setw(6) << i + 1 << "    " << setw(6) << babylonian_pi << endl;
    }

    cout << endl;
    cout << fixed << setprecision(15);
    cout << setw(6) << "Estimated PI with 15 decimal fraction digits is " << setw(6) << babylonian_pi << endl;
    cout << setw(6) << "PI value in the cmath library is                " << setw(6) << M_PI << endl;
}