#include<iostream>
#include<algorithm>

long long longlongToreverseTolonglong(long long num){
    // convert to string
    std::string str = std::to_string(num);
    // reverse
    std::reverse(str.begin(), str.end());
    // return as long long after converting
    return std::stoll(str);
}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin>>n;
    while(n--){
        long long num;
        std::cin>>num;
        int count = 0;

        while(true){
            long long reverse = longlongToreverseTolonglong(num);
            if(reverse == num){
                break;
            }else{
                num += reverse;
                count++;
            }
        }
        std::cout<<count<<" "<<num<<'\n';
    }

    return 0;
}