#include<iostream>
#include<algorithm>
#include<cctype>

std::string changeCaseAndRemPun(std::string sentence){
	for(char &c: sentence){
		c = tolower(c);
	}
	// remove anything apart fron a - z
	sentence.erase(std::remove_if(sentence.begin(), sentence.end(), [](char c){
		return !(c >= 'a' && c <= 'z');
	}), sentence.end());

	return sentence;
	
}

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string sentence;

	while(std::getline(std::cin, sentence) && sentence != "DONE"){
		sentence = changeCaseAndRemPun(sentence);

		//std::cout<<sentence<<'\n';


		std::string original = sentence;

		std::reverse(sentence.begin(), sentence.end());

		//std::cout<<sentence<<'\n';

		if(sentence == original){
			std::cout<<"You won't be eaten!"<<'\n';
		}else{
			std::cout<<"Uh oh.."<<'\n';
		}

	}

	return 0;
}
