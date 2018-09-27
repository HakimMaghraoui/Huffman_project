#include "Node.h"
#include <string.h>

li createListe(){
	li liste;
	nodeL h;
	h->val=NULL;
	h->suivant=NULL;
	liste->head=h;
	liste->taille=0;
	return liste;
}

void addListe(li liste, info in){
	nodeL nl;
	nl->val=in;
	nl->suivant=NULL;
	if(liste->taille==0){
		liste->head=nl;
		liste->taille++;
	}else{
		nodeL tmp=liste->head;
		while(tmp->suivant!=NULL){
			tmp=tmp->suivant;
		}
		tmp->suivant=nl;
	}
}

/*void Show_node(pnode * pn){
	printf("voici la valeur du noeud: %d\n",(*pn)->val);
	printf("sont fils droit: %d\n",((*pn)->right)->val);
	printf("et sont fils gauche: %d\n",((*pn)->left)->val);
}*/

pnode create_node(info in){
	pnode res=(pnode)malloc(sizeof(struct node));
	(*res).in=in;
	(*res).right=NULL;
	(*res).left=NULL;
	return res;
}

int frequency(pnode pt){
	int left=0;
	int right=0;
	if(pt->left!=NULL){
		left=frequency(pt->left);
	}
	if(pt->right!=NULL){
		right=frequency(pt->right);
	}
	return left+right+pt->in->frequency;
}

ptree create_tree(pnode pn){
	ptree res=(ptree)malloc(sizeof(struct tree));
	(*res).root=pn;
	(*res).frequency=frequency(pn);
	return res;
}

void add_right(pnode pn1, pnode pn2){
	(*pn1).right=pn2;
}

void add_left(pnode pn1, pnode pn2){
	(*pn1).left=pn2;
}

void delete_info(info in){
	(*in).frequency=0;
	(*in).symbole=NULL;
	free(in);
}

void delete_node(pnode pn){
	if((*pn).right!=NULL){
	 	delete_node((*pn).right);
	 }
	 if((*pn).left!=NULL){
	 	delete_node((*pn).left);
	 }
	 (*pn).right=NULL;
	 (*pn).left=NULL;
	 delete_info((*pn).in);
	 free(pn);
}

void delete_tree(ptree pt){
	delete_node((*pt).root);
	(*pt).frequency=0;
	free(pt);
}


