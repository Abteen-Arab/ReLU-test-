#include <iostream>

using namespace std;


// Define the rectifier function
float rectifier(float x) {
    if (x < 0) {
        return 0;
    } else {
        return x;
    }
}

// Main function
int main() {
    // Test the rectifier function with some inputs
    float input1 = 2.5;
    float output1 = rectifier(input1);
    cout << "Input: " << input1 << ", Output: " << output1 << endl;

    float input2 = -1.0;
    float output2 = rectifier(input2);
    cout << "Input: " << input2 << ", Output: " << output2 << endl;

    float input3 = 0.0;
    float output3 = rectifier(input3);
    cout << "Input: " << input3 << ", Output: " << output3 << endl;

    return 0;
}
