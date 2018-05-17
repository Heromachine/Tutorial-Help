//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
////PROTYPES================================================================================
//void declareVariables(
//	string & endProgram,
//	string & endOrder,
//	float & totalBurger,
//	float & totalFry,
//	float & totalSoda,
//	float & total,
//	float & tax,
//	float & subtotal,
//	int & option,
//	int & burgerCount,
//	int & fryCount,
//	int & sodaCount);
//
//void resetVariables(
//	float & totalBurger,
//	float & totalFry,
//	float & totalSoda,
//	float & total,
//	float & tax,
//	float & subtotal);
//
//void getBurger(float & totalBurger, int burgerCount);
//
//void getFry(float & totalFry, int fryCount);
//
//void getSoda(float & totalSoda, int sodaCount);
//
//void calcTotal(float totalBurger, float totalFry, float totalSoda, float & total, float subtotal, float tax);
//
//void printReceipt(float total);
////=============================================================================================
//
////MAIN=========================================================================================
//int main()
//{
//	string endProgram;
//	string endOrder;
//	float totalBurger;
//	float totalFry;
//	float totalSoda;
//	float total;
//	float tax;
//	float subtotal;
//	int option;
//	int burgerCount;
//	int fryCount;
//	int sodaCount;
//
//	declareVariables(endProgram, endOrder, totalBurger, totalFry, totalSoda, total, tax, subtotal, option, burgerCount, fryCount, sodaCount);
//
//	while (endProgram == "no")
//	{
//		resetVariables(totalBurger, totalFry, totalSoda, total, tax, subtotal);
//
//		while (endOrder == "no")
//		{
//			cout << "Enter 1 for Yum Yum Burger" << endl;
//			cout << "Enter 2 for Grease Yum Burger" << endl;
//			cout << "Enter 3 for Soda Yum" << endl;
//
//			if (option == 1)
//			{
//				getBurger(totalBurger, burgerCount);
//			}
//			else if (option == 2)
//			{
//				getFry(totalFry, fryCount);
//			}
//			else if (option == 3)
//			{
//				getSoda(totalSoda, sodaCount);
//			}
//
//			cout << "Do you want to end your order ? (Enter no to add more items : )" << endl;
//			cin >> endOrder;
//		}
//	}
//
//	return 0;
//}
////===================================================================================
//
////DEFINITIONS========================================================================
//void declareVariables(
//	string & endProgram,
//	string & endOrder,
//	float & totalBurger,
//	float & totalFry,
//	float & totalSoda,
//	float & total,
//	float & tax,
//	float & subtotal,
//	int & option,
//	int & burgerCount,
//	int & fryCount,
//	int & sodaCount)
//{
//	endProgram = "no";
//	endOrder = "no";
//	totalBurger = 0;
//	totalFry = 0;
//	totalSoda = 0;
//	total = 0;
//	tax = 0;
//	subtotal = 0;
//	option = 0;
//	burgerCount = 0;
//	fryCount = 0;
//	sodaCount = 0;
//}
//
//void resetVariables(
//	float & totalBurger,
//	float & totalFry,
//	float & totalSoda,
//	float & total,
//	float & tax,
//	float & subtotal)
//{
//	totalBurger = 0;
//	totalFry = 0;
//	totalSoda = 0;
//	total = 0;
//	tax = 0;
//	subtotal = 0;
//}
//
//void getBurger(float & totalBurger, int burgerCount)
//{
//	cout << "Enter the number of burgers you want ";
//	cin >> burgerCount;
//	totalBurger = totalBurger + burgerCount * .99;
//}
//
//void getFry(float & totalFry, int fryCount)
//{
//	cout << "Enter the number of fries yiou want ";
//	cin >> fryCount;
//	totalFry = totalFry + fryCount * .79;
//}
//
//void getSoda(float & totalSoda, int sodaCount)
//{
//	cout << "Enter the number of sodas you want";
//	cin >> sodaCount;
//	totalSoda = totalSoda + sodaCount * 1.09;
//}
//
//void calcTotal(float totalBurger, float totalFry, float totalSoda, float & total, float subtotal, float tax)
//{
//	subtotal = totalBurger + totalFry + totalSoda;
//	tax = subtotal * .06;
//	total = subtotal + tax;
//}
//
//void printReceipt(float total)
//{
//	cout << "Your total is $" << total;
//}
////========================================================================================
