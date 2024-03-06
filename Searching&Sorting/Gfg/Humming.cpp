#include <iostream>
#include <bitset>

using namespace std;

// Function to calculate the parity bit for a specific position
int calculateParity(const bitset<15>& data, int position, int dataSize) {
    int parity = 0;
    for (int i = position; i <= dataSize; i += position * 2) {
        for (int j = i; j < i + position && j <= dataSize; ++j) {
            parity ^= data[j];
        }
    }
    return parity;
}

// Function to encode data into a Hamming Code
bitset<15> encode(bitset<11> data, int dataSize) {
    bitset<15> code;

    // Copy data bits into the code
    for (int i = 0; i < dataSize; ++i) {
        code[1 << i] = data[i];
    }

    // Calculate and set parity bits
    for (int i = 0; i < dataSize; ++i) {
        code[1 << i] = calculateParity(code, 1 << i, dataSize);
    }

    return code;
}

int main() {
    int dataSize;
    cout << "Enter the number of data bits: ";
    cin >> dataSize;

    bitset<11> data;
    cout << "Enter a " << dataSize << "-bit binary number: ";
    cin >> data;

    bitset<15> encoded = encode(data, dataSize);

    cout << "Encoded Hamming Code: " << encoded << endl;

    return 0;
}
