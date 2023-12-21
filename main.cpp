#include <iostream>
#include <string>

#define VAT 1.2

using namespace std;

int getNumberInput(string message, bool useMin, bool useMax, int[] range, bool useDefault, int defaultNum);
float calcVAT(float value);
void printTimesTable(int number, unsigned int maxMultiple);

int main() {
    cout << "";
    return 0;
}

// Calculate VAT value
float calcVAT(float value) {
    return value * VAT;
}

void printTimesTable(int number, unsigned int maxMultiple = 12) {
    cout << "The times table for " << number << ":\n";

    for (int i = 1; i <= maxMultiple; i++) {
        cout << i << ": " << i * number << endl;
    }
}

int getNumberInput(string message, bool useMin, bool useMax, int[2] range = [0,0], bool useDefault = false, int defaultNum) {
    string input;
    bool validated = true;

    cout << message << ": ";
    if (useDefault) {
        cout << " (" << defaultNum << ") ";
    }

    do {
        getline(cin, input);

        //for (int i = 0;)
    } while (validated == false);
}