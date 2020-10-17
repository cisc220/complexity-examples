#include<iostream>
using namespace std;
int main(){
    int number_of_rounds = 0;
    cin >> number_of_rounds;  //by using namespace std you don't have to write std:: scope
    int j = 0;
    for(int i = 0; i < number_of_rounds; i++){
        j = i;
    }
    return 0;
}
