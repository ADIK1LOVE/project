void greetingPlayers()
{
    cout << "Приветствуем Вас на занимательной игре!" << endl;
    cout << "Сегодня у нас " << PlayerS << " участников. " << endl << endl;
    cout << "Поприветствуем:" << endl;
    for (int i = 0; i < PlayerS; i++)
    {
        cout << "Участник номер" << i << " - " << playersName[i] << endl;
    }

    cout << "Участники занимают свои места согласно их номерам." << endl;
    cout << "Ну что ж.. Пошалим!" << endl;
}