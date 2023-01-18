// zadaca 3 
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;

transformedMatrix(int num) {
	return (num/10)%10;
}

int main() {
	int matrix[10][10], n, m, num;
	
	cout<<"\nVnesete gi dolzinite na matricata (n x m):\n";
	cin>>n>>m;
	
	cout<<"\nVnesete ja matricata:\n";
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			cin>>num;
			matrix[i][j] = num;
	}
	cout<<"\nMatricata pred transformacija:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nMatricata posle transformacija:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<transformedMatrix(matrix[i][j])<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
