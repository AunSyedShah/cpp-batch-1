#include <iostream>
using namespace std;

// template class
template <class T, int>
class Array {
public:
    T* data;
    int size;
    Array(int size) {
        this->size = size;
        data = new T[size];
    }
    ~Array() {
        delete[] data;
    }
};

int main()
{
    
    system("pause");
    return 0;
}