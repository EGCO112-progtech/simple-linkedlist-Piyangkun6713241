//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"

int main(int argc, const char * argv[]) {
 /*   int c=5;
    struct node a,b,d,e,f,*head ;
    head=&f;
    
    f.value=2;
    f.next=&a;

    a.value = c;
    a.next=&b;

    b.value=head->next->value+3;
    b.next=&d;
    
    d.value=head->next->next->value+3;
    d.next=NULL;

    e.value=head->next->next->next->value-9;

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value); //what value for 8
  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
  printf("%d\n", head ->next->next->value);
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
        
  printf("%d\n", head ->next->next->next->value);
  printf("\n\n");

    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
      //Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%3d", tmp->value);
          // What is missing???
            tmp=tmp->next;
        }
    printf("\n\n");
    
   //  Exercise IV change to while loop!! (you can use NULL to help)
       tmp=head;
         while(tmp!=NULL){
            printf("%3d", tmp->value);
           // What is missing???
           tmp=tmp->next;
        }
    
    
    //Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
    NodePtr Head,temp;
    Head= (NodePtr)malloc(sizeof(struct node));
    temp=Head;
    printf("\n\n\n");

    for(int i=0;i<3;i++){
      temp->value=i+3;
      temp->next= (NodePtr)malloc(sizeof(struct node));
      printf("%d ", temp->value);
      temp=temp->next;
    }
    printf("\n\n\n");
     

    //Exercise VI Free all node !!
         //use a loop to help
    temp=Head;
    for(i=0;i<3;i++){
      Head=Head->next;
      printf("%d ",temp->value);
      free(temp);
      temp=Head;
    }*/

    nodePtr HEAD, Tmp;
    int i;
    for(i=1;i<argc;i+=2){
      if(i==1){
        HEAD= (nodePtr) malloc(sizeof(struct std_node));
        Tmp=HEAD;
      }
       else{
        Tmp->next=(nodePtr) malloc(sizeof(struct std_node));
        Tmp=Tmp->next;
       }
      

    Tmp->id=atoi(argv[i]);
    strcpy(Tmp->name,argv[i+1]);
    Tmp->next=NULL;
    Tmp=HEAD;
    }

    //Tmp->next=NULL;
    //Tmp=HEAD;

    while(Tmp!=NULL){
    printf("%d ",Tmp->id);
    printf("%s\n",Tmp->name);
    Tmp=Tmp->next;
    }

    for(i=1;i<argc;i++){
      HEAD=HEAD->next;
      free(Tmp);
      Tmp=HEAD;
    
    return 0;
}
}