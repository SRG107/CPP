#include <iostream>
#include <string>
//test
using namespace std;

const int MAX_PRODUCTS = 100;

struct Product {
    string name;
    int quantity;
    double price;
};

int main() {
    Product inventory[MAX_PRODUCTS];
    int numProducts = 0;

    while (true) {
    	cout << endl;
        cout << "******** Inventory Tracker Menu ********" << endl;
        cout << endl;
        cout << "1. Add Product" << endl;
        cout << "2. View Inventory" << endl;
        cout << "3. Search for a Product" << endl;
        cout << "4. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        
        int choice;
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:{
            	if (numProducts < MAX_PRODUCTS) {
                    cout << "Enter product name: ";
                    cin >> inventory[numProducts].name;
                    cout << "Enter quantity: ";
                    cin >> inventory[numProducts].quantity;
                    cout << "Enter price: ";
                    cin >> inventory[numProducts].price;
                    numProducts++;
                    cout << endl;
                } else {
                    cout << "Inventory is full!" << endl;
                    cout << endl;
                }
				break;
			}
                
            case 2:{
            	cout << "Inventory List:" << endl;
            	if (numProducts == 0)
            	{
            		cout << "Inventory is Empty!!!" << endl;
				}
				else{
					for (int i = 0; i < numProducts; i++) {
                    cout << endl;
					cout << "Product Name: " << inventory[i].name << endl;
                    cout << "Quantity: " << inventory[i].quantity << endl;
                    cout << "Price: Rs." << inventory[i].price << endl;
                    cout << "-------------------------" << endl;
                }
				}
				break;
			}
				
            case 3:{
            	cout << "Enter the name of the product to search: ";
                string searchName;
                cin >> searchName;
                bool found = false;
                for (int i = 0; i < numProducts; i++) {
                    if (inventory[i].name == searchName) {
                        cout << "Product: " << inventory[i].name << endl;
                        cout << "Quantity: " << inventory[i].quantity << endl;
                        cout << "Price: $" << inventory[i].price << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Product not found." << endl;
                }
				break;
			}
                
            case 4:{
            	cout << "Exiting program...." << endl;
                return 0;
				break;
			}
                   
            default:
                cout << "Invalid choice." << endl;
        }
    }
    return 0;
}
