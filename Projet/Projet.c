#include "Node.h"
#include <stdio.h>

int main(){
	int run=1;
	int k;
	char* texte=(char*)malloc(sizeof(char));
	while(run){
		printf("MENU\n");
		printf("1. Compression d'un texte depuis l'entrée standard vers la sortie standard\n");
		printf("2. Compression d'un texte depuis un fichier .txt dans un fichier .txt\n");
		printf("3. Quit\n");
		scanf("%d",&k);
		switch(k){
			case 1:
				printf("Veuillez entrer votre texte(no spaces):   ");
				scanf("%s",texte);
				li liste= symbole_frequency(texte);
				ptree bigtree=big_tree(liste);
				char* code= compress(texte,bigtree);
				printf("Code: %s\n",code);
				int kk=3;
				while(kk<1 || kk>2){
					printf("Voulez vous le decompresser ou non? :\n");	
					printf("1. Oui\n");
					printf("2. Non\n");
					scanf("%d",&kk);
				}
				if(kk==1){
					char* code_decompress=uncompress(code,bigtree);
					printf("%s\n",code_decompress);
				}
				break;
			case 2:
				printf("Veuillez entrer le nom du fichier.txt(no spaces):   ");
				char* nomf=(char*)malloc(sizeof(char));
				printf("V1");
				scanf("%s",nomf);
				printf("V2");
				char* texte=file_to_char(nomf);
				printf("V3");
				li liste2= symbole_frequency(texte);
				ptree bigtree2=big_tree(liste2);
				char* code2= compress(texte,bigtree2);
				printf("Veuillez entrer le nom du fichier.txt(no spaces) ou vous voulez enregistrer le code:   ");
				char* sortief=(char*)malloc(sizeof(char));
				scanf("%s",sortief);
				write(code2, sortief);
				printf("\n");
				break;
			case 3:
				run=0;
				break;
			default:
				printf("S'il vous plait, veuillez entrer un entier valide\n");
				break;
		}		
	}
	return 0;
}

