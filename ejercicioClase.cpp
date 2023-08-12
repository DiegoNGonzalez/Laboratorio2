#include <iostream>
using namespace std;

/* Problema 3
Un comerciante que tiene una tienda en la que vende batidos a turistas. En la tienda se venden 3 tipos de batidos con diferentes sabores, los cuales se almacenan en bidones de diferentes tamaños: un bidón de 20L con sabor a "Banana", un bidón de 35L con sabor a "Ananá" y un bidón de 44L con sabor a "Sandia".

Al inicio de cada día, los 3 bidones se llenan completamente para comenzar a vender. Cada vez que se hace una venta, se registra el código de batido y el tipo de vaso que el cliente desea: el código de batido puede ser 1 para "Banana", 2 para "Ananá" o 3 para "Sandia", mientras que el tipo de vaso puede ser 1 para 150 ml, 2 para 200 ml o 3 para 300 ml.

Cada venta que se realiza implica el descuento de una cantidad de litros del bidón correspondiente al sabor y tamaño del vaso elegido. Además, se debe tener en cuenta que no se pueden realizar ventas si no hay suficiente batido en el bidón correspondiente.

Al final del día, se debe leer el nivel de cada bidón para saber cuánto batido sobró en cada uno de ellos.

La carga de ventas finaliza cuando se ingresa un código de batido igual a cero. Para resolver este problema, se debe hacer un programa que procese todas las ventas del día y calcule cuánto batido queda en cada bidón al final del mismo.

Al finalizar la carga de ventas, el programa debe imprimir la cantidad de litros que quedó en cada bidón y cuántos batidos vendió de cada uno.
*/

int main()
{
    int codigoBatido, tipoVaso, miliLitrosBanana = 20000, miliLitrosAnana = 35000, miliLitrosSandia = 44000, litrosVendidosBanana = 0, litrosVendidosAnana = 0, litrosVendidosSandia = 0, vasosBanana=0, vasosAnana=0, vasosSandia=0;

    string vNombres[3]= {"Banana", "Anana", "Sandia"};

    cout << "Ingrese el codigo del batido: ";
    cin >> codigoBatido;

    while (codigoBatido!=0){
        cout << "Ingrese el tipo de vaso: ";
        cin >> tipoVaso;
        switch (codigoBatido)
        {
        case 1:
            if (tipoVaso ==1){
                if (miliLitrosBanana>=150){
                    miliLitrosBanana = miliLitrosBanana - 150;
                    litrosVendidosBanana+=150;
                    vasosBanana++;
                }
                else{
                    cout << "No hay suficiente batido de banana para llenar el vaso de 150ml" << endl;
                }
            }
            else if (tipoVaso ==2){
                if (miliLitrosBanana>=200){
                    miliLitrosBanana = miliLitrosBanana - 200;
                    litrosVendidosBanana+=200;
                    vasosBanana++;
                }
                else{
                    cout << "No hay suficiente batido de banana para llenar el vaso de 200ml" << endl;
                }
            }
            else if (tipoVaso ==3){
                if (miliLitrosBanana>=300){
                    miliLitrosBanana = miliLitrosBanana - 300;
                    litrosVendidosBanana+=300;
                    vasosBanana++;
                }
                else{
                    cout << "No hay suficiente batido de banana para llenar el vaso de 300ml" << endl;
                }
            }
            else{
                cout << "El tipo de vaso ingresado no es valido" << endl;
            }
            break;
        case 2:
            if(tipoVaso==1){
                if (miliLitrosAnana>=150){
                    miliLitrosAnana = miliLitrosAnana - 150;
                    litrosVendidosAnana+=150;
                    vasosAnana++;
                }
                else{
                    cout << "No hay suficiente batido de anana para llenar el vaso de 150ml" << endl;
                }
            }else if (tipoVaso==2){
                if (miliLitrosAnana>=200){
                    miliLitrosAnana = miliLitrosAnana - 200;
                    litrosVendidosAnana+=200;
                    vasosAnana++;
                }
                else{
                    cout << "No hay suficiente batido de anana para llenar el vaso de 200ml" << endl;
                }
            }else if (tipoVaso==3){
                if (miliLitrosAnana>=300){
                    miliLitrosAnana = miliLitrosAnana - 300;
                    litrosVendidosAnana+=300;
                }
                else{
                    cout << "No hay suficiente batido de anana para llenar el vaso de 300ml" << endl;
                }
            }
            break;
        case 3:
            if(tipoVaso==1){
                if (miliLitrosSandia>=150){
                    miliLitrosSandia = miliLitrosSandia - 150;
                    litrosVendidosSandia+=150;
                }
                else{
                    cout << "No hay suficiente batido de sandia para llenar el vaso de 150ml" << endl;
                }
            }else if (tipoVaso==2){
                if (miliLitrosSandia>=200){
                    miliLitrosSandia = miliLitrosSandia - 200;
                    litrosVendidosSandia+=200;
                }
                else{
                    cout << "No hay suficiente batido de sandia para llenar el vaso de 200ml" << endl;
                }
            }else if (tipoVaso==3){
                if (miliLitrosSandia>=300){
                    miliLitrosSandia = miliLitrosSandia - 300;
                    litrosVendidosSandia+=300;
                }
                else{
                    cout << "No hay suficiente batido de sandia para llenar el vaso de 300ml" << endl;
                }
            }

        default:
            break;
        }



    cout << "Ingrese el codigo del batido: ";
        cin >> codigoBatido;
    }




        cout <<"Del batido "<< vNombres[0]<<" se vendieron "<< vasosBanana<<" vasos y restan " << (float) miliLitrosBanana/1000<<" litros."<< endl;;
        cout <<"Del batido "<< vNombres[1]<<" se vendieron "<< vasosAnana<<" vasos y restan " << miliLitrosAnana/1000<<" litros."<<endl;
        cout <<"Del batido "<< vNombres[2]<<" se vendieron "<< vasosSandia<<" vasos y restan " << miliLitrosSandia/1000<<" litros."<<endl;

    return 0;


}
