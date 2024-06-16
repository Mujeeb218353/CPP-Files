#include<iostream>
#define row 4
#define col 4
void printBoard(int queen[row][col]);
bool placeQueens(int queen[row][col],int Col);
bool isSafe(int queen[row][col],int Row,int Col);
using namespace std;
void printBoard(int queen[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<queen[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool placeQueens(int queen[row][col],int Col){
    if (Col >= col){ 
			return true;
	}
    for(int i=0;i<row;i++){
        if(isSafe(queen,Col,i)){
            queen[Col][i]=1;
        }
        if(placeQueens(queen,col+1)){
            return true;
        }
        cout<<endl;
        printBoard(queen);
        cout<<endl;
        queen[col][i] = 0;
        cout<<"After Backtracking...."<<endl;
        printBoard(queen);
        cout<<endl;
    }
    return false;
}
bool isSafe(int queen[row][col],int Row,int Col){
    for(int i=0;i<col;i++){
        if(queen[Col][i]==1){
           return false;
        }
    }
    for(int i=Row;i>=0;i--){ //Loop for Upper-Right Diagonal....
        for(int j=0;j<row;j++){
            if(queen[Col][i]==1){
               return false;
            }
        }
        
    }
    for(int i=Col,j=row;i>=0,j>=0;i--,j--){  //Loop for Upper-Left Diagonal....
            if(queen[Col][i]==1){
               return false;
            } 
        }
     for(int i = Row, j = Col; i < row && j >= 0; i++, j--){ // Loop for Lower-Left Diagonal
        if(queen[i][j] == 1){
           return false;
        }
     }
    return true;
}
int main(){
    int queen[row][col] ={ 
                           {0,1,0,0},
                           {0,0,0,0},
                           {0,0,0,0},
                           {0,0,0,0}  
                                      };
    printBoard(queen);
    if(placeQueens(queen,1)==false){
        cout<<"Solution Doesn't exist!!!";
    }else{
        printBoard(queen);
    }
    return 0;
}