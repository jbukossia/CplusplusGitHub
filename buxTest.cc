#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;//not good 
//bool fn (int i,int j) { return (i<j); }

int main() {
default_random_engine generator;
uniform_real_distribution<double> distribution(-1.0,1.0); 	//rand between 0.0 and 1.0 for quarter version
vector<int> v(100);
list<int> ll;

for(auto it=v.begin(); it != v.end(); ++it) {
	*it = 100*distribution(generator);
	cout << ' ' << *it;
	}
cout << endl;

cout << "=====================================================================================" << endl;

sort(v.begin(), v.end());    //, fn);
cout << "my sorted vec contains:" << endl;

copy(v.begin(), v.end(),ostream_iterator<int>(cout," "));

cout << "=======================================================================================" << endl;

copy(v.begin(), v.end(), inserter(ll, ll.begin()));

copy(ll.begin(), ll.end(),ostream_iterator<int>(cout," "));

return 0;
}
