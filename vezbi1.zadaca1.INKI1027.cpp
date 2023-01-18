// zadaca 1
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;

void insertMatrix(int matrix[10][10], int n, int m) {
	int num;
	
	cout<<"\nVnesete gi elementite vo matricata:\n";
	
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			cin>>num;
			matrix[i][j] = num;
		}
	}

void printMatrix(int matrix[10][10], int n, int m) {
	cout<<"\nMatricata izgleda vaka:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
		cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
}

void findMax(int matrix[10][10], int n, int m) {
	int max = matrix[0][0];
	int iMax = 0, jMax = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(max < matrix[i][j]) {
				max = matrix[i][j];
				iMax = i;
				jMax = j;
			}
		}
	}
	cout<<"\nMaksimalna vrednost e "<<max<<" na pozicija ["<<iMax<<"]["<<jMax<<"].\n";
}

void findMin(int matrix[10][10], int n, int m) {
	int min = matrix[0][0];
	int iMin = 0, jMin = 0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(min > matrix[i][j]) {
				min = matrix[i][j];
				iMin = i;
				jMin = j;
			}
		}
	}
	cout<<"\nMinimalnata vrednost e "<<min<<" na pozicija ["<<iMin<<"]["<<jMin<<"].\n";
}

int findSum(int matrix[10][10], int n, int m) {
	int sum = 0;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
			sum += matrix[i][j];
	}
	
	return sum;
}

float averageOfAll(int matrix[10][10], int n, int m) {
	int sum = 0, size = n*m;
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
			sum += matrix[i][j];
	}
	
	return (float)sum/size;
}

int main() {
	int matrix[10][10], n, m;
	cout<<"\nVnesete gi dolzinite na matricata (n x m):\n";
	cin>>n>>m;
	insertMatrix(matrix, n, m);
	printMatrix(matrix, n, m);
	findMax(matrix, n, m);
	findMin(matrix, n, m);
	cout<<"\nSumata e: "<<findSum(matrix, n, m);
	cout<<"\nProsecnata vrednost e: "<<averageOfAll(matrix, n, m);
	
	return 0;
}





