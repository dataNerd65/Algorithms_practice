#include<iostream>
#include<unordered_map>

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string line;  
	// The dictionary for their reverses O(1)lookups
	std::unordered_map<char, char> maps{
		{'A' : 'A'},{'E': '3'}, {'H':'H'}, {'I':'I'}, {'J':'L'}, {'L':'J'},
		 {'M':'M'}, {'O':'O'}, {'S': '2'}, {'T':'T'}, {'U':'U'}, {'V':'V'},
		  {'W':'W'}, {'X':'X'}, {'Y':'Y'}, {'Z': '5'}, {'1':'1'}, {'2':'S'}, {'3' : 'E'},
		  {'5' : 'Z'}, {'8' : '8'}
		  };
	while(std::getline(std::cin, line)){

	}
	return 0;
}