#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class temp {
    char a;
public:
    temp() : a('a') { }
    temp(char c) : a(c) { }
};

void increasingQueue(vector<int>& vec){
	int n = vec.size();
	queue<int> q;
	vector<int> firstSmallerToLeft(n, -1);
	vector<int> firstSmallerToRight(n, -1);
	for(int i=0;i<n;i++){
		while(!q.empty() && vec[q.front()] >= vec[i]){
			int val = q.front();
			q.pop();
			firstSmallerToRight[val] = vec[i];
		}
		if(!q.empty()) firstSmallerToLeft[i] = vec[q.back()];
		q.push(i);
	}
    cout << "Queue Contains:\n";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
	cout << "\nFirst Smaller To Left:\n";
	for(auto val: firstSmallerToLeft) cout << val << " ";
	cout << "\nFirst Smaller To Right:\n";
	for(auto val: firstSmallerToRight) cout << val << " ";
}

void decreasingQueue(vector<int>& vec){
    int n = vec.size();
	queue<int> q;
	vector<int> firstLargerToLeft(n, -1);
	vector<int> firstLargerToRight(n, -1);
	for(int i=0;i<n;i++){
		while(!q.empty() && vec[q.front()] <= vec[i]){
			int val = q.front();
			q.pop();
			firstLargerToRight[val] = vec[i];
		}
		if(!q.empty()) firstLargerToLeft[i] = vec[q.back()];
		q.push(i);
	}
    cout << "Queue Contains:\n";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
	cout << "\nFirst Smaller To Left:\n";
	for(auto val: firstLargerToLeft) cout << val << " ";
	cout << "\nFirst Smaller To Right:\n";
	for(auto val: firstLargerToRight) cout << val << " ";
}

int main(){
    vector<int> v {5, 3, 1, 2, 4};
    cout << "Using Increasing Queue:\n";
    increasingQueue(v);
    cout << "\nUsing Decreasing Queue:\n";
    decreasingQueue(v);
    return 0;
}