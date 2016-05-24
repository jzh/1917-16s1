typedef struct _node *link; // a link points to a node
 
typedef struct _node {
       int value;
       link next;
} node;
 
// a list is represented by a pointer to a struct which contains 
// a pointer to the first node of the list called the "head"
typedef struct _list {
     link head;
} *list;

void uniqList(list l);
void reverseList(list l);
