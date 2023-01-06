#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int i,n,arr[i];
	int op;
	do{
		system("cls");
		system("color D");
		printf("\3. 1.Input Array: \4\n");
		printf("\3. 2.Output Array: \4\n");
		printf("\3. 3.Search Array: \4\n");
		printf("\3. 4.update Application: \4\n");
		printf("\3. 5.Delete Array: \4\n");
		printf("\3  6.Insert Array: \4\n");
		printf("\3  7.Sort Array: \4\n");
		printf("\3  0.Exit Application: \4\n");
		printf("Please Input Option:");scanf("%d",&op);
		switch(op) {
			case 1: {
				printf("Please Input N: ");scanf("%d",&n);
				for(i=0;i<n;i++){
					printf("Please Input Array[%d]: ",i);scanf("%d",&arr[i]);
				}
				printf("Data Inputted: \n");
			}break;
			case 2: {
				printf("Values: ");
				for(i=0;i<n;i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
			}break;
			case 3: {
				int s_data;
				int b=0;
				printf("Please Input search Data in array: ");
				scanf("%d",&s_data);
				for(i=0;i<n;i++){
					if(s_data == arr[i]){
						printf("Data has found...\n");
						printf("The value:%d ",arr[i]);
						b=1;
						break;
					}//eles printf("No found")
				}
				if(b==0){
					printf("Search Not Found.........\n");
				}
			}break;
			case 4: {
				int udata,t=0;
				printf("Search for Update: ");scanf("%d",&udata);
				for(i=0;i<n;i++){
					//for(i=0;i<n;i++){
						if(udata==arr[i]){
							printf("Search for updste: ");scanf("%d",&arr[i]);
							t=1;
							break;
						}
					}if(t==0){
						printf("Please  data fail\n ");
					//}
				}
				
			}break;
			case 5: {
				int ddate,t=0;
				printf("Please Search for Delete: ");scanf("%d",&ddate);
				for(i=0;i<n;i++){
					if(ddate==arr[i]){
						for(int k=i;k<n;k++){
							arr[k]=arr[k+1];
						}
						--n;
						t=1;
						printf("Data Failed...........\n");
						break;
					}
				}
				if(t==0){
					printf("Dalete Failed.......\n");
				}
			}break;
			case 6: {
				int pos;   //position
				printf("Please Input Position for Insert : ");scanf("%d",&pos);
				if(pos>n){
					printf("Position is bigger than number of array.\n");
				} else {
					for(i=n-1;i>=pos;i--){
						arr[i+1] = arr[i];
					}
					++n;
					printf("Please Insert new value: ");scanf("%d",&arr[pos]);
				}
				printf("\n");
			}break;
			case 7: {
				int temp,j;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(arr[i]>arr[j]){
							temp = arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
			}break;
			case 0: {
				exit(0);
				
			}break;
			default: {
				printf("Please Input 1 to 7\n");
				
			}break;
		}getch();
	}while(1);
}
