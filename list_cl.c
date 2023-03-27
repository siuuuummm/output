#include <malloc.h>
#include "list_cl.h"
#include "client.h"


// Aggiunge il cliente p alla lista l 
list_cl l_add_cl(list_cl l, client p){

   // allocazione dell'elemento da aggiungere in coda alla lista   
   l_node *elem = (l_node *)malloc(sizeof(l_node)); 
 
   if (elem!=NULL){
      //elem->id = ...
      elem->person = p;
      elem->next   = NULL;
  
       
      if (l.head==NULL) // lista vuota
         l.head = l.tail = elem;
      else{
         l.tail->next = elem;
         l.tail = elem;
      }
   }
      
   return l;
}