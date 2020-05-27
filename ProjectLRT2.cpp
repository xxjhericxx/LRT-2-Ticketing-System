#include <iostream>
using namespace std;

// Function Declaration
string StationNames(int a);
void LineDesign();
void StartingHeader();
void StationHeader(char a);
void StationsList();
void UpdateStationsList(int a);
void ShowDestination(char a);
void ChosenDestination(char a);
int FareMatrix(int a, int b);
int ConvertChar(char a);
char ConvertInt(int a);

// Main
int main(){
	
	// Variables
	char MainMenu,restart[1],UserInput[1];
	
	// Before the system starts
	do{
	StartingHeader();
	cout << "\nBefore we proceed. Please select your current station:\n\n\n\n";
	StationsList();
	cout << "\n\nEnter 0 if you want to exit the program: ";cin >> UserInput;
	if ((UserInput[0] == '0') && (UserInput[1] == 0)){
		cout << "\n\nEnding Program...";
		return 0;
	}
	system("cls");
	
	// If the user enter an Invalid Input
	while ((UserInput[0] < 'A' || UserInput[0] > 'K') && (UserInput[0] < 'a' || UserInput[0] > 'k') || (UserInput[1] != 0)){
	StartingHeader();
	cout << "\nBefore we proceed. Please select your current station:\n\n";
	cout << "Your last input was Invalid. Please enter only from A-K: \n\n";
	StationsList();
	UserInput[1]=0;
	cout << "\n\nEnter 0 if you want to exit the program: ";
	cin >> UserInput;
	if ((UserInput[0] == '0') && (UserInput[1] == 0)){
		cout << "\n\nEnding Program...";
		return 0;
	}
	system("cls");
	cin.clear();
	cin.ignore(1000, '\n');
	}
	
	// Switch
	do{
	switch (UserInput[0]){
		
		case 'A':
		case 'a':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'B':
		case 'b':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'C':
		case 'c':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'D':
		case 'd':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'E':
		case 'e':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'F':
		case 'f':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'G':
		case 'g':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'H':
		case 'h':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'I':
		case 'i':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'J':
		case 'j':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			}
			system("cls");
		break;
		
		case 'K':
		case 'k':
			StationHeader(UserInput[0]);
			cout << "\n		        Please choose your destination: \n\n\n";
			ShowDestination(UserInput[0]);
			ChosenDestination(UserInput[0]);
			cout << "\n\n\n\nDo you want another transaction? Press Y for Yes, N for No.\n";
			cout << "Press M to go back to the Main Menu: ";cin >> restart;
			while ((restart[1] != 0) || (restart[0] < 'M' || restart[0] > 'N' && restart[0] != 'Y')&& (restart[0] < 'm' || restart[0] > 'n' && restart[0] != 'y')){
				restart[1]=0;
				cin >> restart;
			}
			if (restart[0] == 'M' || restart[0] == 'm'){
				MainMenu = 'M';
			}
			if (restart[0] == 'N' || restart[0] == 'n'){
				cout << "\n\nEnding Program....";
				return 0;
			} 
			system("cls");
		break;

		default:
			cout << "\n\nInvalid Input!... Ending Program";
			return 0;
	}
	
}while (restart[0] == 'Y' || restart[0] == 'y');
}while (MainMenu == 'M' || MainMenu == 'm');
return 0;} // End of Main

// Function Definitions
string StationNames(int a){
	string stationNames[11] = {"Recto     ","Legarda   ","Pureza    ",
							   "V.Mapa    ","J.Ruiz    ","Gilmore   ",
							   "Betty-Go  ","Cubao     ","Anonas    ",
							   "Katipunan ","Santolan  "};
	return stationNames[a];
}

int FareMatrix(int a, int b){
	int
	fareMatrix[11][11]={{0,15,15,15,20,20,20,20,25,25,25}, // From Recto
				 	    {15,0,15,15,15,20,20,20,20,25,25}, // From Legarda
					    {15,15,0,15,15,15,20,20,20,20,25}, // From Pureza
					    {15,15,15,0,15,15,15,20,20,20,25}, // From V.Mapa
			 		    {20,15,15,15,0,15,15,15,20,20,20}, // From J,Ruiz
					    {20,20,15,15,15,0,15,15,15,20,20}, // From Gilmore
					    {20,20,20,15,15,15,0,15,15,15,20}, // From Betty-Go
					    {20,20,20,20,15,15,15,0,15,15,15}, // From Cubao
					    {25,20,20,20,20,15,15,15,0,15,15}, // From Anonas
					    {25,25,20,20,20,20,15,15,15,0,15}, // From Katipunan
					    {25,25,25,25,20,20,20,15,15,15,0}};// From Santolan
	return fareMatrix[a][b];
}

void LineDesign(){
	cout << "*******************************************************************************\n";
}

void StartingHeader(){
	LineDesign();
	cout << "                         Welcome to LRT 2 Ticketing System      \n";
	LineDesign();
}

void StationsList(){
	int i,x=0;
	char choicesIndex = 'A';
	for (i=0; i<11; i++){
		while (i == 4 || i == 9){
			cout << "[" << choicesIndex << "] " << StationNames(i);cout << "\t" << endl;
			choicesIndex++;
			i++;
		}
		cout << "[" << choicesIndex << "] " << StationNames(i);cout << "\t";
		choicesIndex++;
	}
}

void StationHeader(char a){
	int x=ConvertChar(a);
	LineDesign();
	cout << "                      Welcome     to     " << StationNames(x);cout << "Station\n";
	LineDesign();
}

void ShowDestination(char a){
	int x=0;
	x = ConvertChar(a);
	UpdateStationsList(x);
}


int ConvertChar(char a){
		int i,x=-1;
		char choicesIndex='A', smallCase='a';
			for (i=0; i<11; i++){
			if (a == choicesIndex || a == smallCase){
			i=11;
			}
				choicesIndex++;
				smallCase++;
				x++;
			}
	return x;
}

int ConvertInt(char a){
	int i, x=-1;
	char number = '1';
		if (a >= '1' && a <= '9'){
			for (i=0; i<10; i++){
				if (a == number){
					i=10;
				}
				number++;
				x++;
			}
			x++;
		}
	return x;
}

void UpdateStationsList(int a){
	int i=0;
	char choicesIndex = 'A';
	while (i<11){
		while (i == a){
			StationNames(i);
			i++;
			continue;
		}
		cout << "[" << choicesIndex << "] " << StationNames(i);cout << " (P" << FareMatrix(a,i);cout << ")" << endl;
		choicesIndex++;
		i++;
		
		while ((i == a) && (a == 10)){
			i=11;
			continue;
		}
	}
}

void ChosenDestination(char a){
	int i,j,x=0,y=0,totalPrice=0,quantity=0;
	char chosenStation[1], quantityCheck[1];
	
	cout << "\n\nPlease enter your destination: ";cin >> chosenStation;
	while ((chosenStation[1] != 0) || (chosenStation[0] < 'A' || chosenStation[0] > 'J') && (chosenStation[0] < 'a' || chosenStation[0] >'j')){
		system("cls");
		StationHeader(a);
		cout << "\n		        Please choose your destination: ";
		cout << "\n		Your last Input was Invalid please enter A-J only: \n\n\n";
		ShowDestination(a);
		chosenStation[1]=0;
		cout << "\n\nPlease enter your destination: ";cin >> chosenStation;
	}
	x=ConvertChar(a); y=ConvertChar(chosenStation[0]);
	system("cls");
	StationHeader(a);
	cout << "\n\nHow many tickets do you wish to purchase? \n(Maximum of 9 tickets): "; cin >> quantityCheck;
	quantity = ConvertInt(quantityCheck[0]);
	while ((quantityCheck[1] !=0) || (quantityCheck[0] < '1'  || quantityCheck[0] > '9')){
		system("cls");
		StationHeader(a);
		cout << "\n\nPlease input a proper quantity of tickets do you wish to purchase \n(Maximum of 9 tickets):  ";
		quantityCheck[1]=0;
		cin >> quantityCheck;
		quantity = ConvertInt(quantityCheck[0]);
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if (y >= x){
		y++;
	}
	totalPrice = FareMatrix(x,y) * quantity;
	cout << "\nThe total amount is P " << totalPrice;
}

