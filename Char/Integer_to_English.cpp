// #include<iostream>
// #include<vector>
// using namespace std ; 

// int main(){



// vector<pair<int, string>> mp  = {
//         {1000000000,"Billion"},{1000000,"Million"},{1000,"Thousand"},{100,"Hundred"},{90,"Ninety"},{80,"Eighty"},{70,"Seventy"},{60,"Sixty"},{50,"Fifty"},{40,"Forty"},{30,"Thirty"},{20,"Twenty"},{19,"Nineteen"},{18,"Eighteen"},{17,"Seventeen"},{16,"Sixteen"},{15,"Fifteen"},{14,"Fourteen"},{13,"Thirteen"},{12,"Twelve"},{11,"Eleven"},{10,"Ten"},{9,"Nine"},{8,"Eight"},{7,"Seven"},{6,"Six"},{5,"Five"},{4,"Four"},{3,"Three"},{2,"Two"},{1,"One"},{0,"Zero"}};

// string numberToWords(int num ){
//     for(auto it : mp){
//         if(num>=it.first){
//             string a = "";
//             // This is for Checking the Number of Hundreds , Thousands, or Million
//             if(num >= 100){
//                 a = numberToWords(num/it.first)+" ";
//             }
            
//             string b = it.second;
//             // Point for Checking the Digit Value 
//             string c = " ";
//             // The Last part where only when the Number is probably Less than 100
//             if(num!=0&&(num%it.first)!= 0){
//                 c  = " "+numberToWords(num%it.first);
//             }
//             return a + b + c 
//         }
//         reuturn a + b + c 
//     }
// }

// }