//include library
#include<iostream>

using namespace std;

//create function to arrange the elements of array in increasing order
void ARRANGE(int arr[],int n)
{

	//creating loop to arrange the elements of the array in increasing order
	for(int temp,i=0;i<n;i++)
	{
		//checking whether the no. is greater than the stored value or not
		if(arr[i]>arr[i+1])
		{
			//change those elements
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
}

//create function to find the kth smallest value
int SMALL(int arr[],int n,int k)
{
	//calling function to arrange the elements of the arrays in increasing order
	ARRANGE(arr,n);

	//create loop to find the given smallest element in the array
	for(int i=n-1;i>=0;i++)
	{
		//condition to check whether the no.s are equal or not
		if(arr[i]!=arr[i-1])
		{
			//changing the value of variable
			k--;
		}
		//checking whether it is the kth smallest or not
		if(k==1)
		{
			//returning the value
			return arr[i-1];
		}
	}
}

//creating function to find the kth largest value
int LARGE(int arr[],int n,int k)
{
	//calling function to arrange the elements of the arrays in increasing order
	ARRANGE(arr,n);

	//create loop to find the given largest element in the array	
	for(int i=0;i<n;i++)
	{
		//checking whether the no.s are equal or not
		if(arr[i]!=arr[i+1])
		{
			//changing value of variable
			k--;
		}
		//checking whether it is the kth largest or not
		if(k==1)
		{
			//return that value
			return arr[i+1];
		}
	}
}

//create main
int main()
{
	//declaring variables
	int n,s,l,a,k;

	//asking for size of array
	cout<<"Enter the to be size of array : ";

	//take the given value as input
	cin>>n;

	//creating array
	int arr[n];

	//create for loop to input values in array
	for(int i=0;i<n;i++)
	{
		//asking for value
		cout<<"Enter "<<i+1<<" value : ";

		//take the given no. as elements of array
		cin>>arr[i];
	}

	//ask for whether they want to find the kth smallest or largest element
	cout<<"Enter 1 to find kth smallest elements "<<endl<<"Enter 2 to find kth largest elements "<<endl<<"Enter 3 to find both kth smallest and kth largest elements "<<endl<<" of the araray"<<endl; 

	//take the option given as input
	cin>>a;

	//checking the option given
	if(a==1)
	{
		//ask for the value of k
		cout<<"Enter the kth value of smallest element ";

		//take the value as input
		cin>>k;

		//calling function to find the kth smallest value
		s=SMALL(arr,n,k);

		//printing the value of kth smallest element
		cout<<"The "<<k<<"th smallest element is : "<<s<<endl;
	}

	if(a==2)
	{
		//ask for the value of k
		cout<<"Enter the kth value of largest element : ";

		//take the value as input
		cin>>k;

		//calling function to find the kth largest value
		l=LARGE(arr,n,k);

		//printing the value of kth largest element
		cout<<"The "<<k<<"th largest element is : "<<l<<endl;
	}

	if(a==3)
	{
		//ask for the value of k
		cout<<"Enter the kth value for which the smallest and the largest value needs to be found : ";

		//take the value as input
		cin>>k;

		//calling the function to find kth smallest element
		s=SMALL(arr,n,k);

		//calling the function to find kth largest element
		l=LARGE(arr,n,k);

		//printing the value of kth smallest and largest value
		cout<<"The smallest "<<k<<"th element is "<<s<<" and the largest "<<k<<"th element is "<<l<<endl;
	}

	//terminating the program
	return 0;
}
