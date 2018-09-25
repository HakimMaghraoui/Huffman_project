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

void delete_tree2(ptree * pt){
	if((*pt)->root!=NULL){
		delete_node(&(*pt)->root);
	}else{
		printf("%s\n","arbre deja vide");
	}
}

li symbole_frequency(){
	return NULL;
}

ptree fusion(ptree pt1, ptree pt2){
	pnode tmp_pn1=(*pt1).root;
	pnode tmp_pn2=(*pt2).root;
	int val_fusion=((*tmp_pn1).val)+((*tmp_pn2).val);
	pnode n_fusion=create_node(val_fusion);
	add_left(&n_fusion,&tmp_pn1);
	add_right(&n_fusion,&tmp_pn2);
	ptree t_fusion=creat_tree(n_fusion);
	return t_fusion;
}
