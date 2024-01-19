#include <iostream>
using namespace std;
int main()
{
    long long int accountNumber;
    cout << "Enter the 16-digit account number in groups of four: ";
    cin >> accountNumber;

    
    int sum = 0;
    int digit, doubledDigit;
    for (int i = 1; i <= 16; ++i) {
        digit = accountNumber % 10;
        accountNumber /= 10;

        
        if (i % 2 == 0) {
            doubledDigit = digit * 2;

           
            if (doubledDigit > 9) {
                doubledDigit = doubledDigit % 10 + doubledDigit / 10;
            }

            sum += doubledDigit;
        } else {
            sum += digit;
        }
    }

   
    if (sum % 10 == 0) {
        cout << "The credit card number is valid." << endl;
    } else {
        cout << "The credit card number is invalid." << endl;
    }



    return 0;
}