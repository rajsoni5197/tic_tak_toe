#include"C:\Users\DELL\Desktop\tic_tak_toe\code\header_file\Game.h"

Game::Game()
{
    this->io = InputOutput();
    gameStart.show(io);
    this->gameSetting = GameSetting(io);
    this->symbolOption = SymbolOptions();
    this->playerManager = PlayerManager(gameSetting.getPlayerCount(),this->io,this->symbolOption,this->gameSetting);
    this->board = Board(this->gameSetting.getBoardSize());
    this->round = Round(this->gameSetting.getRounds());
    this->chance = Chance(this->gameSetting.getPlayerCount());
    this->rank = Rank(this->playerManager.getPlayers());
    this->startGame();
}
int Game::playeARound()
{   this->board.clearBoard();
    
    
    while(1)
    {
        
        io.clearScreen();
        int currentChanceId = this->chance.getChance();
        
        Player& playerWithChance = this->playerManager.getPlayer(currentChanceId);
        string playerName = playerWithChance.getPlayerName();
        int playerMove;
        int playerMoveAllowed = playerWithChance.getPlayerMoveCount();
        
        io.outputText(" ");
        io.outputText(" ");
        io.drawBoard(this->board);
        
        io.outputText(" ");
        io.outputText(" ");
        io.outputText("It's "+playerName+" Chance");
        while(playerMoveAllowed--)
        {
           io.outputText(playerName+"make move");
           playerMove = playerWithChance.makeMove();
           while(!this->refree.validateMove(playerMove,this->board)) 
           {
               io.outputText("The place is already taken, incorrect move make move again)");
               playerMove = playerWithChance.makeMove();
           }
           this->board.markCell(playerMove,playerWithChance.getPlayerSymbol());
           this->io.drawBoard(this->board);

           int win =this->refree.win(this->board);
           if(win != -1)
           {
               this->io.outputText(" ");
               this->io.outputText(" ");
               this->io.outputText(playerWithChance.getPlayerName() + " win this round");
               for(int i = 0 ;i<= 1e9 ; i++){}
               return playerWithChance.getPlayerId();
               
           }
           if(this->refree.checkFull(this->board))
           {
               this->io.outputText(" ");
               this->io.outputText(" ");
               this->io.outputText("Its a Tie , no one win");
               for(int i = 0 ;i<= 1e9 ; i++){}
               return -1; 
           }
        }
        this->chance.next();  
    }
}
void Game::startGame()
{
    for(int i = 1 ; i <= this->round.getRound();i++)
    {
        this->io.clearScreen();
        this->io.outputText(" ");
        this->io.outputText(" ");
        this->io.outputText(" ");
        this->io.outputText(" ");
        this->io.outputText(" ");
        cout<<"\t\t\t This is Round "<<i;
        for(int j = 0 ; j<= 1e9 ; j++ ){};
        int roundResult = playeARound();
        
        if(roundResult != -1)
        {
            this->playerManager.getPlayer(roundResult).incrementScore();
            this->rank.updateRank();
            for(int i = 0 ;i < 1e9 ;i++){

            }
        }
    }
    
    this->endGame();
}
void Game:: endGame(){
    
    this->io.clearScreen();
    this->gameOver.show(io,rank);
    
    this->io.outputText("Enter to end");
    this->io.outputText(" ");
    io.inputText();
    exit(0);
}