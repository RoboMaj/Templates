#include <iostream>
#include <cstdint>

// Template function to combine two inputs into one input
template <typename T>
T combineInputs(const T& input1, const T& input2) {
    if constexpr (std::is_same_v<T, std::string>) {
        return input1 + " " + input2;  // Add a space between the inputs for string types
    } else {
        return input1 + input2;
    }
}

int main() {
    // Sample inputs
    std::string userInput1 = "Hello";
    std::string userInput2 = "World";
    float a = 13.5;
    float b = 23.7;
    bool f = true;
    bool h = true;
    int16_t p = 10, *q;
    q = &p;
    std::cout << "p is: " << p << std::endl;
    std::cout << "q is: " << *q << std::endl;

    std::cout << "q is: " <<  ++(*q) << std::endl;

    // Combine inputs using the template function
    std::string combinedInput = combineInputs(userInput1, userInput2);
float combinedNumbers = combineInputs(a, b);
    bool combinedBool = combineInputs(f, h);
    // Display the combined input
    std::cout << "Combined Input: " << combinedInput << std::endl;
    std::cout << "Combined Numbers: " << combinedNumbers << std::endl;
    std::cout << "Combined Boolean: " << combinedBool << std::endl;
    return 0;
}

