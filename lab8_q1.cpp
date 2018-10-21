//include library
#include<iostream>

using namespace std;

//create function to add the elements of given array
int SUM(int arr[],int n)
{
	//declaring variable
	int sum=0;

	//create loop to add the elements 
	for(int i=0;i<n;i++)
	{
		//add the elements
		sum+=arr[i];
	}

	//returning the sum
	return sum;
}

//create main
int main()
{
	//declare variable
	int n,sum;

	//ask for the no. of elements in the array
	cout<<"Enter the number of elements to be there in the array : ";

	//take the value as input
	cin>>n;

	//declaring array
	int arr[n];

	//create loop to input the elements of the array
	for(int i=0;i<n;i++)
	{
		//ask for the element
		cout<<"Enter the "<<i+1<<" term : ";

		//take input
		cin>>arr[i];
	}

	//calling function to add the elements in the array
	sum=SUM(arr,n);

	//printing the sum of all the elements of the array
	cout<<"The sum of all the elements of the array is "<<sum<<endl;

	//terminating the function
	return 0;
} 
