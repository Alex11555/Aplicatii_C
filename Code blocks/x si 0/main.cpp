#include <iostream>
#include <vector>
using namespace std;
const int WINNING_POSITION = 10;
const int NEUTRAL_POSITION = 0;
const int LOSING_POSITION = -10;
enum playerT{Human,Computer};
typedef int moveT;
struct stateT
{
vector< vector<char> >board;
playerT whoseTurn;
int turnsTaken;
};
const int MAX_DEPTH = 10000;
const playerT FIRST_PLAYER = Human;
int min_move(stateT state, int depth , int &bestMove);
int max_move(stateT state, int depth , int &bestMove);
moveT MiniMax(stateT state);
int MaxMove(stateT state,moveT &bestMove);
int MinMove(stateT state,moveT &bestMove);
int min_value(stateT state, int alpha , int beta, int depth, int & bestMove );
int max_value(stateT state, int alpha , int beta, int depth, int & bestMove );
int min(int a, int b);
int max(int a , int b);
moveT AlphaBetaMove(stateT state, int depth);
void GiveInstructions();
moveT FindBestMove(stateT state, int depth , int &pRating);
int EvaluatePosition(stateT state, int depth);
stateT NewGame();
void DisplayGame(stateT state);
void DisplayMove(moveT move);
char PlayerMark(playerT player);
moveT GetUserMove(stateT state);
moveT ChooseComputerMove(stateT state);
void GenerateMoveList(stateT , vector<moveT> & moveList);
bool MoveIsLegal(moveT move, stateT state);
void MakeMove(stateT &state, moveT move);
void RetractMove(stateT & state, moveT move);
bool GameIsOver(stateT state);
void AnnounceResult(stateT state);
playerT WhoseTurn(stateT state);
playerT Opponent(playerT player);
int EvaluateStaticPosition(stateT state);
bool CheckForWin(stateT state, playerT player);
bool CheckForWin(vector< vector<char> > &board, char mark);
bool CheckLine(vector< vector<char> > &board,char mark, int row, int col, int dRow,
int dCol);
stateT NewGame() {
stateT state;
//state.board.resize(3, 3);
for (int i = 0; i < 3; i++) {
vector<char> ch;
for (int j = 0; j < 3; j++) {
ch.push_back(' ');
}
state.board.push_back(ch);
}
state.whoseTurn = FIRST_PLAYER;
state.turnsTaken = 0;
return state;
}
//Display the state of the game
void DisplayGame(stateT state) {
if (GameIsOver(state)) {
cout << "pozitia finala arata asa:" << endl << endl;
} else {
cout << "jocul acum arata asa:" << endl << endl;
}
for (int i = 0; i < 3; i++) {
if (i != 0) cout << "---+---+---" << endl;
for (int j = 0; j < 3; j++) {
if (j != 0) cout << "|";
cout << " " << state.board[i][j] << " ";
}
cout << endl;
}
cout << endl;
}
//The place , that is the square to move to
void DisplayMove(moveT move)
{
cout<<"voi muta catre "<<move<<endl;
}
//Getting the move of the user , the square it will move to
moveT GetUserMove(stateT state)
{
cout<<"mutarea ta."<<endl;
moveT move;
while(true)
{
cout<<"in ce patrat? ";
cin >> move;
if(MoveIsLegal(move,state)) break;
cout<<"aceasta mutare nu este permisa.incercati din nou."<<endl;
}
return move;
}
//Getting the move of the computer
moveT MiniMax(stateT state)
{
moveT bestMove;
int i = MaxMove(state,bestMove);
cout<<"i este "<<i<<endl;
return bestMove;
}
int MaxMove(stateT state, moveT &bestMove)
{
if(GameIsOver(state))
{
return EvaluateStaticPosition(state);
}
vector<moveT> moveList;
GenerateMoveList(state, moveList);
int nMoves = moveList.size();
int v = -1000;
for(int i = 0 ;i<nMoves; i++)
{
moveT move = moveList[i];
MakeMove(state, move);
int curRating = MinMove(state,bestMove);
if (curRating > v)
{
v = curRating;
bestMove = move;
}
RetractMove(state, move);
}
return v;
}
int MinMove(stateT state, moveT &bestMove)
{
if(GameIsOver(state))
{
return EvaluateStaticPosition(state);
}
vector<moveT>moveList;
GenerateMoveList(state, moveList);
int nMoves = moveList.size();
int v = 1000;
for(int i = 0 ; i<nMoves; i++)
{
moveT move = moveList[i];
MakeMove(state , move);
int curRating = MaxMove(state,bestMove);
if(curRating < v)
{
v = curRating;
}
RetractMove(state, move);
}
return v;
}
moveT ChooseComputerMove(stateT state)
{
int rating ;
cout<<"mutarea mea."<<endl;
return MiniMax(state);
}
void GenerateMoveList(stateT state, vector<moveT> & moveList)
{
for(int i = 1; i <=9 ; i++)
{
moveT move = moveT(i);
if(MoveIsLegal(move, state))
{
moveList.push_back(moveT(i));
}
}
}
bool MoveIsLegal(moveT move, stateT state)
{
if(move < 1 || move > 9) return false;
int row = (move - 1) /3;
int col = (move -1) %3;
return state.board[row][col] == ' ';
}
//Returning the move of the player in character form
char PlayerMark(playerT player)
{
if(player == FIRST_PLAYER)
{
return 'X';
}
else
{
return 'O';
}
}
playerT Opponent(playerT player)
{
return (player == Human) ? Computer : Human;
}
//If a human
void MakeMove(stateT &state, moveT move)
{
int row = (move - 1) / 3;
int col = (move - 1) %3;
state.board[row][col] = PlayerMark(state.whoseTurn);
state.whoseTurn = Opponent(state.whoseTurn);
state.turnsTaken++;
}
void RetractMove(stateT & state, moveT move)
{
int row = (move - 1) /3;
int col = (move -1) % 3;
state.board[row][col] = ' ';
state.whoseTurn = Opponent(state.whoseTurn);
state.turnsTaken--;
}
bool GameIsOver(stateT state)
{
return (state.turnsTaken == 9 || CheckForWin(state, state.whoseTurn)||
CheckForWin(state, Opponent(state.whoseTurn)));
}
playerT WhoseTurn(stateT state)
{
return state.whoseTurn;
}
int EvaluateStaticPosition(stateT state)
{
    if(CheckForWin(state, state.whoseTurn))
{
return WINNING_POSITION;
}
if(CheckForWin(state, Opponent(state.whoseTurn)))
{
return LOSING_POSITION;
}
return NEUTRAL_POSITION;
}
bool CheckForWin(stateT state, playerT player)
{
if(state.turnsTaken < 5) return false;
return CheckForWin(state.board, PlayerMark(player));
}
//Checking for win
bool CheckForWin(vector< vector<char> > & board, char mark)
{
for(int i = 0 ; i < 3; i++)
{
if(CheckLine(board, mark, i,0,0,1)) return true;
if(CheckLine(board, mark, 0,i,1,0)) return true;
}
if(CheckLine(board, mark, 0,0,1,1)) return true;
return CheckLine(board, mark, 2, 0, -1, 1);
}
//Checking for win
bool CheckLine(vector<vector<char> > & board, char mark , int row , int col,int dRow,
int dCol)
{
for(int i = 0 ; i < 3; i++)
{
if(board[row][col] != mark) return false;
row += dRow;
col += dCol;
}
return true;
}
//Announce the result of the game
void AnnounceResult(stateT state) {
DisplayGame(state);
if (CheckForWin(state, Human)) {
cout << "ai castigat!" << endl;
} else if (CheckForWin(state, Computer)) {
cout << "am castigat!" << endl;
} else {
cout << "Joc finalizat fara castig" << endl;
}
}
//Give instructions to the player
void GiveInstructions()
{
cout<<"bine ati venit la x si 0! obiectul jocului este "<<endl;
cout<<"sa aliniem trei simboluri intr-un rand"<<endl;
cout<<"vertical , orizontal , sau diagonal"<<endl;
cout<<"vei fi "<<PlayerMark(Human)<<" si voi fi"<<PlayerMark(Computer)<<"."<<endl;
}
int main()
{
GiveInstructions();
stateT state = NewGame();
moveT move;
while(!GameIsOver(state))
{
DisplayGame(state);
switch(WhoseTurn(state))
{
    case Human:
move = GetUserMove(state);
break;
case Computer:
move = ChooseComputerMove(state);
DisplayMove(move);
break;
}
MakeMove(state, move);
}
AnnounceResult(state);
return 0;
}

