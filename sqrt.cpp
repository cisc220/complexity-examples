#include<iostream>
#include<string>

int main(){
    unsigned long number_to_hit;
    std::cin >> number_to_hit;
    unsigned long j = 0;
    for(unsigned long i = 0; j < number_to_hit; i++){
        j = i * i;
    }
    return 0;
}