#include <vector>
#include <utility>
#include <array>
#include <cmath>

int frec(const int i)
{
	if(i == 0 || i == 1)
		return 1;
	return frec(i - 1) + frec(i - 2);
}

template <int I>
struct Fib
{
	static const int val = Fib<I - 1>::val + Fib<I - 2>::val;
};

template <>
struct Fib<0>
{
	static const int val = 1;
};

template <>
struct Fib<1>
{
	static const int val = 1;
};

template <size_t... I>
int fib_impl(std::index_sequence<I...>, const int i)
{
	std::array<int, sizeof...(I)> a = {
		Fib<I>::val...
	};
	return a[i];
}

int fib(const int i)
{
	constexpr int max_size = 46;
	return fib_impl(std::make_index_sequence<max_size>(), i);
}


constexpr double sqrt5 = sqrt(5);
constexpr double golder_ratio = (1 + sqrt(5)) / 2;
constexpr double psi = 1 - golder_ratio;
constexpr double binet(const int n){
	return (std::pow(golder_ratio, n) - std::pow(psi, n)) / sqrt5;
}

