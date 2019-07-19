#include<iostream>
using namespace std;

void  create(int n,int a[]);
void display(int a[],int n);
void insert(int i,int e,int n,int a[]);
void del(int e, int n,int a[]);
int search(int e,int n,int a[]);
void sort(int a[],int n);
void mergesort(int a[],int n,int b[],int m);

int main ()
{
	int n,i,choice,e;
	cout<<"enter size of array"<<"\n";
	cin>>n;
	int a[n];

	while(1)
	{
		cout<<"0.enter elements of an array "<<"\n";
		cout<<"1.Insert an element in the array"<<"\n";
		cout<<"2.Delete an element from the array"<<"\n";
		cout<<"3.Search for an element in an array"<<"\n";
		cout<<"4.Sort the array"<<"\n";
		cout<<"5.Merge two arrays"<<"\n";
		cout<<"6.Display the array"<<"\n";
		cout<<"7..Exit"<<"\n";
		cout<<"Enter your choice"<<" ";
		cin>>choice;

		switch(choice)
		{
			case 0:
				{
					create(n,a);
					break;
				}
			case 1: {

					cout<<"enter index and the element to be placed at the index";
					cin>>i>>e;
					insert(i,e,n,a);
					break;}
			case 2:{

				   cout<<"enter the element to be deleted";
				   cin>>e;
				   del(e,n,a);
				   break;
			}
			case 3:{
					int r;
				   cout<<"Enter the element to be searched";
				   cin>>e;
				   r=search(e,n,a);
				   cout<<r<<"\n";
				   break;
			}
		    case 4:{


		    	   sort(a,n);
		    	   break;
		    }

		    case 5:
			{
					cout<<"Ensure that the first array is sorted"<<"\n";
					int m;
		    		cout<<"Enter size of the second array"<<"\n";
		    		cin>>m;
		    		int b[m];
		    		cout<<"enter second array in a sorted order"<<"\n";
		    		for(int j=0;j<m;j++)
		    		{
		    			cin>>b[j];
					}
					mergesort(a,n,b,m);
					break;
				}
			case 6:
				{
					display(a,n);
					break;
				}

		    case 7:{

			exit(1);
			break;
		}

		}


	}


}
void insert(int i, int e,int n,int a[])
{
	a[i]=e;
}
void del(int e,int n, int a[])
{
	int k,i;
	k=search(e,n,a);
	for(i=k+1;i<n;i++)
	{
		a[k++]=a[i];
	}

}

int search(int e,int n,int a[])
{
	int k=0,flag=1;
	for(k=0;k<n;k++)
	{
		if(e==a[k])
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		return k;
	}
	else
	{
		return -1;
	}
}
void sort(int a[],int n)
{
	int i,hole,j,num;
	for(i=1;i<n;i++)
	{
		hole=i;
		j=i-1;
		num=a[i];
		while(j>=0)
		{
			if(num<a[j])
			{
				a[j+1]=a[j];
				hole=hole-1;
				}
			j=j-1;
		}
		a[hole]=num;

	}

}
void mergesort(int a[],int n, int b[],int m)
{
	int c[m+n];int i,j,k;
	i=0;j=0;k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i++];
		}
		else{
			c[k++]=b[j++];
		}
	}
	while(i<n)
	{
		c[k++]=a[i++];
	}
	while(j<m){
		c[k++]=b[j++];
	}
	for(i=0;i<(m+n);i++)
	{
		cout<<c[i]<<" ";

	}
	cout<<"\n";
}

void display(int a[], int n)

{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";

	}
	cout<<"\n";
}

void create(int n,int a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
