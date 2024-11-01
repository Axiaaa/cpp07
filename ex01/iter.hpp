#include <iostream>

template <typename Ttype, typename Func> void iter(Ttype tab[], const unsigned long long tab_len, Func function) 
{
    if (!tab)
        return ;
    for (unsigned long long i = 0; i < tab_len; i += 1)
        function(tab[i]);
}


template <typename Ttype> void funkyfunc(Ttype &goofyaaahargument)
{
    goofyaaahargument += 100000;
}