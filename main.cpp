/*
 * Title: average.cpp
 * Description: This program computes average of
 *       three exams.
 * Author: Eduardo Flores Aguirre
 * Date: 03/9/2016
 */
#include <iostream>
using namespace std;
int main ()
{
    int num1;
    int num2;
    cout << "Enter two Numbers " << endl;
    cin >> num1;
    cin >> num2;
    int sum = (num1 + num2 );
    int sum2 = (num1 + num2 ) /2;
    int sum3 = (num1 * num2);
    cout << "  "<< num1 << " + " << num2 << " = "      << sum << endl;
    cout << "  "<< num1 << " + " << num2 << " / 2 = " << sum2 << endl;
    cout << "  "<< num1 << " * " << num2 << " = "      << sum3 << endl;
    return 0;
}
