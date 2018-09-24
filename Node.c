#include "Node.h"


void Show_node(pnode * pn){
	printf("voici la valeur du noeud: %d\n",(*pn)->val);
	printf("sont fils droit: %d\n",((*pn)->right)->val);
	printf("et sont fils gauche: %d\n",((*pn)->left)->val);
}

pnode create_node(int val){
	pnode res=malloc(sizeof(node));
	(*res).val=val;
	(*res).right=NULL;
	(*res).left=NULL;
	return res;
}

ptree creat_tree(pnode pn){
	ptree res =malloc(sizeof(tree));
	(*res).root=pn;
	(*res).frequency=pn->val;//mettre ici la fonction de calcule de frequance a la place de 0
	return res;
}

void add_right(pnode * pn1, pnode * pn2){
	(*pn1)->right=(*pn2);
}

void add_left(pnode * pn1, pnode * pn2){
	(*pn1)->left=(*pn2);
}

void delete_node(pnode * pn){
	if((*pn)->right!=NULL){
	 	delete_node(&(*pn)->right);
	 }
	 if((*pn)->left!=NULL){
	 	delete_node(&(*pn)->left);
	 }
	 (*pn)->right=NULL;
	 (*pn)->left=NULL;
	 (*pn)->val=0;
	 free(*pn);
	
}

void delete_tree(pnode * pn){//parcourire pour tout suprimer et pas juste la racinepartire de la fin remonter en verifiant si on a des enfants sinon on supprime
	if ((*pn)!=NULL){			//ici on pourrais simplement appeler delete_node sur la racine de l'arbre avec ducoup un arbre en poarametre
		delete_tree(&(*pn)->right);
		delete_tree(&(*pn)->left);
		
		(*pn)=NULL;
		free(*pn);
	}
}

li symbole_frequency(){
	li inf=malloc(sizeof(li));//liste d'info composer des symboles du texte et de leures fréquance 
	FILE* f;
	f=fopen("eltext.txt","r");
	int poids = 1;
	int taille=1;
	char* elchar=malloc (sizeof(char)*taille);
	char* elchar2=malloc (sizeof(char)*taille);
	fread(elchar, poids,taille, f);
	fread(elchar2, poids,taille, f);
	printf("%s",elchar );
	printf("%s",elchar2 );

	return NULL;
}
