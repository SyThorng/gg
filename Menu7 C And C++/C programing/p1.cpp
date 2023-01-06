#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void Input(float *ptr,int *n){
	int i;
	for(i=0;i<*n;i++){
		printf("Input Pointer[%d]: ",i);
		scanf("%f",ptr+i);
	}
	printf("Input Completed \n");
}
void Output(float *ptr,int *n){
	int i;
	printf("Value is: ");
	for(i=0;i<*n;i++){
		printf("%.2f\t",*(ptr+i));
	}
}
void Search(float *ptr,int *n){
	float s; int b=0; int i;
	printf("Input Pointer to Search: ");
	scanf("%f",&s);
	for(i=0;i<*n;i++){
		if(s == *(ptr+i)){
			printf("Index[%d] :%.2f \t",i,*(ptr+i));
			b=2;
		}
	}
	if(b==0){
		printf("Search Not Found...!");
	}
}
void Update(float *ptr,int *n){
	float s; int b=0; int i;
	printf("Input Pointer to Update: ");
	scanf("%f",&s);
	for(i=0;i<*n;i++){
		if(s == *(ptr+i)){
			printf("Input New Pointer: ");
			scanf("%f",(ptr+i));
			b=2;
			printf("Update Completed");
		}
	}
	if(b==0){
		printf("Update Not Found...!");
	}
}
void Delete(float *ptr,int *n){
	float s; int j,i; int b=0;
	printf("Input Pointer For Delete: ");
	scanf("%f",&s);
	for(i=0;i<*n;i++){
		if(s == *(ptr+i)){
			for(j=i;j<*n;j++){
				*(ptr+j)  = *(ptr+(j+1));
			}
			--*n;
			b=1;
			printf("Delete Completed");
			break;
		}
	}
	if(b==0){
		printf("Delete Not Completed\n");
	}
}
void Insert(float *ptr,int *n){
	int pos,i;
	printf("Input Position: ");
	scanf("%d",&pos);
	if(pos>*n){
		printf("Invalid Position\a");
	}else {
		for(i=*n-1;i>=pos;i--){
			*(ptr+(i+1)) = *(ptr+i);
		}
		++*n;
		printf("Insert New value is:");
		scanf("%f",ptr+pos);
		printf("Insert  Completed");
	}
}
void Sort(float *ptr,int *n){
	float temp; int j,i;
	for(i=0;i<*n;i++){
		for(j=i+1;j<*n;j++){
			if(*(ptr+i) > *(ptr+j)){
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	printf("Sort Completed \a\n");
}
int main(){
	int i,op,n;
	float *ptr;
	do{
		system("cls");
		system("color 2");
		printf("|\t \1 1.Input Ponter\n");
		printf("|\t \1 2.Output Ponter\n");
		printf("|\t \1 3.Search Pointer\n");
		printf("|\t \1 4.Update Pointer\n");
		printf("|\t \1 5.Delete Pointer\n");
		printf("|\t \1 6.Insert Pointer\n");
		printf("|\t \1 7.Sort Pointer\n");
		printf("|\t \1 0.Exit Program \n");
		printf("|\t Input Option: ");
		scanf("%d",&op);
		switch(op){
			case 1:{
				printf("Please Input N: ");
				scanf("%d",&n);
				ptr = (float *)calloc(n,sizeof(float));
				Input(ptr,&n);
			}break;
			case 2:{
				Output(ptr,&n);
			}break;
			case 3:{
				Search(ptr,&n);
			}break;
			case 4:{
				Update(ptr,&n);
			}break;
			case 5:{
				Delete(ptr,&n);
			}break;
			case 6:{
				Insert(ptr,&n);
			}break;
			case 7:{
				Sort(ptr,&n);
			}break;
		}getch();
	}while(op!=0);
}
