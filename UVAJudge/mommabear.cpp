#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>

std::string changeCaseAndremPun(std::string sentence){
	//first to lowercase using a loop
	for(char &c: sentence){
		c = std::tolower(c);
	}
	
	//REMOVING everything except 
	sentence.erase(std::remove_if(sentence.begin(), sentence.end(), [](char c){
		return !(c >= 'a' && c <= 'z');
	}), sentence.end());

	//std::cout<<sentence<<'\n';
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
		//std::cout<<sentence<<'\n';

		// copy
		std::string original = sentence;

		std::reverse(sentence.begin(), sentence.end());

		if(original == sentence){
			std::cout<<"You won't be eaten!"<<'\n';
		}else{
			std::cout<<"Uh oh.."<<'\n';
		}
	}

	return 0;
}