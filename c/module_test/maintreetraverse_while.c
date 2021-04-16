#include <stdlib.h>
#include <stdio.h>
#include "treeNodeQueue.h"

ScoreTreeNode * treeheader= NULL;


void initTreeNode(){
    //todo..

    ScoreTreeNode *pnode = (ScoreTreeNode *) calloc(1,sizeof(ScoreTreeNode));
    treeheader =  pnode; 
    pnode->score =1;

    ScoreTreeNode *pleft = (ScoreTreeNode *) calloc(1,sizeof(ScoreTreeNode));
    pleft->score = 0;
    ScoreTreeNode *pright = (ScoreTreeNode *) calloc(1,sizeof(ScoreTreeNode));
    pright ->score =2;


    pleft->left =  NULL;
    pleft->right =  NULL;
   
    pright->left =  NULL;
    pright->right =  NULL;
   
    

    pnode->left = pleft;
    pnode->right = pright;


}


int main(){

 printf("-------- aa -------\n");
 initTreeNode();

//遍历tree without recursion

  if(treeheader == NULL) return 1;
  enQueue(treeheader);
  ScoreTreeNode * top = deQueue(); //first..

  while(top!=NULL){
       printf("%d \n",top->score);
      if(top->left!=NULL)
        enQueue(top->left);
      if(top->right!=NULL)
        enQueue(top->right);
      top = deQueue();
  }

}