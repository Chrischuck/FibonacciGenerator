#include <iostream>

using namespace std;

void sequence(int digits);

int main()
{
    string contThis = "";
    do {
        int digits = 0;
        cout << "how many digits do you want the sequence to go to?" << endl;
        cin >> digits;
        sequence(digits);
        cout << endl << "Press 'y' to run again, any other key to quit" << endl;
        cin >> contThis;
    }
    while (contThis == "y");

    return 0;
}

void sequence(int digits) {
    int count = 0;
    long double first = 0;
    long double second = 1;
    long double third = 1;
    while (count < digits) {
        cout << third << " ";
        third = first + second;
        first = second;
        second = third;

        count++;
    }
}
