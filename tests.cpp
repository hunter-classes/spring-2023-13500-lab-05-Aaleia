#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest2.h"
#include "funcs.h"

// Task A
TEST_CASE("Is Divisible") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(25, 100) == false);
    CHECK(isDivisibleBy(35, 17) == false);
}

// Task B
TEST_CASE("Is Prime") {
    CHECK(isPrime(23) == true);
    CHECK(isPrime(34) == false);
    CHECK(isPrime(0) == false);
}

// Task C
TEST_CASE("Next Prime") {
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(-10) == 2);
}

// Task D
TEST_CASE("Count Primes") {
    CHECK(countPrimes(5, 48) == 13);
    CHECK(countPrimes(2, 7) == 4);
    CHECK(countPrimes(-12, 1) == 0);
}
// Task E
TEST_CASE("Is Twin Prime") {
    CHECK(isTwinPrime(31) == true);
    CHECK(isTwinPrime(79) == false);
    CHECK(isTwinPrime(0) == false);
}

//Task F
TEST_CASE("Next Twin Prime") {
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(29) == 31);
    CHECK(nextTwinPrime(-4) == 3);
}

// Task G
TEST_CASE("Largest Twin Prime") {
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(-3, 8) == 7);
}
