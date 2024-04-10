#include <iostream>
#include <time.h>

class Card {
    public:
        Card();
        Card(int value, char color, std::string suit);
        Card(int value, std::string suit);
        int getValue() const;
        void setValue(int value);
        char getColor() const;
        void setColor(char color);
        std::string getSuit() const;
        void setSuit(std::string suit);
        void setRandomCard();
    private:
        int _value;
        char _color;
        std::string _suit;
};

Card::Card() {

}

Card::Card(int value, char color, std::string suit) {
    _value = value;
    _color = color;
    _suit = suit;
}

Card::Card(int value, std::string suit) {
    _value = value;
    _suit = suit;
    if (suit == "Spade" || suit == "Club") {
        _color = 'b';
    } else {
        _color = 'r';
    }
}

int Card::getValue() const {
    return _value;
}

void Card::setValue(int value) {
    _value = value;
}

char Card::getColor() const {
    return _color;
}

void Card::setColor(char color) {
    _color = color;
}

std::string Card::getSuit() const {
    return _suit;
}

void Card::setSuit(std::string suit) {
    _suit = suit;
}

void Card::setRandomCard() {
    srand(time(0));
    int value = (rand() % 14) + 1;
    _value = value;

    int suit = rand() % 4;
    if (suit == 0) {
        _suit = "Heart";
        _color = 'r';
    } else if (suit == 1) {
        _suit = "Club";
        _color = 'b';
    } else if (suit == 2) {
        _suit = "Diamond";
        _color = 'r';
    } else {
        _suit = "Spade";
        _color = 'b';
    }
}
