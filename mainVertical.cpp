#include <iostream>

using namespace std;

void triangle(){
    int n, number=1;
    cout << "Enter number : " << endl;
    cin >> n;
    cout << endl;


    for(int i=n;i >=1; --i){

        for(int j=1;j<=i; j++){
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int main()
{
    triangle();
        return 0;
}
