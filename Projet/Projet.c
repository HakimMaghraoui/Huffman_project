#include "Node.h"

int main(){
	


	pinfo inf=create_info(7,"o");	
	pinfo infl=create_info(700,"o");
	pinfo infr=create_info(70,"o");
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
	// pnode n2=create_node(180);
	// pnode nl2= create_node(70);
	// pnode nr2= create_node(80);
	 add_left(&n,&nl);
	 add_right(&n,&nr);
	Show_node(&n);

	
	ptree pt=creat_tree(n);
	Show_node(&(*pt).root);
	delete_tree(&pt);
	Show_node(&(*pt).root);

	//ptree pt2=creat_tree(n2);
	// ptree p_f=fusion(pt,pt2);
	// pnode p_f_n=(*p_f).root;
	// Show_node(&p_f_n);
	


	printf("%s\n","complet" );


	return 0;
}
