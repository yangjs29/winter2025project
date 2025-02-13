#ifndef CARD_HPP
#define CARD_HPP
class card{
private:
    const int card_num; // number of cards
    int card_chosen; // index of the card chosen
public:
    /*
     * Function: choose_card
     * Description: Choose the card 
     * Returns (int): The index of the card
     */
    void choose_card();

    void card_1();
    void card_2();
    void card_3();
    void card_4();
    void card_5();
    void card_6();
    void card_7();
    void card_8();
    void card_9();

};
#endif