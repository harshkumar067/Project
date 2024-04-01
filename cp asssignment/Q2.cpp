#include <iostream>
#include <vector>

bool checkPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int totalPrimes;
    std::cout << "Enter the total number of primes: ";
    std::cin >> totalPrimes;

    int primeCount = 0;
    for (int currentNum = 2; primeCount < totalPrimes; currentNum++) {
        if (checkPrime(currentNum)) {
            if (primeCount % 2 == 0) {
                std::cout << currentNum << " ";
            }
            primeCount++;
        }
    }

    return 0;
}