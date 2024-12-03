#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    std::ifstream inputFile("numbers.txt");
    std::vector<double> numbers;
    
    double number;
    int count = 0;
    double minNumber = INT_MAX;
    double maxNumber = INT_MIN;

    //this while loop reads one number at a time (each line is read until it hits a space).  
    //The extraction operator will only read until whitespace is found, we can make it read a line at a time with getline(), but we
    //aren't doing that here.

    while (inputFile >> number) {  
        numbers.push_back(number);
        if (number > maxNumber){maxNumber = number;}
        if (number < minNumber){minNumber = number;}
        count++;
    }

    double sum = 0.0;
    for (auto num : numbers) {
        sum += num;
    }

    double average = sum / numbers.size();


    std::cout << "Sum: " << sum << std::endl;
    //Modify this program print out the min, max, count, and average in the same way!


    return 0;
}
