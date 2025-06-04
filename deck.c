#include "deck.h"
#include <stdlib.h>
#include <stdio.h>


card_t *give_hand(card_t *cards,int size){

  if(cards==NULL){
    fprintf(stderr, "ERROR: DECK ISN'T CORRECTLY ALLOCATED \n");
    return NULL;
  }

  const naip_t naips[4]={HEARTS,SPADES,CLUBS,DIAMONDS};
  int count=0;
  for(int i=0;i<4;i++){
    for (int j=1;j<=13;j++) {
      cards[count].suite=naips[i];
      cards[count].rank=j;
      cards[count].next= (count<51) ? &cards[count+1]:NULL; 
      count++;
    }
  }
  return cards;
}

void debug_print(card_t* deck,int size){
  card_t* current=deck;
  if(!current){
    fprintf(stderr,"deck couldn't be printed: NULL POINTER EXCEPTION\n");
    return;
  }

  while(current!=NULL){
    printf("rank: %d suite: %s\r\n",current->rank,printnaip(current->suite));
    current=current->next;
  }

}

const char *printnaip(naip_t naipes){
  switch (naipes) {
    case HEARTS:
      return "of hearths";
    case SPADES:
      return "of spades";
    case DIAMONDS:
      return "of diamonds";
    case CLUBS:
    return "of clubs";
  }
  return "unreachable string";
}
