#include <iostream>
using namespace std;
// Coloquei o array no primeiro pq era o único que dava;

// Exercicio 3
float weight[5] = {0, 0, 0, 0, 0}, mediaGeral;
// Exercicio 16
int cpf, dependentes;
float rendaM, desconto, rendaAjustada, imposto;
float qntdSalarios;
double salarioMinimo = 1.412;
// Exercicio 22
float velocidadePermitida, velocidadePraticada, diferenca, percentual;
// Exercicio 23
int n;
// Exercicio 28
int num, contNegativo = 0;
// EXERCICIO 6
const int FIXED = 4;
int fase = 0;
int quantidade_inicial = 1;

int op;
main() {
	system("chcp 65001");
	do{
		cout<<"\n \t Escolha uma opção a seguir: \n";
		cout<<"\n [1] Exercício 3";
		cout<<"\n [2] Exercício 16";
		cout<<"\n [3] Exercício 22";
		cout<<"\n [4] Exercício 23";
		cout<<"\n [5] Exercício 28";
		cout<<"\n [6] Use a sua criatividade";
		cout<<"\n [7] Encerrar \n";
		cin>>op;

		switch(op) {
			case 1: {
				// ENTRADA
				cout<<"\nDigite o Pesa da 1º Pessoa: ";
				cin>>weight[0];
				cout<<"Digite o Pesa da 2º Pessoa: ";
				cin>>weight[1];
				cout<<"Digite o Pesa da 3º Pessoa: ";
				cin>>weight[2];
				cout<<"Digite o Pesa da 4º Pessoa: ";
				cin>>weight[3];
				cout<<"Digite o Pesa da 5º Pessoa: ";
				cin>>weight[4];
				
				// CONTA
				mediaGeral = weight[0] + weight[1] + weight[2] + weight[3] + weight[4] / 5;
				
				// SAÍDA
				cout<<"\nEssa é a Média -> "<<mediaGeral<<"\n\n";
				
				break;
			};
			case 2: {
				// ENTRADA
				cout<<"\nDigite seu CPF: ";
				cin>>cpf;
				cout<<"Digite o Número de dependentes: ";
				cin>>dependentes;
				cout<<"Digite sua Renda Mensal: ";
				cin>>rendaM;
			
				// CONTA
				desconto = (dependentes * 0.05 * salarioMinimo);
				rendaAjustada = (rendaM - desconto);
				qntdSalarios = (rendaAjustada / salarioMinimo);
			
				// SAÍDA (VERIFICAÇÃO)
				if (qntdSalarios <= 2) {
					cout<<"\nVocê está isento do imposto de renda.\n\n";
				} else if (qntdSalarios <= 3) {
					cout<<"\nSua alíquota é de 5%. Será cobrado imposto sobre sua renda ajustada.\n";
			
					imposto = rendaAjustada * 0.05;
					cout<<"\nValor do imposto a pagar: R$ "<<imposto<<"\n\n";
				}	else if (qntdSalarios <= 5) {
					cout<<"\nSua alíquota é de 10%. Imposto será calculado sobre a renda ajustada.\n";
			
					imposto = rendaAjustada * 0.1;
					cout<<"\nValor do imposto a pagar: R$ "<<imposto<<"\n\n";
				} else if (qntdSalarios <= 7) {
					cout<<"\nSua alíquota é de 15%. Haverá uma cobrança maior sobre sua renda.\n";
			
					imposto = rendaAjustada * 0.15;
					cout<<"\nValor do imposto a pagar: R$ "<<imposto<<"\n\n";
				} else if (qntdSalarios > 7) {
					cout<<"\nSua alíquota é de 20%. Você se enquadra na faixa máxima de imposto.\n";
			
					imposto = rendaAjustada * 0.2;
					cout<<"Valor do imposto a pagar: R$ "<<imposto<<"\n\n";
				}
				
				break;
			};
			case 3: {
				// ENTRADA
			  	cout<<"\nDigite a Velocidade Permitida: ";
			  	cin>>velocidadePermitida;
			  	cout<<"Digite a Velocidade Praticada: ";
			  	cin>>velocidadePraticada;
			
				// SAÍDA
				if (velocidadePraticada <= velocidadePermitida) {
				   cout<<"\nNão foi multado.\n\n";
				} else {
					// CONTA
					diferenca = (velocidadePraticada - velocidadePermitida);
					percentual = (diferenca / velocidadePermitida) * 1;
					
					if (percentual <= 0.2) {
					    cout<<"\nA multa é de R$ 102,00.\n\n";
					} else {
					    cout<<"\nA multa é de R$ 500,00.\n\n";
					}
				}
				
				break;
			};
			case 4: {
				// SAÍDA
				do {
				    cout<<"\nDigite 1: ";
				    cin>>n;
					
				    if (n == 1) {
				      cout<<"\nBatata.";
				    }
				} while (n == 1); // validação
				
				break;
			};
			case 5: {
				// ENTRADA (VERIFICAÇÃO)
				for (int i; i <= 10; i++) {
				    cout<<"\nDigite um número: ";
				    cin>>num;
				
				    if (num < 0) {
				      contNegativo++; // contador dos numeros negativos
				    }
				  }
				
				// SAÍDA
				cout<<"\nTem "<<contNegativo<<" números negativos.\n";				
				
				break;
			};
			case 6: {
				do {
					// 1° linha
					for (int i = 0; i < quantidade_inicial; i++) {
						cout << "*";
					}
					cout << endl;
			
					// 2° linha
					for (int i = 0; i < quantidade_inicial + 1; i++) {
							cout << "*";
					}
					cout << endl;
			
					// 3° linha
					for (int i = 0; i < quantidade_inicial; i++) {
							cout << "*";
					}
					cout << endl;
			
					// passa para próxima fase
					quantidade_inicial++;
					fase++;
				} while (fase < FIXED);
				
				break;
			};
			case 7: {
				cout<<"Finalizando";
				break;
			};
			default: {
				cout<<"\nOpção inválida";
				break;
			}
		}
	} while(op != 7);
	cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}