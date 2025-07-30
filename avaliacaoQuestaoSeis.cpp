#include <iostream>
using namespace std;

const int FIXED = 5;
int fase = 0;
int quantidade_inicial = 1;

int main() {
	system("chcp 65001");

  do {
    // 1° linha
    for (int i = 0; i < quantidade_inicial; i++) {
      cout<<"*";
    }
    cout<<endl;

    // 2° linha
    for (int i = 0; i < quantidade_inicial + 1; i++) {
      cout<<"*";
    }
    cout<<endl;

    // 3° linha
    for (int i = 0; i < quantidade_inicial; i++) {
      cout<<"*";
    }
    cout<<endl;

    // passa para próxima fase
    quantidade_inicial++;
    fase++;
  } while (fase < FIXED);
  
}