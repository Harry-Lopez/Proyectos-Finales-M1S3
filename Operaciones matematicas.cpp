#include <iostream>
#include <string>
#include <math.h>
#include <limits>
#include <windows.h>
using namespace std;

// Funcion de validación de entrada
template <typename T>
T obtenerEntradaNumerica(const string &mensaje, T minNum, T maxNum)
{
    T numero;
    while (true)
    {
        cout << mensaje;
        cin >> numero;
        if (cin.fail() || numero < minNum || numero > maxNum)
        {
            cout << "!!Error!! Por favor, ingrese un número válido entre " << minNum << " y " << maxNum << ".\n";
            cin.clear();                                         // Limpiar el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar entrada inválida
            system("color 04");                                  // Color rojo para el error
        }
        else
        {
            system("color 9");                                   // Color azul claro si es válido
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer después de una entrada válida
            return numero;
        }
    }
}

// Función para obtener una respuesta "Si/No"
string obtenerRespuestaSiNo(const string &mensaje)
{
    string respuesta;
    while (true)
    {
        cout << mensaje;
        getline(cin, respuesta);
        if (respuesta == "Si" || respuesta == "si" || respuesta == "No" || respuesta == "no")
        {
            return respuesta;
        }
        else
        {
            cout << "!!Error!! Por favor, ingrese 'Si' o 'No'.\n";
            system("color 04");
        }
    }
}

// Sobrecarga para cuando no hay rango (ej. cualquier float)
template <typename T>
T obtenerEntradaNumerica(const string &mensaje)
{
    T valor;
    while (true)
    {
        system("color 9");
        cout << mensaje;
        cin >> valor;
        if (cin.fail())
        {
            system("color 04");
            cout << "!!Error!! Por favor, ingrese un número válido.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }
}

// Función para manejar el mensaje de satisfacción
void mensajeSatisfaccion()
{
    string respFin = obtenerRespuestaSiNo("¿Estás satisfecho con mi trabajo? (Si/No): ");
    if (respFin == "Si" || respFin == "si")
    {
        cout << "Gracias :)\n";
    }
    else
    {
        cout << "Trataré de mejorar :)\n";
    }
}

// Funcion de la calculadora basica
void calculadoraBasica()
{
    int opcSB;
    float number1, number2, result;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("color 9"); // Color azul claro
            // Menu principal
            cout << "<<--Bienvenido a Calculadora basica personal-->>" << endl;
            cout << "Que desea realizar:" << endl
                 << "1.- Suma" << endl
                 << "2.- Resta" << endl
                 << "3.- Multiplicacion" << endl
                 << "4.- Division" << endl
                 << "5.- Potencia" << endl
                 << "6.- Raiz cuadrada" << endl
                 << "7.- Volver al menu principal" << endl
                 << "Ingrese su opcion: " << endl;
            opcSB = obtenerEntradaNumerica<int>("", 1, 7); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;

            system("color 9"); // Color azul claro
            // Solicita numeros para las operaciones
            if (opcSB != 7)
            { // No pedir números si va a salir
                if (opcSB != 5 && opcSB != 6)
                { // Para operaciones que requieren dos números distintos a potencia y raíz
                    number1 = obtenerEntradaNumerica<float>("Ingrese su primer número: ");
                    number2 = obtenerEntradaNumerica<float>("Ingrese su segundo número: ");
                }
                else if (opcSB == 5)
                { // Potencia
                    number1 = obtenerEntradaNumerica<float>("Ingrese el número base: ");
                    number2 = obtenerEntradaNumerica<float>("Ingrese el exponente: ");
                }
                else if (opcSB == 6)
                { // Raíz cuadrada
                    number1 = obtenerEntradaNumerica<float>("Ingrese el número para la raíz cuadrada: ");
                }
            }

            switch (opcSB)
            {
            case 1:
                cout << "<<--Seleccionaste la opcion Suma-->>" << endl;
                result = number1 + number2;
                system("color 9"); // Color azul claro
                cout << endl
                     << number1 << " + " << number2 << " = " << result << endl
                     << endl;
                break;
            case 2:
                cout << "<<--Seleccionaste la opcion Resta-->>" << endl;
                result = number1 - number2;
                cout << endl
                     << number1 << " - " << number2 << " = " << result << endl
                     << endl;
                break;
            case 3:
                cout << "<<--Seleccionaste la opcion Multiplicacion-->>" << endl;
                result = number1 * number2;
                cout << endl
                     << number1 << " x " << number2 << " = " << result << endl
                     << endl;
                break;
            case 4:
                cout << "<<--Seleccionaste la opcion Divicion-->>" << endl;
                if (number1 != 0 && number2 != 0)
                {
                    result = number1 / number2;
                    cout << endl
                         << number1 << " / " << number2 << " = " << result << endl
                         << endl;
                }
                else
                {
                    system("color 4");
                    cout << "!!Error!! No se pudo dividir con cero.\n\n";
                }
                break;
            case 5:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                result = pow(number1, number2);
                cout << endl
                     << number1 << " elevado a la " << number2 << " = " << result << endl
                     << endl;
                break;
            case 6:
                cout << "<<--Seleccionaste la opcion Raiz Cuadrada-->>" << endl;
                result = sqrt(number1);
                cout << endl
                     << "Raiz cuadrada de: " << number1 << " = " << result << endl
                     << endl;
                break;
            case 7:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 7)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 7);
}

// Funcion para el area de figuras
void areaDeFiguras()
{
    int opcSB, cantLados;
    float base, altura, diam, apotema, perimetro, baseMen, baseMay, diagMay, diagMen, result;
    string unidMedi;
    string opcExt;
    string respFin;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("color 9"); // Color azul claro
            cout << "<<--Bienvenido a Calculadora Area de figuras basica personal-->>" << endl;
            cout << "Seleccione una opcion del menu:" << endl
                 << "1.- Cuadrado" << endl
                 << "2.- Triangulo" << endl
                 << "3.- Rectangulo" << endl
                 << "4.- Circulo" << endl
                 << "5.- Poligonos" << endl
                 << "6.- Trapecio" << endl
                 << "7.- Rombo" << endl
                 << "8.- Volver al menu principal" << endl
                 << "Ingrese su opcion deseada: ";
            opcSB = obtenerEntradaNumerica<int>("", 1, 8); // Reutilizando la función de validación
            cout << "<<------------------------------------------------------------>>" << endl;

            switch (opcSB)
            {
            case 1:
                cout << "<<--Calculemos el area de tu Cuadrado-->>" << endl;
                base = obtenerEntradaNumerica<float>("Ingrese la medida del lado de su cuadrado: ");
                result = pow(base, 2);
                system("color 9"); // Color azul claro
                cout << "El area de tu cuadrado es: " << result << endl
                     << endl;
                break;
            case 2:
                cout << "<<--Calculemos el area de tu triangulo-->>" << endl;
                base = obtenerEntradaNumerica<float>("Ingrese el valor de la base de su triángulo: ");
                system("color 9"); // Color azul claro
                altura = obtenerEntradaNumerica<float>("Ingrese la altura del triángulo: ");
                result = (base * altura) / 2;
                system("color 9"); // Color azul claro
                cout << "El area de su triangulo es: " << result << endl
                     << endl;
                break;
            case 3:
                cout << "<<--Calculemos el area de tu rectangulo-->>" << endl;
                base = obtenerEntradaNumerica<float>("Ingrese el valor de la base: ");
                system("color 9"); // Color azul claro
                altura = obtenerEntradaNumerica<float>("Ingrese el valor de la altura: ");
                result = base * altura;
                system("color 9"); // Color azul claro
                cout << "El are de tu rectangulo es: " << result << endl
                     << endl;
                break;
            case 4:
                cout << "<<--Calculemos el area de tu circulo-->>" << endl;
                diam = obtenerEntradaNumerica<float>("Ingrese el valor del diámetro: ");
                result = 3.1416 * pow(diam, 2);
                system("color 9"); // Color azul claro
                cout << "El area de tu circulo es: " << result << endl
                     << endl;
                break;
            case 5:
                cout << "<<--Calculemos el area de tu poligono-->>" << endl;
                base = obtenerEntradaNumerica<float>("Ingrese el valor de un lado para calcular su perímetro: ");
                system("color 9"); // Color azul claro
                cantLados = obtenerEntradaNumerica<float>("Ingrese la cantidad de lados de su polígono: ");
                system("color 9"); // Color azul claro
                apotema = obtenerEntradaNumerica<float>("Ingrese el valor de la apotema: ");
                perimetro = base * cantLados;
                result = (perimetro * apotema) / 2;
                system("color 9"); // Color azul claro
                cout << "El area de tu poligono es: " << result << endl
                     << endl;
                break;
            case 6:
                cout << "<<--Calculemos el area d etu trapecio-->>" << endl;
                baseMen = obtenerEntradaNumerica<float>("Ingrese el valor de la base menor: ");
                system("color 9"); // Color azul claro
                baseMay = obtenerEntradaNumerica<float>("Ingrese el valor de la base mayor: ");
                system("color 9"); // Color azul claro
                altura = obtenerEntradaNumerica<float>("Ingrese la altura: ");
                result = ((baseMen + baseMay) * altura) / 2;
                system("color 9"); // Color azul claro
                cout << "El area de su trapecio es: " << result << endl
                     << endl;
                break;
            case 7:
                cout << "<<--Calculemos el area de tu rombo-->>" << endl;
                diagMay = obtenerEntradaNumerica<float>("Ingrese el valor de la diagonal mayor: ");
                system("color 9"); // Color azul claro
                diagMen = obtenerEntradaNumerica<float>("Ingrese el valor de la diagonal menor: ");
                result = (diagMay * diagMen) / 2;
                system("color 9"); // Color azul claro
                cout << "El area de su Rombo es: " << result << endl
                     << endl;
                break;
            case 8:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 8)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de Area de figuras...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 8);
}

// Funcion dibujo de figuras
void dibujoDeFiguras()
{
    int opcSB;
    string respFin, opcExt;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("color 9"); // Color azul claro
            cout << "<<--Bienvenido a Dibujo de figuras basicas personal-->>" << endl;
            cout << "Ingrese una opcion del menu:" << endl
                 << "1.- Cuadrado" << endl
                 << "2.- Triangulo" << endl
                 << "3.- Rectangulo" << endl
                 << "4.- Circulo" << endl
                 << "5.- Hexagono" << endl
                 << "6.- Trapecio" << endl
                 << "7.- Rombo" << endl
                 << "8.- Volver al menu principal" << endl;
            opcSB = obtenerEntradaNumerica<int>("", 1, 8); // Reutilizando la función de validación
            cout << "<<------------------------------------------------------------>>" << endl;

            switch (opcSB)
            {
            case 1:
                cout << "<<--Cuadrado-->>" << endl;
                cout << "* * * * * * * * * * * *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "* * * * * * * * * * * *" << endl;
                break;
            case 2:
                cout << "<<--Triangulo-->>" << endl;
                cout << "     *" << endl
                     << "    * *" << endl
                     << "   * * *" << endl
                     << "  * * * *" << endl
                     << " * * * * *" << endl
                     << "* * * * * *" << endl;
                break;
            case 3:
                cout << "<<--Rectangulo-->>" << endl;
                cout << "* * * * * * * * * * * *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "*                     *" << endl
                     << "* * * * * * * * * * * *" << endl;
                break;
            case 4:
                cout << "<<--Circulo-->>" << endl;
                cout << "       * * * * * *  " << endl
                     << "     *             * " << endl
                     << "   *                 * " << endl
                     << "  *                   * " << endl
                     << " *                     * " << endl
                     << " *                     * " << endl
                     << " *                     * " << endl
                     << "  *                   * " << endl
                     << "   *                 * " << endl
                     << "     *             * " << endl
                     << "       * * * * * *  " << endl
                     << endl;
                break;
            case 5:
                cout << "<<--Hexagono-->>" << endl;
                cout << "  * * * *" << endl
                     << " *       *" << endl
                     << "*         *" << endl
                     << "*         *" << endl
                     << " *       * " << endl
                     << "  * * * *" << endl
                     << "" << endl;
                break;
            case 6:
                cout << "<<--Trapecio-->>" << endl;
                cout << "   ******* " << endl
                     << "  ********* " << endl
                     << " *********** " << endl
                     << "*************" << endl
                     << endl;
                break;
            case 7:
                cout << "<<--Rombo-->>" << endl;
                cout << "   * " << endl
                     << "  * * " << endl
                     << " *   * " << endl
                     << "*     *" << endl
                     << " *   * " << endl
                     << "  * * " << endl
                     << "   * " << endl
                     << endl;
                break;
            case 8:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 8)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de Dibujo de figuras...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 8);
}

// Funcion de ecuaciones cuadraticas
void ecuacionesCuadraticas()
{
    int opcSB, a, b, c;
    float formulaGeneral, formulaGeneral2, discriminante, comprobacion;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("color 9"); // Color azul claro
            // Menu principal
            cout << "<<--Bienvenido a Calculadora de ecuaciones cuadráticas-->>" << endl;
            cout << "Como desea realizarla:" << endl
                 << "1.- Por determinante" << endl
                 << "2.- Normal" << endl
                 << "3.- Volver al menu principal" << endl
                 << "Ingrese su opcion: " << endl;
            opcSB = obtenerEntradaNumerica<int>("", 1, 3); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;
            system("color 9"); // Color azul claro

            // Preguntamos la estrcutura de la ecuacion
            cout << "La ecuacion debe tener la forma:" << endl
                 << "ax² + bx + c = 0" << endl;
            a = obtenerEntradaNumerica<float>("Cuánto vale a: ");
            b = obtenerEntradaNumerica<float>("Cuánto vale b: ");
            c = obtenerEntradaNumerica<float>("Cuánto vale c: ");
            // Definimos la ecuación general
            discriminante = pow(b, 2) - 4 * a * c;
            formulaGeneral = (-b + sqrt(discriminante)) / (2 * a);
            formulaGeneral2 = (-b - sqrt(discriminante)) / (2 * a);

            switch (opcSB)
            {
            case 1:
                cout << endl<< "<<--Resolvamos eso-->>" << endl;
                      cout << "Tu ecuación es: " << endl << a << "x² ";
                    if (b > 0)
                    {
                        cout << "+"<< b << "x ";
                    }
                    else
                    {
                        cout << b << "x" ;
                    }
                     if (c > 0)
                    {
                        cout << " +"<< c << endl;
                    }
                    else
                    {
                        cout << c << endl ;
                    }
                if (discriminante < 0)
                {
                    cout << "Felicidades, tu código no tiene solución, ya puedes descansar : )" <<endl<< "La discriminante de tu ecuación es: " << discriminante << endl;
                }
                else if (discriminante == 0)
                {
                    cout<<"<<--Resolvamos esto -->>"<<endl;
                         cout<< "El valor de tu discriminante es: " << discriminante << endl;
                    cout << "Tu ecuacion tiene una sola solución: " << endl
                         << "x₁= " << formulaGeneral << endl;
                }
                else if (discriminante > 0)
                {
                    cout << "Tu ecuación es: " << endl
                         << a << "x² " << b << "x " << c << endl
                         << "El valor de tu discriminante es: " << discriminante << endl;
                    cout << "Tu ecuacion tiene 2 soluciones: " << endl
                         << "x₁= " << formulaGeneral << endl
                         << "x₂= " << formulaGeneral2 << endl;
                }
                cout<<endl<<"Comprobemoslo..."<<endl;
                cout << "Retomemos tu ecuación: " << endl << a << "("<<formulaGeneral<<")" << "² ";
                    if (b > 0)
                    {
                        cout << "+"<< b << "("<<formulaGeneral<<") ";
                    }
                    else
                    {
                        cout << b << "("<<formulaGeneral<<") ";
                    }
                     if (c > 0)
                    {
                        cout << "+"<< c << " = 0"<< endl;
                    }
                    else
                    {
                        cout << c <<" = 0"<< endl ;
                    }
                    comprobacion = a*pow(formulaGeneral,2) + b * formulaGeneral + c;
                    cout<<comprobacion<<" = "<<"0"<<endl;
                break;
            case 2:
                cout << endl<< "<<--Resolvamos eso-->>" << endl;
                      cout << "Tu ecuación es: " << endl << a << "x² ";
                    if (b > 0)
                    {
                        cout << "+"<< b << "x ";
                    }
                    else
                    {
                        cout << b << "x" ;
                    }
                     if (c > 0)
                    {
                        cout << "+"<< c << endl;
                    }
                    else
                    {
                        cout << c << endl ;
                    }
                cout << "El valor de tu discriminante es: " << discriminante << endl;
                cout << "Tu ecuacion tiene 2 soluciones: " << endl
                     << "x₁= " << formulaGeneral << endl
                     << "x₂= " << formulaGeneral2 << endl;
                     cout<<endl<<"Comprobemoslo..."<<endl;
                cout << "Retomemos tu ecuación: " << endl << a << "("<<formulaGeneral<<")" << "² ";
                    if (b > 0)
                    {
                        cout << "+"<< b << "("<<formulaGeneral<<") ";
                    }
                    else
                    {
                        cout << b << "("<<formulaGeneral<<") ";
                    }
                     if (c > 0)
                    {
                        cout << "+"<< c << " = 0"<< endl;
                    }
                    else
                    {
                        cout << c <<" = 0"<< endl ;
                    }
                    comprobacion = a*pow(formulaGeneral,2) + b * formulaGeneral + c;
                    cout<<comprobacion<<" = "<<"0"<<endl;
                break;
            case 3:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 3)
            {
                cout << "Quieres continuar?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de las Ecuaciones Cuadráticas...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 3);
}

// Funcion de conversion de Temperaturas
void conversionTemperaturas()
{
    int opcSB;
    float temperaturaIngresada, ConversionTemperatura;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("color 9"); // Color azul claro
            // Menu principal
            cout << "<<--Bienvenido a Coonversión de temperaturas-->>" << endl;
            cout << "Que desea realizar:" << endl
                 << "1.- °C a °F" << endl
                 << "2.- °F a °C" << endl
                 << "3.- °C a °K" << endl
                 << "4.- °K a °C" << endl
                 << "5.- Volver al menu principal" << endl
                 << "Ingrese su opcion: " << endl;
            opcSB = obtenerEntradaNumerica<int>("", 1, 5); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;
            system("color 9"); // Color azul claro

            switch (opcSB)
            {
            case 1:
                cout<<"<<--Hagamos esa conversón-->>"<<endl;
                temperaturaIngresada = obtenerEntradaNumerica<float>("Ingrese la cantidad de grados Centígrados(°C): ");
                ConversionTemperatura = temperaturaIngresada*1.8+32;
                cout<<"La conversión es: "<<ConversionTemperatura<<" °F"<<endl;
                break;
                case 2:
                cout<<"<<--Hagamos esa conversón-->>"<<endl;
                temperaturaIngresada = obtenerEntradaNumerica<float>("Ingrese la cantidad de grados Farenheit(°F): ");
                ConversionTemperatura = (temperaturaIngresada-32)*(0.55);
                cout<<"La conversión es: "<<ConversionTemperatura<<" °C"<<endl;
                break;
                case 3:
                cout<<"<<--Hagamos esa conversón-->>"<<endl;
                temperaturaIngresada = obtenerEntradaNumerica<float>("Ingrese la cantidad de grados Centígrados(°C): ");
                ConversionTemperatura = temperaturaIngresada+273.15;
                cout<<"La conversión es: "<<ConversionTemperatura<<" °K"<<endl;
                break;
                case 4:
                cout<<"<<--Hagamos esa conversón-->>"<<endl;
                temperaturaIngresada = obtenerEntradaNumerica<float>("Ingrese la cantidad de grados Kelvin(°K): ");
                ConversionTemperatura = temperaturaIngresada-273.15;
                cout<<"La conversión es: "<<ConversionTemperatura<<" °C"<<endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 5)
            {
                cout << "Quieres continuar?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }

            } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de Conversion de Temperaturas...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 5);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    bool continuarPrograma = true;
    int opcMN;
    string nombre, respFin;

    cout << "<<Bienvenido a tu asistente matematico" << endl;
    cout << "Hola 😄" << endl;
    cout << "Soy E.D.I.T.H." << endl
         << "Como te llamas? " << endl;
    getline(cin, nombre);
    do
    {
        system("cls");
        system("color 9"); // Color azul claro
        cout << "Mucho gusto " << nombre << endl;
        // Bucle Do-While para repetir el menu
        cout << "En que te puedo ayudar hoy: " << endl;
        cout << "1.- Calculadora basica" << endl;
        cout << "2.- Area de figuras" << endl;
        cout << "3.- Dibujo de figuras" << endl;
        cout << "4.- Ecuaciones de 2° Grado" << endl;
        cout << "5.- Conversion de temperaturas" << endl;
        cout << "6.- Salir del programa" << endl;
        opcMN = obtenerEntradaNumerica<int>("", 1, 6); // Reutilizando la función de validación
        system("color 9");                             // Color azul claro
        switch (opcMN)
        {
        case 1:
            calculadoraBasica();
            break;
        case 2:
            areaDeFiguras();
            break;
        case 3:
            dibujoDeFiguras();
            break;
        case 4:
            ecuacionesCuadraticas();
            break;
        case 5:
            conversionTemperaturas();
            break;
        case 6:
            mensajeSatisfaccion();
            cout << "Saliendo del programa...";
            continuarPrograma = false;
            break;
        }
    } while (continuarPrograma);

    return 0;
}