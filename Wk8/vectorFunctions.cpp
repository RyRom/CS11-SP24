/*
    CS-11 SI Vector & Function practice, vectorFunctions.cpp
    Purpose: Practice looping through a string and using an if statement

    @author Your Name
    @version 1.0  00/00/2024
 */

#include <iostream>
#include <vector>

using namespace std;

/**
 * Prints a vector.
 *
 * @param v The vector to be printed
 */
void printVector(vector<int> v);

/**
 * Calculates the sum of a vector.
 *
 * @param v The vector containing numbers to be summed
 * @return The sum of the elements
 */
int sumVector(vector<int> v);

/**
 * Reverses a vector.
 *
 * @param v The vector containing numbers to be reversed
 * @return A new vector of identical size with the elements reversed
 */
vector<int> reverserVector(vector<int> v);

int main() {
    int size, num;
    vector<int> myVector;

    // Have the user fill a vector of ints
    cout << "Enter a vector size: ";
    cin >> size;
    cout << "Enter " << size << " integers, separated by a space:\n";
    // TODO: Fill vector with ints

    // Print different calculations of the vector
    vector<int> myVectorReversed = reverserVector(myVector);
    int sum = sumVector(myVector);

    cout << "\nOriginal Vector: ";
    printVector(myVector);
    cout << "Reversed: ";
    printVector(myVectorReversed);
    cout << "Sum of elements: " << sum << endl;

    return 0;
}