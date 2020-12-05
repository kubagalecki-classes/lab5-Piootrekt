#include "Human.hpp"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector< Human > w1;
    Human           h1{"ula", 23, 1, 1};
    Human           h2{"kiwi", 23, 1, 1};
    Human           h3{"rybbol", 23, 0, 0};
    w1.push_back(h1);
    w1.push_back(h2);
    w1.push_back(h3);
    for (Human e : w1) {
        cout << e.getName() << endl;
    }
}
