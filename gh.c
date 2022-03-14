#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    std::clock_t start,end;
    start = std::clock();
	int count, i, arr[30], num, first, last, middle,flag=-1;
	double extime;
	cout<<"how many elements would you like to enter?:";
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": ";
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:";
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n";
		 flag=0;
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }
        if(flag==-1)
	{
	   cout<<num<<" not found in the array \n";
	}
	end = std::clock();
	extime=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<"EXECUTION TIME FOR THE BINARY SEARCH IS  "<<extime<<" SECONDS. ";
	return 0;
}
