#ifndef CORNER_EVENT_HPP
#define CORNER_EVENT_HPP
#include "event.hpp"

//코너 이벤트 클래스
//코너 이벤트 4개를 관리하는 부모 객체이며,
//유저가 어떤 코너에 도착했는지 판단하고, 리턴하는 클래스.
class corner_event : public event{
    public:
        //유저가 도착한 코너가 몇 번째 코너인지 리턴하는 함수.
        //해당 함수에서 리턴한 값에 따라 실행되는 코너 이벤트가 정해짐.
        void encounter() override;

        //유저에게 코너 칸에 도착했다고 알림.
        void percepts() override;


        //해당 코너가 어떤 효과를 가지고 있는지 적용.
        virtual void encounter() = 0;

        //해당 코너의 이벤트에 대한 설명
        virtual void percepts() = 0;

        //해당 코너의 이름을 출력.
        virtual char print_name() = 0;
};
#endif