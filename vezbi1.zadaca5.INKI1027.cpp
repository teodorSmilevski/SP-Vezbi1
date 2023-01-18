// zadaca 5
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;
void checkForDuplicates(int matrix[10][10], int n, int m, int num) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(num == matrix[i][j]) {
				matrix[i][j] = 0;
			}
		}
	}
}
int main() {
	int matrix[10][10], newMatrix[10][10], n, m, num;
	cout<<"\nVnesete gi dolzinite na matricata (n x m):\n";
	cin>>n>>m;
	
	cout<<"\nVnesete ja matricata:\n";
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			cin>>num;
			matrix[i][j] = num;
	}
	cout<<"\nMatricata so duplikati:\n";
	for(int i=0; i<n; i++) {	
		for(int j=0; j<m; j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0; i<n; i++) {	
		for(int j=0; j<m; j++) {
			newMatrix[i][j] = matrix[i][j]; 
			checkForDuplicates(matrix,  n,  m, newMatrix[i][j]);
		}
	}
	
	cout<<"\nMatricata bez duplikati:\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j < m; j++) {
			cout<<newMatrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
