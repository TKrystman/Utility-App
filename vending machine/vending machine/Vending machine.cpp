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
	int choiceFood;
	int choiceDrink;
	int select;
	int moneyInput;
	char pound = 156;
	cout << "   -------TOBY'S VENDING MACHINE-------   " << endl;
	cout << "Input Money (In pennies): " << endl;
	cin >> moneyInput;
		cout << "Enter 1 for Food menu or 2 for Drinks menu: ";
	cin >> select;
	
	if (select == 1) {
		cout << "   -------SELECT FOOD FROM OPTIONS BELOW-------   " << endl << " [1][Snickers]{70p} " << endl << " [2][Mars Bar]{70p} " << endl << " [3][Twix]{70p} " << endl << " [4][Cheese and Onion Crisps]{"<< pound << "1} " << endl;
		cout	<< " [5][Salt and Vinegar Crisps]{" << pound << "1} " << endl << " [6][Prawn Cocktail Crisps]{" << pound << "1} " <<  endl << " [7][Starbursts]{80p} " <<  endl << " [8][Winegums]{80p} " << endl << " [9][KitKat]{" << pound << "1.10} " << endl << " [10][Cheese Sandwich]{" << pound << "1.30} " << endl;


		cin >> choiceFood;
		switch (choiceFood) {
		case 1:
			if (moneyInput >= 70) {
				cout << "Despensing Snickers..." << endl;
				
				cout << "Your Remaining Funds Are: " << moneyInput - 70 << endl;
			}
			else {
			
				cout << "INSIFICIANT FUNDS" << endl;

			}
			break;
		case 2:
			if (moneyInput >= 70) {

			cout << "Despensing Mars Bar..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 70 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 3:
			if (moneyInput >= 70) {

				cout << "Despensing Twix..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 70 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 4:
			if (moneyInput >= 100) {

				cout << "Despensing Cheese and Onion Crisps..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 100 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 5:
			if (moneyInput >= 100) {

				cout << "Despensing Salt and Vinegar Crisps..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 100 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 6:
			if (moneyInput >= 100) {

				cout << "Despensing Prawn Cocktail Crisps..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 100 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 7:
			if (moneyInput >= 80) {

				cout << "Despensing Starbursts..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 80 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 8:
			if (moneyInput >= 80) {

				cout << "Despensing Winegums..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 80 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 9:
			if (moneyInput >= 110) {

				cout << "Despensing KitKat..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 110 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		case 10:
			if (moneyInput >= 130) {

				cout << "Despensing Cheese Sandwich..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 130 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}
			

			break;
		default:
			cout << "Invalid Choice" << endl;
		}
	}
	else if (select == 2) {
		cout << "   -------SELECT DRINKS FROM OPTIONS BELOW-------   " << endl << " [1][CocaCola]{80p} " << endl << " [2][CocaCola Diet]{80p} " << endl << " [3][Fanta]{80p} " << endl << " [4][Water]{99p} " << endl;
		cout << " [5][Sparkling Water]{" << pound << "1} " << endl << " [6][7up]{80p} " << endl << " [7][Tango Orange]{" << pound << "1.30} " << endl << " [8][Tango Lemon]{" << pound << "1.30} " << endl << " [9][Tea]{" << pound << "1.50} " << endl << " [10][Coffee]{" << pound << "1.50} " << endl;
		cin >> choiceFood;
		switch (choiceFood) {
		case 1:
			if (moneyInput >= 80) {
				cout << "Despensing CocaCola..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 80 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;

			}



			break;
		case 2:
			if (moneyInput >= 80) {
				cout << "Despensing CocaCola Diet..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 80 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 3:
			if (moneyInput >= 80) {
				cout << "Despensing Fanta..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 80 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 4:
			if (moneyInput >= 99) {
				cout << "Despensing Water..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 99 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 5:
			if (moneyInput >= 100) {
			cout << "Despensing Sparkling Water..." << endl;

			cout << "Your Remaining Funds Are: " << moneyInput - 100 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 6:
			if (moneyInput >= 80) {
				cout << "Despensing 7up..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 80 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 7:
			if (moneyInput >= 130) {
				cout << "Despensing Tango Orange..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 130 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 8:
			if (moneyInput >= 130) {
				cout << "Despensing Tango Lemon..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 130 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 9:
			if (moneyInput >= 150) {
				cout << "Despensing Tea..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 150 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		case 10:
			if (moneyInput >= 150) {
				cout << "Despensing Coffee..." << endl;

				cout << "Your Remaining Funds Are: " << moneyInput - 150 << endl;
			}
			else {

				cout << "INSIFICIANT FUNDS" << endl;
			}
			break;
		default:
			cout << "Invalid Choice" << endl;
		}
	}
	else {
	
		cout << endl << "  ...INVALID RESPONSE...CLOSING MACHINE... " << endl;
		return(0);

	}





	return 0;
}