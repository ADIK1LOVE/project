void playGame()
{
    for (int i = 0, raund = 1; i < PlayerS; i++, raund++)
    {
        cout << endl << "Раунд: " << raund << endl;
        cout << playersName[i] << " готовит пулю к заряжанию." << endl;
        cout << "Какой слот выберет " << playersName[i + 1] << "? От 1 до 6:" << endl;
        int slot;
        cin >> slot;

        if (slot > 6)
        {
            do
            {
                cout << "Ошибка! Выберите слот от 1 до 6" << endl;
                cout << "Какой слот выберет " << playersName[i + 1] << "? От 1 до 6:" << endl;
                cin >> slot;

            } while (slot > 6);
        }
        else
        {
            cout << "Отлично! " << playersName[i + 1] << " выбрал " << slot << endl;
        }

        cout << playersName[i] << " вращает барабан, взводит курок ииииии..." << endl;
        int vistrel;
        vistrel = rand() % 6;
        if (vistrel == slot)
        {
            cout << "Бабах! " << "О боже " << playersName[i + 1] << " погибает..." << endl;
            playersDie[i] = 1;
            i++;
        }
        else
        {
            cout << "Клац. Повезло! " << playersName[i + 1] << " выживает." << endl;
        }

        if (raund == 10)
        {
            break;
        }
    }
}
