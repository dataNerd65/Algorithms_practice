#include<iostream>
#include<cctype> // for std::tolower
#include<algorithm> // for std::reverse and std::remove_if 
#include<string> // for strings

std::string processString(std::string sentence){
	// to lowercase
	for(char &c: sentence){
		c = std::tolower(c);
	}
	// to remove the chars not a to z
	sentence.erase(std::remove_if(sentence.begin(), sentence.end(), [](char c){
		return !(c >= 'a' && c <= 'z');
	}), sentence.end());

	return sentence;
}

int main(){
	// forgot the faster input synchronization
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string sentence; 

	while(std::getline(std::cin, sentence) && sentence != "DONE"){
		sentence = processString(sentence);

		// create a copy of the sentence string
		std::string copy = sentence;

		std::reverse(copy.begin(), copy.end());

		if(copy == sentence){
		std::cout<<"You won't be eaten!"<<'\n';
		}else{
		std::cout<<"Uh oh.."<<'\n';
		}

		}
	
	return 0;
}