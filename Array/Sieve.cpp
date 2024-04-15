// #include<iostream>
// #include<vector>
// using namespace std;

// void Sieve(int n) {
//     // Declaring a Vector of Size N+1 to store all the variables which are to be marked prime from the starting
//     vector<bool> prime(n + 1, true);
//     prime[0] = prime[1] = false; // 0 and 1 are not prime

//     for (int i = 2; i * i <= n; i++) {
//         if (prime[i]) {
//             for (int j = i * i; j <= n; j += i) {
//                 // Marking all the numbers which are not prime
//                 prime[j] = false;
//             }
//         }
//     }

//     // Printing prime numbers
//     for (int i = 2; i <= n; i++) {
//         if (prime[i]) {
//             cout << i << " ";
//         }
//     }
// }

// int main() {
//     int number;
//     cout << "Enter the Range Till Which Prime Numbers are to be printed: ";
//     cin >> number;
//     Sieve(number);
//     return 0;
// }
