#include "func.h"

double celsius_to_fahrenheit(double celsius)
{
    return celsius * (9.0 / 5.0) + 32;
}

double fahrenheit_to_celsius(double fahrenheit)
{
    return (fahrenheit - 32) * (5.0 / 9.0);
}

double celsius_to_kelvin(double celsius)
{
    return celsius + 273.15;
}

double kelvin_to_celsius(double kelvin)
{
    return kelvin - 273.15;
}

string water_state(double celsius)
{
    if (celsius <= 0) 
    {
        return "Ice";
    }

    if (celsius >= 100)
    {
        return "Steam";
    }

    return "Water";
}