#include <iostream>
using namespace std;

// template class
template <class T, class U>
class Pair
{
public:
    T first;
    U second;
    Pair(T a, U b)
    {
        first = a;
        second = b;
    }
};

int main()
{
    Pair<int, double> p1(1, 2.0);
    system("pause");
    return 0;
}