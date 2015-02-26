#!/bin/bash
# William Thing
# CSE 374 Homework 5
# Makefile
#
# Compiles all files of t9

t9: t9.o Node.o
	gcc -Wall -std=c99 -g -o t9 t9.o Node.o

t9.o: Node.h t9.c
	gcc -Wall -std=c99 -g -c t9.c

Node.o: Node.h Node.c
	gcc -Wall -std=c99 -g -c Node.c
