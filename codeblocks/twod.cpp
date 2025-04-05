#include<algorithm>
#include<string>
#include<iostream>

long long reversingString(long long n){
    std::string str = std::to_string(n);
    std::reverse(str.begin(), str.end());
    return std::stoll(str);
}

int main(){
    int t;
    std::cin>>t;

    while(t--){
        long long n;
        std::cin>>n;

        long long reversed = reversingString(n);
        int count = 0;
        while(reversed != n){
            n = n + reversed;
            reversed = reversingString(n);
            count++;
        }
        std::cout<<count<<" "<<n<<'\n';
    }
    return 0;
}