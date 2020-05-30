/*Activity Selection problem*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortbysecond(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int max_num_of_activity(vector<pair<int,int>> activity_time)
{
    int max_count = 0, last_end_time = 0;
    sort(activity_time.begin(), activity_time.end(), sortbysecond);
    for (int i = 0; i < activity_time.size(); i++)
    {
        if (activity_time[i].first >= last_end_time)
        {
            last_end_time = activity_time[i].second;
            max_count++;
        } 
    }
    return max_count;
}

int main() {
	//code
	int t, m=0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
	    int n;
	    cin >> n;
	    vector<int> start_time;
	    vector<pair<int,int>> activity_time;
	    for (int j = 0; j < n; j++)
	    {
	        int num;
	        cin >> num; 
	        start_time.push_back(num);
	    }
	    for (int j=0; j < n; j++)
	    {
	        int num;
	        cin >> num;
	        activity_time.push_back(make_pair(start_time[j], num));
	    }
	    m = max_num_of_activity(activity_time);
	    cout << m << endl;
	}
	return 0;
}
