#include <iostream>
#include <stdio.h>
#include <vector>
#include <functional>
#include <queue>
using namespace std;
int main() {
	int time, M, X;
	priority_queue<long long, vector<long long>, greater<long long>> station;
	scanf("%d %d", &M, &X);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &time);
		if (station.size() != X) station.push(time);
		else {
			long long temp = station.top(); station.pop();
			station.push(temp + time);
		}
	}
	while (station.size() > 1) station.pop();
	printf("%lld\n", station.top());
	return 0;
}
