#include "Node.h"

int main(){
	


	pinfo inf=create_info(7,'o');	
	pinfo infl=create_info(700,'o');
	pinfo infr=create_info(70,'o');
	// struct info infl=create_info(90,"p");

	// struct info infr=create_info(87,"i");

	 pnode n=create_node(inf);
	// Show_node(&n);
	 // delete_info(inf);
	 // Show_node(&n);
	 pnode nl= create_node(infl);
	 pnode nr= create_node(infr);
	//delete_info(inf); 

	//Show_node(&n);
	// Show_node(&n);
	//  pnode nl= create_node(infl);
	//  pnode nr= create_node(infr);

	// add_left(&n,&nl);
	// add_right(&n,&nr);
	// Show_node(&n);
	// delete_node(nl);
	// Show_node(&n);
	pnode n2=create_node(inf);
	pnode nl2= create_node(infl);
	pnode nr2= create_node(infr);
	 add_left(&n,&nl);
	 add_right(&n,&nr);
	//Show_node(&n);

	
	ptree pt=create_tree(n);
	// Show_node(&(*pt).root);
	// delete_tree(&pt);
	// Show_node(&(*pt).root);

	printf("%s\n","test fusion" );
	ptree pt2=create_tree(n2);
	 ptree p_f=fusion(pt,pt2);
	 Show_node(&(*p_f).root);
	 pnode p_f_n=(*p_f).root;
	 printf("%s\n","///////" );
	
	li liste=createListe();
	char* texte= "jnhihuyuyzkjh";
	liste=symbole_frequency(texte);
	nodeL tmp=liste->head;
	while(tmp!=NULL){
		printf("%c",tmp->val->root->in->symbole);
		printf("%d\n",tmp->val->root->in->frequency);
		tmp=tmp->suivant;
	}
	printf("\n");
	pinfo infaa=create_info(2,'j');
	pnode aa=create_node(infaa);
	ptree taa=create_tree(aa);
	//delete_node_liste(liste, taa);
	tmp=liste->head;
	while(tmp!=NULL){
		printf("%c",tmp->val->root->in->symbole);
		printf("%d\n",tmp->val->root->in->frequency);
		tmp=tmp->suivant;
	}
	printf("\n");
	ptree tbb=min_freq_liste(liste);
	printf("%c",tbb->root->in->symbole);
	printf("%d\n",tbb->root->in->frequency);
	

	printf("%s\n","big tree test:" );
	ptree btree=big_tree(liste);
	printf("%s\n","test sd" );
	tmp=liste->head;
	while(tmp!=NULL){
		printf("%c",tmp->val->root->in->symbole);
		printf("%d\n",tmp->val->root->in->frequency);
		tmp=tmp->suivant;
	}
	char* code=compress(texte,btree);
	printf("%s\n",code);
	

	///////////////////////////////
	printf("%s\n","complet" );
	return 0;
}

