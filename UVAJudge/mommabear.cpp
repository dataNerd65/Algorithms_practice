#include<iostream>
#include<cctype>

std::string changeCaseAndremPun(std::string sentence){
	//first to lowercase using a loop
	for(char &c: sentence){
		c = std::tolower(c);
	}
	//REMOVING everything except 
	return sentence;
}

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string sentence;
	while(std::getline(std::cin, sentence) && sentence != "DONE"){
		sentence = changeCaseAndremPun(sentence);

		// debugging
		std::cout<<sentence<<'\n';
	}

	return 0;
}