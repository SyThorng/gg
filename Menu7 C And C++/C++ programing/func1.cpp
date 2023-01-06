#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int id[10];
	string name[10];
	string gender[10];
	float score[10];
	int i,op,n;
	do{
		system("color 4");
		system("cls");
		cout<<"|\t \1 1.Input Information \2"<<endl;
		cout<<"|\t \1 2.Output Information \2"<<endl;
		cout<<"|\t \1 3.Search Information \2"<<endl;
		cout<<"|\t \1 4.Update Information \2"<<endl;
		cout<<"|\t \1 5.Delete Information \2"<<endl;
		cout<<"|\t \1 6.Insert Information \2"<<endl;
		cout<<"|\t \1 7.Sort Information For Name \2"<<endl;
		cout<<"|\t \1 8.Sort Information For ID \2"<<endl;
		cout<<"|\t \1 0.Exit Application \2"<<endl;
		cout<<"|\t Input Option: ";
		cin>>op;
		switch(op){
			case 1:{
				system("color 2");
				cout<<"----------------Input-----------------"<<endl;
				cout<<"Input N: ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"---------Students "<<i+1<<"--------------"<<endl;
					cout<<"|\t Input ID: ";
					cin>>id[i];
					cout<<"|\t Input Name: ";
					cin.ignore();
					getline(std::cin,name[i]);
					cout<<"|\t Input Sex: ";
					cin>>gender[i];
					cout<<"|\t Input Score: ";
					cin>>score[i];
				}
				cout<<"|\t Input Completed...!"<<endl;
			}break;
			case 2:{
				system("color 1");
				cout<<"----------------------Output----------------------"<<endl;
				cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Gender"<<setw(10)<<"Score"<<endl;
				
				for(i=0;i<n;i++){
					cout<<setw(10)<<id[i]<<setw(15)<<name[i]<<setw(10)<<gender[i]<<setw(10)<<
					score[i]<<endl;
				}
			}break;
			case 3:{
				system("color A");
				cout<<"--------------------------------------Search----------------------------------"<<endl;
				string s_name; int b=0;
				cout<<"Input Name to search: ";
				cin.ignore();
				getline(std::cin,s_name);
				cout<<setw(10)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Gender"<<setw(10)<<"Score"<<endl;
				for(i=0;i<n;i++){
					if(name[i]==s_name){
						cout<<setw(10)<<id[i]<<setw(15)<<name[i]<<setw(10)<<gender[i]<<setw(10)<<
						score[i]<<endl;
						b=1;
					}
				}
				if(b==0){
					cout<<"\a Search Not found....!"<<endl;
				}
			}break;
			case 4:{
				system("color B");
				cout<<"--------------------------------------Update----------------------------------"<<endl;
				string s_name; int b=0;
				cout<<"Input Name to Update: ";
				cin.ignore();
				getline(std::cin,s_name);
				for(i=0;i<n;i++){
					if(name[i]==s_name){
							cout<<"|\t Input ID: ";
							cin>>id[i];
							cout<<"|\t Input Name: ";
							cin.ignore();
							getline(std::cin,name[i]);
							cout<<"|\t Input Sex: ";
							cin>>gender[i];
							cout<<"|\t Input Score: ";
							cin>>score[i];	
							b=1;
							cout<<"Update Completed...!"<<endl;
					}
				}
				if(b==0){
					cout<<"\a Update Not found....!"<<endl;
				}
			}break;
			case 5:{
				system("color C");
				cout<<"--------------------------------------Delete----------------------------------"<<endl;
				string s_name; int b=0; int j;
				cout<<"Input Name to Update: ";
				cin.ignore();
				getline(std::cin,s_name);
				for(i=0;i<n;i++){
					if(s_name==name[i]){
						for(j=i;j<n;j++){
							id[j]=id[j+1];
							
							name[j]=name[j+1];
							
							gender[j]=gender[j+1];
							
							score[j]=score[j+1];
						}
						--n;
						b=1;
						cout<<"Delete Completed...!"<<endl;
						break;
					}
				}
				if(b==0){
					cout<<"\a Delete Not Completed...!"<<endl;
				}
			}break;
			case 6:{
				system("color 7");
				cout<<"-----------------------------Insert----------------------------------"<<endl;
				int pos;
				cout<<"|\t Input Position: ";
				cin>>pos;
				if(pos>n){
					cout<<"Invalid Position \a"<<endl;
				}else {
					for(i=n-1;i>=pos;i--){
						id[i+1]=id[i];
						
						name[i+1]=name[i];
						
						gender[i+1]=gender[i];
						
						score[i+1]=score[i];
					}
					++n;
					cout<<"Insert New Students "<<endl;
					cout<<"|\t Input ID: ";
					cin>>id[pos];
					cout<<"|\t Input Name: ";
					cin.ignore();
					getline(std::cin,name[pos]);
					cout<<"|\t Input Sex: ";
					cin>>gender[pos];
					cout<<"|\t Input Score: ";
					cin>>score[pos];
					cout<<"\a Insert Completed....!"<<endl;
				}
			}break;
			case 7:{
				system("color 9");
				cout<<"-----------------------Sort------------------------------------"<<endl;
				string temp; int ttemp; float tscore; int j;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(name[i]>name[j]){
							ttemp = id[i];
							id[i]=id[j];
							id[j]=ttemp;
							
							temp = name[i];
							name[i]=name[j];
							name[j]=temp;
							
							temp = gender[i];
							gender[i]=gender[j];
							gender[j]=temp;
							
							tscore = score[i];
							score[i]=score[j];
							score[j]=tscore;
						}
					}
				}
				cout<<"\a Sort Completed...!"<<endl;
			}break;
			case 8:{
				system("color C");
				cout<<"-----------------------Sort------------------------------------"<<endl;
				string temp; int ttemp; float tscore; int j;
				for(i=0;i<n;i++){
					for(j=i+1;j<n;j++){
						if(id[i]>id[j]){
							ttemp = id[i];
							id[i]=id[j];
							id[j]=ttemp;
							
							temp = name[i];
							name[i]=name[j];
							name[j]=temp;
							
							temp = gender[i];
							gender[i]=gender[j];
							gender[j]=temp;
							
							tscore = score[i];
							score[i]=score[j];
							score[j]=tscore;
						}
					}
				}
				cout<<"\a Sort Completed...!"<<endl;
			}break;
			case 0:{
				system("color 6");
				exit(0);
			}break;
		}getch();
	}while(1);
}
