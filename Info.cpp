#include <iostream>
#include <string>

using namespace std;

class VigenereCipher {
private:
    string key;

    string prepareText(string text) {
        string prepared;
        for (char c : text) {
            if (isalpha(c)) {
                prepared += tolower(c);
            }
        }
        return prepared;
    }

public:
    VigenereCipher(string k) : key(k) {}

    string encrypt(string plaintext) {
        string preparedText = prepareText(plaintext);
        string ciphertext;
        int keyIndex = 0;

        for (char c : preparedText) {
            char encryptedChar = 'a' + (c - 'a' + key[keyIndex % key.length()] - 'a') % 26;
            ciphertext += encryptedChar;
            keyIndex++;
        }
        return ciphertext;
    }
};

int main() {
    VigenereCipher cipher("KEYWORD");
    string plaintext = "HELLO WORLD";
    string encrypted = cipher.encrypt(plaintext);
    cout << "Encrypted Text: " << encrypted << endl;
    return 0;
}
