// William Thing
// CSE374 Hw5
// Node.h
// Header file for structs used to build Trie
// for t9 program.

#ifndef NODE_H
#define NODE_H

struct NodeT* newNode();
struct wordLink* emptyList(); 
struct wordLink* linkedList(char* word); 

struct NodeT {
	struct NodeT* numberKey[8];
	struct wordLink* front;
};

struct wordLink {
	char* word;
	struct wordLink* next;
};

typedef struct NodeT Node;
typedef struct wordLink LinkedList;

void freeEverything(Node* root);
void freeLink(LinkedList* front);
#endif
