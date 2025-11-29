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
