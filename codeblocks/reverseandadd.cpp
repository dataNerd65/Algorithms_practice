#include<iostream>
#include<string>
#include<algorithm>


long long reversingStringy(long long n){
	std::string str = std::to_string(n);
	std::reverse(str.begin(), str.end());
	return std::stoll(str);
}

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int t;
	std::cin>>t;

	while(t--){
		long long n;
		std::cin>>n;

		long long reversed = reversingStringy(n);
		int count = 0;

		while(reversed != n){
			n = n + reversed;
			reversed = reversingStringy(n);
			count++;
		}
		std::cout<<count<<" "<<n<<'\n';
	}
	return 0;
}