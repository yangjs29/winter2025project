#ifndef CITY_HPP
#define CITY_HPP
#include "event.hpp"

class city : public event {
    public:
        // 마주쳤을때 도시에 따라 라는 효과들이 나타날 것
        void encounter() override;

        // 도시 만났을 때 나타날 메세지
        void percepts() override;
};

#endif