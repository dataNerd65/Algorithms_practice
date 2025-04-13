/**
 * @authors kiarie
 * @brief solving uva 10945, palindromes plainly
 */

#include<iostream>
#include<algorithm>
#include<cctype>
#include<string>

// best way i will create a function to process the sentence first
std::string processStrings(std::string sentence){
    // to lower by transform
    std::transform(sentence.begin(), sentence.end(), sentence.begin(),[](unsigned char c){
        return std::tolower(c);
    });
    // to remove other chars apart from a to z
    sentence.erase(std::remove_if(sentence.begin(), sentence.end(),[](unsigned char c){
        return !(c >= 'a' && c <= 'z');
    }), sentence.end());
    return sentence;
}
bool isPalindrome(std::string sentence){
    // two pointer way
    int len = sentence.length();
    int right = len - 1;
    int left = 0;
    while(right > left){
        if(sentence[left] != sentence[right]){
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string sentence;
    while(std::getline(std::cin, sentence) && sentence != "DONE"){
        sentence = processStrings(sentence);
        if(isPalindrome(sentence)){
            std::cout<<"You won't be eaten!"<<'\n';
        }else{
            std::cout<<"Uh oh.."<<'\n';
        }
    }
    return 0;
}