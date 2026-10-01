#include <iostream>
#include <cmath>
int main() {
long long one;
std::cin >> one;
int result1 = one/500000;
long long two = one - result1*500000;
int result2 = two/200000;
long long three = two - result2*200000;
int result3 = three/100000;
long long four = three - result3*100000;
int result4 = four/50000;
long long five = four - result4*50000;
int result5 = five/20000;
long long six = five - result5*20000;
int result6 = six/10000;
long long seven = six - result6*10000;
int result7 = seven/5000;
long long eight = seven - result7*5000;
int result8 = eight/2000;
long long nine = eight - result8*2000;
int result9 = nine/1000;
long long ten = nine - result9*1000;

std::cout << "500000: " << result1 << std::endl;
std::cout << "200000: " << result2 << std::endl;
std::cout << "100000: "  << result3 << std::endl;
std::cout << "50000: "  << result4 << std::endl;
std::cout << "20000: "  << result5 << std::endl;
std::cout << "10000: " << result6 << std::endl;
std::cout << "5000: " << result7 << std::endl;
std::cout << "2000: " << result8 << std::endl;
std::cout << "1000: " << result9 << std::endl;

    return 0;
}