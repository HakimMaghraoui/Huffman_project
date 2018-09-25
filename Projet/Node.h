#ifndef NODE_H
#define NODE_H

#include<stdlib.h>
#include<stdio.h>

// les structures:

struct info{
	int frequency;
	char symbole;
};

typedef struct info* info;

struct nodeListe{
	tree val;
	nodeListe suivant;
};

typedef struct nodeListe nodeL;

struct liste{
	nodeListe head;
	int taille;
};

typedef struct liste* li;


struct node{
	info in;//le simbole et la frequance
	struct node* right;//fils droit
	struct node* left;//fils gauche
};

typedef struct node* pnode;



struct tree{
	pnode root;//racine de l'arbre
	int frequency;//frequance de l'arbre
};

typedef struct tree* ptree;

// les fonctions:
li createListe();
int addListe(li,info);



//void Show_node(pnode);//affiche dans le terminale chaques elements que contien le node pointer par pn
pnode create_node(info);//creer un node et lui affecte la valeur val
int frequency(pnode);
ptree create_tree(pnode);//creer un arbre et lui affecte root comme racine
void add_right(pnode, pnode);//ajoute en fils droit de n1 ,n2
void add_left(pnode, pnode);//ajoute en fils gauche de n1, n2
void delete_info(info);
void delete_node(pnode);//suprime le node pointer par pn et libere la mémoire ocuper par ce qui a été supprimer//suprime également les enfants en cascade
void delete_tree(ptree);//suprime l'arbre pointer par pt et libere la mémoire ocuper par ce que a été supprimer




#endif
