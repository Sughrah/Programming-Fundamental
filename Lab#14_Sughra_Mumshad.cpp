#include<iostream>
#include<string>
//using namespace std;
//struct student{
//	string firstname;
//	string lastname;
//	int rollNo;
//	int marks;
//	
//	void displayStudentInfo(){
//		cout<<"Full name : "<<firstname<<" "<<lastname<<endl;
//		cout<<"Roll No : "<<rollNo<<endl;
//		cout<<"Marks : "<<marks<<endl;
//	}
//};
//int main(){
//	student S1;
//	S1.firstname = "Sughra" ;
//	S1.lastname = "Mumshad";
//	S1.rollNo = 13;
//	S1.marks = 80;
//	S1.displayStudentInfo();
//	
//
//
//// array of struct
//
//int numStudents;
//cout<<"Enter the number of students: ";
//cin>>numStudents;
//
//student students[numStudents];
//for(int i =0; i<numStudents; i++){
//	cout<<"Enter details for student "<< i + 1<<": \n ";
//	cout<<"First name: ";
//	cin>>students[i].firstname;
//	cout<<"Last name:";
//	cin>>students[i].lastname;
//	cout<<"Roll No:";
//	cin>>students[i].rollNo;
//	cout<<"Marks:";
//	cin>>students[i].marks;
//}
//
//cout<<"\nMultiple students Info : \n";
//for(int i = 0; i< numStudents; ++i){
//	students[i].displayStudentInfo();
//    cout<<endl;
//}
//
////Pointer to struct
//
//
//student *ptr = new student;
//cout<<"Enter details for student using pointer   : \n";
//    cout<<"First name: ";
//	cin>>ptr->firstname;
//	cout<<"Last name:";
//	cin>>ptr->lastname;
//	cout<<"Roll No:";
//	cin>>ptr->rollNo;
//	cout<<"Marks:";
//	cin>>ptr->marks;
//	
//	cout<<"\n Pointer Student Info: \n";
//	ptr->displayStudentInfo();
//	
//    delete ptr;                  //	    free allocated memory
//    
//    return 0;
//
//	
//	
//}