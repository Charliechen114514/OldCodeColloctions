#include<iostream>

template<typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept
{
	return N;
}

int main()
{
	int keyVals[] = {1,2,3,4,5};
	std::cout << arraySize(keyVals) << std::endl;
}

