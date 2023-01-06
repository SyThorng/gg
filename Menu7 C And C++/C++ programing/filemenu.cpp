#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class Person{
	private:
		int id;
		char name[20];
	public:
		int getID(){
			return id;
		}
		void Input(){
			cout<<" Input ID   =";cin>>id;
			cout<<" Input Name =";cin.ignore();cin.getline(name,20);
		}
		void Output(){
			cout<<setw(12)<<id<<setw(16)<<name<<endl;
		}
};
void Header(){
	cout<<setw(12)<<"ID"<<setw(16)<<"Name"<<endl;
}
int main(){
	Person p;
	int op,n,i; 
	fstream file;
	do{
		cout<<" 1) Input"<<endl;
		cout<<" 2) Output"<<endl;
		cout<<" 3) Search"<<endl;
		cout<<" 4) Update"<<endl;
		cout<<" 5) Delete"<<endl;
		cout<<" 6) Sort"<<endl;
		cout<<" 7) Insert"<<endl;
		cout<<" 0) Exit"<<endl;
		cout<<"  Please Choose One Option :";cin>>op;
		switch(op){
			case 1:{
				file.open("Person.bin",ios::app|ios::binary);
				if(!file){
					cout<<" Error in creating filr"<<endl;
					return 0;
				}
				cout<<" Input Number of Person =";cin>>n;
				for(i=0;i<n;i++){
					p.Input();
					file.write((char*)&p,sizeof(p));
				}
				cout<<" Write Success"<<endl;
				file.close();
			}break;
			case 2:{
				file.open("Person.bin",ios::in|ios::binary);
				if(!file){
					cout<<" Error in opening file"<<endl;
				}
				Header();
				while(file.read((char*)&p,sizeof(p))){
					p.Output();
				}
				file.close();
			}break;
			case 3:{
				int sid;
				bool b=false;
				file.open("Person.bin",ios::in|ios::binary);
				cout<<" Input ID for search =";cin>>sid;
				while(file.read((char*)&p,sizeof(p))){
					if(sid==p.getID()){
						Header();
						p.Output();
						b=true;
						break;
					}
				}
				if(b==false){
					cout<<"  Search ID not found"<<endl;
				}
				file.close();
			}break;
			case 4:{
				fstream temp;
				int sid;
				bool b=false;
				Person p1;
				file.open("Person.bin",ios::in|ios::binary);
				temp.open("temp.bin",ios::out|ios::binary);
				if(!file){
					cout<<" Error opening file"<<endl;
					return 0;
				}
				if(!temp){
					cout<<" Error in creating file"<<endl;
					return 0;
				}
				cout<<" Input ID for search to Update =";cin>>sid;
				while(file.read((char*)&p,sizeof(p))){
					if(sid==p.getID()){
						cout<<"  Input New Date"<<endl;
						p1.Input();
						temp.write((char*)&p1,sizeof(p1));
						b=true;
					}else{
						temp.write((char*)&p,sizeof(p));
					}
				}
				if(b==false){
					cout<<" Search ID not found"<<endl;
				}
				file.close();
				temp.close();
				remove("Person.bin");
				rename("temp.bin","Person.bin");
				cout<<"  Update Success"<<endl;
			}break;
			case 5:{
				fstream temp;
				int did;
				int b=0;
				file.open("Person.bin",ios::in|ios::binary);
				temp.open("temp.bin",ios::out|ios::binary);
				if(!file){
					cout<<" Error in opening file"<<endl;
					return 0;
				}
				if(!temp){
					cout<<" Error in creating file"<<endl;
					return 0;
				}
				cout<<" Input ID for search to delete =";cin>>did;
				while(file.read((char*)&p,sizeof(p))){
					if(did==p.getID()){
						cout<<" Delete success"<<endl;
						b=1;
					}else{
						temp.write((char*)&p,sizeof(p));
					}
				}
				if(b==0){
					cout<<" Search ID not found"<<endl;
				}
				file.close();
				temp.close();
				remove("Person.bin");
				rename("temp.bin","Person.bin");
			}break;
			case 6:{
				Person ttemp,sort;
				Person array[1000];
				int count=0;
				int i,j;
				fstream temp;
				file.open("Person.bin",ios::in|ios::binary);
				temp.open("temp.bin",ios::out|ios::binary);
				while(file.read((char*)&p,sizeof(p))){
					array[count]=p;
					count++;
				}
				for(i=0;i<count;i++){
					for(j=i+1;j<count;j++){
						if(array[i].getID()>array[j].getID()){
							ttemp=array[i];
							array[i]=array[j];
							array[j]=ttemp;
						}
					}
					sort=array[i];
					temp.write((char*)&sort,sizeof(sort));
				}
				cout<<" Sort success"<<endl;
				file.close();
				temp.close();
				remove("Person.bin");
				rename("temp.bin","Person.bin");
			}break;
				case 7://Insert
				{
					fstream file1;
					int b=0;
					int N_ID;
					Person per1;
					file.open("Person.bin",ios::in|ios::binary);
					file1.open("NewPerson.bin",ios::out|ios::binary);
					cout<<"Input ID to Insert :";cin>>N_ID;
					while(file.read((char*)&p,sizeof(p)))
					{
						if(p.getID()==N_ID)
						{
							per1.Input();							
						    file1.write((char*)&per1,sizeof(per1));
							file1.write((char*)&p,sizeof(p));
							b=0;							
						}
						else
						{
						    file1.write((char*)&p,sizeof(p));
						}
			    	}
			    	if(b==0){
			    		cout<<"Insert completed...!"<<endl;
					}
			    	file.close();
					file1.close();
			    	remove("Person.bin");
			    	rename("NewPerson.bin","Person.bin");
				}break;
		}
	}while(op!=0);
	return 0;
}
