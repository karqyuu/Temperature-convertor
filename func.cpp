/**
 * @file func.cpp
 * @brief Temperature conversion utilities and water state determination.
 *
 * This file contains a set of helper functions for converting temperatures
 * between Celsius, Fahrenheit, and Kelvin, as well as determining the physical
 * state of water at a given Celsius temperature.
 *
 * @example
 * double f = celsius_to_fahrenheit(0);     // returns 32
 * double c = fahrenheit_to_celsius(212);   // returns 100
 * string state = water_state(50);          // returns "Water"
 */
#include "func.h"
/**
 * @brief Converts Celsius to Fahrenheit.
 *
 * Formula: F = C × 9/5 + 32
 *
 * @param celsius Temperature in degrees Celsius.
 * @return Converted temperature in degrees Fahrenheit.
 */
double celsius_to_fahrenheit(double celsius)
{
    return celsius * (9.0 / 5.0) + 32;
}
/**
 * @brief Converts Fahrenheit to Celsius.
 *
 * Formula: C = (F − 32) × 5/9
 *
 * @param fahrenheit Temperature in degrees Fahrenheit.
 * @return Converted temperature in degrees Celsius.
 */
double fahrenheit_to_celsius(double fahrenheit)
{
    return (fahrenheit - 32) * (5.0 / 9.0);
}
/**
 * @brief Converts Celsius to Kelvin.
 *
 * Formula: K = C + 273.15
 *
 * @param celsius Temperature in degrees Celsius.
 * @return Converted temperature in Kelvin.
 */
double celsius_to_kelvin(double celsius)
{
    return celsius + 273.15;
}

/**
 * @brief Converts Kelvin to Celsius.
 *
 * Formula: C = K − 273.15
 *
 * @param kelvin Temperature in Kelvin.
 * @return Converted temperature in degrees Celsius.
 */
double kelvin_to_celsius(double kelvin)
{
    return kelvin - 273.15;
}
/**
 * @brief Determines the physical state of water at a given Celsius temperature.
 *
 * Water freezes at 0°C and boils at 100°C.
 *
 * @param celsius Temperature in degrees Celsius.
 * @return A string:
 *         - "Ice"   if temperature ≤ 0  
 *         - "Steam" if temperature ≥ 100  
 *         - "Water" otherwise
 *
 * @example
 * water_state(-5);   // "Ice"
 * water_state(25);   // "Water"
 * water_state(120);  // "Steam"
 */
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