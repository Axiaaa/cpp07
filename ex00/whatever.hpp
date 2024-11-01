#include <iostream>

template <typename Ttype> Ttype& max(Ttype &x, Ttype &y) { return (x > y) ? x : y;}

template <typename Ttype> Ttype& min(Ttype &x, Ttype &y) { return (x < y) ? x : y;}

template <typename Ttype> void swap(Ttype &x, Ttype &y) { 
    Ttype temp = x;
    x = y; 
    y = temp;
}