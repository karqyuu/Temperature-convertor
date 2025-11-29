#include <iostream>
#include <cmath>
#include <string>
#include "../func.h"

using namespace std;

void runTest(string testName, bool condition) 
{
    if (condition) 
    {
        cout << "[PASS] " << testName << endl;  
    }

    else
    {
        cout << "[FAIL] " << testName << endl;
    } 
}

bool isClose(double a, double b) 
{
    return abs(a - b) < 0.001;
}

int main() 
{
    cout << "RUNNING TESTS" << endl;

    //C <-> F

    runTest("1. C to F (0 -> 32)", isClose(celsius_to_fahrenheit(0), 32.0));
    runTest("2. C to F (100 -> 212)", isClose(celsius_to_fahrenheit(100), 212.0));
    runTest("3. F to C (32 -> 0)", isClose(fahrenheit_to_celsius(32), 0.0));
    runTest("4. F to C (212 -> 100)", isClose(fahrenheit_to_celsius(212), 100.0));


}