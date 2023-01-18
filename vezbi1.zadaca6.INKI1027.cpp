// zadaca 6 
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;

int main() {
	int matrix[10][10], n, m, num, kRast=0, kOpag=0;
	cout<<"\nVnesete gi dolzinite na matricata (n x m):\n";
	cin>>n>>m;
	
	cout<<"\nVnesete ja matricata:\n";
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			cin>>num;
			matrix[i][j] = num;
	}
	cout<<"\nMatricata e:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<matrix[i][j]<<" ";
		} 
		cout<<endl;
	}
	
	for(int i=0; i<n; i++) {
		for(int j=1; j<m; j++) {
			if(matrix[i][j] > matrix[i][j-1])
			kRast++;
			else if(matrix[i][j] < matrix[i][j-1])
			kOpag++;
		}
		if(kRast == m-1)
			cout<<"\n -Redot "<<i<<" e strogo rastecki.";
		else if(kOpag == m-1)
			cout<<"\n -Redot "<<i<<" e strogo opagjacki.";
		else
			cout<<"\n -Redot "<<i<<" ne e nitu strogo rastecki nitu strogo opagjacki.";
			kRast = 0;
			kOpag = 0;
	}
	cout<<endl;
	for(int j=0; j<m; j++) {
		for(int i=1; i<n; i++) {
			if(matrix[i][j] > matrix[i-1][j])
			kRast++;
			else if(matrix[i][j] < matrix[i-1][j])
			kOpag++;
		}
		if(kRast == n-1)
			cout<<"\n -Kolonata "<<j<<" e strogo rastecka.";
		else if(kOpag == n-1)
			cout<<"\n -Kolonata "<<j<<" e strogo opagjacka.";
		else
			cout<<"\n -Kolonata "<<j<<" ne e nitu strogo rastecka nitu strogo opagjacka.";
			kRast = 0;
			kOpag = 0;
	}
	return 0;
}
