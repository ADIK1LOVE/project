void playGame()
{
    for (int i = 0, raund = 1; i < PlayerS; i++, raund++)
    {
        cout << endl << "�����: " << raund << endl;
        cout << playersName[i] << " ������� ���� � ���������." << endl;
        cout << "����� ���� ������� " << playersName[i + 1] << "? �� 1 �� 6:" << endl;
        int slot;
        cin >> slot;

        if (slot > 6)
        {
            do
            {
                cout << "������! �������� ���� �� 1 �� 6" << endl;
                cout << "����� ���� ������� " << playersName[i + 1] << "? �� 1 �� 6:" << endl;
                cin >> slot;

            } while (slot > 6);
        }
        else
        {
            cout << "�������! " << playersName[i + 1] << " ������ " << slot << endl;
        }

        cout << playersName[i] << " ������� �������, ������� ����� ������..." << endl;
        int vistrel;
        vistrel = rand() % 6;
        if (vistrel == slot)
        {
            cout << "�����! " << "� ���� " << playersName[i + 1] << " ��������..." << endl;
            playersDie[i] = 1;
            i++;
        }
        else
        {
            cout << "����. �������! " << playersName[i + 1] << " ��������." << endl;
        }

        if (raund == 10)
        {
            break;
        }
    }
}
