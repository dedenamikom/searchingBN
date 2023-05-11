#include <iostream>

using namespace std;

int main ()
{
	int arr[10];
	int kiri,kanan,tengah;
	int temp,key,n;
	bool isktm= false;
	
	cout<<"masukan jumlah data : ";
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cout<<"angka ke - ["<<i<<"]: ";
		cin>>arr[i];
	}
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[i];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	
	}
	cout<<"Data yagn telah diurutkan adalah ; ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n Masukan angka yang dicari : ";
	cin>>key;
	kiri=0;
	kanan=n-1;
	
	while(kiri<=kanan)
	{
		tengah=(kiri+kanan)/2;
		
		if(key==arr[tengah])
		{
			isktm=true;
			break;
		}
		else if(key<arr[tengah])
		{
			kanan=tengah-1;
		}
		else
		{
			kiri=tengah+1;
		}
	}
	if(isktm==true)
	cout<<"Angka ditemukan ";
	else
	cout<<"Angka tidak ditemukan "<<"\n"<<endl;
	
	return 0;
}
