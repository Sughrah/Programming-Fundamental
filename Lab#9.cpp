//#include<iostream>
//using namespace std;
//int main()
//{
	//                       Task1:
//	int num;
//	int i=1;
//	cout<<"Enter number: "<<endl;
//	cin>>num;
//	while(i<=num){
//		cout<<"Number: "<<i<<endl;
//		i++;
//	}

    //                         Task2:
//	int num=1;
//	int table;
//	cout<<"..........Multiplication Tables.........."<<endl;
//	cout<<"Enter table number :"<<endl;
//	cin>>table;
//	while(num<=15){
//		cout<<table<<"*"<<num<<"="<<table*num<<endl;
//		num++;
//	}
//   
    //                           Task3:
//    int num;
//    cout<<"Enter a number: "<<endl;
//    cin>>num;
//    while(num<=0){
//    	cout<<"Error!"<<endl;
//    	cout<<"You entered a negative number"<<endl;
//    	cout<<"Please enter a positive number"<<endl;
//    	}
//	cout<<"You enter correct number"<<endl;

    
    //                         Task4:	
//	int n=1;
//	int sum=0;
//	while(n<=5){
//		sum+=n;
//		n++;
//		}	cout<<"Sum of first five natural numbers(1,2,3,4,5)=  "<<sum;


    //                       Task5:
    
//    const string correctPassword= "123";
//    string userInput;
//    bool isCorrect=false;
//    
//    do{
//    	cout<<"Enter your password: ";
//    	cin>>userInput;
//    	
//    	if(userInput==correctPassword){
//    		isCorrect=true;
//    		cout<<"Password correct! Acess granted. ";
//    		
//		}else{
//			cout<<"Incorrect password! Please try again. "<<endl;
//		}
//	}while(userInput!=correctPassword);

    
//	                     Task#6


//    double balance = 1000.0; 
//    int choice;
//    double amount;
//    do {
//        cout << "Welcome to Gash banking "<<endl;
//        cout << "1. Deposit Money"<<endl;
//        cout << "2. Withdraw Money"<<endl;
//        cout << "3. Check Balance"<<endl;
//        cout << "4. Exit"<<endl;
//        cout << "Enter your choice (1-4): ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                cout << "Enter the amount to deposit: $";
//                cin >> amount;
//                if (amount > 0) {
//                    balance += amount;
//                    cout << "Amount deposited successfully.\n";
//                } else {
//                    cout << "Invalid amount. Please enter a valid value.\n";
//                }
//                break;
//
//            case 2: 
//                cout << "Enter the amount to withdraw: $";
//                cin >> amount;
//                if (amount > 0 && amount <= balance) {
//                    balance -= amount;
//                    cout << "Amount withdrawn successfully.\n";
//                } else if (amount > balance) {
//                    cout << "Insufficient balance.\a\a\a\n";
//                } else {
//                    cout << "Invalid amount. Please enter a valid value.\n";
//                }
//                break;
//
//            case 3: 
//                cout << "Your current balance is: $" << balance << "\n";
//                break;
//
//            case 4: 
//                cout << "Thank you for using the Gash banking system!\n";
//                break;
//
//            default: 
//                cout << "Invalid choice. Please select a valid option (1-4).\n";
//        }
//    } while (choice != 4); 

//   return 0;
//}


//            Task#5

#include <iostream>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Welcome to the Restaurant!" << endl;
    cout << "Please select a category:" << endl;
    cout << "1. Breakfast" << endl;
    cout << "2. Lunch" << endl;
    cout << "3. Dinner" << endl;
}

// Function to display the submenu for Breakfast
void displayBreakfastMenu() {
    cout << "Breakfast Menu:" << endl;
    cout << "1. Anda Pratha - Rs40" << endl;
    cout << "2. Nan Channy - Rs160" << endl;
    cout << "3. Siri Paye - Rs150" << endl;
    cout << "4. Tea - Rs15" << endl;
}

// Function to display the submenu for Lunch
void displayLunchMenu() {
    cout << "Lunch Menu:" << endl;
    cout << "1. Chicken Karahi - Rs1050/kg" << endl;
    cout << "2. Mutton Karahi - Rs1080/kg" << endl;
    cout << "3. Egg Fried Rice - Rs450/plate" << endl;
    cout << "4. BBQ - Rs1050/dozen" << endl;
}

// Function to display the submenu for Dinner
void displayDinnerMenu() {
    cout << "Dinner Menu:" << endl;
    cout << "1. Chicken Karahi - Rs1050/kg" << endl;
    cout << "2. Mutton Karahi - Rs1080/kg" << endl;
    cout << "3. Egg Fried Rice - Rs440/plate" << endl;
    cout << "4. Sajji - Rs800/kg" << endl;
}

// Function to calculate the total bill
int calculateBill(int price, int quantity) {
    return price * quantity;
}

int main() {
    int categoryChoice, itemChoice, quantity;
    int totalBill = 0;
    char continueOrder;

    do {
        // Display the main menu
        displayMenu();
        cout << "Enter your choice (1-3): ";
        cin >> categoryChoice;

        switch (categoryChoice) {
            case 1: // Breakfast
                displayBreakfastMenu();
                cout << "Enter your choice (1-4): ";
                cin >> itemChoice;
                cout << "Enter the quantity: ";
                cin >> quantity;

                switch (itemChoice) {
                    case 1:
                        totalBill += calculateBill(40, quantity);
                        break;
                    case 2:
                        totalBill += calculateBill(160, quantity);
                        break;
                    case 3:
                        totalBill += calculateBill(150, quantity);
                        break;
                    case 4:
                        totalBill += calculateBill(15, quantity);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                        break;
                }
                break;

            case 2: // Lunch
                displayLunchMenu();
                cout << "Enter your choice (1-4): ";
                cin >> itemChoice;
                cout << "Enter the quantity: ";
                cin >> quantity;

                switch (itemChoice) {
                    case 1:
                        totalBill += calculateBill(1050, quantity);
                        break;
                    case 2:
                        totalBill += calculateBill(1080, quantity);
                        break;
                    case 3:
                        totalBill += calculateBill(450, quantity);
                        break;
                    case 4:
                        totalBill += calculateBill(1050, quantity);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                        break;
                }
                break;

            case 3: // Dinner
                displayDinnerMenu();
                cout << "Enter your choice (1-4): ";
                cin >> itemChoice;
                cout << "Enter the quantity: ";
                cin >> quantity;

                switch (itemChoice) {
                    case 1:
                        totalBill += calculateBill(1050, quantity);
                        break;
                    case 2:
                        totalBill += calculateBill(1080, quantity);
                        break;
                    case 3:
                        totalBill += calculateBill(440, quantity);
                        break;
                    case 4:
                        totalBill += calculateBill(800, quantity);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                        break;
                }
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        // Ask if the user wants to add more items
        cout << "Do you want to add another item? (y/n): ";
        cin >> continueOrder;
    } while (continueOrder == 'y' || continueOrder == 'Y');

    // Display the total bill
    cout << "Your total bill is: Rs" << totalBill << endl;
    cout << "Thank you for dining with us!" << endl;

    return 0;
}    

  
    



	
	

    
	
