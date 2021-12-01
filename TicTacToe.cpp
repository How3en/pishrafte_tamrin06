#include <iostream>
#include <time.h>

using namespace std;

char game[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
int turn_counter;
int continues;
int k = 1;

void game_board(){

    system("cls");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        if(j == 0)
            cout << "\t\t\t";
            cout << " " << game[i][j] << " ";
            if(j != 2)
            cout << "|";}
            cout << "\n";
            if(i != 2)
            cout << "\t\t\t-----------\n";

}}

void player_selection(){

    int n;
    while (true){
    cout << "\n player " << k << " (" << player << ") : ";
    cin >> n;
    if (n > 9 || n < 0){
      cout << "not in range!\n";}
    if (n == 1)
    {   if (game[0][0] == '1'){
            game[0][0] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }

        else if (n == 2)
    {
        if (game[0][1] == '2'){
            game[0][1] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 3)
    {
        if (game[0][2] == '3'){
            game[0][2] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 4)
    {
        if (game[1][0] == '4'){
            game[1][0] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 5)
    {
        if (game[1][1] == '5'){
            game[1][1] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 6)
    {
        if (game[1][2] == '6'){
            game[1][2] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 7)
    {
        if (game[2][0] == '7'){
            game[2][0] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 8)
    {
        if (game[2][1] == '8'){
            game[2][1] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }
        else if (n == 9)
    {
        if (game[2][2] == '9'){
            game[2][2] = player;
            break;}
        else
        {
            cout << "not empty!";

        }
    }

    }
}

void swap_player(){

    if (player == 'X'){
        player = 'O';
        k = 2;}
    else{
        player = 'X';
        k = 1;}
}

int check_winner(){

           if((game[0][0] == 'X' && game[0][1] == 'X' && game[0][2] == 'X') ||
              (game[1][0] == 'X' && game[1][1] == 'X' && game[1][2] == 'X') ||
              (game[2][0] == 'X' && game[2][1] == 'X' && game[2][2] == 'X') ||
              (game[0][0] == 'X' && game[1][0] == 'X' && game[2][0] == 'X') ||
              (game[0][1] == 'X' && game[1][1] == 'X' && game[2][1] == 'X') ||
              (game[0][2] == 'X' && game[1][2] == 'X' && game[2][2] == 'X') ||
              (game[0][0] == 'X' && game[1][1] == 'X' && game[2][2] == 'X') ||
              (game[0][2] == 'X' && game[1][1] == 'X' && game[2][0] == 'X')){
              return 1;}

           if((game[0][0] == 'O' && game[0][1] == 'O' && game[0][2] == 'O') ||
              (game[1][0] == 'O' && game[1][1] == 'O' && game[1][2] == 'O') ||
              (game[2][0] == 'O' && game[2][1] == 'O' && game[2][2] == 'O') ||
              (game[0][0] == 'O' && game[1][0] == 'O' && game[2][0] == 'O') ||
              (game[0][1] == 'O' && game[1][1] == 'O' && game[2][1] == 'O') ||
              (game[0][2] == 'O' && game[1][2] == 'O' && game[2][2] == 'O') ||
              (game[0][0] == 'O' && game[1][1] == 'O' && game[2][2] == 'O') ||
              (game[0][2] == 'O' && game[1][1] == 'O' && game[2][0] == 'O')){
              return 2;}

           return -1;
}

void computer_selection (){

  srand(time(0));
  int computer_choice;
  while (true){
  computer_choice = rand()%9+1;

   if (computer_choice == 1)

    {   if (game[0][0] == '1'){
            game[0][0] = 'O';
            break;}
    }

        else if (computer_choice == 2)
    {
        if (game[0][1] == '2'){
            game[0][1] = 'O';
            break;}
    }
        else if (computer_choice == 3)
    {
        if (game[0][2] == '3'){
            game[0][2] = 'O';
            break;}
    }
        else if (computer_choice == 4)
    {
        if (game[1][0] == '4'){
            game[1][0] = 'O';
            break;}
    }
        else if (computer_choice == 5)
    {
        if (game[1][1] == '5'){
            game[1][1] = 'O';
            break;}
    }
        else if (computer_choice == 6)
    {
        if (game[1][2] == '6'){
            game[1][2] = 'O';
            break;}
    }
        else if (computer_choice == 7)
    {
        if (game[2][0] == '7'){
            game[2][0] = 'O';
            break;}
    }
        else if (computer_choice == 8)
    {
        if (game[2][1] == '8'){
            game[2][1] = 'O';
            break;}
    }
        else if (computer_choice == 9)
    {
        if (game[2][2] == '9'){
            game[2][2] = 'O';
            break;}
    }

}
}

void pvp(){

    game_board();
    while(true)
    {
        turn_counter++;
        player_selection();
        game_board();
        if (check_winner() == 1)
        {
            cout <<"player 1 Won!\n";
            break;
        }
        else if (check_winner() == 2)
        {
           cout << "player 2 Won!\n";
           break;
        }
        else if (check_winner() == -1 && turn_counter == 9)
        {
          cout << "game draw!\n";
          break;
        }
        swap_player();
     }
}

void pve(){

    game_board();
    while(true)
    {
        turn_counter++;
        player_selection();
        game_board();
        if (check_winner() == 1)
        {
            cout <<"player 1 Won!\n";
            break;
        }
        else if (check_winner() == 2)
        {
           cout << "player 2 Won!\n";
           break;
        }
        else if (check_winner() == -1 && turn_counter == 9)
        {
          cout << "game draw!\n";
          break;
        }
        computer_selection ();
        game_board();
                if (check_winner() == 1)
        {
            cout <<"player 1 Won!\n\n";
            break;
        }
        else if (check_winner() == 2)
        {
           cout << "player 2 Won!\n\n";
           break;
        }
        else if (check_winner() == -1 && turn_counter == 9)
        {
          cout << "game draw!\n\n";
          break;
        }

     }
}

int main(){


    int game_type;
    int continues;
    cout <<endl;
    cout << "\t\t\t----------- Welcome to TicTAcTOE Game -----------";
    cout <<endl;
    cout <<endl;
    do{
    cout << "1 - PVP Mode (Player vs Player)\n";
    cout << "2 - PVE Mode (Player vs AI)\n";
    cout << "3 - Exit\n";
    cout << "\nChoose your game type : ";
    cin >> game_type;

    switch (game_type)
    {
    case 1:
    pvp();
    break;
    case 2:
    pve();
    break;
    case 3:
    cout << "\nBye Bye\n";
    break;
    default:
    cout << "Not a Valid Choice. \n"<< "Choose again.\n\n";
    }

    }while(game_type !=3);

    return 0;
}
