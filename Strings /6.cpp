#include <iostream>
#include <string>
#include <unordered_map>

std::string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
std::string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
std::string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

std::string convertToWords(int n) {
    if (n == 0) return "Zero";

    if (n < 10) return ones[n];
    if (n < 20) return teens[n - 10];

    std::string result = tens[n / 10];
    if (n % 10 != 0) {
        result += " " + ones[n % 10];
    }

    return result;
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    std::string englishWords = convertToWords(num);
    std::cout << "English words: " << englishWords << std::endl;

    return 0;
}