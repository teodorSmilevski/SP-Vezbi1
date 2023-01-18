// zadaca 2
// Teodor Smilevski INKI1027
#include <iostream>
using namespace std;
int main() {
	int matrix[10][10], n, m, temp, num;
	int max, iMax, jMax;
	int min, iMin, jMin;
	
	cout<<"\nVnesete gi dolzinite na matricata (n x m):\n";
	cin>>n>>m;
	
	cout<<"\nVnesete ja matricata:\n";
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) {
			cin>>num;
			matrix[i][j] = num;
	}
		
	max = matrix[0][0];
	iMax = 0;
	jMax = 0;
	min = matrix[0][0];
	iMin = 0;
	jMin = 0;
	cout<<"\nMatricata pred transofrmacija:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cout<<matrix[i][j]<<" ";
			if(max < matrix[i][j]) {
				max = matrix[i][j];
				iMax = i;
				jMax = j;
			}
			else if(min > matrix[i][j]) {
				min = matrix[i][j];
				iMin = i;
				iMax = j;
			}	
		}	
		cout<<endl;
	}
	cout<<"\nMaksimalnata vrednost e: "<<max<<", a minimalnata e: "<<min<<"\n";
	temp = matrix[iMax][jMax];
	matrix[iMax][jMax] = matrix[iMin][jMin];
	matrix[iMin][jMin] = temp;
	
	cout<<"\nMatricata so zamenati mesta na max i min:\n";
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++)
		cout<<matrix[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}
