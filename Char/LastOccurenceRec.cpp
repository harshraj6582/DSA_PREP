// #include<iostream>
// using namespace std;

// void last_Occurence(string word, char character, int size, int &ans, int index) {
//     // Base case: Check if we have traversed the whole string
//     if (index >= size) {
        
//         return;
//     }

//     // Recursively traverse to the next character
//      if (word[index] == character) {
//         ans = index;
//     }
    
//     last_Occurence(word, character, size, ans, index + 1);

//     // Check if the current character matches the given character
   
// }

// void last_Occurence_Right(string word , char character , int size , int &ans , int index){
//     // Base Case : Check if we have traversed the whole string in the opposite order 
//     if(index < 0){
//         return ; 
//     }
//       if (word[index] == character) {
//         ans = index;
//         return ; 
//     }
    
//     last_Occurence_Right(word  , character , size , ans , index -1  );
    
// }

// int main() {
//     // Find the last occurrence of a character in a string
//     string word = "zharshrajj";
//     char character = 'z';
//     int size = word.size();
    
//     int ans = -1;
//     int index = 0;

//     // Calling the function to find the last occurrence
//     last_Occurence_Right(word, character, size, ans, size);

//     // Output the result
//     if (ans != -1) {
//         cout << "The character is present in the string at position " << ans << endl;
//     } else {
//         cout << "Element is not present in the array" << endl;
//     }

//     return 0;
// }
