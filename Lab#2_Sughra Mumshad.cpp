#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
//	          ***********************TASK1*********************************
	
//	int num1, num2;
//	cout << "Enter two numbers:\n";
//	cout << "Number1: ";
//	cin >> num1;
//	cout << "Number2: ";
//	cin >> num2;
//	int addition = num1 + num2;
//	int subtraction = num1 - num2;
//	int multiplication = num1 * num2;
//	int division = num1 / num2;
//	int modulus = num1 % num2;
//	cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;
//	cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
//	cout << "Mutliplication: " << num1 << " * " << num2 << " = " << multiplication << endl;
//	cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
//	cout << "Modulus: " << num1 << " % " << num2 << " = " << modulus << endl;

//            ******************************TASK2******************************
	
//	double weight, height, bmi;
//	cout << "BMI Calculator\n";
//	cout << "Enter your weight in kilograms: ";
//	cin >> weight;
//	cout << "Enter your height in meters: ";
//	cin >> height;
//	bmi = weight / (height * height);
//	cout << fixed << setprecision(4);
//	cout << "Your BMI is: " << bmi << endl;
	
//	           ***************************TASK3********************************
	
//    double x1 = 3, y1 = 4, x2 = 6, y2 = 8;
//	double squared_distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
//	cout << "The squared distance between the points ("<< x1 << ", " << y1 << ") and (" << x2 << ", " << y2 <<") is: " << squared_distance <<endl;

//             *******************************TASK4****************************

//   int a;
//	cout << "enter an integer"<<endl;
//	cin >> a;
//	if(a>0)
//	{
//		cout << "a is positive"<<endl;
//	}
//	else if(a<0)
//	{
//		cout << "a is negative"<<endl;
//	}
//	else
//	{
//		cout << "a is equal to zero"<<endl;
//	}

//           **************************TASK5**************************

//#include<iostream
//#include<iomanip>
//#include<string>
//using namespace std;
//int main()
//{
//	string username;
//	int password;
//	cout << "Enter username and password"<<endl;
//	getline(cin,username);
//	cin >> password;
//	if(username=="admin" && password==12345)
//	{
//		cout << "Access Granted"<<endl;
//	}
//	else if(username=="admin" && password!=12345)
//	{
//		cout << "Wrong Password" <<endl;
//	}
//	else
//	{
//		cout << "User Not Found" <<endl;
//	}
//	return 0;
//}

//       *********************TASK6*********************************

//   double score1 = 85.5, score2 = 90.75, score3 = 88.25;
//	double average = (score1 + score2 + score3) / 3;
//	cout << fixed << setprecision(2);
//	cout << "the average of " << score1 << ", " << score2 << " and " << score3 << " is: " << average << endl;

//         **************************TASK7************************

//    const double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
//	double subtotal = item1 + item2 + item3 + item4 + item5;
//	const double tax_rate = 0.06;
//	double sales_tax = subtotal * tax_rate;
//	double total = subtotal + sales_tax;
//	cout << fixed << setprecision(2);
//	cout << "price of item1: $" << item1 << endl;
//	cout << "price of item2; $" << item2 << endl;
//	cout << "price of item3; $" << item3 << endl;
//	cout << "price of item4; $" << item4 << endl;
//	cout << "price of item5; $" << item5 << endl;
//	cout << "subtotal: $" << subtotal << endl;
//	cout << "sales tax: $" <<sales_tax << endl;
//	cout << "total: $" << total << endl;

//          *************************TASK8*************************

//	int temp;
//	cout << "Enter temp"<<endl;
//	cin >> temp;
//	if(temp>=40)
//	{
//		cout << "Stay indoor because it is extremely outside"<<endl;
//	}
//	else if(temp>=30 && temp<=39)
//	{
//		cout << "Drink plenty of water to stay hydrated in hot weather"<<endl;
//	}
//	else if(temp>=20 && temp<=29)
//	{
//		cout << "The weather is pleasant and suitable for outdoor activities"<<endl;
//	}
//	else
//	{
//		cout << "Wear warm clothes to stay comfortable in the outdoor weather"<<endl;
//	}

//           ************************TASK9************************

//    double distance, fuel_efficiency, fuel_cost_per_litre, total_cost;
//	cout << "trip cost estimator\n";
//	cout << "enter distance of the trip in kilometers: ";
//	cin >> distance;
//	cout << "enter vechiles's fuel efficiency (km per litre):";
//	cin >> fuel_efficiency;
//	cout << "enter fuel cost per litre in PKR:";
//	cin >> fuel_cost_per_litre;
//	total_cost = (distance / fuel_efficiency) * fuel_cost_per_litre;
//	cout << fixed << setprecision(2);
//	cout << "total trip cost: rs " << total_cost << endl;

//            ********************TASK10*****************

//  int marksinphysics, marksinmath, marksinenglish;
//	int totalmarks, scoredgrade, percentage;
//	int scoredgradeA,B,C,D,F;
//	cout << "enter marks in physics, marks in math, marks in english"<<endl;
//	cin >> marksinphysics >> marksinmath >> marksinenglish;
//	if(percentage>=90)
//	{
//		cout << "Grade A"<< endl;
//	}
//	else if(percentage>=80 && percentage<90)
//	{
//		cout << "Grade B"<< endl;
//	}
//	else if(percentage>=70 && percentage<80)
//	{
//		cout << "Grade C"<< endl;
//	}
//	else if(percentage>=60 && percentage<70)
//	{
//		cout << "Grade D"<<endl;
//	}
//	else
//	{
//		cout << "Grade F"<<endl;
//	}
//	if(totalmarks>=270)
//	{
//	    cout << "The student is eligible for merit scholarship"<<endl;
//	}
//	else if(totalmarks>=240) 
//	{
//		cout << "The student is eligible for regular scholarship"<<endl;
//	}
//	


	return 0;
}