#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad
{
private:
    T a;
    U b;
    V c;

public:
    Triad(T a, U b, V c);

    T getA();
    U getB();
    V getC();

    void print() const;
};

template <typename T, typename U, typename V>
Triad<T, U, V>::Triad(T a, U b, V c)
{
    this-> a = a;
    this-> b = b;
    this-> c = c;
}

template <typename T, typename U, typename V>
T Triad<T, U, V>::getA()
{
    return a;
}

template <typename T, typename U, typename V>
U Triad<T, U, V>::getB()
{
    return b;
}

template <typename T, typename U, typename V>
V Triad<T, U, V>::getC()
{
    return c;
}

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const
{
    std::cout << "[" << a << ", " << b << ", " << c << "]" << std::endl;
}

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.getA() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}