//include library
#include<iostream>

using namespace std;

//create function to enter elements in array
void ENTER(int arr[],int n)
{
	//creating loop to enter the elements of array
	for(int i=0;i<n;i++)
	{
		//ask to enter the elements
		cout<<"Enter "<<i+1<<"th element : "<<endl;

		//take the given value as input
		cin>>arr[i];
	}
}

//create function to merge arrays
void MERGE(int arr[],int arr1[],int arr2[],int n)
{
	//create loop to go through 1st array
	for(int i=0;i<n;i++)
	{
		//enter the element of 1st array in larger array
		arr[i]=arr1[i];
	}
	
	//create loop to go through 2nd array
	for(int j=0;j<n;j++)
	{
		//enter the element of 2nd array in larger array
		arr[n+j]=arr2[j];
	}
}

//create function to find the smallest element
int SMALL(int arr[],int n)
{
	//declare variable
	int sml;

	//initialize the variable
	sml=arr[0];

	//create loop to compare the elements
	for(int i=1;i<n;i++)
	{
		//comparing the stored small value with other elements of the array
		if(arr[i]<sml)
		{
			//change the stored small value
			sml=arr[i];
		}
	}

	//returning the small value
	return sml;
}

//create function to find largest element
int LARGE(int arr[],int n)
{
	//declare variable
	int lrg;

	//initialize the variable with first value of array
	lrg=arr[0];

	//create loop to compare the elements
	for(int i=1;i<n;i++)
	{
		//comparing the stored large value with other elements of the array
		if(arr[i]>lrg)
		{
			//change the stored large value
			lrg=arr[i];
		}
	}
	
	//returning the large value
	return lrg;
}

//create main
int main()
{
	//declaring variable
	int n,s,l;
	
	//ask for the size of array
	cout<<"Enter the size of array : "<<endl;

	//take the value as input
	cin>>n;

	//declare arrays
	int arr1[n],arr2[n];

	//call function to enter elements in 1st array
	cout<<"For 1st array : "<<endl;
	ENTER(arr1,n);

	//call function to enter elements in 2nd array
	cout<<"For 2nd array: "<<endl;
	ENTER(arr2,n);

	//declare array to store merged array
	int arr[n+n];

	//call function to merge arrays
	MERGE(arr,arr1,arr2,n);

	//changing size of array
	n*=2;

	//call function to find the smallest element out of both the arrays
	s=SMALL(arr,n);

	//call function to find the largest element out of both the arrays
	l=LARGE(arr,n);

	//print the smallest element
	cout<<"The smallest element is "<<s<<endl;

	//print the largest element
	cout<<"The largest elements is "<<l<<endl;

	//terminating the program
	return 0;
} 
