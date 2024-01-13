#include <iostream>
using namespace std;
bool checkRows(char symbol);
bool checkColumns(char symbol);
bool checkDiagonals(char symbol);
void print();
void header();
void over();
bool isWinner(char symbol);
const int gridSize = 3;
char board[gridSize][gridSize] = {{'0', '1', '2'},
{'3', '4', '5'},
{'6', '7', '8'}
};

main()

{header();
cout<<endl;
     print();
cout<<endl;
string name,name1,name2;
cout<<"Enter name for player 1 ";
cin>>name1;
cout<<"Enter name for player 2 ";
cin>>name2;

    char symboll='X';
    for(int i=0;i<9;i++)
    {
        if(i%2==0)
        {
         symboll='X';
         name=name1;
        }
else{
    symboll='0';
    name=name2;
}
    
    int move;
   
   
    cout<<"Enter "<<name<<" move ";
    cin>>move;
    if(move==1)
    {
        board[0][1]=symboll;
    }
    if(move==0)
    {
        board[0][0]=symboll;
    }
    if(move==2)
    {
        board[0][2]=symboll;
    }
    if(move==3)
    {
        board[1][0]=symboll;
    }
    if(move==4)
    {
        board[1][1]=symboll;
    }
    if(move==5)
    {
        board[1][2]=symboll;
    }
    if(move==6)
    {
        board[2][0]=symboll;
    }
    if(move==7)
    {
        board[2][1]=symboll;
    }
    if(move==8)
    {
        board[2][2]=symboll;
    }
    system("cls");
    header();
    cout<<endl;
    print();
    
    }
over();
if (isWinner('0'))
{
    cout<<endl;
cout << "Winner is "<<name2;
}
 if (isWinner('X'))
{  cout<<endl;
cout << "Winner is "<<name1;
}
}

void print()
{
     cout<<board[0][0]<<"   |"<<"\t"<<board[0][1]<<"   |   "<<board[0][2]<<endl;
    cout<<"------------------"<<endl;
    cout<<board[1][0]<<"   |"<<"\t"<<board[1][1]<<"   |   "<<board[1][2]<<endl;
     cout<<"------------------"<<endl;
    cout<<board[2][0]<<"   |"<<"\t"<<board[2][1]<<"   |   "<<board[2][2]<<endl;
}
bool checkRows(char symbol){
int count = 0;
for(int row = 0; row < gridSize; row = row + 1)
{
count = 0;
for(int col = 0; col < gridSize; col = col + 1)
{
if(board[row][col] == symbol){
count = count + 1;
}
}
if(count == gridSize)
{
return 1;
}
}
return 0;
}
bool checkColumns(char symbol){
int count = 0;
for(int col = 0; col < gridSize; col = col + 1)
{
count = 0;
for(int row = 0; row < gridSize; row = row + 1)
{
if(board[row][col] == symbol){
count = count + 1;
}
}
if(count == gridSize)
{
return 1;
}
}
return 0;
}
bool checkDiagonals(char symbol){
int count = 0;
for (int idx = 0; idx < gridSize; idx = idx + 1){
if (board[idx][idx] == symbol){
count = count + 1;
}
}
if (count == gridSize){
return 1;
}
count = 0;
for (int row = 0, col = 2; row < gridSize; row++, col--){
if (board[row][col] == symbol){
count = count + 1;
}
}
if (count == gridSize){
return 1;
}
return 0;
}
bool isWinner(char symbol)
{
if(checkRows(symbol) || checkColumns(symbol) || checkDiagonals(symbol))
{
return 1;
}
else
{
return 0;
}
}
void header(){
cout<<" _____ _        _____            _____ "<<endl;         
cout<<"|_   _(_)      |_   _|          |_   _|  "<<endl;       
cout<<"  | |  _  ___    | | __ _  ___    | | ___   ___ "<<endl;  
cout<<"  | | | |/ __|   | |/ _` |/ __|   | |/ _ \\ / _ \\"<<endl;  
cout<<"  | | | | (__    | | (_| | (__    | | (_) |  __/"<<endl;  
cout<<"  \\_/ |_|\\___|   \\_/\\__,_|\\___|   \\_/\\___/ \\___|"<<endl;  
}                                             
       
       void over(){

cout<<" _____                        _____  "<<endl;              
cout<<"|  __ \\                      |  _  |  "<<endl;            
cout<<"| |  \\/ __ _ _ __ ___   ___  | | | |_   _____ _ __ "<<endl;
cout<<"| | __ / _` | '_ ` _ \\ / _ \\ | | | \\ \\ / / _ \\ '__|"<<endl;
cout<<"| |_\\ \\ (_| | | | | | |  __/ \\ \\_/ /\\ V /  __/ |   "<<endl;
cout<<" \\____/\\__,_|_| |_| |_|\\___|  \\___/  \\_/ \\___|_|   "<<endl;
       }