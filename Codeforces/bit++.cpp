#include<iostream>
#include<string>
// Uses .find method

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int t;
	std::cin>>t;
	int x = 0;
	while(t--){
		std::string state;
		std::cin>>state;

		if(state.find("++") != std::string::npos){
			x++;
		}else if(state.find("--") != std::string::npos){
			x--;
		}
	}
	std::cout<<x<<'\n';

	return 0;
}