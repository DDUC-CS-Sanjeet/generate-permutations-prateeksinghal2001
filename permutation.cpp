#include<iostream>
using namespace std;

void permutation(char arr[], int loc, int end)
{
	if(loc==end)
	{
		cout<<arr<<endl;
	}
	else
	{
		for(int i=loc; i<=end ;i++)
		{
			swap(arr[loc],arr[i]);
			
			permutation(arr, loc+1, end);
			swap(arr[loc],arr[i]);
		}
	}
}

int main()
{
	int num;
	cout<<endl<<" Enter the number of characters ";
	cin>>num;
	char array[100];
	char alpha='a';
	for(int i=0;i<num;i++)
	{
		array[i]=alpha;
		alpha++;
	}
	array[num]='\0';
	permutation(array , 0, num-1);
	return 0;
}
