#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &a, int n)
{
    typename T::iterator iter = std::find(a.begin(), a.end(), n);

    if (iter == a.end())
        throw std::runtime_error("Value not found");
    return iter;
}

#endif
