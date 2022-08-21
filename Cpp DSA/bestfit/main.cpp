#include<bits/stdc++.h>
using namespace std;

void bestFit(int prtn[], int m, int processSize[], int n)
{
	int allocation[n];
	memset(allocation, -1, sizeof(allocation));
	for (int i=0; i<n; i++)
	{
		int bestIdx = -1;
		for (int j=0; j<m; j++)
		{
			if (prtn[j] >= processSize[i])
			{
				if (bestIdx == -1)
					bestIdx = j;
				else if (prtn[bestIdx] > prtn[j])
					bestIdx = j;
			}
		}
		if (bestIdx != -1)
		{
			allocation[i] = bestIdx;
			prtn[bestIdx] -= processSize[i];
		}
	}

	cout << "\nProcess No.\tProcess Size\tPartition Allocated\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << i+1 << "\t\t" << processSize[i] << "\t\t";
		if (allocation[i] != -1)
			cout << allocation[i] + 1;
		else
			cout << "Not Allocated";
		cout << endl;
	}
}

int main()
{
	int prtn[] = {25, 15, 20, 50};
	int processSize[] = {48, 25, 20, 25};
	int m = sizeof(prtn)/sizeof(prtn[0]);
	int n = sizeof(processSize)/sizeof(processSize[0]);
	cout<<"\t\tBEST FIT ALLOCATION STRATEGY\t\t"<<endl;
	bestFit(prtn, m, processSize, n);
	return 0 ;
}
