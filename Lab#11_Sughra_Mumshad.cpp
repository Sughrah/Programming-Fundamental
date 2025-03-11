#include<iostream>
using namespace std;
int main()
{
//	         Task#1

//	int a[5]={1,2,3,4,5};
//	for(int i=0;i<5;i++){
//		cout<<a[i];
//	}

//           Task#2

    int N;
    cout<<"Enter the value of N: ";
    cin>>N;
    int arr[N];
    cout<<"Enter array: ";
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    	
	}cout <<"Reverse of an rray is : ";
	for(int i=4; i>=0; i--){
		cout<<arr[i]<<" ";
	}
	
//	         Task#3

//   int a[5]={10,15,20,25,30};
//   cout<<"Array elements";
//   int sum=0;
//   for(int i=0;i<5;i++){
//   	sum+=a[i];
//   }
//   cout<<"Sum: "<<sum<<endl;
//
//    double average=sum/5;
//	cout<<"Average of elements: "<<average;

//             Task#4
//
//  int arr[]={10,20,30,40,50};
//  int size=sizeof(arr)/sizeof arr[0];
//  cout<<"Size of the array is : "<<size<<endl;
//  
//  for(int i=0;i<size;i++){
//  	cout<<arr[i]<<" ";
//  }

//            Task#5

//    int n;
//    cout <<"Enter the size :";
//    cin>>n;
//    int arr[n];
//    int largest =0;
//    for ( int i=0 ; i<n ; i++) {
//    	cin >>arr[i];
//    	if ( arr[i] >largest) {
//    		largest = arr[i];
//		}
//	}cout <<"Largest number is = "<<largest;
    
    



	return 0;
	
}