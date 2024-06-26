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
    std::cin.ignore();  
    
    switch (operand) {
        case 1: {
            std::string input;
            std::vector<int> numbers;
            int number;
            char comma;
            
            std::cout << "Insert numbers to add (separated by commas): " << std::endl;
            std::getline(std::cin, input);
            
            std::stringstream ss(input);
            
            while (ss >> number) {
                numbers.push_back(number);
                ss >> comma; 
            }
                
            int sum = 0;
            for (int num : numbers) {
                sum += num;
            }
            
            std::cout << "The sum is: " << sum << std::endl;
            break;
        }
        
        case 2: {
            std::string input;
            std::vector<int> numbers;
            int number;
            char comma;
            
            std::cout << "Insert numbers to subtract (separated by commas): " << std::endl;
            std::getline(std::cin, input);
            
            std::stringstream ss(input);
            
            while (ss >> number) {
                numbers.push_back(number);
                ss >> comma; 
            }
                
            int sum = 0;
            for (int num : numbers) {
                sum -= num;
            }
            
            std::cout << "The difference is: " << sum << std::endl;
            break;
        }
        
        default:
            std::cout << "Invalid operand selected." << std::endl;
            break;
    }
    
    return 0;
}
