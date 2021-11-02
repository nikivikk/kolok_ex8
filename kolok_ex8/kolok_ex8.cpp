#include <iostream>
int main()
{
    int a, R;
    std::cin >> a >> R;
    if (a == 2 * R) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}
