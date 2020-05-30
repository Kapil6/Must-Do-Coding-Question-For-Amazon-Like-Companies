#include <iostream>
#include <vector>
using namespace std;

/*Using summation (time taken - 0.51s)*/
int findMissingNumber(vector<int> arr, int n)
{
    int miss_no = 0, miss_sum = 0, actual_sum = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        miss_sum += arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        actual_sum += i;    
    }
    
    miss_no = actual_sum - miss_sum;
    
    return miss_no;
}

/*Using exor operator (time taken - 0.57s)*/
/*
int findMissingNumber(vector<int> arr, int n)
{
    int miss_no = 0, miss_exor = 0, actual_exor = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        miss_exor ^= arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        actual_exor ^= i;    
    }
    
    miss_no = actual_exor ^ miss_exor;
    
    return miss_no;
}
*/

int main() {
	int t,n, m = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
	      vector<int> arr;
	      cin >> n;
	      for (int j = 0; j < n-1; j++)
	      {
	          int num;
	          cin >> num;
	          arr.push_back(num);
	      }
	      m = findMissingNumber(arr, n);
	      cout << m << endl;
	}
	return 0;
}
