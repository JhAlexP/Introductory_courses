#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(void){

	int c=0;
	double pu=0;
	double v=0;
	double t=0;

	cout<<"\nIntroduzca valor por unidad de las brochas y presione enter: ";
	cin>> pu;
	if (pu>0){

		cout<<"\nIntroduzca la cantidad de Brochas del pedido y presione enter ";
		cin>> c;

		if (c>0){

			v=(pu*c);
			v=v-(v*0.20);
			t=v;
				cout<<"\nIntroduzca el valor por unidad de rodillos y presione enter: ";
				cin>> pu;

				if (pu>0){


					cout<<"\nIntroduzca la cantidad de rodillos del pedido y presione enter ";
					cin>> c;

					if (c>0){

						v=(pu*c);
						v=v-(v*0.15);
						t=t+v;

						cout<<"\nIntroduzca el valor por unidad de sellador y presione enter: ";
						cin>> pu;

						if (pu>0){

							cout<<"\nIntroduzca la cantidad de sellador del pedido y presione enter ";
							cin>>c;

							if (c>0){
								v=(pu*c);
								t=t+v;

								cout<<"\nPresione 1 y enter si el pedido se paga de contado: ";
								cin>>c;

								if (c==1) {
									t=t-(t*0.07);
									cout<<"\nEl valor total del pedido es: "<<t;
								}
								else
									cout<<"\nEl valor total del pedido es: "<<t;
							}
						}
					}
				}
			}
		}

	else
		cout<<"\nERROR";
	getch();

	}
