#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct pedido PEDIDO;
struct pedido{
	char numeroPedido[3];
	char area[3];
	char cep[9];	
};


//fila
struct pedido ped[3]; 
//areas
struct pedido area1[3];
struct pedido area2[3];
struct pedido area3[3];

int topo1 = 2;
int topo2 = 2;
int topo3 = 2;
int a,b;
int pos;


void entrada(void){
	
	for(a=0;a<3;a++){
		printf("Numero da comanda: ");
		scanf("%s",&ped[a].numeroPedido);
		printf("CEP: ");
		scanf("%s",&ped[a].cep);
		printf("Area de entrega: ");
		scanf("%s",&ped[a].area);		
	pos++;
	}
	
}

void moveFila(void){
	//struct temp[3];
	for(a=0;a<pos;a++){
		for(b=0;b<pos;b++){
		strcpy(ped[a].numeroPedido,ped[b].numeroPedido);
		strcpy(ped[a].area,ped[b].area);
		strcpy(ped[a].cep,ped[b].cep);
		pos--;	
		}
	}

}



void moveEntrega(void){

for(a=0;a<pos;a++){
	
if(strcmp(ped[a].area,"1")==0){
	strcpy(area1[topo1].numeroPedido,ped[a].numeroPedido);
	strcpy(area1[topo1].area,ped[a].area);
	strcpy(area1[topo1].cep,ped[a].cep);
	
topo1--;
}
if(strcmp(ped[a].area,"2")==0){
	strcpy(area2[topo2].numeroPedido,ped[a].numeroPedido);
	strcpy(area2[topo2].area,ped[a].area);
	strcpy(area2[topo2].cep,ped[a].cep);
	
topo2--;
}
if(strcmp(ped[a].area,"3")==0){
	strcpy(area3[topo3].numeroPedido,ped[a].numeroPedido);
	strcpy(area3[topo3].area,ped[a].area);
	strcpy(area3[topo3].cep,ped[a].cep);
	
topo3--;
}

}

	
}

int main(int argc, char *argv[]) {

	entrada();
	moveEntrega();
	
	
	printf("Numero da comanda: %s ",area1[2].numeroPedido);
	printf("Area de entrega: %s ",area1[2].area);
	printf("CEP: %s \n",area1[2].cep);
	
	printf("Numero da comanda: %s ",area2[2].numeroPedido);
	printf("Area de entrega: %s ",area2[2].area);
	printf("CEP: %s \n",area2[2].cep);
	
	printf("Numero da comanda: %s ",area3[2].numeroPedido);
	printf("Area de entrega: %s ",area3[2].area);
	printf("CEP: %s \n",area3[2].cep);
	
	printf("Numero da comanda: %s ",area3[1].numeroPedido);
	printf("Area de entrega: %s ",area3[1].area);
	printf("CEP: %s \n",area3[1].cep);
	//printf("%d",pos);
	return 0;
}
