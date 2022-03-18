#include<iostream>
#include <string>
using namespace std;
const int maxitem = 5;
string searcheditem;
int mobile_category;
int laptop_category;
int television_category;
int x;
//Definetion of members and items
struct date
{
	int day, month, year;
};

struct items
{
	int itemnumber;
	char category;
	long long startBidPrice;
	date startSellingDate;
	date endSellingDate;
	bool status;
};
struct Members
{
	int id;
	string email;
	string name;
	int password;
	string deliveryaddress;
	items list_of_items[maxitem];
	int mempoints;
}memb[3];


void login();
void search_buying();
void report();
void feedback();
int main()
{

	//intilization
	//members
	memb[0].id = 100;
	memb[0].deliveryaddress = "ain shams 1st street";
	memb[0].email = "A15@gmail.com";
	memb[0].name = "A";
	memb[0].password = 123;
	memb[0].list_of_items[0].category = 'm';// m for mobile
	memb[0].list_of_items[0].itemnumber = 1000;
	memb[0].list_of_items[0].startBidPrice = 3000;
	memb[0].list_of_items[0].startSellingDate.day = 4;
	memb[0].list_of_items[0].startSellingDate.month = 6;
	memb[0].list_of_items[0].startSellingDate.year = 2020;
	memb[0].list_of_items[0].endSellingDate.day = 4;
	memb[0].list_of_items[0].endSellingDate.month = 7;
	memb[0].list_of_items[0].endSellingDate.year = 2020;
	memb[0].list_of_items[0].status = true;
	memb[0].list_of_items[1].category = 'm';// m for mobile
	memb[0].list_of_items[1].itemnumber = 1001;
	memb[0].list_of_items[1].startBidPrice = 40000;
	memb[0].list_of_items[1].startSellingDate.day = 5;
	memb[0].list_of_items[1].startSellingDate.month = 6;
	memb[0].list_of_items[1].startSellingDate.year = 2020;
	memb[0].list_of_items[1].endSellingDate.day = 5;
	memb[0].list_of_items[1].endSellingDate.month = 7;
	memb[0].list_of_items[1].endSellingDate.year = 2020;
	memb[0].list_of_items[1].status = true;
	memb[0].list_of_items[2].category = 'm';// m for mobile
	memb[0].list_of_items[2].itemnumber = 1002;
	memb[0].list_of_items[2].startBidPrice = 50000;
	memb[0].list_of_items[2].startSellingDate.day = 6;
	memb[0].list_of_items[2].startSellingDate.month = 6;
	memb[0].list_of_items[2].startSellingDate.year = 2020;
	memb[0].list_of_items[2].endSellingDate.day = 6;
	memb[0].list_of_items[2].endSellingDate.month = 7;
	memb[0].list_of_items[2].endSellingDate.year = 2020;
	memb[0].list_of_items[2].status = true;
	//2nd
	memb[1].id = 200;
	memb[1].deliveryaddress = "Ain Shams 20th street ";
	memb[1].email = "H20@gmail.com";
	memb[1].name = "H";
	memb[1].password = 456;
	memb[1].list_of_items[0].category = 'l'; // l for laptop
	memb[1].list_of_items[0].itemnumber = 2000;
	memb[1].list_of_items[0].startBidPrice = 10000;
	memb[1].list_of_items[0].startSellingDate.day = 4;
	memb[1].list_of_items[0].startSellingDate.month = 6;
	memb[1].list_of_items[0].startSellingDate.year = 2020;
	memb[1].list_of_items[0].endSellingDate.day = 4;
	memb[1].list_of_items[0].endSellingDate.month = 7;
	memb[1].list_of_items[0].endSellingDate.year = 2020;
	memb[1].list_of_items[0].status = true;
	memb[1].list_of_items[1].category = 'l'; // l for laptop
	memb[1].list_of_items[1].itemnumber = 2001;
	memb[1].list_of_items[1].startBidPrice = 15000;
	memb[1].list_of_items[1].startSellingDate.day = 5;
	memb[1].list_of_items[1].startSellingDate.month = 6;
	memb[1].list_of_items[1].startSellingDate.year = 2020;
	memb[1].list_of_items[1].endSellingDate.day = 5;
	memb[1].list_of_items[1].endSellingDate.month = 7;
	memb[1].list_of_items[1].endSellingDate.year = 2020;
	memb[1].list_of_items[1].status = true;
	memb[1].list_of_items[2].category = 'l'; // l for laptop
	memb[1].list_of_items[2].itemnumber = 2002;
	memb[1].list_of_items[2].startBidPrice = 20000;
	memb[1].list_of_items[2].startSellingDate.day = 6;
	memb[1].list_of_items[2].startSellingDate.month = 6;
	memb[1].list_of_items[2].startSellingDate.year = 2020;
	memb[1].list_of_items[2].endSellingDate.day = 6;
	memb[1].list_of_items[2].endSellingDate.month = 7;
	memb[1].list_of_items[2].endSellingDate.year = 2020;
	memb[1].list_of_items[2].status = true;
	memb[1].list_of_items[3].category = 'l'; // l for laptop
	memb[1].list_of_items[3].itemnumber = 2003;
	memb[1].list_of_items[3].startBidPrice = 25000;
	memb[1].list_of_items[3].startSellingDate.day = 7;
	memb[1].list_of_items[3].startSellingDate.month = 6;
	memb[1].list_of_items[3].startSellingDate.year = 2020;
	memb[1].list_of_items[3].endSellingDate.day = 7;
	memb[1].list_of_items[3].endSellingDate.month = 7;
	memb[1].list_of_items[3].endSellingDate.year = 2020;
	memb[1].list_of_items[3].status = true;
	//3rd
	memb[2].id = 300;
	memb[2].deliveryaddress = "abbasya 5th street";
	memb[2].email = "m.30@gmail.com";
	memb[2].name = "m";
	memb[2].password = 789;
	memb[2].list_of_items[0].category = 't';// t for televisions
	memb[2].list_of_items[0].itemnumber = 3000;
	memb[2].list_of_items[0].startBidPrice = 5000;
	memb[2].list_of_items[0].startSellingDate.day = 4;
	memb[2].list_of_items[0].startSellingDate.month = 6;
	memb[2].list_of_items[0].startSellingDate.year = 2020;
	memb[2].list_of_items[0].endSellingDate.day = 4;
	memb[2].list_of_items[0].endSellingDate.month = 7;
	memb[2].list_of_items[0].endSellingDate.year = 2020;
	memb[2].list_of_items[0].status = true;
	memb[2].list_of_items[1].category = 't';// t for television
	memb[2].list_of_items[1].itemnumber = 3001;
	memb[2].list_of_items[1].startBidPrice = 8000;
	memb[2].list_of_items[1].startSellingDate.day = 5;
	memb[2].list_of_items[1].startSellingDate.month = 6;
	memb[2].list_of_items[1].startSellingDate.year = 2020;
	memb[2].list_of_items[1].endSellingDate.day = 5;
	memb[2].list_of_items[1].endSellingDate.month = 7;
	memb[2].list_of_items[1].endSellingDate.year = 2020;
	memb[2].list_of_items[1].status = true;
	memb[2].list_of_items[2].category = 't';// t for television
	memb[2].list_of_items[2].itemnumber = 3002;
	memb[2].list_of_items[2].startBidPrice = 10000;
	memb[2].list_of_items[2].startSellingDate.day = 6;
	memb[2].list_of_items[2].startSellingDate.month = 6;
	memb[2].list_of_items[2].startSellingDate.year = 2020;
	memb[2].list_of_items[2].endSellingDate.day = 6;
	memb[2].list_of_items[2].endSellingDate.month = 7;
	memb[2].list_of_items[2].endSellingDate.year = 2020;
	memb[2].list_of_items[2].status = true;
	char choice1;
	while (true)
	{
		cout << "welcome to the Online Auction system\n";
		cout << "**************************************\n";
		cout << "please log in to enter the system\n";
		login();
		cout << "do you want to log in again  or you want to leave ? (Y|N),(y|n)\n";
		cin >> choice1;

		if (choice1 == 'y' || choice1 == 'Y')
			continue;
		else
			break;
	}
	return 0;
}

void login()
{

	bool right = false;
	while (true) {
		int id_m;
		int password_m;
		int rating;
		cout << "Please Enter your id\n";
		cin >> id_m;
		cout << "please enter your Password\n";
		cin >> password_m;

		for (x = 0; x < 3; x++)
		{
			if (memb[x].id == id_m && memb[x].password == password_m) {

				right = true;
				break;
			}

		}
		if (right == false)
			cout << "login failed\n";
		if (right == false)
			continue;
		else if (right == true) break;

	}
	cout << "login sucessful" << endl;
	cout << "Welcome to the online auction system\n";
	while (true)
	{


		cout << "choose process you want to do\n";
		cout << "==============================\n";
		cout << "1) to search for item and buying it\n";
		cout << "2) for the report of the top category in respect of the month\n";
		cout << "3) for feedbacks\n";
		char choice2;
		char choice3;
		cin >> choice2;
		switch (choice2)
		{
		case'1':
			search_buying();
			break;
		case'2':
			report();
			break;
		case'3':
			feedback();
		}

		cout << "Do you want to continoue or want to log out (Y|N),(y|n) ?\n";
		cin >> choice3;
		if (choice3 == 'Y' || choice3 == 'y')
			continue;
		else if (choice3 == 'N' || choice3 == 'n')
			cout << "Thanks for your participate\n";
		break;
	}
}



void search_buying()
{

	char choice4;
	string status;
	cout << "if you want to search by category press 1, if you want to search by the category and price press 2\n";

	cin >> choice4;
	if (choice4 == '1')
	{
		char choice5;
		bool found1 = false;
		cout << "enter the item's category you want to buy\n";
		cout << "'m' for mobiles ,, 'l' for laptops ,, 't' for televisions\n";
		cin >> choice5;
		cout << "thats the items in this category\n";
		for (int i = 0; i < maxitem; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (memb[i].list_of_items[j].category == choice5)
				{
					found1 = true;

				}
				if (found1)
				{

					searcheditem = memb[i].list_of_items[i].category;
					cout << "item number  " << memb[i].list_of_items[j].itemnumber << endl;
					cout << "its price  " << memb[i].list_of_items[j].startBidPrice << endl;


					if (memb[i].list_of_items[j].status)
						status = "  availavble ";
					else if (!memb[i].list_of_items[j].status)

						status = " not available ";

					cout << "Status  " << status << endl;
					cout << "                                     " << endl;
					cout << "===============================" << endl;
					found1 = false;
				}

			}
		}
		found1 = true;

		int numI;
		if (found1)//buying
		{
			cout << "please enter the number of item you want to buy\n";
			cin >> numI;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (memb[i].list_of_items[j].itemnumber == numI)
					{
						if (memb[i].list_of_items[j].status == true)
						{
							char choi3;
							cout << "do you want to send buying request (Y|N) ,, (y|n)\n";
							cin >> choi3;
							if (choi3 == 'y' || choi3 == 'y')
							{
								long long B_price;
								while (true)
								{
									cout << "please enter your price\n";
									cin >> B_price;
									if (memb[i].list_of_items[j].startBidPrice <= B_price)
									{
										cout << "congratulations you bought the item:" << memb[i].list_of_items[j].itemnumber << endl;
										memb[i].list_of_items[j].status = false;
									}
									if (searcheditem == "c")
										mobile_category++;
									else if (searcheditem == "h")
										laptop_category++;
									else if (searcheditem == "j")
										television_category++;
									if (memb[i].list_of_items[j].status == false)
										break;
									else
										cout << "your price isn't enough to pay for this item\n";
								}
							}
							else break;
						}
					}
				}
			}
		}
		else
			cout << "wrong procedure\n";
	}
	if (choice4 == '2')
	{
		long long maxprice;
		char cat;
		bool found2 = false;
		cout << "enter the category of the item you want to buy\n";
		cout << "'m' for mobile ,, 'l' for laptop ,, 't' for television\n";
		cin >> cat;
		cout << "enter maximum price of items you can afford\n";
		cin >> maxprice;
		cout << "here are the items in this category\n";
		for (int i = 0; i < maxitem; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (memb[i].list_of_items[j].category == cat && memb[i].list_of_items[j].startBidPrice <= maxprice)
				{
					found2 = true;

				}
				if (found2)
				{

					searcheditem = memb[i].list_of_items[i].category;
					cout << "item number  " << memb[i].list_of_items[j].itemnumber << endl;
					cout << "its price  " << memb[i].list_of_items[j].startBidPrice << endl;


					if (memb[i].list_of_items[i].status)
					{
						status = "  availavble ";
					}
					else if (!memb[i].list_of_items[i].status)

						status = " not available ";

					cout << "status:" << status << endl;
					cout << "                      \n";
					cout << "=======================\n";
					found2 = false;
				}

			}
		}
		found2 = true;

		int numI;
		if (found2)//buying
		{
			cout << "please enter the number of item you want to buy\n";
			cin >> numI;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					if (memb[i].list_of_items[j].itemnumber == numI)
					{
						if (memb[i].list_of_items[j].status == true)
						{
							char choi3;
							cout << "do you want to send buying request ? (Y|N),,(y|n)\n";
							cin >> choi3;
							if (choi3 == 'y' || choi3 == 'y')
							{
								long long B_price;
								while (true)
								{
									cout << "please enter your price\n";
									cin >> B_price;
									if (memb[i].list_of_items[j].startBidPrice <= B_price)
									{
										cout << "congratulations you bought item number:" << memb[i].list_of_items[j].itemnumber << endl;
										memb[i].list_of_items[j].status = false;
									}
									if (searcheditem == "m")
										mobile_category++;
									else if (searcheditem == "l")
										laptop_category++;
									else if (searcheditem == "t")
										television_category++;
									if (memb[i].list_of_items[j].status == false)
										break;
									else
										cout << "your price isn't enough to buy this item\n";
								}
							}
							else break;
						}
					}
				}
			}
		}
		else
			cout << "wrong procedure\n";
	}

}
void report()
{
	cout << "the highest this month is:" << endl;
	if (mobile_category > laptop_category && mobile_category > television_category)
	{
		cout << "the mobile category by selling a number of '" << mobile_category << "' items" << endl;
	}
	else if (laptop_category > mobile_category && laptop_category > television_category)
	{
		cout << "the laptop category by selling a number of '" << laptop_category << "' items" << endl;
	}
	else if (television_category > mobile_category && television_category > laptop_category)
	{
		cout << "the television category by selling a number of '" << television_category << "' items" << endl;
	}
}
void feedback()
{

	int id_F;
	int rating;
	cout << "here are the other id's members,, please choose which one you want to make a feedback about\n";
	for (int i = 0; i < 3; i++)
	{
		if (memb[i].id != memb[x].id)
			cout << "member number: " << i + 1 << " id" << memb[i].id << endl;
		else
			continue;
	}
	cout << "enter id of the member that you want to make a feedback about him\n";
	cin >> id_F;
	for (int i = 0; i < 3; i++)
	{
		if (id_F == memb[i].id)
		{
			cout << "please enter your rate from 1 to 5\n";
			cin >> rating;
			while (rating > 5 || rating < 1)
			{
				cout << "error!!!......enter the correct rating from 1 to 5\n";
				cin >> rating;
			}
			if (rating >= 3)memb[i].mempoints++;
			break;
		}

	}


}

