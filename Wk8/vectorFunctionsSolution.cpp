/*
    CS-11 SI Vector & Function practice, vectorFunctions.cpp
    Purpose: Practice accessing and iterating through vectors,
    as well as tracking variables through function calls

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
void printVector(vector<int> v) {
    for (unsigned i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

/**
 * Calculates the sum of a vector.
 *
 * @param v The vector containing numbers to be summed
 * @return The sum of the elements
 */
int sumVector(vector<int> v) {
    int sum = 0;
    for (unsigned i = 0; i < v.size(); i++) {
        sum += v.at(i);
    }
    return sum;
}

/**
 * Reverses a vector.
 *
 * @param v The vector containing numbers to be reversed
 * @return A new vector of identical size with the elements reversed
 */
vector<int> reverserVector(vector<int> v) {
    vector<int> reverse;
    for (int i = v.size() - 1; i >= 0; i--) {
        reverse.push_back(v.at(i));
    }
    return reverse;
}

int main() {
    // Have the user fill a vector of ints
    int size, num;
    vector<int> myVector;

    cout << "Enter a vector size: ";
    cin >> size;
    cout << "Enter " << size << " integers, separated by a space:\n";
    for (int i = 0; i < size; i++) {
        cin >> num;
        myVector.push_back(num);
    }

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