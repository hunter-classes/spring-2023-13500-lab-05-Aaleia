#include <iostream>

#include "funcs.h"

int main() {

  // Task A

  std::cout << "\nTask A:\n" << std::endl;
  std::string a1 = "";
  if (isDivisibleBy(100, 25)) {
    a1 = "True";
  } else {
    a1 = "False";
  }
  std::cout << "100 is divisible by 25: " << a1 << std::endl;
  std::string a2 = "";
  if (isDivisibleBy(35, 17)) {
    a2 = "True";
  } else {
    a2 = "False";
  }
  std::cout << "35 is divisible by 17: " << a2 << std::endl;


  // Task B 

  std::cout << "\nTask B:\n" << std::endl;
  std::string b1 = "";
  if (isPrime(23)) {
    b1 = "True";
  } else {
    b1 = "False";
  }
  std::cout << "23 is prime: " << b1 << std::endl;
  std::string b2 = "";
  if (isPrime(34)) {
    b2 = "True";
  } else {
    b2 = "False";
  }
  std::cout << "34 is prime: " << b2 << std::endl;


  // Task C 

  std::cout << "\nTask C:\n" << std::endl;
  std::cout << "The next prime after 14 is: " << nextPrime(14) << std::endl;
  std::cout << "The next prime after 17 is: " << nextPrime(17) << std::endl;


  // Task D

  std::cout << "\nTask D:\n" << std::endl;
  std::cout << "The # of primes between 5 and 48 inclusive is: " << countPrimes(5, 48) << std::endl;
  std::cout << "The # of primes between 2 and 7 inclusive is: " << countPrimes(2, 7) << std::endl;


  // Task E

  std::cout << "\nTask E:\n" << std::endl;
  std::string e1 = "";
  if (isTwinPrime(31)) {
    e1 = "True";
  } else {
    e1 = "False";
  }
  std::cout << "31 is a twin prime: " << e1 << std::endl;
  std::string e2 = "";
  if (isTwinPrime(79)) {
    e2 = "True";
  } else {
    e2 = "False";
  }
  std::cout << "79 is a twin prime: " << e2 << std::endl;


  // Task F

  std::cout << "\nTask F:\n" << std::endl;
  std::cout << "The next twin prime after 3 is: " << nextTwinPrime(3) << std::endl;
  std::cout << "The next twin prime after 29 is: " << nextTwinPrime(29) << std::endl;


  // Task G

  std::cout << "\nTask G:\n" << std::endl;
  std::cout << "The largest twin prime between 5 and 18 inclusive is: " << largestTwinPrime(5, 18) << std::endl;
  std::cout << "The largest twin prime between 1 and 31 inclusive is: " << largestTwinPrime(1, 31) << std::endl;
  
  return 0;
}
