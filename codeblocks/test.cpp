#include<iostream>
#include<algorithm>

int main(){
	std::string sentence = "Wambui is a GG";
	//std::getline(std::cin, sentence);

	for(char &c: sentence){
		c = std::tolower(c);
	}
	std::cout<<sentence<<'\n';

	return 0;
}