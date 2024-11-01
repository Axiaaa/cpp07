#include "iter.hpp"

int main() {

    int tab[] = {1, 2, 3, 4};
    iter(tab, 4, funkyfunc<int>);
    for (long long int i = 3; i >= 0; i -= 1)
        std::cout << tab[i] << std::endl;
}