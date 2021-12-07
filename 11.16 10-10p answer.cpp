#include<iostream>
#include<vector>
using namespace std;
 
class Nation {
    string name;
    string capital;
public:
    Nation(){}
    Nation(string name, string capital) {
        this->name = name;
        this->capital = capital;
    }
    string getNation() { return this->name; }
    string getCapital() { return this->capital; }
};
 
 
int main() {
    Nation america("�̱�", "������DC");
    Nation korea("�ѱ�", "����");
    Nation japan("�Ϻ�", "����");
    Nation china("�߱�", "����¡");
    Nation haiti("����Ƽ", "������������");
    
    vector<Nation> v;
    v.push_back(america);
    v.push_back(korea);
    v.push_back(japan);
    v.push_back(china);
    v.push_back(haiti);
    string nation, capital;
    cout << "������ ���� ���߱� ������ �����մϴ�. *****"<<endl;
    int input = 0;
    bool same = true;
    while (true) {
        cout << "���� �Է�: 1, ����,: 2, ����: 3 >> ";
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
            cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << endl;
            while (true) {
                cout << v.size() + 1 << ">>";
                cin >> nation >> capital;
                if (nation == "no" && capital == "no")
                    break;
                same = false;
                for (int i = 0; i < v.size(); i++) {
                    if (v[i].getNation() == nation && v[i].getCapital() == capital)
                    {
                        cout << "already exists !!" << endl;
                        same = true;
                        break;
                    }
                }
                if (same == true)
                    continue;
                Nation* temp = new Nation(nation, capital);
                v.push_back(*temp);
            }
            break;
        case 2:
            for (int i = 0; i < v.size(); i++) {
                cout << v[i].getNation() << "�� ������?";
                cin >> capital;
                if (v[i].getCapital() == capital)
                    cout << "Correct !!" << endl;
                else if ("exit" == capital)
                    break;
                else
                    cout << "NO !!" << endl;
            }
            break;
        case 3:
            break;
        }
        if (input == 3)
            break;
    }
 
}

