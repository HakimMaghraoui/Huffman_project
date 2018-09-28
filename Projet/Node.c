#include "Node.h"


void Show_node(pnode * pn){//PF
	printf("voici la valeur du noeud: %d\n",(*pn)->in->frequency);
	printf("sont fils droit: %d\n",((*pn)->right)->in->frequency);
	printf("et sont fils gauche: %d\n",((*pn)->left)->in->frequency);
}
pinfo create_info(int f, char c){
	pinfo res=malloc(sizeof(struct info));
	(*res).frequency=f;
	(*res).symbole=c;
	return res;
}

pnode create_node(pinfo in){//PF
	pnode res=(pnode)malloc(sizeof(struct node));
	(*res).in=in;
	(*res).right=NULL;
	(*res).left=NULL;
	return res;
}

ptree creat_tree(pnode pn){//PF
	ptree res =malloc(sizeof(tree));
	(*res).root=pn;
	(*res).frequency=frequency(pn);
	return res;
}

li createListe(){//Hakim
	li liste=malloc(sizeof(liste));
	nodeL h;
	h.val=*creat_tree(NULL);
	h.suivant=NULL;
	liste->head=h;
	liste->taille=0;
	return liste;
}

void addListe(li liste,struct tree va){//Hakim
	nodeL nl;
	nl.val=va;
	nl.suivant=NULL;
	if(liste->taille==0){
		liste->head=nl;
		liste->taille++;
	}else{
		nodeL tmp=liste->head;
		while(tmp.suivant!=NULL){
			tmp=*tmp.suivant;
		}
		tmp.suivant=&nl;
	}
}

void add_right(pnode * pn1, pnode * pn2){//PF
	(*pn1)->right=(*pn2);
}

void add_left(pnode * pn1, pnode * pn2){//PF
	(*pn1)->left=(*pn2);
}


void delete_info(pinfo pin){//Hakim
	(*pin).frequency=0;
	(*pin).symbole=NULL;
	//free((*in));
}

// void delete_node(pnode * pn){//PF
// 	if((*pn)->right!=NULL){
// 	 	delete_node(&(*pn)->right);
// 	 }
// 	 if((*pn)->left!=NULL){
// 	 	delete_node(&(*pn)->left);
// 	 }
// 	 (*pn)->right=NULL;
// 	 (*pn)->left=NULL;
// 	 delete_info((*pn).in);
// 	 free(*pn);
	
// }
void delete_node(pnode pn){//PF&Hakim
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

// void delete_tree(pnode * pn){//parcourire pour tout suprimer et pas juste la racinepartire de la fin remonter en verifiant si on a des enfants sinon on supprime
// 	if ((*pn)!=NULL){			//ici on pourrais simplement appeler delete_node sur la racine de l'arbre avec ducoup un arbre en poarametre
// 		delete_tree(&(*pn)->right);
// 		delete_tree(&(*pn)->left);
		
// 		(*pn)=NULL;
// 		free(*pn);
// 	}
// }



void delete_tree(ptree * pt){//PF
	if((*pt)->root!=NULL){
		delete_node((*pt)->root);
	}else{
		printf("%s\n","arbre deja vide");
	}
}


int frequency(pnode pt){//Hakim
	// int left=0;
	// int right=0;
	// if(pt->left!=NULL){
	// 	left=frequency(pt->left);
	// }
	// if(pt->right!=NULL){
	// 	right=frequency(pt->right);
	// }
	// return left+right+pt->in->frequency;
	return 0;
}

li symbole_frequency(){
	return NULL;
}

ptree fusion(ptree pt1, ptree pt2){//PF
	// pnode tmp_pn1=(*pt1).root;
	// pnode tmp_pn2=(*pt2).root;
	// int val_fusion=((*tmp_pn1).val)+((*tmp_pn2).val);
	// pnode n_fusion=create_node(val_fusion);
	// add_left(&n_fusion,&tmp_pn1);
	// add_right(&n_fusion,&tmp_pn2);
	// ptree t_fusion=creat_tree(n_fusion);
	//return t_fusion;
	return NULL;
}
