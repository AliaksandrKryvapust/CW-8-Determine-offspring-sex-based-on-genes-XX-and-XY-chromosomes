#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string chromosomeCheck(const string& sperm) {
	return (sperm=="XY") ? "Congratulations! You're going to have a son." : "Congratulations! You're going to have a daughter.";
}
int main() {
	string str = { "XY"};
	chromosomeCheck(str);
}
