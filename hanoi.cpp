#include <bits/stdc++.h>

using namespace std;

void hanoi (int, int);
void move(int, int);

void hanoi (int diskNum, int adress){
	if (diskNum==0) return;
	hanoi(diskNum -1, -adress);
	move(diskNum, adress);
	hanoi(diskNum -1, -adress);
}

void move(int diskNum, int adress){
	cout << "moving disk: " << diskNum;
	if (adress > 0) cout << "--->" << endl;
	if (adress < 0) cout << "<---" << endl;
}

int main(int argc, char* argv[]){
	hanoi(5, 1);

	return 0;
}
