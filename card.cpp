#include <iostream>
#include "card.hpp"

// card implementation
void card::choose_card(){
    card_chosen = rand()%(card_num);
    if(card_chosen == 1){
        card_1();
    }
    else if (card_chosen == 2){
        card_2();
    }
    else if (card_chosen == 3){
        card_3();
    }
    else if (card_chosen == 4){
        card_4();
    }
    else if (card_chosen == 5){
        card_5();
    }
    else if (card_chosen == 6){
        card_6();
    }
    else if (card_chosen == 7){
        card_7();
    }
    else if (card_chosen == 8){
        card_8();
    }
    else if (card_chosen == 9){
        card_9();
    }
};

void card::card_1(){
    
};

void card::card_2(){

};

void card::card_3(){

};

void card::card_4(){

};

void card::card_5(){

};

void card::card_6(){

};

void card::card_7(){

};

void card::card_8(){

};

void card::card_9(){
    
};