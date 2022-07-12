#include<iostream>
using namespace std;
char matrix[3][3] = {'a','b','c','h','o','d','g','f','e'};
char matrix2[3][3] = {'a','b','c','h','o','d','g','f','e'};
int flag = 1;
int count;
void Draw(){
	system("cls");
	cout<<"Matrix Quiz"<<endl;
	cout<<"Welcome to matrix Quiz,This is a game based on numbers,before moving ahead let me explain you the game"<<endl;
	cout<<"You have given a matrix with variables - a,b,c,d,e,f,g,h,o"<<endl;
	cout<<"You have to fill all the values inside the matrix such that the following conditions satisfies"<<endl;
	cout<<"a + e = o\nb - f = o\nc * g = o\nd / h = o"<<endl;
	cout<<"All the best for the quiz and the matrix is given as follows"<<endl;
	cout<<"_____________"<<endl;
	for(int i = 0 ; i < 3 ; i++){
	    cout<<"| ";
		for(int j = 0 ; j < 3 ; j++){
		    cout<<matrix[i][j]<<" | ";
	    }
	    cout<<"\n"<<"_____________"<<endl;
	}
}
void Input(){
	int a;
		cout<<"Value of a : ";
	    cin>>a;
	    matrix[0][0] = a;
		cout<<"Value of b : ";
	    cin>>a;
	    matrix[0][1] = a;
		cout<<"Value of c : ";
	    cin>>a;
	    matrix[0][2] = a;
		cout<<"Value of d : ";
	    cin>>a;
	    matrix[1][2] = a;
		cout<<"Value of e : ";
	    cin>>a;
	    matrix[2][2] = a;
		cout<<"Value of f : ";
	    cin>>a;
	    matrix[2][1] = a;
		cout<<"Value of g : ";
	    cin>>a;
	    matrix[2][0] = a;
		cout<<"Value of h : ";
	    cin>>a;
	    matrix[1][0] = a;
		cout<<"Value of o : ";
	    cin>>a;
	    matrix[1][1] = a;
}
char Win(){
	if((matrix[0][0]+matrix[2][2] == matrix[0][1]-matrix[2][1])&&(matrix[0][0]+matrix[2][2] == matrix[0][2]*matrix[2][0])&&(matrix[0][0]+matrix[2][2] == matrix[1][2]/matrix[1][0])) return 1;
	else return -1;
}
void First(){
	cout<<"First Quiz"<<endl;
	cout<<"a = e*f*N,Where N is an Even prime no."<<endl;
	cout<<"b = g*h*N,Where N is 2 Prime number"<<endl;
	cout<<"c is first 2-digit prime number"<<endl;
	cout<<"d is an even number"<<endl;
	cout<<"e,f,g,h are an even prime number"<<endl;
	cout<<"Fill your answer"<<endl;
	Input();
	flag = Win();
}
void Second(){
	cout<<"Second Quiz"<<endl;
	cout<<"a = f + N, f = c + N, c = h + N, h = N,Where N is an Even prime no."<<endl;
	cout<<"b = h*h*h*h"<<endl;
	cout<<"Fill your answer"<<endl;
	Input();
	flag = Win();
}
void Third(){
	cout<<"Third Quiz"<<endl;
	cout<<"a = c, b = d, e = g"<<endl;
	cout<<"d = ((1st odd prime no.)*(N power N, Where N is first even prime no.))"<<endl;
	cout<<"o is an integer"<<endl;
	cout<<"Fill your answer"<<endl;
	Input();
	flag = Win();
}
void Fourth(){
	cout<<"Fourth Quiz"<<endl;
	cout<<"a is second perfect number+N,Where N is even prime number"<<endl;
	cout<<"b = (Second 2-digit prime number)*h"<<endl;
	cout<<"c = g = e & f = h*h"<<endl;
	cout<<"d = 150 - e"<<endl;
	cout<<"Fill your answer"<<endl;
	Input();
	flag = Win();
}
int main(){
    count = 0;
	Draw();
	while(1){
		switch(count){
			case 0:
				First();
				break;
			case 1:
				Second();
				break;
			case 2:
				Third();
				break;
			case 3:
				Fourth();
				break;
			case 4:
				cout<<"Aaah separation time but meet u again with updates\n";
				break;
			default:
				cout<<"System error\n";
				break;
		}
		if(flag == -1){
			cout<<"You haven't completed the game and your score is \n"<<count<<endl;
			break;
		}
		else{
			count++;
			system("cls");
			cout<<"Matrix Quiz"<<endl;
	        cout<<"Welcome to matrix Quiz,This is a game based on numbers,before moving ahead let me explain you the game"<<endl;
	        cout<<"You have given a matrix with variables - a,b,c,d,e,f,g,h,o"<<endl;
	        cout<<"You have to fill all the values inside the matrix such that the following conditions satisfies"<<endl;
	        cout<<"a + e = o\nb - f = o\nc * g = o\nd / h = o"<<endl;
	        cout<<"All the best for the quiz and the matrix is given as follows"<<endl;
	        cout<<"_____________"<<endl;
	        for(int i = 0 ; i < 3 ; i++){
	            cout<<"| ";
		        for(int j = 0 ; j < 3 ; j++){
		            cout<<matrix2[i][j]<<" | ";
	            }
	            cout<<"\n"<<"_____________"<<endl;
	        }
	        
		} 
	}
	system("pause");
	return 0;
}
