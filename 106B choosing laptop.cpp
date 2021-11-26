#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main (void){

	int n, s, r, h, c, index; 
	// vector<int> speed , ram, hdd, cost;
	vector <vector<int>> lap;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		vector <int> temp;
		cin >>s >>r >>h >>c;
        temp.emplace_back(s);
        temp.emplace_back(r);
        temp.emplace_back(h);
        temp.emplace_back(c);

		lap.emplace_back(temp);
	}

	for (int i = 0 ; i <n ; i ++){
		for (int j = 0 ;j < n; j++ ){
            if (lap[i][0]>lap[j][0] 
                &&lap[i][1]>lap[j][1]
                &&lap[i][2]>lap[j][2])
            {
                
                lap[j][0] = 0;
                lap[j][1] = 0;
                lap[j][2] = 0;
                lap[j][3] = 0;
            
            }
        }
	}
int price = 1001;
    for (int i = 0 ; i < n ; i++){
        if (lap[i][3] < price && lap[i][3]!=0){
            index = i+1; 
            price = lap[i][3];
            }
    }

cout << index;
return 0; 
}
