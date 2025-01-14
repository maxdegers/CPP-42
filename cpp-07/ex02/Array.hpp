#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template < typename T> class Array {
private:
	T *_array;
	size_t _n;
public:
	Array() : _array(NULL), _n(0) {};
	Array(size_t n) : _array(new T[n]()) , _n(n){};
	~Array() { delete [] _array; }
	Array(Array &copy) : _array(new T[copy._n]()) , _n(copy._n){}
	Array & operator = (const Array &rhs) {
		if (this != &rhs) {
			delete [] _array;
			this->_n = rhs._n;
			this->_array = new T[_n]();
			for (size_t i = 0; i < this->_n; ++i) {
				this->_array[i] = rhs._array[i];
			}
		}
		return *this;
	}

	size_t size() const {return _n; };
	T & operator[](size_t n) const {
		if (_n <= n || _n == 0)
			throw OutBond();
		return (_array[n]);
	}

	class OutBond : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("Wrong index");
		}
	};
};

#endif