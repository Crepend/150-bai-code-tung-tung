#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
int main() {
    std::string myName;
    int yearsOld;
    double x = 3.14;
    double y = 1.24;

    cout << "How old are you?" << endl;
    cin >> yearsOld;
    cout << "Whats your name?" << endl;
    std::getline(cin>>std::ws, myName);
    
    int sum = yearsOld - 6;
    cout << "So you have gone to school for " << sum << " years" << endl;
    cout << "And your full name is " << myName << endl;
    return 0;





}
   