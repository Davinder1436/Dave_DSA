#include<iostream>
#include<vector>
#include<map>
using namespace std;

void helper(int r,int c,vector<vector<char>> &a, map<pair<int,int>,map<int,int>> &mp,vector<map<int,int>> &row,vector<map<int,int>> &col)
{
    if(r==9&&c==9){
        for(auto it:a){
            for(auto i:it){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(c==9){
        helper(r+1,0,a,mp,row,col);
        return;
    }
    if(a[r][c]!='.'){
        helper(r,c+1,a,mp,row,col);
        return;
    }
    for(int i=1;i<=9;i++){
            if(!mp[{r/3,c/3}][i] and !row[r][i] and !col[c][i]){
                mp[{r/3,c/3}][i]=1;
                row[r][i]=1;
                col[c][i]=1;
                a[r][c]= i + '0';
                helper(r,c+1,a,mp,row,col);
                mp[{r/3,c/3}][i]=0;
                row[r][i]=0;
                col[c][i]=0;
                a[r][c]= '.';
            }
        }
    

}
void suduko_solver(vector<vector<char>> &a){
    //pair<int,int> stores coordinate of subgrid
    map<pair<int,int>,map<int,int>> grid;
    vector<map<int,int>> row(9);
    vector<map<int,int>> col(9);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(a[i][j]!='.'){
                grid[{i/3,j/3}][a[i][j]-'0'] = 1;// grid[{i/3,j/3}] represent second element of grid
                row[i][a[i][j]-'0']= 1;
                col[j][a[i][j]-'0']= 1;
            }
            
        }
    }
    helper(0,0,a,grid,row,col);

    
    }
    


int main(){


   
    vector<vector<char> > suduko = {{'5','3','.','.','7','.','.','.','.'}, {'6','.','.','1','9','5','.','.','.'}, {'.','9','8','.','.','.','.','6','.'}, 
                               {'8','.','.','.','6','.','.','.','3'}, {'4','.','.','8','.','3','.','.','1'}, {'7','.','.','.','2','.','.','.','6'}, 
                               {'.','6','.','.','.','.','2','8','.'}, {'.','.','.','4','1','9','.','.','5'}, {'.','.','.','.','8','.','.','7','9'}};
    suduko_solver(suduko);
    return 0;
}
