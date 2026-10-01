#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm> 

int main() {
  double a;
  double b;
  double c;
  std::cin >> a >> b >> c;
  
  std::cout << std::fixed << std::setprecision(2);

  
  if (a == 0) {  
    if (b == 0) {
      std::cout << "NO SOLUTION";
    } else {
      double one = (0 - c) / b;
      if (one >= 0) { 
        std::cout << "x1 = " << sqrt(one) << ", " << "x2 = " << -sqrt(one);
      } else {
        std::cout << "NO SOLUTION";
      }
    }
    return 0;
  }

 
  double delta = pow(b, 2) - 4 * a * c;

  if (delta < 0) {
    std::cout << "NO SOLUTION";
  } 
  else {
   
    double two = (0 - b - sqrt(delta)) / (2 * a);
    double one = (0 - b + sqrt(delta)) / (2 * a);
    double t1 = std::max(one, two);
    double t2 = std::min(one, two);


    if (t1 >= 0 && t2 >= 0) {

      if (t1 == t2 || t2 == 0) {
         std::cout << "x1 = " << sqrt(t1) << ", " << "x2 = " << -sqrt(t1);
      } else {
         std::cout << "x1 = " << sqrt(t1) << ", " << "x2 = " << -sqrt(t1) << " " << "x3 = " << sqrt(t2) << ", x4 = " << -sqrt(t2);
      }
    }
    else if (t1 >= 0 && t2 < 0) {
      std::cout << "x1 = " << sqrt(t1) << ", " << "x2 = " << -sqrt(t1);
    }
    else {
      std::cout << "NO SOLUTION";
    }
  }

  return 0;
}