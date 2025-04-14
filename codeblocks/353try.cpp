#include<iostream>
#include<unordered_set>

int CountAllPalindromicSubstrings(const std::string &text){
    int length = text.length();
    std::unordered_set<std::string> uniquePalindromes;


    // Trying every possible center(both character and between characters)
    for(int center = 0; center < 2 * length - 1; ++center){
        int left = center / 2;
        int right = left + (center % 2); // handles odd and even length palindromes

        // Expand around the center while its a palindrome
        while(left >= 0 && right < length && text[left] == text[right]){
            uniquePalindromes.insert(text.substr(left, right - left + 1));
            --left;
            ++right;
        }
    }
    return uniquePalindromes.size();
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string text;
    while(std::cin>> text){
        std::cout<<"The string '"<<text<<"' contains "<<CountAllPalindromicSubstrings(text)<<" palindromes."<<'\n';
    }
    return 0;
}