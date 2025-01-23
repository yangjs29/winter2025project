#ifndef CORNER1_CPP
#define CORNER1_CPP
#include "corner_event.hpp"

//코너 1 : 스타트 지점. 
//만약 스타트 지점에 도달하거나 지나갈 경우, 플레이어는 오렌지 캐쉬를 지급받음.
//그리고 스타트 지점을 한 바퀴 지나야 건물을 더 높은 단계로 지을 수 있음.
class corner1 : public corner_event{
    public:
        //스타트 지점에 도착하거나, 지나쳤을 때, 유저에게 오렌지 캐쉬 지급 함수.
        //유저의 돈에 간섭해야 하기에, 유저의 현재 돈 변수를 할당할 것.
        void encounter() override;

        //유저에게 스타트 지점을 지나쳤다고 메세지 출력, 
        //오렌지 캐쉬를 얼마 지급했다고 알리기.
        void percepts() override;

        //스타트 지점이라는 글씨를 맵에 표시.
        //스타트 지점이라는 글을 리턴.
        char print_name() override;
};

#endif