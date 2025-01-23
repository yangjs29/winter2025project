#ifndef CORNER4_CPP
#define CORNER4_CPP
#include "corner_event.hpp"

//코너 4 : 비버버스(세계여행). 
//유저가 해당 칸에 도착할 경우, 다음 턴에 원하는 위치로 이동을 시켜준다.
class corner2 : public corner_event{
    public:
        //유저가 다음 턴에 주사위를 굴리지 않고, 어디로 이동할지를 정한다. 
        //즉, 여기서 유저가 선택한 위치 값을 얻고, 그를 계산하여 몇칸 이동할지를 알아내고,
        //  **해당 값으로 유저의 주사위 값을 대체한다.** 
        void encounter() override;

        //유저에게 세계 일주에 도착했으니, 다음 턴에 원하는 위치로 이동하라는 메세지 출력
        void percepts() override;

        //비버 버스라는 글씨를 맵에 표시.
        //비버 버스라는 단어를 리턴.
        char print_name() override;
};

#endif