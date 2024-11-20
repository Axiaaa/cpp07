#include <iostream>
#include <exception>

template <typename Ttype>

class Array {

    private : 

        Ttype *_tab;
        size_t _size;

    public :

        Array();
        Array(unsigned int n);
        Array(const Array& src);
        ~Array();
        Array& operator=(const Array& rhs);
        Ttype& operator[](const unsigned long long int index) const;
        size_t size() const;


    class OutOfBoundsException : public std::exception {
        virtual const char* what() const throw() { return "OUT OF BOUND WHAT WHERE U THINKING BROTHAAAAAAAAAAA"; }
    };

};

template <typename Ttype> Array<Ttype>::Array() : _tab(NULL), _size(0) {}

template <typename Ttype> Array<Ttype>::~Array() { delete[] _tab; }

template <typename Ttype> Array<Ttype>::Array(unsigned int n) : _size(n) {
    
    _tab = new Ttype[n];
}

template <typename Ttype> Array<Ttype>::Array(const Array& src) {

    _tab = new Ttype[src.size()];
    _size = src.size();
    for (size_t i = 0; i < src.size(); i++)
        this->_tab[i] = src[i];
}


template <typename Ttype> Array<Ttype>& Array<Ttype>::operator=(const Array& rhs) {

    if (rhs != *this)
    {
        delete[] this->_tab;
        _tab = new Ttype[rhs.size()];
        this->_size = rhs.size();
        for (size_t i = 0; i < this->_size; i++)
            this->_tab[i] = rhs[i];
    }
    return *this;
}

template <typename Ttype> size_t Array<Ttype>::size() const { return this->_size; }

template <typename Ttype> Ttype& Array<Ttype>::operator[](const unsigned long long int index) const {
    if (index > this->_size || _tab == NULL)
        throw OutOfBoundsException();
    return _tab[index];
}
