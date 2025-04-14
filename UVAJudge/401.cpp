#include<iostream>
#include<unordered_map>

// passing by reference and not changing
bool isPalindrome(const std::string& line){
    int len = line.length();
    int right = len - 1;
    int left = 0;

    while(left < right){
        if(line[right] != line[left]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// passing by reference and not changing or modifying
bool isMirrored(const std::string& line, const std::unordered_map<char, char>& maps){
    // catching the catch
    int len = line.length();
    int mid = len / 2;
    char middlechar = line[mid];
    if(len % 2 != 0){
        if(maps.find(middlechar) == maps.end() || maps.at(middlechar) != middlechar){
            return false;
        }
    }
    // The loop part checking if the chars mirror
    for(int i = 0; i < mid; ++i){
        char right = line[len - 1 - i];
        char left = line[i];

        if(maps.find(right) == maps.end() || maps.find(left) == maps.end() || maps.at(right) != left){
            return false;
        }
    }
    
    return true;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::unordered_map<char, char> maps = {
        {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'}, {'M', 'M'},
        {'O', 'O'},  {'S', '2'},  {'T', 'T'}, {'U', 'U'}, {'V', 'V'}, {'W', 'W'}, {'X', 'X'},
        {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'}, {'3', 'E'}, {'5', 'Z'}, {'8', '8'}
    };
    std::string line;
    while(std::cin>> line){
        if((isMirrored(line, maps)) && isPalindrome(line)){
            std::cout<<line<<" -- "<<"is a mirrored palindrome."<<'\n'<<'\n';
        }else if((isMirrored(line, maps)) && !(isPalindrome(line))){
            std::cout<<line<<" -- "<<"is a mirrored string."<<'\n'<<'\n';
        }else if(!(isMirrored(line, maps)) && isPalindrome(line)){
            std::cout<<line<<" -- "<<"is a regular palindrome."<<'\n'<<'\n';
        }else{
            std::cout<<line<<" -- "<<"is not a palindrome."<<'\n'<<'\n';
        }
    }

    return 0;
}