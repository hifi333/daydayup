
typedef struct treenode1
{
    int score;
    struct treenode1 * left;
    struct treenode1 * right;
}ScoreTreeNode;


void enQueue(ScoreTreeNode * payload);
ScoreTreeNode * deQueue();
