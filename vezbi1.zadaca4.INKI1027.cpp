// zadaca 4
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;
int main() {
	int matrix[10][10], n, m, num, sumOdd = 0, sumEven = 0;
	
	cout<<"\nVnesete gi dolzinite na matricata (n x m):\n";
	cin>>n>>m;
	
	cout<<"\nVnesete ja matricata:\n";
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			cin>>num;
			matrix[i][j] = num;
	}
	
	cout<<"\nMatricata e: \n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<matrix[i][j]<<" ";
			
			if(matrix[i][j] % 2 == 0) 
				sumEven += matrix[i][j];
			else 
				sumOdd += matrix[i][j];
		}
		cout<<endl;
	}
	cout<<"\nSumata na parnite broevi e: "<<sumEven;
	cout<<"\nSumata na neparnite broevi e:"<<sumOdd;
	return 0;
}
