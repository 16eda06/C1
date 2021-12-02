#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tnode
{
    char* word;
    int count;
    struct tnode *left;
    struct tnode *right;
} tnode;

tnode* talloc(void);
char* my_strdup(char*);

tnode* addtree(tnode* p, char *w)
{
    int cond;

    if (p == NULL)
    {
        p = talloc();
        p -> word = my_strdup(w);
        p -> count = 1;
        p -> left = p -> right = NULL;
    } 
    else if ((cond = strcmp(w, p->word)) == 0)
        p -> count++;
    else if (cond < 0)
        p -> left = addtree(p->left, w);
    else
        p -> right = addtree(p->right, w);
    return p;
}

void treeprint(tnode* p)
{
    if (p != NULL)
    {
        treeprint(p->left);
        printf("%4d %s\n", p->count, p->word);
        treeprint(p->right);
    }
}

int main(int argc, char const *argv[])
{
    tnode* tree = NULL;
    tree = addtree(tree, "2nd");
    tree = addtree(tree, "1st");
    tree = addtree(tree, "4th");
    tree = addtree(tree, "3rd");
    treeprint(tree);
    return 0;
}

tnode *talloc(void)
{
    return (tnode*) malloc(sizeof(tnode));
}

char* my_strdup(char *s)
{
    char *p;
    p = (char*) malloc(strlen(s)+1);
    if (p != NULL)
        strcpy(p, s);
    return p;
}