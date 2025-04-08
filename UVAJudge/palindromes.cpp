#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>

bool isMirrored(const std::string& line, const std::unordered_map<char, char>& maps){
	int lenOfString = line.length();
	// also can use line.size()
	if(lenOfString % 2 != 0){
		int middle = lenOfString / 2; // string indexes start at 0 so / 2 will do

		for(int i = 0; i < middle; ++i){
			char left = line[i];
			char right = line[lenOfString - 1 - i];

			// checking if both characters are inthe map na they mirror
			if(maps.find(left) == maps.end() || maps.find(right) == maps.end()|| maps.at(left) != right){
				return false;
			}
		}
		
	}
	return true;
}

bool isPalindrome(std::string line){
	// string has valid characters so just reverse
	std::string copy = line;
	std::reverse(copy.begin(), copy.end());

	if(copy == line){
		return true;
	} else{
		return false;
	}

}

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string line;  
	// The dictionary for their reverses O(1)lookups
	std::unordered_map<char, char> maps = {
		{'A' , 'A'},{'E', '3'}, {'H','H'}, {'I','I'}, {'J','L'}, {'L','J'},
		 {'M','M'}, {'O','O'}, {'S', '2'}, {'T','T'}, {'U','U'}, {'V','V'},
		  {'W','W'}, {'X','X'}, {'Y','Y'}, {'Z', '5'}, {'1','1'}, {'2','S'},
		   {'3' , 'E'},
		  {'5' , 'Z'}, {'8' , '8'}
		  };
	// debugging 
	//for(const auto& pair : maps){
	//	std::cout<<pair.first<<"=>"<<pair.second<<'\n';
	//}
	while(std::getline(std::cin, line) && line != "DONE"){
		// checking if string is both  a palindrome and mirrored
		if(isPalindrome(line) && isMirrored(line, maps)){
			std::cout<<line<<" -- "<<"is a mirrored palindrome."<<'\n';
		}else if(isPalindrome(line) && !(isMirrored(line, maps))){
			std::cout<<line<<" -- "<<"is a regular palindrome."<<'\n';
		}else if(!(isPalindrome(line)) && (isMirrored(line, maps))){
			std::cout<<line<<" -- "<<"is a mirrored string."<<'\n';
		}else if(!(isPalindrome(line)) && !(isMirrored(line, maps))){
			std::cout<<line<<" -- "<<"is not a palindrome."<<'\n';
		}
	}
	return 0;
}