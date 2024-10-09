#include <iostream>
#include <string>

using namespace std;

class RailFenceCipher {
public:
    string encrypt(string text, int key) {
        string ciphertext;
        int len = text.length();

        for (int i = 0; i < key; i++) {
            for (int j = 0; j < len; j++) {
                if (j % (2 * (key - 1)) == i || j % (2 * (key - 1)) == (2 * (key - 1) - i)) {
                    ciphertext += text[j];
                }
            }
        }
        return ciphertext;
    }
};

int main() {
    RailFenceCipher cipher;
    string plaintext = "HELLO WORLD";
    int key = 3;
    string encrypted = cipher.encrypt(plaintext, key);
    cout << "Encrypted Text: " << encrypted << endl;
    return 0;
}
