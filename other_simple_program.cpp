#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main(void){
     //Output of data type by size
     /*
     std::cout << " The sizeof char is: " << sizeof(char) << " bytes" << std::endl;
     std::cout << " The size of float is: " << sizeof(float) << "  bytes" << std::endl;
     */
     
     // sum of two numbers added
     /*
     int z,x,y;
     x = 20;
     y = 39;
     z = x+y;
     std::cout << "sum of two numbers "<< x << " + " << y << " is: " << z << std::endl;
     */
     
     //Swapping two numbers
     /*
     int num1, num2, numhold;
     
     std::cout << "input first number: " << std::endl;
     std::cin >> num1;
     
     std::cout << "input second number: " << std::endl;
     std::cin >> num2;
     
     numhold = num2;
     num2 = num1;
     num1 = numhold;
     
     std::cout << "After swapping two numbers: " << std::endl;
     std::cout << "1st number is: " << num1 << std::endl;
     std::cout << "2nd number is:" << num2 << std::endl;
     */
     
     //Creating an average operation of 4 numbers
     /*
     int f1,f2,f3,f4,average;
     f1 = 25;
     f2 = 25;
     f3 = 25;
     f4 = 25;
     average = (f1 + f2 + f3 + f4)/4;
     std::cout << "the average of 4 numbers is: "<< average << std::endl;
     */
     
     //Displayng Time
     /*
     time_t t = time(NULL);
     tm* tPtr = localtime(&t);
    
     const int PH_TIME_DIFF = 8 * 3600;
     time_t ph_time = t + PH_TIME_DIFF;
     tm* ph_tPtr = gmtime(&ph_time);
     
     const char* monthNames[] = {"January", "February", "March", "April", "May", "June", 
                                "July", "August", "September", "October", "November", "December"};
                                
     // Displaying the current date in PHT
     cout << "Current Date in Philippines: " 
     << monthNames[ph_tPtr->tm_mon] << "/" 
     << ph_tPtr->tm_mday << "/" 
     << (ph_tPtr->tm_year + 1900) << endl; 
     
      // Displaying the current time
     std::cout << "Current Time in PH: "
     << ph_tPtr->tm_hour << ":"
     << ph_tPtr->tm_min << ":"
     << ph_tPtr->tm_sec
     << std::endl;
     */
}
