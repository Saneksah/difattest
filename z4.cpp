#include <iostream>
#include <string>
using namespace std;


class Numbers{
    public:
        Numbers(){
            A = 0;
            B = 0;
        }
        double set_num(double A, double B){
            this -> A = A;
            this -> B = B;
        }
        double sum_num(double A, double B){
            cout << "Sum = " << A + B << endl;
        }
        double big_num(double A, double B){
            if(A > B) cout << "The largest number = " << A << endl;
            else cout << "The largest number = " << B << endl;
        }
        double drugie_num(double A, double B){
            string N;
            cout << "do you want to change the values? yes/no ";
            cin >> N;
            if(N == "yes"){
                cout << "input A ";
                cin >> this->A;
                cout << "input B ";
                cin >> this->B;
                return 0;
            }else return 1;
            }

    private:
        double A, B;
};

int main(){
    double A, B;
    cout << "input A ";
    cin >> A;
    cout << "input B ";
    cin >> B;
    Numbers n;
    n.set_num(A, B);
    while(true){
        n.sum_num(A, B);
        n.big_num(A, B);
        if (n.drugie_num(A, B) == 1){
                break;
        }

    }
    return 0;
}
