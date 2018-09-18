#ifndef NODE_H
#define NODE_H

#include<stdlib.h>
#include<stdio.h>

// les structures:

struct liste{
	size_t nombre_elements;
    size_t blocs_alloues;
    int** objets_liste;
}liste;

typedef struct liste* li;

struct info{
	int frequency;
	char symbole;
}info;

struct node{
	int val;//le simbole et la frequance
	struct node* right;//fils droit
	struct node* left;//fils gauche
}node;

typedef struct node* pnode;



struct tree{
	pnode root;//racine de l'arbre
	int frequency;//frequance de l'arbre
}tree;

typedef struct tree* ptree;

// les fonctions:

void Show_node(pnode * pn);//affiche dans le terminale chaques elements que contien le node pointer par pn
pnode create_node(int val);//creer un node et lui affecte la valeur val
ptree creat_tree(pnode  root);//creer un arbre et lui affecte root comme racine
void add_right(pnode * pn1, pnode * pn2);//ajoute en fils droit de n1 ,n2
void add_left(pnode * pn1, pnode * pn2);//ajoute en fils gauche de n1, n2
void delete_node(pnode * pn);//suprime le node pointer par pn et libere la mémoire ocuper par ce qui a été supprimer
void delete_tree(ptree * pt);//suprime l'arbre pointer par pt et libere la mémoire ocuper par ce que a été supprimer
//int find_frequency(ptree pt);//calcule la frequance de l'arbre pt
li symbole_frequency();
ptree fusion(ptree pt1, ptree pt2);


#endif

