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

// Funcion emociones positivas
void emocionesPositivas()
{
    int opcSB;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            // Menu principal
            cout << endl << "😄 Excelente, ¿qué tipo de emoción positiva experimentas hoy?: " << endl;
            cout << "1.- Feliz 😊" << endl
                 << "2.- Enamorado 😍" << endl
                 << "3.- Orgulloso 😌" << endl
                 << "4.- Emocionado 😄" << endl
                 << "5.- Exitado 🥵" << endl
                 << "6.- Volver al menu principal 🔚" << endl;
            opcSB = obtenerEntradaNumerica<int>("Ingrese su opción: ", 1, 6); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;

            system("color 9"); // Color azul claro
            
            switch (opcSB)
            {
            case 1:
                cout << "<<--Seleccionaste la opcion Suma-->>" << endl;
                break;
            case 2:
                cout << "<<--Seleccionaste la opcion Resta-->>" << endl;
                break;
            case 3:
                cout << "<<--Seleccionaste la opcion Multiplicacion-->>" << endl;
                break;
            case 4:
                cout << "<<--Seleccionaste la opcion Divicion-->>" << endl;
                break;
            case 5:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 6)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 6);
}

//Funcion emociones negativas
void emocionesNegativas()
{
    int opcSB;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            // Menu principal
            cout << endl << "Entiendo. Es válido sentir emociones desafiantes" << endl 
                 << "¿Cuál de estas describe mejor lo que sientes? " << endl;
            cout << "1.- Triste 😔" << endl
                 << "2.- Enojado 😡" << endl
                 << "3.- Frustrado 😠" << endl
                 << "4.- Asustado 🙀" << endl
                 << "5.- Nervioso 😰" << endl
                 << "6.- Decepcionado 😞" << endl
                 << "7.- Impaciente 😤" << endl
                 << "8.- Avergonzado 😳" << endl
                 << "9.- Asqueado 🤢" << endl
                 << "10.- Con sueño 🥱" << endl
                 << "11.- En pánico 😱" << endl
                 << "12.- Confundido 🤨" << endl
                 << "13.- Tímido 🫣" << endl
                 << "14.- Volver al menu principal 🔚" << endl;
            opcSB = obtenerEntradaNumerica<int>("Ingrese su opción: ", 1, 14); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;

            system("color 9"); // Color azul claro
            
            switch (opcSB)
            {
            case 1:
                cout << "<<--Seleccionaste la opcion Suma-->>" << endl;
                break;
            case 2:
                cout << "<<--Seleccionaste la opcion Resta-->>" << endl;
                break;
            case 3:
                cout << "<<--Seleccionaste la opcion Multiplicacion-->>" << endl;
                break;
            case 4:
                cout << "<<--Seleccionaste la opcion Divicion-->>" << endl;
                break;
            case 5:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 6:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 7:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 8:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 9:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 10:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 11:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 12:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 13:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 14:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 6)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 6);
}

// Funcion emociones positivas
void DescubrirEmocion()
{
    int opcSB;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            // Menu principal
            cout << endl << "😄 Excelente, ¿qué tipo de emoción positiva experimentas hoy?: " << endl;
            cout << "1.- Feliz 😊" << endl
                 << "2.- Enamorado 😍" << endl
                 << "3.- Orgulloso 😌" << endl
                 << "4.- Emocionado 😄" << endl
                 << "5.- Exitado 🥵" << endl
                 << "6.- Volver al menu principal 🔚" << endl;
            opcSB = obtenerEntradaNumerica<int>("Ingrese su opción: ", 1, 6); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;

            system("color 9"); // Color azul claro
            
            switch (opcSB)
            {
            case 1:
                cout << "<<--Seleccionaste la opcion Suma-->>" << endl;
                break;
            case 2:
                cout << "<<--Seleccionaste la opcion Resta-->>" << endl;
                break;
            case 3:
                cout << "<<--Seleccionaste la opcion Multiplicacion-->>" << endl;
                break;
            case 4:
                cout << "<<--Seleccionaste la opcion Divicion-->>" << endl;
                break;
            case 5:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 6)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 6);
}

// Funcion emociones positivas
void apoyoProfesional()
{
    int opcSB;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            // Menu principal
            cout << endl << "😄 Excelente, ¿qué tipo de emoción positiva experimentas hoy?: " << endl;
            cout << "1.- Feliz 😊" << endl
                 << "2.- Enamorado 😍" << endl
                 << "3.- Orgulloso 😌" << endl
                 << "4.- Emocionado 😄" << endl
                 << "5.- Exitado 🥵" << endl
                 << "6.- Volver al menu principal 🔚" << endl;
            opcSB = obtenerEntradaNumerica<int>("Ingrese su opción: ", 1, 6); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;

            system("color 9"); // Color azul claro
            
            switch (opcSB)
            {
            case 1:
                cout << "<<--Seleccionaste la opcion Suma-->>" << endl;
                break;
            case 2:
                cout << "<<--Seleccionaste la opcion Resta-->>" << endl;
                break;
            case 3:
                cout << "<<--Seleccionaste la opcion Multiplicacion-->>" << endl;
                break;
            case 4:
                cout << "<<--Seleccionaste la opcion Divicion-->>" << endl;
                break;
            case 5:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 6)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 6);
}

// Funcion emociones positivas
void InformacionAsistente()
{
    int opcSB;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            // Menu principal
            cout << endl << "😄 Excelente, ¿qué tipo de emoción positiva experimentas hoy?: " << endl;
            cout << "1.- Feliz 😊" << endl
                 << "2.- Enamorado 😍" << endl
                 << "3.- Orgulloso 😌" << endl
                 << "4.- Emocionado 😄" << endl
                 << "5.- Exitado 🥵" << endl
                 << "6.- Volver al menu principal 🔚" << endl;
            opcSB = obtenerEntradaNumerica<int>("Ingrese su opción: ", 1, 6); // Reutilizando la función de validación
            cout << "<<-------------------------------------------->>" << endl
                 << endl;

            system("color 9"); // Color azul claro
            
            switch (opcSB)
            {
            case 1:
                cout << "<<--Seleccionaste la opcion Suma-->>" << endl;
                break;
            case 2:
                cout << "<<--Seleccionaste la opcion Resta-->>" << endl;
                break;
            case 3:
                cout << "<<--Seleccionaste la opcion Multiplicacion-->>" << endl;
                break;
            case 4:
                cout << "<<--Seleccionaste la opcion Divicion-->>" << endl;
                break;
            case 5:
                cout << "<<--Seleccionaste la opcion Potencia-->>" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 6)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 6);
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    bool continuarPrograma = true;
    int opcMN;
    string nombre, respFin;

    cout << "<<--✨Bienvenido a tu asistente emocional✨-->>" << endl;
    cout << "¡Hola! 😁" << endl;
    cout << "Soy E.D.I.T.H." << endl
         << "Como te llamas? " << endl;
    getline(cin, nombre);
    do
    {
        system("cls");
        system("color 9"); // Color azul claro
        cout << "Mucho gusto " << nombre << " 😄" << endl;
        // Bucle Do-While para repetir el menu
        cout << "Soy tu asistente emocional. ¿Cómo te sientes hoy? 😊 " << endl;
        cout << "Puedes elegir entre las siguientes opciones para describir tu estado:" << endl << endl;
        cout << "1.- Me siento con emociones Positivas/Agradables ✨" << endl;
        cout << "2.- Me siento con emociones Negativas/Desafiantes 😔" << endl;
        cout << "3.- No estoy seguro de que clase de emoción siento 🥹" << endl;
        cout << "4.- Buscar apoyo/recursos profesionales 📚" << endl;
        cout << "5.- Información sobre tu asistente 🔎" << endl;
        cout << "6.- Salir del programa🚪" << endl;
        opcMN = obtenerEntradaNumerica<int>("", 1, 6);// Reutilizando la función de validación
        system("color 9");// Color azul claro
        switch (opcMN)
        {
        case 1:
            emocionesPositivas();
            break;
        case 2:
            emocionesNegativas();
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            cout << "Saliendo del programa...";
            continuarPrograma = false;
            break;
        }
    } while (continuarPrograma);

    return 0;
}