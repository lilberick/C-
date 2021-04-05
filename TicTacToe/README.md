# Tic Tac Toe

![](.img/tictactoe.gif)

## Codigo

```c++
#include<iostream>
#include<vector>
using namespace std;
vector<vector<char> > Rotar(vector<vector<char> >& v){
	vector<vector<char> > g90;
	g90=v;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			g90[i][j]=v[3-j-1][i];
		}
	}
	return g90;
}
bool sigue(vector<vector<char> >& v,char c){
	bool michi=true;
	for(int i=0;i<3 && michi==true;i++){
		int r=0;
		for(int j=0;j<3;j++){
			if(v[i][j]==c){r++;}
		}
		if(r==3){michi=false;}
	}
	v=Rotar(v);
	for(int i=0;i<3 && michi==true;i++){
		int r=0;
		for(int j=0;j<3;j++){
			if(v[i][j]==c){r++;}
		}
		if(r==3){michi=false;}
	}
	v=Rotar(v);
	if(v[0][0]==c && v[1][1]==c && v[2][2]==c){michi=false;}
	if(v[0][2]==c && v[1][1]==c && v[2][0]==c){michi=false;}
	if(michi==false){cout<<"EL GANADOR ES: "<<c<<endl;}
	return michi;
}

vector<vector<char> > Jugar(vector<vector<char> >& v,int f,int c,char letra){
	if(v[f-1][c-1]=='.'){v[f-1][c-1]=letra;}
	else{cout<<"Esto esta ocupado papu\n";}
	return v;
}
int main(){
	vector<vector<char> > v(3,vector<char>(3,'.')),va;
	char letra='X';
	int f,c;
	cout<<"Mi super juego de Michi"<<endl;
	while(sigue(v,'X') && sigue(v,'O')){
		cout<<"Ingrese la fila(1 al 3): "; cin>>f;
		cout<<"Ingrese la columna(1 al 3): "; cin>>c;
		va=v;
		v=Jugar(v,f,c,letra);
		if(v!=va){
			if(letra=='X'){letra='O';}
			else if(letra=='O'){letra='X';}
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){cout<<v[i][j];}cout<<endl;
		}
	}
	return 0;
}
```

## Compilamos
```bash
$ g++ TicTacToe.cpp
```

## Jugar
1. Ejecutamos
	```bash
	$ ./a.out
	```
2. turnarse para jugar

	```bash
	Mi super juego de Michi
	Ingrese la fila(1 al 3): 2
	Ingrese la columna(1 al 3): 2
	...
	.X.
	...
	Ingrese la fila(1 al 3): 1
	Ingrese la columna(1 al 3): 2
	.O.
	.X.
	...
	Ingrese la fila(1 al 3): 1
	Ingrese la columna(1 al 3): 3
	.OX
	.X.
	...
	Ingrese la fila(1 al 3): 3
	Ingrese la columna(1 al 3): 1
	.OX
	.X.
	O..
	Ingrese la fila(1 al 3): 3
	Ingrese la columna(1 al 3): 3
	.OX
	.X.
	O.X
	Ingrese la fila(1 al 3): 1
	Ingrese la columna(1 al 3): 1
	OOX
	.X.
	O.X
	Ingrese la fila(1 al 3): 2
	Ingrese la columna(1 al 3): 3
	OOX
	.XX
	O.X
	EL GANADOR ES: X
	```
