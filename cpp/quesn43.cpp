#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string str;
	cin >> str;
	unordered_set<int> s; //keeps track of unique elements. Inserts only if unique
	vector<char> ans;	  //duplicate array
	for (int i = 0; i < str.length(); i++)
	{
		if (s.insert(str[i]).second) //insert.second returns 1 if successfully inserted 0 if failure
		{
			ans.push_back(str[i]);
		}
	}

	for (auto c : ans)
		cout << c;
	cout << endl;
}

void solve2()
{
	string str;
	cin >> str;
	unordered_set<int> s;
	int j = 0;
	//Traverse through the string and if the current element is not seen before put it at available place in beginning. Reassign char to unique from beginning
	//Basically store all unique at beginning

	for (int i = 0; i < str.length(); i++)
	{
		if (s.insert(str[i]).second)
		{
			str[j] = str[i];
			j++;
		}
	}
	//delete all duplicates
	str.erase(str.begin() + j, str.end());

	for (auto it : str)
	{
		cout << it;
	}
}
int main()
{
	//Method 1
	solve();
	//Method 2 - Preferred O(n)
	solve2();
	return 0;
}