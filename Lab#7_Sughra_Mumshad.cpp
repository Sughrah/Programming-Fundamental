#include<iostream>
#include<string>
using namespace std;
int main()
{

//               Task#1
//   int num;
//    cout<<" Enter an integer: "<<endl;
//    cin>>num;
//    if(num>0){
//    	cout<<"Number is positive"<<endl;
//	}
//	else if(num<00){
//		cout<<"Number is negative"<<endl;
//	}
//	else{
//		cout<<"Number is zero"<<endl;
//	}
//	
//                 Task#2

//    int temp;
//    cout<<"Enter today Temprature: "<<endl;
//    cin>>temp;
//    cout<<"-----------------------"<<endl;
//     cout<<"------------------------"<<endl;
//    if(temp>=40){
//    	cout<<"You should stay indoor, because it is extremely hot and could be dangerous to your health."<<endl;
//	}
//	else if(temp>=30&&temp<=39){
//		cout<<"You should drink plenty of water to stay hydrated in this hot condition."<<endl;
//	}
//	else if(temp>=20&&temp<=29){
//		cout<<"The weather is suitable for outdoor activities."<<endl;
//	}
//	else{
//		cout<<"You should wear warm clothes to stay comfortable in this cooler condition."<<endl;
//	}
   
//                    Task#3
//   string Username;
//   string password;
//   cout<<"Please enter your name: "<<endl;
//   cin>>Username;
//   cout<<"Enter your password: "<<endl;
//    cin>>password;
//   if(Username=="admin"&&password=="12345"){
//   	cout<<"Acess Granted."<<endl;
//   }
//   else if(Username=="admin"&&password!="12345"){
//   	cout<<"Wrong answer."<<endl;
//   }
//   else{
//   	cout<<"User not found."<<endl;
//   }

//             Task#4
    cout<<"University exam Results and Scholarship Eligibility System"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    int marks1,marks2,marks3,grade;
    int obtmarks,totalmarks;
     totalmarks=300;
    int percentage;
    percentage=obtmarks/totalmarks*100;
    char grade1,grade2,grade3;
    cout<<"Enter your marks of I&CT:  "<<endl;
    cin>>marks1;
    cout<<"Enter your marks of Calculus:  "<<endl;
    cin>>marks2;
    cout<<"Enter your marks of PF:  "<<endl;
    cin>>marks3;
    totalmarks=marks1+marks2+marks3;
//    for I&Ct course
    if(marks1>=90){
    	grade1='A';
    	cout<<"\n grades in I&CT="<<grade1<<endl;
	}
	else if(marks1>=80&&marks1<=90){
		 grade1='B';
		 cout<<"\n grades in I&CT="<<grade1<<endl;
	}
	else if(marks1>=70&&marks1<=80){
		grade1='C';
		cout<<"\n grades in  I&CT="<<grade1<<endl;
	}else if(marks1>=60&&marks1<=70){
		grade1='D';
		cout<<"\n grades in I&CT="<<grade1<<endl;
	}
	else{
		grade1='F';
		cout<<"Failed"<<endl;
	}
//	for Calculus Course
	if(marks2>=90){
		grade2='A';
		cout<<"\n grades in Calculus="<<grade2<<endl;
	}
	else if(marks2>=80&&marks2<=90){
		grade2='B';
		cout<<"\n grades in Calculus="<<grade2<<endl;
	}
	else if(marks2>=70&&marks2<=80){
		grade2='C';
		cout<<"\n grades in Calculus="<<grade2<<endl;
	}
	else if(marks2>=60&&marks2<=70){
		grade2='D';
		cout<<"\n grdaes in Calculus="<<grade2<<endl;
	}
	else if(marks2<60){
		grade2='F';
		cout<<"\n grades in Calculus="<<grade2<<endl;
	}else if(marks1>=60&&marks1<=70){
		grade1='D';
		cout<<"\n grades in Calculus="<<grade2<<endl;
	}
	else{
		 grade1='F';
		 cout<<"Failed"<<endl;
	}
//	for PF course
	if(marks3>=90){
		grade3='A';
		cout<<"\n grades in PF="<<grade3<<endl;
	}
	else if(marks3>=80&&marks3<=90){
		grade3='B';
		cout<<"\n grades in PF="<<grade3<<endl;
	}
	else if(marks3>=70&&marks3<=80){
		grade3='C';
        cout<<"\n grades in PF="<<grade3<<endl;
	}
	else if(marks3>=60&&marks3<=70){
		grade3='D';
	    cout<<"\n grades in PF="<<grade3<<endl;
	}
	else{
	     grade3='F';
	     cout<<"Failed"<<endl;
	}
	string scholarshipEligibilty;
	cout<<"Total Marks: "<<totalmarks<<endl;
	cout<<"Percentage: "<<percentage<<endl;
	cout<<"Grade in I&CT: "<<grade1<<endl;
	cout<<"Grade in calculus: "<<grade2<<endl;
	cout<<"Grade in PF: "<<grade3<<endl;
	if(grade1=='F'||grade2=='F'||grade3=='F'){
		cout<<"Failed"<<endl;
		return 0;
		if(grade=='A'||totalmarks>=270){
			cout<<"Scholarship: Merit Scholarship";
		}else if((grade=='A'||grade=='B')&&totalmarks>=240){
			cout<<"Scholarship: Regular Scholarship";
		}else{
			cout<<"Scholarship: Not eligible for scholarship";
		}
	}
	
    
//                Task#5
//    cout<<"Loan Eligibility Checker "<<endl;
//    cout<<"------------------------"<<endl;
//    cout<<"------------------------"<<endl;
//    cout<<"------------------------"<<endl;
//    int age;
//    double income;
//    cout<<"Enter your age: "<<endl;
//    cin>>age;
//    if(age<18){
//    	cout<<"You are not eligible for loan because you are under 18 years of age."<<endl;
//	}else{
//		cout<<"Enter your annual income: ";
//		cin>>income;
//		if(income<30000){
//			cout<<"You meet the age requirement but are not eligible for a loan because your income is beloe $30,000."<<endl;
//		}else{
//			cout<<"Congratulations! You meet both criteria and are eligible for a loan."<<endl;
//		}
//	}

//                 Task#6
//  cout<<"Role-Based Access System"<<endl;
//  cout<<"***********************"<<endl;
//  cout<<"************************"<<endl;
//  string username,password,role;
//  string correctUsername="admin";
//  string correctPassword="password123";
//  cout<<"Enter Username: ";
//  cin>>username;
//  cout<<"Enter Password: ";
//  cin>>password;
//  if(username==correctUsername&&password==correctPassword){
//	cout<<"Authentication Sucessfull!"<<endl;
//	cout<<"Enter Your role(Admin, Guest, User, Manager):";
//	cin>>role;
//	if(role=="Admin"){
//		cout<<"Full Access"<<endl;
//	}else if(role=="Guest"){
//		cout<<"Limited Access"<<endl;
//	}else{
//		cout<<"No Access"<<endl;
//	   }
//	}else{
//		cout<<"\nAuthentication Failed. Access Deined."<<endl;
//	}



    return 0;
    
}