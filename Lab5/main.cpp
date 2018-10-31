#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>

using namespace std;

void heapify(vector<int> &arr)
{
	int length = arr.size();
	int i = arr.size() - 1;
	while (i > 0)
	{
		int j = i;
		int temp = ceil(double(j) / double(2)) - 1;
		while (temp >= 0 && arr[j] > arr[temp])
		{
			swap(arr[j], arr[temp]);
			j = temp;
			temp = ceil(double(j) / double(2)) - 1;
		}
		i--;
	}

}

void heapSort(vector<int> arr)
{
	int length = arr.size();
	int temp;
	for (int i = 0; i < length; i++)
	{
		heapify(arr);
		temp = arr[0];
		arr.erase(arr.begin());
		cout << temp << " ";
	}
}

int main()
{
	srand(time(0));
	vector<int> vec;
	int n = 100;
	for (int i = 0; i < n; i++)
	{
		vec.push_back(rand() % 201 - 100);
	}
	heapSort(vec);
	/*for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}*/
}