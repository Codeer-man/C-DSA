#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum (char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
    return false;
}

bool isPalindrome (string s){
    int st=0,end=s.length();

    if(!isAlphaNum(s[st])){
        st++; 
    }
    if(!isAlphaNum(s[end])){
        end--; 
    }
    if(tolower(s[st]) != tolower(s[end])){
        return false;
    st++; end--;
    }
    return true;
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s)){
        cout << "The string is a palindrome.";
    }
    else{
        cout << "The string is not a palindrome.";
    }
    return 0;
}