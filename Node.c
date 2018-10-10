#include "Node.h"
#include <string.h>


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

ptree create_tree(pnode pn){//PF
	ptree res =malloc(sizeof(tree));
	(*res).root=pn;
	(*res).frequency=frequency(pn);
	return res;
}

li createListe(){//Hakim
	li liste=malloc(sizeof(liste));
	liste->head=NULL;
	liste->taille=0;
	return liste;
}

void addListe(li liste,ptree va){//Hakim
	nodeL nl= malloc(sizeof(nodeL));
	nl->val=va;
	nl->suivant=NULL;
	if(liste->taille==0){
		liste->head=nl;
		liste->taille++;
	}else{
		nodeL tmp=liste->head;
		while(tmp->suivant!=NULL){
			tmp=(*tmp).suivant;
		}
		tmp->suivant=nl;
		liste->taille++;
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
	(*pin).symbole='\0';
	free(&pin);
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


void delete_node_liste(li liste, ptree v){
	nodeL tmp=liste->head;
	nodeL prev=tmp;
	if(tmp->val->root->in->symbole==v->root->in->symbole){
		liste->head=tmp->suivant;
		free(tmp);
		return;
	}
	while(tmp!= NULL && tmp->val->root->in->symbole!= v->root->in->symbole && tmp->val->root->in->frequency!= v->root->in->frequency){
		prev=tmp;
		tmp=tmp->suivant;
	}
	if(tmp==NULL){
		return;
	}
	prev->suivant=tmp->suivant;
	free(tmp);
	liste->taille--;
}

void delete_tree(ptree * pt){//PF
	if((*pt)->root!=NULL){
		delete_node((*pt)->root);
	}else{
		printf("%s\n","arbre deja vide");
	}
}


int frequency(pnode pt){//Hakim
	int left=0;
	int right=0;
	if(pt->left!=NULL){
		left=frequency(pt->left);
	}
	if(pt->right!=NULL){
		right=frequency(pt->right);
	}
	return left+right+pt->in->frequency;
	return 0;
}

int estDansListe(li liste, char c){
	if(liste->head==NULL){
		return 1;
	}else{
		nodeL tmp= liste->head;
		while(tmp!=NULL){
			if(tmp->val->root->in->symbole == c){
				return 0;
			}else{
				tmp=tmp->suivant;
			}
		}
	}
	return 1;
}

void addFrequencySymbole(li liste, char c){
	nodeL tmp= liste->head;
	while(tmp!=NULL){
		if(tmp->val->root->in->symbole == c){
			tmp->val->root->in->frequency++;
			break;
		}else{
			tmp=tmp->suivant;
		}
	}
}

li symbole_frequency(char* txt){
	li liste = createListe();
	int i;
	for(i=0;i<(int)strlen(txt);i++){
		if(estDansListe(liste,txt[i])==0){
			addFrequencySymbole(liste,txt[i]);
		}else{
			pinfo pii= create_info(1,txt[i]);
			pnode pnn= create_node(pii);
			ptree ptt= create_tree(pnn);
			addListe(liste, ptt);
		}
	}
	return liste;
}

ptree fusion(ptree pt1, ptree pt2){//PF
	pnode tmp_pn1=(*pt1).root;
	pnode tmp_pn2=(*pt2).root;
	int val_fusion=((*tmp_pn1).in->frequency)+((*tmp_pn2).in->frequency);
	pinfo info_fusion=create_info(val_fusion,'\spadesuit');
	pnode n_fusion=create_node(info_fusion);
	add_left(&n_fusion,&tmp_pn1);
	add_right(&n_fusion,&tmp_pn2);
	ptree t_fusion=create_tree(n_fusion);
	return t_fusion;
	
}

ptree min_freq_liste(li liste){
	int min=liste->head->val->root->in->frequency;
	nodeL tmp=liste->head;
	ptree res=tmp->val;
	while(tmp!=NULL){
		if(tmp->val->root->in->frequency<min){
			min=tmp->val->root->in->frequency;
			res=tmp->val;
		}
		tmp=tmp->suivant;
	}
	return res;
}

// void sort_liste(li liste){
// 	// int i,j;
// 	// for(i=0,i<(int)liste->taille;i++){
// 	// 	for()
// 	// }


// }

ptree big_tree(li liste){//on prend les mini ensuite on les fusione on supprime de la liste les deux mini et on ajoute la fusiona la liste
	
	ptree fus =malloc(sizeof(tree));
	ptree min1 =malloc(sizeof(tree));
	ptree min2 = malloc(sizeof(tree));
	while(liste->head!=NULL && liste->head->suivant!=NULL){
		printf("%s\n","test1" );
		min1=min_freq_liste(liste);
		printf("%s\n","test2" );
		delete_node_liste(liste,min1);
		printf("%s\n","test3" );
		min2=min_freq_liste(liste);
		printf("%s\n","test4" );
		delete_node_liste(liste,min2);
		printf("%s\n","test5" );
		fus=fusion(min1,min2);
		printf("%c",fus->root->in->symbole);
		printf("%d\n",fus->root->in->frequency);
		printf("%s\n","test6" );
		if(liste->head!=NULL){
			addListe(liste,fus);
		}
		printf("%s\n","test6.1" );
		nodeL tmp=liste->head;
	while(tmp!=NULL){
		printf("%c",tmp->val->root->in->symbole);
		printf("%d\n",tmp->val->root->in->frequency);
		tmp=tmp->suivant;
	}
		printf("%s\n","test7" );		
	}
	printf("%s\n","test7.9" );
	ptree tmp2=fus;
	printf("%s\n","test8" );
	printf("%c",tmp2->root->in->symbole);
	printf("%d\n",tmp2->root->in->frequency);
	return fus;


}



char * codage(char c, pnode pn){
	char cl[5];
	char cr[5];
	char *res=malloc(sizeof(char)*10);
	printf("testttt\n");
	if(pn->in->symbole==c){
		printf("testtttAAA\n");
		strcpy(res," ");
		printf("%s\n",res);
		return res;
	}else{
		printf("testtttK\n");
		if(pn->left==NULL){
			printf("testtttKKKK\n");
			strcpy(res,"3");
			printf("%s\n",res);
			return res;
		}else{
			printf("testtttRIGHT\n");
			res=strcat(codage(c,pn->right),"0");
			strcpy(cr,res);
			printf("testtttLEFT\n");
			res=strcat(codage(c,pn->left),"1");
			strcpy(cl,res);
			
		}
	}
	printf("testttt1\n");
	if (cl[0]=='3'){
		strcpy(res,cr);
		return res;
	}else{
		strcpy(res,cl);
		return res;
	}
}

char* compress(char* txt, ptree pt){
	int i;
	char *res=malloc(sizeof(char)*50);
	for(i=0;i<(int)strlen(txt);i++){
		printf("testtttMMMMMMMMM\n");
		char * tmp=codage(txt[i],pt->root);
		res=strcat(res,tmp);
	}
	printf("testtttpoijnj\n");
	return res;
}

