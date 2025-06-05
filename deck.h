#ifndef Deck_h
#define Deck_h

typedef enum naip {
  HEARTS=0,
  DIAMONDS,
  SPADES,
  CLUBS,
}naip_t;

typedef struct Card {
  naip_t suite;
  int rank;
  struct Card *next;
}card_t;

card_t *give_hand(card_t *deck,int size);
void push_tail(card_t **hand,card_t *new);
void pop_tail(card_t **hand);
void debug_print(card_t *hand,int size);
const char *printnaip(naip_t naipes);

#endif 
