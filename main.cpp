#include <iostream>
#include <string>


std::string multiplication_string(int n, const char sim = '*'){
    std::string result;
    for (int i = 0; i < n; ++i){
        result += sim;
    }
    return result + "\n";
}

int main(){
    int user_input;
    std::cout << "Enter the number of *:" << std::endl;
    std::cin>>user_input;
    for (int i = 1; i <= user_input; ++ i){
        std::cout << multiplication_string(i);

    }
    return 0;
}