/* 0-1 Knapsack problem */
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int t[1002][1002];

int findMaxValueKnapsack(vector<int> wt, vector<int> val, int W, int n)
{
    for (int i= 0; i < n; i++)
    {
        for (int j = 0; j < W; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;
    }
        
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < W+1; j++)
        {
            if (wt[i-1] <= j)
            {
                t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else if (wt[i-1] > j)
            {
                t[i][j] = t[i-1][j];
            }
        }    
    }
    return t[n][W];
}
int main() {
	//code
	int T, N, W, max = 0;
	
	cin >> T;
	while (T > 0)
	{
	    vector<int> wt;
	    vector<int> value;
	    cin >> N >> W;
	    for (int i=0 ; i < N; i++)
	    {
	        int v;
	        cin >> v;
	        value.push_back(v);
	    }
	    for (int i=0 ; i < N; i++)
	    {
	        int w;
	        cin >> w;
	        wt.push_back(w);
	    }
	    
	    max = findMaxValueKnapsack(wt, value, W, N);
	    cout << max << endl;
	    T--;
	}
	return 0;
}
