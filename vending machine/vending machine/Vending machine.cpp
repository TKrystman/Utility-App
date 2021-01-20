#include <iostream>
#include <string>
using namespace std;

int productFood(int x)
{
	int temp = 0;
	
	return(temp);
}

int money(int y)
{
	int temp = 0;
	
	return(temp);
}




int main() {
	string choiceFood[10] = {"Snickers","Mars Bar","Twix","Cheese and Onion Crisps","Salt and Vinegar Crisps","Prawn Cocktail Crisps","Starbursts","Winegums","KitKat","Cheese Sandwich"};
	int foodPrice[10] = {70,70,70,100,100,100,80,80,110,130};
	string foodSearch;
	string choiceDrink[10] = { "CocaCola","CocaCola Diet","Fanta","Water","Sparkling Water","7UP","Tango Orange","Tango Lemon","Tea","Coffee"};
	int drinkPrice[10] = {80,80,80,99,100,80,130,130,150,150};
	string drinkSearch;
	int select;
	int moneyInput;
	char pound = 156;
	int newMoney;
	cout << "   -------TOBY'S VENDING MACHINE-------   " << endl;
	cout << "Input Money (In pennies): " << endl;
	cin >> moneyInput;
	cout << "Enter 1 for Food menu or 2 for Drinks menu: ";
	cin >> select;
	
	if (select == 1) {
		cout << "   -------SELECT FOOD FROM OPTIONS BELOW (Type out as seen on screen.)-------   " << endl << " [1][Snickers]{70p} " << endl << " [2][Mars Bar]{70p} " << endl << " [3][Twix]{70p} " << endl << " [4][Cheese and Onion Crisps]{" << pound << "1} " << endl;
		cout << " [5][Salt and Vinegar Crisps]{" << pound << "1} " << endl << " [6][Prawn Cocktail Crisps]{" << pound << "1} " << endl << " [7][Starbursts]{80p} " << endl << " [8][Winegums]{80p} " << endl << " [9][KitKat]{" << pound << "1.10} " << endl << " [10][Cheese Sandwich]{" << pound << "1.30} " << endl;
		cin >> foodSearch;
		int termIndex = -1; 
		
		for (int i = 0; i < 10; i++) {
			if (choiceFood[i] == foodSearch) {
				termIndex = i;
				
			}
			
		}
		if (termIndex > -1) {
			
			newMoney = moneyInput - foodPrice[termIndex];
			
					cout << "Despensing: " << foodSearch << endl << "This costs: " << foodPrice[termIndex] << endl << "You have: " << newMoney << " remaining";
			
			}

		
		
	}
	else if (select == 2) {
		cout << "   -------SELECT DRINKS FROM OPTIONS BELOW (Type out as seen on screen.)-------   " << endl << " [1][CocaCola]{80p} " << endl << " [2][CocaCola Diet]{80p} " << endl << " [3][Fanta]{80p} " << endl << " [4][Water]{99p} " << endl;
		cout << " [5][Sparkling Water]{" << pound << "1} " << endl << " [6][7up]{80p} " << endl << " [7][Tango Orange]{" << pound << "1.30} " << endl << " [8][Tango Lemon]{" << pound << "1.30} " << endl << " [9][Tea]{" << pound << "1.50} " << endl << " [10][Coffee]{" << pound << "1.50} " << endl;
		cin >> drinkSearch;
		int termIndexw = -1;

		for (int i = 0; i < 10; i++) { 
			if (choiceDrink[i] == drinkSearch) {
				termIndexw = i;

			}

		}
		if (termIndexw > -1) {

			newMoney = moneyInput - drinkPrice[termIndexw];

			cout << "Despensing: " << drinkSearch << endl << "This costs: " << drinkPrice[termIndexw] << endl << "You have: " << newMoney << " remaining";

		}
	}
	else {

		cout << endl << "  ...INVALID RESPONSE...CLOSING MACHINE... " << endl;
		return(0);

	}
		
	




	return 0;
}