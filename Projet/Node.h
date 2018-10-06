#ifndef NODE_H
#define NODE_H

#include<stdlib.h>
#include<stdio.h>

// les structures:



struct info{
	int frequency;
	char symbole;
}info;

typedef struct info* pinfo;

struct node{
	struct info* in;
	struct node* right;//fils droit
	struct node* left;//fils gauche
}node;

typedef struct node* pnode;



struct tree{
	pnode root;//racine de l'arbre
	int frequency;//frequance de l'arbre
}tree;

typedef struct tree* ptree;

struct nodeListe{
	ptree val;
	struct nodeListe* suivant;
};

typedef struct nodeListe* nodeL;

struct liste{
	nodeL head;
	int taille;
};

typedef struct liste* li;

// les fonctions:

li createListe();
void addListe(li liste,ptree va);
void delete_node_liste(li liste, ptree v);
int frequency(pnode pt);
int frequency(pnode pt);
int estDansListe(li liste, char c);
void addFrequencySymbole(li liste, char c);
li symbole_frequency(char* txt);
pinfo create_info(int f, char c);


void Show_node(pnode * pn);//affiche dans le terminale chaques elements que contien le node pointer par pn
pnode create_node(pinfo inf);//creer un node et lui affecte la valeur val
ptree create_tree(pnode  root);//creer un arbre et lui affecte root comme racine
void add_right(pnode * pn1, pnode * pn2);//ajoute en fils droit de n1 ,n2
void add_left(pnode * pn1, pnode * pn2);//ajoute en fils gauche de n1, n2
void delete_node(pnode  pn);//suprime le node pointer par pn et libere la mémoire ocuper par ce qui a été supprimer//suprime également les enfants en cascade

void delete_tree(ptree * pt);//suprime l'arbre pointer par pt et libere la mémoire ocuper par ce que a été supprimer

void delete_info(pinfo pin);
void sort_liste(li liste);//fonction qui trie une liste d'arbrepar en fonction de leurs frequances
ptree fusion(ptree pt1, ptree pt2);
ptree big_tree(li liste);

#endif

