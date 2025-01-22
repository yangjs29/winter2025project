#ifndef CITY1_HPP
#define CITY1_HPP
#include "city.hpp"

// 이 도시는 city라는 클래스의 자식이며 많은 도시 중 하나
class city1 : public city {
    void encounter () override;
    void percepts() override;
};

#endif