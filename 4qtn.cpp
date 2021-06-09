/* 1. You've to print all prime numbers between a range.
        2. Take as input "low", the lower limit of range.
        3. Take as input "high", the higher limit of range.
        4. For the range print all the primes numbers between low and high (both included).

Input:  low : 6
             High: 24

Output: 7
              11
              13
              17
              19 
              23     */


#include<bits/stdc++.h>
using namespace std;

int main() {
    int low, high, i;
    bool isPrime = true;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            cout << low << " ";

        ++low;
    }
    return 0;
    }

    