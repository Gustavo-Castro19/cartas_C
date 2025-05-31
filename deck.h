#ifndef Deck_h
#define Deck_h

typedef enum naip {
  HEARTHS=0,
  DIAMONDS,
  SPADES,
  CLUBS,
}naip_t;

typedef struct Card {
  naip_t suite;
  int rank;
  struct card_t *next;
}card_t;

card_t give_hand();
void push_tail(struct card_t **hand,struct card_t *new);
void pop_up(struct card_t **hand);
void search(struct card_t *hand);

#endif Deck_h
