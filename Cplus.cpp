#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::cout << "Choose operand" << std::endl;
    std::cout << "1 - Addition" << std::endl;
    std::cout << "2 - Subtraction" << std::endl;
    std::cout << "3 - Multiplication" << std::endl;
    std::cout << "4 - Division" << std::endl;
    
    int operand;
    std::cin >> operand;
    std::cin.ignore();  // Clear the newline character from the input buffer
    
    std::string input;
    std::vector<int> numbers;
    int number;
    char comma;
    
    std::cout << "Insert numbers (separated by commas): " << std::endl;
    std::getline(std::cin, input);
    
    std::stringstream ss(input);
    
    while (ss >> number) {
        numbers.push_back(number);
        ss >> comma; // Read and discard the comma
    }
    
    switch (operand) {
        case 1: {
            int sum = 0;
            for (int num : numbers) {
                sum += num;
            }
            std::cout << "The sum is: " << sum << std::endl;
            break;
        }
        case 2: {
            if (numbers.size() > 0) {
                int result = numbers[0];
                for (size_t i = 1; i < numbers.size(); ++i) {
                    result -= numbers[i];
                }
                std::cout << "The result of subtraction is: " << result << std::endl;
            } else {
                std::cout << "No numbers to subtract." << std::endl;
            }
            break;
        }
        case 3: {
            if (numbers.size() > 0) {
                int product = 1;
                for (int num : numbers) {
                    product *= num;
                }
                std::cout << "The product is: " << product << std::endl;
            } else {
                std::cout << "No numbers to multiply." << std::endl;
            }
            break;
        }
        case 4: {
            if (numbers.size() > 1) {
                double result = static_cast<double>(numbers[0]);
                for (size_t i = 1; i < numbers.size(); ++i) {
                    if (numbers[i] == 0) {
                        std::cout << "Division by zero is not allowed." << std::endl;
                        return 1;
                    }
                    result /= numbers[i];
                }
                std::cout << "The result of division is: " << result << std::endl;
            } else {
                std::cout << "At least two numbers are required for division." << std::endl;
            }
            break;
        }
        default:
            std::cout << "Invalid operand selected." << std::endl;
            break;
    }
    
    return 0;
}
