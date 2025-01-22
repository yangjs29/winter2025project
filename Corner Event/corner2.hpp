#ifndef CORNER2_HPP
#define CORNER2_HPP
#include "corner_event.hpp"

//코너 2 : 도서관(무인도). 
//도서관에 플레이어가 진입하게 되면, 두 주사위가 같은 수가 나올 때까지
//도서관에서 3턴 동안 나갈 수 없게 되는데, 이를 관리하는 클래스
class corner2 : public corner_event{
    public:
        //플레이어를 움직임을 3턴 동안 제한하는 함수. 플레이어가 주사위를 던져
        //두 수가 같은 수가 나왔을 경우 탈출이 가능해야 하므로, 주사위 값 변수를 받아야함.
        void encounter() override;

        //유저에게 도서관에 도착했으므로, 3턴을 쉬어야 한다는 메세지 출력
        //만약 두 주사위의 수가 같을 경우 탈출할 수 있다는 메세지 출력
        void percepts() override;

        //도서관이라는 글씨를 맵에 표시.
        //도서관이라는 단어를 리턴.
        char print_name() override;
};

#endif