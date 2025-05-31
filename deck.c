#include "deck.h"
#include <stdlib.h>
#include <stdio.h>


card_t *give_hand(card_t *cards,int size){
  // TODO DO THE ERR VERIFICATION  
  const naip_t naips[4]={HEARTHS,SPADES,CLUBS,DIAMONDS};
  int count=0;
  for(int i=0;i<4;i++){
    for (int j=0;j<13;j++) {
      cards[count].suite=naips[i];
      cards[count].rank=j;
      count<52 ? cards[count].next=&cards[count+1] : cards[count].next=NULL; //FIX THIS LINE 
      count++;
    }
  }
  return cards;
}

void debug_print(card_t* deck,int size){
  // TODO REDO THE LOGIC WITH A CURRENT VARIABLE 
  if(!deck){
    printf("error: deck is empty");
    return;
  }

  while(deck->next!=NULL){
    printf("rank: %d suite: %s\r\n",deck->rank,printnaip(deck->suite));
    deck=deck->next;
  }

}

const char *printnaip(naip_t naipes){
  switch (naipes) {
    case HEARTHS:
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
