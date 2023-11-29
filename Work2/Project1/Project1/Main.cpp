#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <map>
#include <typeinfo>
#include <unordered_map>

template <typename F, typename T>
void type(F t, T con) {
    for (auto n : con) {
        std::cout << n << ' ';
    }
    std::cout << std::endl;
}

template <typename T, typename F, typename S>
void type(std::pair<F, S> t, T con) {
    for (auto n : con) {
        std::cout << n.first << ' ' << n.second << ' ';
    }
    std::cout << std::endl;
}

template<typename T>
void print_container(T con) {
    type(*(con.begin()), con);
}

int main() {
    const std::vector<double> v{ 3.3,4.6,2.1,5.7,7.8,31.4 };
    const std::vector<std::pair<int, const char>> vp{ {4,'5'}, {7, 't'} };
    const std::list<char> l{ 'd', 'r', 'e', 'v', 'n' };
    const std::set<int> s{ 3,2,8,9,1,21,45 };
    const std::map<char, int> m{ {'r', 1}, {'t', 2}, {'e', 3} };
    print_container(v);
    print_container(l);
    print_container(s);
    print_container(m);
    print_container(vp);

    return 0;
}