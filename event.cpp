#ifndef EVENT_HPP
#define EVENT_HPP

class event {
    public:
        virtual void encounter(int& player_life, bool& has_gold, int& num_arrows) = 0;

        virtual void percepts() = 0;

        virtual char print_symbol() = 0;

        virtual ~event() {}
};

#endif
