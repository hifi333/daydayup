#include <stdlib.h>
#include <stdio.h>
#include "treeNodeQueue.h"

typedef struct queuenode
{
    ScoreTreeNode * payload; //payload
    struct queuenode * next;
}QueueNode;

QueueNode * queuehead = NULL;





void enQueue(ScoreTreeNode * payload){
    QueueNode *pnode = (QueueNode *) calloc(1,sizeof(QueueNode));
    pnode->payload = payload;
    pnode->next = NULL; //key issue.

    if(queuehead == NULL)
       queuehead = pnode;
    else {
        QueueNode *p = queuehead;
        while(p->next!=NULL) {
            p = p->next;
        }  
        //current p is the tail.
        p->next = pnode;
    }
}
ScoreTreeNode * deQueue(){

    if(queuehead == NULL) return NULL;

    ScoreTreeNode  *payload = queuehead->payload;

    // ScoreNode *temp = queuehead;
    // queuehead = queuehead->next;
    // free(temp);
    QueueNode *temp  = queuehead->next;
    free(queuehead);
    queuehead = temp;
    return payload;
}