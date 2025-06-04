#include "deck.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char *argv[]){
  card_t mydeck[52];
  give_hand(mydeck,52);
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
