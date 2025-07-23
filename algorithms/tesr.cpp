#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// --------------------- Product Class ---------------------
class Product {
private:
    string name;
    float price;
    int stock;

public:
    Product(string n, float p, int s) : name(n), price(p), stock(s) {}

    string getName() const { return name; }
    float getPrice() const { return price; }
    int getStock() const { return stock; }

    void reduceStock(int quantity) {
        stock -= quantity;
    }

    void displayInfo(int index) const {
        cout << index << ". " << name 
             << " - Rs." << fixed << setprecision(2) << price 
             << " - Stock: " << stock << endl;
    }
};

// --------------------- Billing Class ---------------------
class Billing {
public:
    static void generateBill(Product& product, int quantity, float discount) {
        if (quantity > product.getStock()) {
            cout << " Not enough stock available.\n";
            return;
        }

        float price = product.getPrice();
        float finalPrice = price - (price * discount / 100);
        float total = finalPrice * quantity;

        product.reduceStock(quantity);

        cout << "\n--- 🧾 Bill ---\n";
        cout << "Product: " << product.getName() << endl;
        cout << "Price after discount: Rs." << fixed << setprecision(2) << finalPrice << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total: Rs." << fixed << setprecision(2) << total << endl << endl;
    }
};

//  POS System
int main() {
    // List of products
    vector<Product> products = {
        Product("Milk", 50.0f, 10),
        Product("Bread", 30.0f, 20),
        Product("Eggs", 10.0f, 100)
    };

    int choice, quantity;
    float discount;

    while (true) {
        // Display product list
        cout << "\n--- 🛒 Product List ---\n";
        for (size_t i = 0; i < products.size(); ++i) {
            products[i].displayInfo(i + 1);
        }
        cout << "0. Exit\n";

        cout << "Enter product number to buy: ";
        cin >> choice;

        if (choice == 0) {
            char confirm;
            cout << "Are you sure you want to exit? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                cout << "🧡 Thank you for shopping!\n";
                break;
            } else {
                continue;
            }
        }

        if (choice < 1 || choice > products.size()) {
            cout << "❌ Invalid choice. Try again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        cout << "Enter discount percentage: ";
        cin >> discount;

        Billing::generateBill(products[choice - 1], quantity, discount);
    }

    return 0;
}
