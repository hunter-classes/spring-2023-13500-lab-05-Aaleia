#include <iostream>
#include "funcs.h"


// Task A

bool isDivisibleBy(int n, int d) {
  if (n%d == 0) {
    return true;
  } else {
    return false;
  }
}


// Task B

bool isPrime(int n) {
  if (n<2) {
    return false;
  }
  for (int i = 2; i < n; i++) {
    if (n%i == 0) {
      return false;
      break;
    }
  }
  return true;
}


// Task C

int nextPrime(int n) {
  int prime = 2;
  if (n < prime) {
    return prime;
  }
  for (int i = n+1; ; i++) {
    if (isPrime(i)) {
      prime = i;
      break;
    }
  }
  return prime;
}


// Task D

int countPrimes(int a, int b) {
  int num_primes = 0;
  for (int i = a; i<= b; i++) {
    if (isPrime(i)) {
      num_primes++;
    }
  }
  return num_primes;
}


// Task E

bool isTwinPrime(int n) {
  int lower = n-2; int higher = n+2;
  if (n < 3) {
    return false;
  }
  bool is_prime = true;
  for (int i = 2; i < n; i++) {
    if (n%i == 0) {
      is_prime = false;
      break;
    }
  }
  if (!is_prime) {
    return false;
  }

  bool is_lower_prime = true;
  for (int i = 2; i < lower; i++) {
    if (lower % i == 0) {
      is_lower_prime = false;
      break;
    }
  }
  
  bool is_higher_prime = true;
  for (int i = 2; i < higher; i++) {
    if (higher % i == 0) {
      is_higher_prime = false;
      break;
    }
  }
  
  return is_lower_prime || is_higher_prime;
}


// Task F

int nextTwinPrime(int n) {
  int i = n+1;
  while (true) {
    if (isPrime(i) && (isPrime(i-2) || isPrime(i+2))) {
      return i;
    }
    i++;
  }
}


// Task G

int largestTwinPrime(int a, int b) {
  int twin_prime = -1;
  if (b <= 3) {
    twin_prime = 3;
  }
  
  for (int indx = b; indx >= a; indx--) {
    if (isTwinPrime(indx)) {
      twin_prime = indx;
      break;
    }
  }
  
  return twin_prime;
}


