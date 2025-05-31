#include "deck.h"

int main(int argc,const char *argv[]){
  card_t myhand[52];
  give_hand(myhand,52);
  debug_print(myhand,52);

  return 0;
}
