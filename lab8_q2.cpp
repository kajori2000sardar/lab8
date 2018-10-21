//include library
#include<iostream>

using namespace std;

//creating function to arrange the elements of the arrays in increasing order
void ARRANGE(int arr[],int n)
{
	//declare variable
	int temp;

	//create loop to arrange the elements in arranging order
	for(int i=0;i<n;i++)
	{
		//checking condition
		if(arr[i]<arr[i+1])
		{
			//swapping the values
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
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

//create function to find smallest element
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

//create function to find mean of all the elements of the array
float MEAN(int arr[],int n)
{
	//declare variable
	int sum=0;

	//create loop to add all the elements of the array
	for(int i=0;i<n;i++)
	{
		//add the elements of the array
		sum+=arr[i];
	}

	//returning the mean value
	return sum/n;
}

//create function to find median
void MED(int arr[],int n)
{
	//calling loop to arrange the elements of the arrays in increasing order
	ARRANGE(arr,n);
	
	//checking whether the no. of elements is odd or even
	if(n%2!=0)
	{
		//then the median will be the middle no.
		cout<<"The median of the array is "<<arr[n/2]<<endl;
	}
	else
	{
		//then the median will be two no.s
		cout<<"The medians of the array are "<<arr[n/2]<<" and "<<arr[(n+1)/2]<<endl;
	}
}

//craete function to calculate the repetition of each element
int MODE(int arr[],int n)
{
	//calling function to arrange the elements of array in increasing order
	ARRANGE(arr,n);

	//declaring a variable with first element
	int temp=arr[0];

	//creating loop to check the no. of times a no. is repeated
	for(int i=1,m=1,c=1;i<n;i++)
	{				
		//comparing first element with the second element
		if(arr[i]==temp)
		{
			//increase no. of times the current value is repeated
			c++;
		}
		else
		{
			//comparing the no. of times current element repeated and the max. no. of times repeated element 
			if(c>m)
			{
				//changing the current element be the max no. of times repeated element
				m=c;
				temp=arr[i-1];
			}
		}	
	}

	//returning the most times repeated element
	return temp;
}
	
//creating main
int main()
{
	//declaring variables
	int max,min,rp,n;
	float mn;

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

	//calling function to find, assign and print the largest element of the array
	max=LARGE(arr,n);
	cout<<"The largest elemennts in the given array is : "<<max<<endl;

	//calling function to find, assign and print the smallest element of the array
	min=SMALL(arr,n);
	cout<<"The smallest elements in the given array is : "<<min<<endl;

	//calling function to find, assign and print the mean of the elements of the array
	mn=MEAN(arr,n);
	cout<<"The mean of the elements of the given array is : "<<mn<<endl;

	//calling function to find, assign and print the median of the elements of the array
	MED(arr,n);

	//calling function to find, assign and print the mode of the elements of the array
	rp=MODE(arr,n);
	cout<<"The most number of times repeated element in the given array is : "<<rp<<endl;

	//terminating the program
	return 0;
}






































				
		



































