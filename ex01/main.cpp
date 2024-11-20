#include "iter.hpp"

int main() {

    char tab[4] = {'a', 'b', 'c', 'd'};
    iter(tab, 4, funkyfunc<char>);
    for (long long int i = 3; i >= 0; i -= 1)
        std::cout << tab[i] << std::endl;

    int tab2[4] = {1, 2, 3, 4};
    iter(tab2, 4, funkyfunc<int>);
    for (long long int i = 3; i >= 0; i -= 1)
        std::cout << tab2[i] << std::endl;
}