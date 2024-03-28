#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Books {
private:
	string bookName, bookId;
	float bookPrice;
	int bookQuantity;
	vector<Books> stock;

public:
	Books() {}; // Default constructor

	Books(string bookName, string bookId, float bookPrice, int bookQuantity) {
		this->bookName = bookName;
		this->bookId = bookId;
		this->bookPrice = bookPrice;
		this->bookQuantity = bookQuantity;
	}

	Books(string bookId) {
		this->bookId = bookId;
	}

	void addBook(string bookName, string bookId, float bookPrice, int bookQuantity) {
		this->bookName = bookName;
		this->bookId = bookId;
		this->bookPrice = bookPrice;
		this->bookQuantity = bookQuantity;
		stock.push_back(*this);
	}


};

class ShoppingCart {
private:
	Books* book;

public:
	void addToCart(Books book) {
		cout << "Enter Book Name: ";
		string name;
		cin >> name;
		Books book(name);
	}
};

int main() {
	string name, Id;
	float price;
	int quantity;
	char choice;
	cout << "******** BookStore ********\n";
	cout << "1. AddBook to BookStore";
	cout << "2. Remove book from BookStore";
	cout << "3. View Books in BookStore";
	cout << "4. Search books in BookStore";
	cout << "5. View Shopping Cart";
	cout << "6. Exit\n";

	switch (choice) 
	{
		case '1':
			cout << "******** AddBook ********\n";
			cout << "Enter Book Name: ";
			cin.ignore();
			getline(cin, name);
			cout << "Enter Book Id: ";
			cin >> Id;
			cout << "Enter price: ";
			cin >> price;
			cout << "Enter quantity: ";
			cin >> quantity;
			break;

		case '2':
			cout << "******** RemoveBook ********\n";
			cout << "Enter book ID: ";
			cin >> Id;
			break;
	}

	system("pause");
	return 0;
}