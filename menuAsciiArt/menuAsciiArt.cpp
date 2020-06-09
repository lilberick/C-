//Reto7: Calcular perímetros y áreas
#include<iostream>
using namespace std;
void imagen(){
	int n;
	cout<<"\nTenemos estas imágenes en nuestro repertorio\n";
	cout<<"[1] Vaca Lechera\n";
	cout<<"[2] Leche\n";
	cout<<"[3] Beso\n";
	cout<<"[4] Salir\n";
	cout<<"Escribe el número de la opción que quieres ver: ";cin>>n;
	switch(n){
		case 1:	
			cout<<" __________________"<<endl;
			cout<<"< Hola Mascotas>"<<endl;
			cout<<" ------------------"<<endl;
        		cout<<"        \\  ^__^"<<endl;
         		cout<<"         \\ (oo)\\_______"<<endl;
            		cout<<"           (__)\\        )\\/\\"<<endl;
                	cout<<"                ||----w |"<<endl;
                	cout<<"                ||     ||"<<endl;
			imagen();
			break;
		case 2:	
			cout<<" _____________________"<<endl;
			cout<<"< Quieres mi lechita? >"<<endl;
			cout<<" ---------------------"<<endl;
			cout<<" \\     ____________"<<endl;
			cout<<"  \\    |__________|"<<endl;
			cout<<"      /           /\\"<<endl;
			cout<<"     /           /  \\"<<endl;
			cout<<"    /___________/___/|"<<endl;
			cout<<"    |          |     |"<<endl;
			cout<<"    |  ==\\ /== |     |"<<endl;
			cout<<"    |   O   O  | \\ \\ |"<<endl;
			cout<<"    |     <    |  \\ \\|"<<endl;
			cout<<"   /|          |   \\ \\"<<endl;
			cout<<"  / |  \\_____/ |   / /"<<endl;
			cout<<" / /|          |  / /|"<<endl;
			cout<<"/||\\|          | /||\\/"<<endl;
			cout<<"    -------------|"<<endl;
			cout<<"        | |    | |"<<endl;
			cout<<"       <__/    \\__>"<<endl;
			imagen();
			break;
		case 3:	
			cout<<" ___________________________________"<<endl;
			cout<<"/ DAME UN BESO QUE ME DURE HASTA EL \\"<<endl;
			cout<<"\\ LUNES, NENA                       /"<<endl;
			cout<<" -----------------------------------"<<endl;
			cout<<"     \\"<<endl;
			cout<<"      \\"<<endl;
			cout<<"             ,;;;;;;;,"<<endl;
			cout<<"            ;;;;;;;;;;;,"<<endl;
			cout<<"           ;;;;;'_____;'"<<endl;
			cout<<"           ;;;(/))))|((\\"<<endl;
			cout<<"           _;;((((((|))))"<<endl;
			cout<<"          / |_\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
			cout<<"     .--~(  \\ ~))))))))))))"<<endl;
			cout<<"    /     \\  `\\-(((((((((((\\"<<endl;
			cout<<"    |    | `\\   ) |\\       /|)"<<endl;
			cout<<"     |    |  `. _/  \\_____/ |"<<endl;
			cout<<"      |    , `\\~            /"<<endl;
			cout<<"       |    \\  \\           /"<<endl;
			cout<<"      | `.   `\\|          /"<<endl;
			cout<<"      |   ~-   `\\        /"<<endl;
			cout<<"       \\____~._/~ -_,   (\\"<<endl;
			cout<<"        |-----|\\   \\    ';;"<<endl;
			cout<<"       |      | :;;;'     \\"<<endl;
			cout<<"      |  /    |            |"<<endl;
			cout<<"      |       |            |"<<endl;
			imagen();
			break;
		case 4:	
			cout<<" ______________________________________"<<endl;
			cout<<"/ NOS VOLVEREMOS A VER. HASTA LA VISTA \\"<<endl;
			cout<<"\\ BABY...                              /"<<endl;
			cout<<" --------------------------------------"<<endl;
			cout<<"    \\"<<endl;
			cout<<"     \\"<<endl;
			cout<<"                                   .::!!!!!!!:."<<endl;
			cout<<"  .!!!!!:.                        .:!!!!!!!!!!!!"<<endl;
			cout<<"  ~~~~!!!!!!.                 .:!!!!!!!!!UWWW$$$ "<<endl;
			cout<<"      :$$NWX!!:           .:!!!!!!XUWW$$$$$$$$$P "<<endl;
			cout<<"      $$$$$##WX!:      .<!!!!UW$$$$\"  $$$$$$$$# "<<endl;
			cout<<"      $$$$$  $$$UX   :!!UW$$$$$$$$$   4$$$$$* "<<endl;
			cout<<"      ^$$$B  $$$$\\     $$$$$$$$$$$$   d$$R\""<<endl; 
			cout<<"        \"*$bd$$$$      '*$$$$$$$$$$$o+#" <<endl;
			cout<<"             """"          \""""""" "<<endl;
			break;
	}
}
int main(){
	imagen();
	return 0;
}
