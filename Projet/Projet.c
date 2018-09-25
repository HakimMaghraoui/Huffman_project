#include "Node.h"

int main(){
	// pnode nr=malloc(sizeof(pnode));
	// (*nr).val=9;
	// (*nr).right=NULL;
	// (*nr).left=NULL;
	// printf("nr vaut: %d\n",(*nr).val );
	// pnode nl=malloc(sizeof(pnode));
	// (*nl).val=4;
	// (*nl).right=NULL;
	// (*nl).left=NULL;
	// printf("nl vaut: %d\n",(*nl).val );
	// pnode n=malloc(sizeof(pnode));
	// (*n).val=7;
	// (*n).right=nr;
	// (*n).left=nl;
	// printf("n vaut: %d\n",(*n).val );



	// ptree p=malloc(sizeof(ptree));
	// (*p).root=n;
	// (*p).frequency=1;
	// printf("%d\n",(*p).frequency );
	// Show_node(&n);

	pnode n=create_node(18);
	pnode nl= create_node(7);
	pnode nr= create_node(8);
	add_left(&n,&nl);
	add_right(&n,&nr);

	pnode n2=create_node(180);
	pnode nl2= create_node(70);
	pnode nr2= create_node(80);
	add_left(&n2,&nl2);
	add_right(&n2,&nr2);
	

	
	//printf("%d\n",(*n).val);
	ptree pt=creat_tree(n); 
	ptree pt2=creat_tree(n2);
	ptree p_f=fusion(pt,pt2);
	pnode p_f_n=(*p_f).root;
	Show_node(&p_f_n);
	 //delete_node(&n);
	// Show_node(&(pt->root));
	 //delete_tree(&(pt->root));
	 //Show_node(&(pt->root));
	//symbole_frequency();


	printf("%s\n","Test Complet" );


	return 0;
}
