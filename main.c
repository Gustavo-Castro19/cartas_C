#include "deck.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char *argv[]){
  card_t mydeck[52];
  give_hand(mydeck,52);
  //card_t *hand=NULL;
  //card_t queen= {.rank=10, .suite=CLUBS, .next=NULL};
  //push_tail(&hand,&queen);
  //printf("%d, %s",hand->rank,printnaip(hand->suite));

  if(mydeck!=NULL){
    puts("your deck was allocated sucessfully: here it is:\n");
    debug_print(mydeck,52);
  }
  else{
    puts("ERROR IN THE ALLOCATION OF THE DECK\n");
    return -1;
  }
  return 0;
}
