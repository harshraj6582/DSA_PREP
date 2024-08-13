#include<iostream>
using namespace std ; 
// Caesar Cipher is basically used to semd the encrypted 
// message by just shifting the alphabets 

string encrypt(string text , int s ){
    string result = "";
    // Where S is the Key Number and this basically used to shoft the characters upto a certain mark 


    for(int i = 0 ; i < text.length() ; i++){
        if(isupper(text[i])){
            result += char(int(text[i] + s - 65) % 26 + 65 );
        }

        else {
         result += char(int(text[i] + s - 97) % 26 + 97);
        }
    }
    return result ; 
}

string decrypt(string text , int s ){
    // This would be used for Subtarctiong ther revrsal amde 
    // By the Encoding of the String 
    string result = "";

    for(int i =  0 ; i < text.length() ; i++){
        if(isupper(text[i])){
            result+= char(int(text[i] - s - 65) % 26 + 65);
        }
        else{
            // This is loweer case so would be performing the operation fo the revresal of the string 
            result+= char(int(text[i] - s - 97 ) % 26 + 97);
        }
    }
    return result ; 
}

int main(){
    string text = "hello";
    int shift = 5 ; 
    cout<<"The Text is "<<text<<endl;
    cout<<"Shift is "<<shift<<endl;
    string ans =  encrypt(text, shift);
    cout<<"The Encoded String is ";
    cout<<ans;
    string decode = decrypt(ans, shift );
    cout<<endl<<decode;

    return 0 ; 
}