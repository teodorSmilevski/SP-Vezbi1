// zadaca 7
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;

void insertMatrix(int matrix[10][10], int iEl, int jEl) {
	int num;
	
	cout<<"\n -Vnesete gi elementite vo matricata:\n";
	for(int i=0; i<iEl; i++)
		for(int j=0; j<jEl; j++) {
			cin>>num;
			matrix[i][j] = num;
		}
}
void printMatrix(int matrix[10][10], int n, int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
		cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
}

int main() {
	int firstMatrix[10][10], secondMatrix[10][10], n, m, x, y, k=0;
	cout<<"\nVnesete gi dolzinite za prvata matrica: \n";
	cin>>n>>m;
	insertMatrix(firstMatrix, n, m);
	cout<<"\nVnesete gi dolzinite za vtorata matrica: \n";
	cin>>x>>y;
	insertMatrix(secondMatrix, x, y);
	
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(firstMatrix[i][j] == secondMatrix[i][j])
				k++;
			}
		}
		if(k == (n*y))
		cout<<"\n== Matricite se ednakvi ==\n";
		else
		cout<<"\n== Matricite ne se ednakvi ==\n";
	
	
	cout<<"\nMatrica 1:\n";
	printMatrix(firstMatrix, n, m);
	cout<<"\nMatrica 2:\n";
	printMatrix(secondMatrix, x, y);
	
	return 0;
}
