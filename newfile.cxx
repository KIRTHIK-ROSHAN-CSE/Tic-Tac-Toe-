#include<iostream>
using namespace std;
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token='x';
bool tie;
string n1;
string n2;
void functionone(){
	
	cout<<"ente the name of the first player"<<endl;
	getline(cin,n1);
	cout<<"enter the name of thesecond player"<<endl;
	getline(cin,n2);
	cout<<n1<<"is the first player so he will play first"<<endl;
	cout<<n2<<"is the second player so he willl play next"<<endl;
	
	    
	cout<<"   |    |     \n";
	cout<<" "<<space[0][0]<<" |  "<<space[0][1]<<" |  "<<space[0][2]<<"   \n";
	cout<<"___|____|___\n";
	cout<<"   |    |     \n";
	cout<<" "<<space[1][0]<<" |  "<<space[1][1]<<" |  "<<space[1][2]<<"   \n";
	cout<<"___|____|___\n";
	cout<<"   |    |     \n";
	cout<<" "<<space[2][0]<<" |  "<<space[2][1]<<" |  "<<space[2][2]<<"   \n";
	cout<<"   |    |     \n";
	
}

void functiontwo(){
	
	
	int digit;
   if(token=='x'){
   	cout<< n1<<"please enter";
   	cin>>digit;
   }
   if(token=='0'){
   	cout<<n2<<"please enter";
   	cin>>digit;
   }
   if(digit==1){
   	row=0;
   	column=0;
   }
    if(digit==2){
   	row=0;
   	column=1;
   }
    if(digit==3){
   	row=0;
   	column=2;
   }
    if(digit==4){
   	row=1;
   	column=0;
   }
    if(digit==5){
   	row=1;
   	column=1;
   }
    if(digit==6){
   	row=1;
   	column=2;
   }
    if(digit==7){
   	row=2;
   	column=0;
   }
    if(digit==8){
   	row=2;
   	column=1;
   }
    if(digit==9){
   	row=2;
   	column=2;
   }
   else{
   	cout<<"invalid !!!"<<endl;
   }
   if(token=='x'&& space[row][column] !='x'&& space[row][column] !='0'){
       space[row][column]='x';
       token='o';
   }
   else if(token=='0'&& space[row][column] !='x'&& space[row][column] !='0')
   {
   	space[row][column]='0';
   	token='x';
   }
   else{
   	cout<<"there is no empty space";
   	functiontwo();
   }
}   
   bool functionthree(){
   
   	for(int i=0;i<3;i++){
   		if(space[i][0]==space[i][1]&&space[i][0]==space[i][2]|| space[0][i]==space[1][i]&&space[0][i]==space[2][i])
   		return true;
   	
   	}
   	if(space[0][0]==space[1][1]&&space[1][1]==space[2][2])||space[0][2]==spac[1][1]&&space[1][1]=space[2][0]{
   		return true;
   	}
   	for(int i=0;i<3;i++){
   		for(int j=0;j<3;j++){
   			if(space[i[j] !='x' && space[i][j] !='0'){
   				return false;
   				} 
   		}
   	}
   	tie=true;
   	return false;
   	}
int main(){
   	while(!functionthree()) {
   		functioone();
   		functiontwo();
   		funtiothree();
   	}
   	if(token=='x'	&& tie==false {
   		cout<<n2<<'wins'<<endl;
}
else if(token=='0'&& tie==false){
   	cout<<n1<<"wins!"<<endl;
}
else{
   	cout<<"it is draw"<<endl;
}
 }  	
   	
   	
   	
   	