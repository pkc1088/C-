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
    Nation america("미국", "워싱턴DC");
    Nation korea("한국", "서울");
    Nation japan("일본", "도쿄");
    Nation china("중국", "베이징");
    Nation haiti("아이티", "포르토프랭스");
    
    vector<Nation> v;
    v.push_back(america);
    v.push_back(korea);
    v.push_back(japan);
    v.push_back(china);
    v.push_back(haiti);
    string nation, capital;
    cout << "나라의 수도 맞추기 게임을 시작합니다. *****"<<endl;
    int input = 0;
    bool same = true;
    while (true) {
        cout << "정보 입력: 1, 퀴즈,: 2, 종료: 3 >> ";
        cin >> input;
        switch (input)
        {
        case 1:
            cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
            cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
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
                cout << v[i].getNation() << "의 수도는?";
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

