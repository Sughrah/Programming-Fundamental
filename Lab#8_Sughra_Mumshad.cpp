#include <iostream>
using namespace std;

int main()
 {
 	
// 	                                  Task#1
// 	float num1,num2;
// 	char op;
// 	
// 	cout<<"Emter two numbers: ";
// 	cin>>num1>>num2;
// 	
// 	cout<<"Enter operator: ";
// 	cin>>op;
// 	
// 	switch(op){
// 		case'+':
// 			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
// 			break;
// 		case'-':
// 			cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
// 			break;
// 		case'*':
// 			cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
// 			break;
// 		case'/':
// 			if(num2==0){
// 				cout<<"Error: Division by zero is not allowed"<<endl;
//			 }else{
//			 	cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
//			 }
//			 break;
//			 default:
//			 	cout<<"Error! Invalid Operator"<<endl;
// 			
//	 }


     //                                         Task#2
     
     
//     int day;
//     
//     cout<<"Enter a number(1-7): ";
//     cin>>day;
//     
//     switch(day){
//     	case 1:
//     		cout<<"Monday"<<endl;
//     		break;
//     	case 2:
//     		cout<<"Tuesday"<<endl;
//     		break;
//     	case 3:
//     		cout<<"Wednesday"<<endl;
//     		break;
//     	case 4:
//     		cout<<"Thursday"<<endl;
//     		break;
//     	case 5:
//     		cout<<"Friday"<<endl;
//     		break;
//     	case 6:
//     		cout<<"Saturday"<<endl;
//     		break;
//     	case 7:
//     		cout<<"Sunday"<<endl;
//     		break;
//     		default:
//     			cout<<"Error! Invalid day number.please enter a number between 1 and 7."<<endl;
//     		
//     	
//	 }


//                                 Task#3

//   int choice;
//   double area;
//   const double PI=3.1459;
//   
//   cout<<" Area Calculations of shapes"<<endl;
//   cout<<"Select the shape to calculate its area : "<<endl;
//   cout<<"1. Circle "<<endl;
//   cout<<"2. Rectangle "<<endl;
//   cout<<"3. Triangle "<<endl;
//   cout<<"Enter your choice (1,2,3): ";
//   cin>>choice;
//   
//   
//   switch(choice){
//   	case 1:
//   	double radius;
//   	cout<<"Enter the radius of the circle: ";
//   	cin>>radius;
//   	area=PI+radius*radius;
//   	cout<<"\n Area of circle is "<<area<<" sqaure units. ";
//   	break;
//   	case 2:
//   		double length,width;
//   		cout<<"Enter the width of rectangle: ";
//   		cin>>width;
//   		cout<<"Enter the length of rectangle: ";
//   		cin>>length;
//   		area=width*length;
//   		cout<<"\n Area of rectangle is "<<area<<" sqaure units. ";
//   		break;
//   	case 3:
//   		double base,hieght;
//   		cout<<"Enter the hieght of triangle: ";
//   		cin>>hieght;
//   		cout<<"Enter the base of triangle: ";
//   		cin>>base;
//   		area=0.5*hieght*base;
//   		cout<<"\n Area of triangle is "<<area<<" sqaure units. ";
//   		break;
//   		default:
//   			cout<<"Invalid Choice! plz select (1,2,3).";
//   			break;
   		
//   }
    
//                                          Task#4
//     float amount, convertedAmount;
//     int choice;
//     cout<<"*********************************************"<<endl;
//     cout<<"Currency Convertor (USD to PKR, INR)"<<endl;
//     
//     cout<<"Enter the amount in USD :$";
//     cin>>amount;
//     
//     cout<<"Choose currency you want to convert to: "<<endl;
//     cout<<"1. Convert to PKR\n";
//    cout<<"2. Convert to INR\n";
//    cout<<"3. Convert to Euros\n ";
//    cout<<"Enter your choice (1,2,3): ";
//    cin>>choice;
//    
//    const float usdtopkr= 286.50;
//    const float usdtoInr= 83.00;
//    const float usdtoEuro= 0.93;
//    
//    switch(choice){
//    	case 1:
//    		convertedAmount=amount+usdtopkr;
//    		cout<<amount<<"USD is equivalent to "<<convertedAmount<<" PKR.\n";
//    		break;
//    	case 2:
//    		convertedAmount=amount+usdtoInr;
//    		cout<<amount<<"USD is equivalent to "<<convertedAmount<<" INR.\n";
//    		break;
//		case 3:
//    		convertedAmount=amount+usdtoEuro;
//    		cout<<amount<<"USD is equivalent to "<<convertedAmount<<" Euro.\n";
//    		break;	
//    	default:
//    		cout<<"Invalid choice! please select (1, 2, 3)";
//    		
//	}
// 	
// 	



//                                Task#5

//
//    float price, totalPrice, discount, finalPrice;
//    int categoryChoice, itemChoice, quantity;
//    cout<<"        Welcome to shopping System         "<<endl;
//    
//    cout<<"Please choose a category:\n ";
//    cout<<"1. Electronics\n";
//    cout<<"2. Clothing\n";
//    cout<<"3. Groceries\n";
//    cout<<"Enter yoir choice (1, 2, 3): ";
//    cin>>categoryChoice;
//    
//    switch(categoryChoice){
//    	case 1:
//    		cout<<"\n Select an item:\n";
//    		cout<<"1. Laptop - $1000\n";
//            cout<<"2. SmartPhone- $700\n";
//            cout<<"3. HeadPhone - $150\n";
//            cout<<"Enter yoir choice (1, 2, 3): ";
//            cin>>itemChoice;
//            
//            cout<<"Enter quantity :";
//            cin>>quantity;
//            switch(itemChoice){
//            	case 1:
//            		price= 1000;
//            		break;
//                case 2:
//            		price= 700;
//            		break;
//            	case 3:
//            		price= 150;
//            	default:
//            		cout<<"Invalid item choice!";
//            		break;
//            			
//			}
//			totalPrice = price * quantity;
//			break;
//			
//			
//		case 2:
//    		cout<<"\n Select an item:\n";
//    		cout<<"1. Jackets - $120\n";
//            cout<<"2. Teashirts - $40\n";
//            cout<<"3. Jeans - $60\n";
//            cout<<"Enter yoir choice (1, 2, 3): ";
//            cin>>itemChoice;
//            
//            cout<<"Enter quantity :";
//            cin>>quantity;
//            switch(itemChoice){
//            	case 1:
//            		price= 120;
//            		break;
//                case 2:
//            		price= 40;
//            		break;
//            	case 3:
//            		price= 60;
//            	default:
//            		cout<<"Invalid item choice!";
//            		break;
//            			
//			}
//			totalPrice= price * quantity;
//			break;
//			
//			
//	     			
//		case 3:
//    		cout<<"\n Select an item:\n";
//    		cout<<"1. Milk - $2\n";
//            cout<<"2. Bread - $3\n";
//            cout<<"3. Eggs - $5\n";
//            cout<<"Enter yoir choice (1, 2, 3): ";
//            cin>>itemChoice;
//            
//            cout<<"Enter quantity :";
//            cin>>quantity;
//            switch(itemChoice){
//            	case 1:
//            		price= 2;
//            		break;
//                case 2:
//            		price= 3;
//            		break;
//            	case 3:
//            		price= 5;
//            	default:
//            		cout<<"Invalid item choice!";
//            		break;
//            			
//			}
//			totalPrice= price * quantity;
//			break;	
//	}
//	if(totalPrice<100){
//		discount = 0;
//	}
//	else if(totalPrice>=100 && totalPrice<=500 ){
//		discount = 0.10;
//	}
// 	else{
// 		discount = 0.20;
//	 }
//	 
//	finalPrice = totalPrice- (totalPrice*discount);
//	
//	cout<<"-----------------Invoice------------------"<<endl;
//	cout<<"TotalPrice :$ "<<totalPrice<<endl;
//	cout<<"Discount apply: "<<(discount*100)<<"%"<<endl;
//	cout<<"Final price after discount : "<<finalPrice<<endl;
// 	
// 	
// 	
// 	
// 	
 	
 	
 	
 	
    return 0;
}