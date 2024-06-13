#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int cn = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for(int i = 0; i < seats.size(); i++){
        	cn += abs(seats[i] - students[i]);
        }
        return cn;
    }
};

int main()
{
	int n; cin >> n;
	vector<int> seats(n), students(n);
	for(auto &i : seats) cin >> i;
	for(auto &i : students) cin >> i;
	
	Solution sol;
	cout << sol.minMovesToSeat(seats, students) << endl;
}