#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::list<char> s1;
    std::vector< char > w1;
    char add = 0;
    for (auto it = people.rbegin(); it != people.rend(); ++it)
    {
        it->birthday();
        switch (it->isMonster())
        {
        case false:
        {
            add = 'y';
            break;
        }
        case true:
        {
            add = 'n';
            break;
        }
        }
        w1.push_back(add);
    }
    return w1;
}
