#include <iostream>

int main() {
int a;
std::cout << "Please enter your even number: ";
std::cin >> a;
double c = a%2;
c > 0 ? std::cout << "gooshit" : std::cout << "dumbass";
//if (c>0){
//std::cout << "dumbass i said even number";
//}
//else {
//std::cout << "ur number is even";
//}

    return 0;
}