void greetingPlayers()
{
    cout << "������������ ��� �� ������������� ����!" << endl;
    cout << "������� � ��� " << PlayerS << " ����������. " << endl << endl;
    cout << "��������������:" << endl;
    for (int i = 0; i < PlayerS; i++)
    {
        cout << "�������� �����" << i << " - " << playersName[i] << endl;
    }

    cout << "��������� �������� ���� ����� �������� �� �������." << endl;
    cout << "�� ��� �.. �������!" << endl;
}