#include <iostream>

int main() {
    std::string x;
    std::cin>>x;;

    auto add = [](int a, int b) -> int {return a + b;};

    std::cout << x << " says " << "Hello, " << add(x,x) << "!" << std::endl;
    std::cout << x << " says " << "Hello, " << x << "!" << std::endl;
    



    return 0;
}