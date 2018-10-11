#include "Node.h"
// Attention a bien free les variable uniquement si on les a pas fait avec une fonction delete
int main(){
	


	//  pinfo inf=create_info(7,'r');	
	//  pinfo infl=create_info(700,'o');
	//  pinfo infr=create_info(70,'t');
	//   pinfo inf2=create_info(7,'p');	
	//  pinfo infl2=create_info(700,'u');
	//  pinfo infr2=create_info(70,'w');

	// // // struct info infl=create_info(90,"p");

	// // // struct info infr=create_info(87,"i");

	//   pnode n=create_node(inf);
	// // // Show_node(&n);
	// //  // delete_info(inf);
	// //  // Show_node(&n);
	// pnode nl= create_node(infl);
	// pnode nr= create_node(infr);
	// //delete_info(inf); 

	// // //Show_node(&n);
	// // // Show_node(&n);
	// // // pnode nl= create_node(infl);
	// // // pnode nr= create_node(infr);

	// add_left(&n,&nl);
	// add_right(&n,&nr);
	// // Show_node(&n);
	// // delete_node(nl);
	// // // Show_node(&n);
	//  pnode n2=create_node(inf2);
	//  pnode nl2= create_node(infl2);
	//  pnode nr2= create_node(infr2);
	//   add_left(&n2,&nl2);
	//   add_right(&n2,&nr2);
	// // //Show_node(&n);
	 
	//  // delete_info(inf);
	//  //  delete_info(infl);
	//  //  delete_info(infr);
	// //delete_node(nl);
	//  //  delete_node(nr);
	  
	  
	//  // delete_node(n2);
	//  // delete_node(nl2);
	//  // delete_node(nr2);

	
	// ptree pt=create_tree(n);
	// delete_tree(&pt);
	// //delete_node(n);
	//   delete_node(n2);
	// // // Show_node(&(*pt).root);
	// // // delete_tree(&pt);
	// // // Show_node(&(*pt).root);

	// // printf("%s\n","test fusion" );
	// // ptree pt2=create_tree(n2);
	// //  ptree p_f=fusion(pt,pt2);
	// //  Show_node(&(*p_f).root);
	// //  pnode p_f_n=(*p_f).root;
	// //  printf("%s\n","///////" );
	
	// li liste=createListe();
	// liste=symbole_frequency("a");
	// nodeL tmp=liste->head;
	// while(tmp!=NULL){
	// 	printf("%c",tmp->val->root->in->symbole);
	// 	printf("%d\n",tmp->val->root->in->frequency);
	// 	tmp=tmp->suivant;
	// }
	// printf("\n");
	// pinfo infaa=create_info(2,'j');
	// pnode aa=create_node(infaa);
	// ptree taa=create_tree(aa);
	// //delete_node_liste(liste, taa);
	// tmp=liste->head;
	// while(tmp!=NULL){
	// 	printf("%c",tmp->val->root->in->symbole);
	// 	printf("%d\n",tmp->val->root->in->frequency);
	// 	tmp=tmp->suivant;
	// }
	// printf("\n");
	// ptree tbb=min_freq_liste(liste);
	// printf("%c",tbb->root->in->symbole);
	// printf("%d\n",tbb->root->in->frequency);
	

	// printf("%s\n","big tree test:" );
	// ptree btree=big_tree(liste);
	// printf("%s\n","test sd" );
	// tmp=liste->head;
	// while(tmp!=NULL){
	// 	printf("%c",tmp->val->root->in->symbole);
	// 	printf("%d\n",tmp->val->root->in->frequency);
	// 	tmp=tmp->suivant;
	// }
	

	

	// ///////////////////////////////
	// printf("%s\n","complet" );

	 //  free(inf);
	 //  free(infl);
	 //  free(infr);
	 // // free(n);
	 //  free(nl);
	 //  free(nr);
	 // free(n2);
	 // free(nl2);
	 // free(nr2);
	// free(pt);
	// free(pt2);
	// free(p_f);
	// free(p_f_n);
	// free(liste);
	// free(tmp);
	// free(infaa);
	// free(aa);
	// free(taa);
	// free(tbb);
	// free(btree);

	
////////////////////////////////////////////////////////

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
	char* texte= "hello";
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
	char* code=(char*)malloc(sizeof(char));
	code=compress(texte,btree);
	printf("%s\n",code);
	char* uncode=uncompress(code,btree);
	printf("%s\n",uncode);

	///////////////////////////////
	printf("%s\n","complet" );



	return 0;
}
