#include <iostream> 

int main() {
    std::cout << "Enter two integer values (val1) then (val2): \n";
    int val1, val2;
    std::cin >> val1 >> val2;

    int smallerNum, largerNum;
    bool sameNum = false;

    if (val1 > val2) {
        smallerNum = val2;
        largerNum = val1;

    }
    else {
        smallerNum = val1;
        largerNum = val2;
    }
    
    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    int ratio = val1 / val2;

    std::cout << "The smaller value is " << smallerNum << "\n";
    std::cout << "The larger value is " << largerNum << "\n";
    std::cout << "The sum of these values is " << sum << "\n";
    std::cout << "The difference of these values is " << difference << "\n";
    std::cout << "The product of these values is " << product << "\n";
    std::cout << "The ratio of these values is " << ratio << "\n";

    return 0;


}
