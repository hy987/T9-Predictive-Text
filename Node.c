// William Thing
// CSE374 Homework 5
// Node.c
//
// Node and LinkedList methods which will create and free
// Nodes/Lists and has the option to print words
// associated to the them.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"Node.h"

struct NodeT* newNode() {
	struct NodeT* trie = (struct NodeT*)malloc(sizeof(struct NodeT));
	for (int i = 0; i < 8; i++) {
		trie->numberKey[i] = NULL;
	}
	trie->front = NULL;
	return trie;
}

struct wordLink* emptyList() {
	struct wordLink* list = (struct wordLink*)malloc(sizeof(struct wordLink));
	list->word = NULL;	
	list->next = NULL;
	return list;
}

struct wordLink* linkedList(char* word) {
	struct wordLink* list = (struct wordLink*)malloc(sizeof(struct wordLink));
	list->word = (char*)malloc(sizeof(char)*strlen(word));
	strncpy(list->word, word, strlen(word));
	list->word[strlen(word) - 1] = '\0';
	list->next = NULL;
	return list;
}

// post: free memory of specified Node
void freeEverything(Node* root) {
	for (int i = 0; i < 8; i++) {
		if (root->numberKey[i]) {
			freeEverything(root->numberKey[i]);
		}
	}
	if (root->front) {
		freeLink(root->front);
	}
	free(root);
}

// post: free memory of specified LinkedList
void freeLink(LinkedList* front) {
	if (front->next) {
		freeLink(front->next);
	}
	free(front->word);
	free(front);
}

