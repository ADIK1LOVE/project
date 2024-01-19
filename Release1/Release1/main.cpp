#include "include.h";
#include "players.h";
#include "greeting.h";
#include "game.h";

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    greetingPlayers();
    playGame();

    return 0;
}


