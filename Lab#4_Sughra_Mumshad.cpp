#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 

//                                Task#1
//
// int x;
// cout<<"Enter the value of x=";
// cin>>x;
// ( x%2==0?cout<<"The number "<<x<<" is an even number":cout<<"The number "<<x<<" is an odd number");
// 



//                                  Task#2
// int age;
// cout<<"Enter the age: ";
// cin>>age;
// (age<13)?cout<<"Age "<<age<<" falls under the category: Child":
// (age>=13&&age<=19)?cout<<"Age "<<age<<
// " falls under the category: Teenager":
// cout<<"Age "<<age<<" falls under categoy: Adult"<<endl;

//


//                                    Task#3
  cout<<"PORTABLE BANKING APP"<<endl;
  cout<<"--------------------"<<endl;
  int accountnumber,balance;
  cout<<"Enter your account number: ";
  cin>>accountnumber;
  
  cout<<"Enter your account balance: $";
  cin>>balance;
  
  bool loyalty;
  cout<<"Are you our loyal customer? Enter 1 if yes and 0 if no:\t ";
  cin>>loyalty;
  
  cout<<endl<<endl;
  cout<<"------------------------------"<<endl;
  cout<<"            DETAILS          "<<endl;
  cout<<"------------------------------"<<endl;
  cout<<endl<<endl;
  cout<<setw(10)<<"Account Type"<<setw(35)<<"Loyalty Status"<<setw(45)<<"Special Offer Eligibility"<<endl;
  (balance<100)?cout<<setw(10)<<"Low Balance Account":(balance>100&&balance<500)?cout<<setw(5)<<"Standard Account":cout<<setw(5)<<"Premium Account";
  (loyalty==1)?cout<<setw(25)<<"Loyal":cout<<setw(5)<<"Not loyal";
  (balance>500&&loyalty==1)?cout<<setw(35)<<"Eligible":cout<<setw(36)<<"Not Eligible"<<endl;
   
   return 0;
 
 
 
 
 
}