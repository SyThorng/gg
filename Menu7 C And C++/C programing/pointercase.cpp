#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	float *ptr;
	int n,i,op;
	do{
		system("cls");
		system("color 4");
		printf("\2\3 1.Input Pointer       \4\5\n");
		printf("\2\3 2.Output Pointer      \4\5\n");
		printf("\2\3 3.Search Pointer      \4\5\n");
		printf("\2\3 4.Update Pointer      \4\5\n");
		printf("\2\3 5.Delete Pointer      \4\5\n");
		printf("\2\3 6.Insert Pointer      \4\5\n");
		printf("\2\3 7.Sort Pointer        \4\5\n");
		printf("\2\3 0.Exit Aplication     \4\5\n");
		printf("Please Inut option: ");scanf("%d",&op);
		switch(op){
			case 1:{
				printf("Please Input Number: ");
				scanf("%d",&n);
				ptr = (float*)malloc(n*sizeof(float));
				for(i=0;i<n;i++){
					printf("Please input pointer[%d]: ",i);
					scanf("%f",(ptr+i));
				}
				printf("\n");
			}break;
			case 2:{
				printf("Value Output: ");
				for(i=0;i<n;i++){
					printf("%.2f\t",*(ptr+i));
				}
				printf("\n");
			}break;
			case 3:{
				int s_data;
				int t=0;
				printf("Please input Values for search: ");
				scanf("%d",&s_data);
				for(i=0;i<n;i++){
					if(s_data == *(ptr+i)){
						printf("Data search found......\n");
						printf("Index[%d]: %.2f\n",i,*(ptr+i));
						t=1;
						break;
					}
				}
				if(t==0){
					printf("Data Search not found.........\n");
				}
			}break;
			case 4:{
				int Udata;
				int t=0;
				printf("please input Value for search: ");
				scanf("%d",&Udata);
				for(i=0;i<n;i++){
					if(Udata==*(ptr+i)){
						printf("Please Udate new value: ");
						scanf("%f",(ptr+i));
						t=1;
						break;
					}
				}
				if(t==0){
					printf("data Update fail...\n");
				}
			}break;
			case  5:{
				int sdata;
				int t=0;
				printf("Please input Value for search: ");
				scanf("%d",&sdata);
				for(i=0;i<n;i++){
					if(sdata == *(ptr+i)){
						for(int q=i;q<n;q++){
							*(ptr+q)=*(ptr+(q+1));
						}
						--n;
						t=1;
						break;
					}
				}
				if(t==0){
					printf("dalete Pointer fail..\n");
				}
			}break;
			case 6:{
				int insert;
				printf("Input Index to insert: ");
				scanf("%d",&insert);
				if(insert<n){
					printf("Insert Biger  than pointer \n");
				}else {
					for(i=n-1;i>=insert;i++){
						*(ptr+(i+1))=*(ptr+i);
					
					}
					++n;
					printf("Input new value pointer[%d]: ",insert);
				}
				printf("\n");
			}break;
			case 7:{
				int k,temp;
				for(i=0;i<n;i++){
					for(k=i+1;k<n;k++){
						if(*(ptr+i)>*(ptr+k)){
							temp=*(ptr+i);
						    *(ptr+i)=*(ptr+k);
						    *(ptr+k)=temp;
						}
					}
				}
				printf("Data sort pointer....\n");
				
			}break;
			case 0:{
				exit(0);
				
			}break;
			default:{
				printf("Please Select 1 to 7 exit 0");
			}break;
		}getch();
			
	}while(1);
	free(ptr);
	return 0;
}
