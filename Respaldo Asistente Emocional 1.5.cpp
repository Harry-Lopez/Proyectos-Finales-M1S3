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

// Funcion emocion alegría
void Alegria()
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

// Funcion emociones tristeza
void Tristeza()
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

// Funcion emociones miedo
void Miedo()
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

// Funcion emociones ira
void Ira()
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

// Funcion emociones asco
void Asco()
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


//Funcion para identificar el desgloce de la emocion de alegria
void identificacionAlegria()
{
    int opcSB;
    string respFin, opcExt;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            cout << endl << "😀 La alegría es una emoción agradable de bienestar y placer." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- 😁Alegria pura😁" << endl;
            cout << "Es un poco más enérgica que la serenidad." << endl;
            cout << "Hay un entusiasmo moderado, una sonrisa fácil y ganas de compartir el momento." << endl << endl;
            cout << "2.- 🥰Amor💕" << endl;
            cout << "Sientes una profunda conexión emocional, afecto o cariño." << endl;
            cout << "Además de un sentimiento de seguridad en la relación con otra persona o incluso una pasión." << endl << endl;
            cout << "3.- 😊Optimismo😊" << endl;
            cout << "Es una esperanza activa de que cosas buenas y hay entusiasmo por lo que suceda." << endl;
            cout << "Causa una sensación de ilusión, expectativa positiva y alegría hacia el futuro." << endl << endl;
            cout << "4.- 😌Placer😌" << endl;
            cout << "Es una alegría placentera, a menudo inesperada; mezcla de asombro y disfrute." << endl;
            cout << "Suele expresarse con una sonrisa inesperada, una sorpresa grata, asombro o admiración." << endl << endl;
            cout << "5.- Volver al menu anterior🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de la emoción que sientes: ", 1, 5); // Reutilizando la función de validación
            system("cls");

            switch (opcSB)
            {
            case 1:
                cout << "😀 ¡Me alegra muchísimo escuchar eso!" << endl << endl;
                cout << "😁¿Quieres platicar sobre lo que te causa alegría?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << "🥰 ¡El amor es un motor increíble!" << endl << endl;
                cout << "😊 ¿Quieres compartir un poco sobre lo que te inspira esa emoción?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << "😁 ¡Me encanta tu actitud!" << endl << endl;
                cout << "😊 ¿Quieres platicar sobre futuros planes o lo que hace sentir así?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << "😆 ¡Me alegra que estés disfrutando de eso que te produce placer!" << endl << endl;
                cout << "😁 ¿Quieres platicar sobre que es lo que te hace sentir placentero" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 5)
            {
                cout << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 5);
}

//Funcion pra idenntificar el descloce de la emocion de tristeza
void identificacionTristeza()
{
    int opcSB;
    string respFin, opcExt;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            cout << endl << "La tristeza es una emoción dolorosa que surge ante una pérdida, decepción o desilusión." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- Decepción" << endl;
            cout << "Surge cuando una expectativa o una esperanza no se cumple" << endl;
            cout << "Sientes desilusión, frustración con tristeza o engaño por la realidad." << endl << endl;
            cout << "2.- Remordimiento" << endl;
            cout << "Sensación de de arrepentimiento profundo por haber causado daño o actuado de forma equivocada." << endl;
            cout << "Sientes culpa o pesar en la conciencia, ansiedad y un deseo de deshacer lo hecho." << endl << endl;
            cout << "3.- Desesperación" << endl;
            cout << "Tristeza intensa y abrumadora donde se percibe que no hay salida, solución o esperanza" << endl;
            cout << "Sentimiento de vacío, derrota, impotencia, falta total de energía, hambre y/o sueño" << endl << endl;
            cout << "4.- Tristeza pura" << endl;
            cout << "Un dolor emocional más evidente, puedes sentir ganas de llorar, baja energía y desinterés." << endl;
            cout << "Ojos llorosos, voz apagada, tu cuerpo se encorva y quieres aislarte o ser consolado." << endl << endl;
            cout << "5.- Volver al menu principal🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 5); // Reutilizando la función de validación
            system ("cls");

            switch (opcSB)
            {
            case 1:
                cout << "Lamento mucho escuchar eso. Entiendo perfectamente que puedas estar decepcionado/a." << endl << endl;
                cout << "Quieres platicar ¿Qué fue lo que te causó esta decepción?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << "Gracias por compartir esto conmigo. Es valiente de tu parte expresar remordimiento" << endl << endl;
                cout << "¿Hay algo que pueda hacer para ayudarte?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << "Es muy difícil sentirse así, y lamento que estés experimentando esto." << endl << endl;
                cout << "Quiero que sepas que no estás solo/a en esto, y juntos podemos buscar una salida" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << "Lamento mucho que te sientas triste." << endl << endl;
                cout << "Quiero que sepas que estoy aquí para escucharte y apoyarte" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 5)
            {
                cout << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 5);
}

//Funcion pra idenntificar el descloce de la emocion de tristeza
void identificacionMiedo()
{
    int opcSB;
    string respFin, opcExt;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            cout << endl << "El miedo es una emoción que surge ante una amenaza o peligro." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- Alarmado" << endl;
            cout << "Reacción de susto o sobresalto por el miedo de algo inesperado percibido como peligroso." << endl;
            cout << "Tienes un sobresalto repentino, el corazón se acelera, tienes escalofríos y preocupación." << endl << endl;
            cout << "2.- Ansiedad" << endl;
            cout << "Preocupación y nerviosismo constantes por eventos futuros inciertos o amenazantes" << endl;
            cout << "Sientes unaa inquietud constante, tensión, dificultad para relajarse y pensamientos acelerados." << endl << endl;
            cout << "3.- Sumiso" << endl;
            cout << "Ceder o someterse a la autoridad o poder de otro, por temor a las consecuencias de no hacerlo." << endl;
            cout << "Crees que así no habrá problemas, sientes obediencia, resignación y control" << endl << endl;
            cout << "4.- Temor puro" << endl;
            cout << "Preocupación o anticipación de algo negativo, te sientes más tenso y más ancioso." << endl;
            cout << "Tienes pensamientos recurrentes sobre un problema y mayor dificultad para relajarte." << endl << endl;
            cout << "5.- Volver al menu anterior🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 5); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                cout << "No te preocupes, estoy aquí para resolver esta situación" << endl  << endl;
                cout << "¿Quieres platicar qué te ha causado tanta alarma?" << endl  << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << "Comprendo que la ansiedad puede ser abrumadora." << endl  << endl;
                cout << "Tu bienestar es mi prioridad ¿Quieres que lo solucionemos juntos?" << endl  << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << "Quiero que sepas que valoramos tu opinión y tus sentimientos." << endl  << endl;
                cout << "No hay problema ¿Quieres que platiquemos de eso?" << endl  << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << "Lamento que estés experimentando temor." << endl  << endl;
                cout << "Estoy aquí para apoyarte y guiarte a través de esta situación" << endl  << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 5)
            {
                cout << "¿Quieres volver al menú anterior?(Si/No)  ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 5);
}

//Funcion pra idenntificar el descloce de la emocion de tristeza
void identificacionIra()
{
    int opcSB;
    string respFin, opcExt;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            cout << endl << "La ira es una emoción que surge cuando te sientes frustrado, injustamente tratado o amenazado." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- Desprecio" << endl;
            cout << "Mezcla potente de enojo y repulsión hacia otra persona, grupo o situación." << endl;
            cout << "Rechazo intenso, indignación moral y creer que el otro es menos" << endl << endl;
            cout << "2.- Agresión" << endl;
            cout << "Es la ira canalizada hacia la acción o la confrontación, es el impulso de atacar, defenderse o dominar." << endl;
            cout << "Impulso de confrontar, hostilidad, tensión por liberar, ganas de defenderse y/o  idear una pelea." << endl << endl;
            cout << "3.- Dominio(Negativo)" << endl;
            cout << "Cuando la ira se combina con una fuerte confianza, sueles querer controlar una situación o a otros" << endl;
            cout << "Hablas con autoridad, te niegas a seder, quieres el control de la situación y que debes imponer." << endl << endl;
            cout << "4.- Furia" << endl;
            cout << "Un enojo explosivo y descontrolado, querer golpear, gritar o destruir." << endl;
            cout << "Tensión extrema, dificultad para pensar claramente, impulsos agresivos y descontrol." << endl << endl;
            cout << "5.- Volver al menu principal🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 5); // Reutilizando la función de validación
            
            system ("cls");
            switch (opcSB)
            {
            case 1:
                cout << "Entiendo que te sientes con desprecio hacia una situación" << endl << endl;
                cout << "Estoy aquí para encontrar una solución y me gustaría saber tu perspectiva" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << "Comprendo que te sientes con agresión." << endl << endl;
                cout << "Para poder ayudarte, necesito que me expliques que te está causando tanto enojo" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << "Entiendo que tal vez quieras tomar el control de la situación. " << endl << endl;
                cout << "Pero te propongo que trabajemos en equipo para resolver esto." << endl << endl;
                cout << "¿Qué te parece?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << "Ok, entiendo que sientas tanta furia" << endl << endl;
                cout << "Te propongo platicar sobree qué te ha llevado a sentirte así" << endl << endl;
                cout << "Si aceptas, te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 5)
            {
                cout << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 5);
}

//Funcion pra idenntificar el descloce de la emocion de tristeza
void identificacionAsco()
{
    int opcSB;
    string respFin, opcExt;
    // Estructura Do-While para repetir el menu
    do
    {
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            cout << endl << "El Asco/Desagrado es una emoción de aversión o rechazo hacia algo que percibimos como desagradable o tóxico." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- Remordimiento" << endl;
            cout << "Una tristeza que nace de sentir aversión por una acción propia o algo que hiciste." << endl;
            cout << "Piensas repetidamente en lo sucedido, sientes vergüenza, malestar contigo mismo/a y culpa." << endl << endl;
            cout << "2.- Desprecio" << endl;
            cout << "Una mezcla de enojo y repulsión hacia otra persona, grupo o situación." << endl;
            cout << "Rechazo intenso, condescendencia, indignación moral, evación y repulsión" << endl << endl;
            cout << "3.- Verguenza" << endl;
            cout << "Sientes que se ha cometido un error y ha sido expuesto de forma negativa " << endl;
            cout << "Alta Incomodidad, deseo de esconderse, sonrojo, mirada hacia abajo, voz baja y humillación." << endl << endl;
            cout << "4.- Asco/Repugnancia" << endl;
            cout << "Es una aversión hacia algo, incluso con una sensación de náuse o querer alejarse." << endl;
            cout << "Quieres cerrar los ojos o taparse la nariz/boca, sudoración fría y repulsión extrema." << endl << endl;
            cout << "5.- Volver al menu principal🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 5); // Reutilizando la función de validación
            
            system ("cls");
            switch (opcSB)
            {
            case 1:
                cout << "Gracias por compartir esto conmigo. Es valiente de tu parte expresar remordimiento" << endl << endl;
                cout << "Si me cuentas tu perspectiva, podemos solucionarlo" << endl << endl;
                cout << "¿Qué te parece?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << "Comprendo que te sientes con desprecio hacia esta situación o lo que ha sucedido" << endl << endl;
                cout << "Me gustaría saber tu perspectiva para apoyarte" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << "Gracias por compartir tu vergüenza conmigo" << endl << endl;
                cout << "Es una emoción humana, y lo más importante ahora es ayudarte y resolver la situación." << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << "Entiendo que esta situación te genere repugnancia" << endl << endl;
                cout << "¿Quieres platicar sobre eso para solucionarlo juntos?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 5)
            {
                cout << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 5);
}

// Funcion emociones positivas
void DescubrirEmocion()
{
    int opcSB;
    string respFin;
    string opcExt;
    string selectorDelSentir;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 9"); // Color azul claro
            
            cout << endl << "Veamos que es lo que te sucede 🤓" << endl;
            cout <<  "Sientes algo como: " << endl << endl;
            cout <<  "1.- <<--😀 Alegría 😀-->>" << endl;
            cout << "Sientes una sensación de calma, paz interior o un bienestar tranquilo" << endl 
            <<"Te sientes animado, optimista y con una sensación general de felicidad." << endl << endl; 

            cout <<  "2.- <<--😞 Tristeza 😞-->>" << endl;
            cout << "Sientes una sensación de desánimo leve o una ligera desilusión" << endl 
            << "No es abrumador, posiblemente teines ganas de llorar o un vacío. " << endl << endl;
                
            cout <<  "3.- <<--😰 Miedo 😰-->>" << endl;
            cout << "Se siente como una preocupación ligera, nerviosismo o una inquietud sutil" << endl;
            cout << "Te sientes asustado, ansioso o temeroso ante una amenaza percibida." << endl << endl;
                
            cout <<  "4.- <<--😡 Ira-Rabia 😡-->>" << endl;
            cout << "Se siente como una irritación leve o una frustración menor, pero no es abrumador." << endl;
            cout << "Te sientes enojado, furioso o con rabia ante una ofensa u otra situación." << endl << endl;
                
            cout <<  "5.- <<--🤢 Asco/Disgusto 🤢-->>" << endl;
            cout << "Se siente como una indiferencia o desinterés hacia algo que ya no te atrae." << endl;
            cout << "Te sientes repugnado, con ganas de evitar o rechazar algo." << endl
            << endl;
            cout << "6.- Regresar al menú principal 🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Ingresa tu sentir: ", 1, 6);// Reutilizando la función de validación
            
            switch (opcSB)
            {
            case 1:
                identificacionAlegria();
                break;
            case 2:
                identificacionTristeza();
                break;
            case 3:
                identificacionMiedo();
                break;
            case 4:
                identificacionIra();
                break;
            case 5:
                identificacionAsco();
                break;            
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 6)
            {
                cout << "Quieres continuar?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
            
        } while (opcExt != "No" && opcExt != "no");
        cout << "Volviendo al menú...";
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
            cout << "<<--🚨AYUDA PROFESIONAL🚑--" << endl;
            cout << "🤓 Es valiente buscar apoyo profesional." << endl
            << "😊 No soy un especialista, pero puedo ofrecerte algunas sugerencias para apoyarte:" << endl;
            cout << "1. ¿Por qué crees que la necesitas?" << endl;
            cout << "2. Tipos de profesionales de la salud mental" << endl;
            cout << "3. Búsqueda de recursos en línea" << endl;
            cout << "4. Lugares especializados cerca de ti" << endl;
            cout << "5. Volver al menú principal" << endl;
            cout << "<<-------------------------------------->>" << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Esperando tu respuesta: ", 1, 5);// Reutilizando la función de validación
        system("color 9");// Color azul claro



            opcExt = "No";
            if (opcSB != 5)
            {
                cout << "Quieres continuar? ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Saliendo de la calculadora básica...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 5);
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
            
            system ("cls");
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

    cout << endl << "<<--✨Bienvenido a tu asistente emocional✨-->>" << endl;
    cout << "¡Hola! 😁" << endl;
    cout << "Soy E.D.I.T.H." << endl
         << "Como te llamas? " << endl;
    getline(cin, nombre);
    do
    {
        system("cls");
        system("color 9"); // Color azul claro
        
        cout << endl << "Mucho gusto " << nombre << " 😄" << endl;
        // Bucle Do-While para repetir el menu
        cout << "Soy tu asistente emocional. ¿Cómo te sientes hoy? 😊 " << endl;
        cout << "Puedes elegir entre las siguientes opciones:" << endl << endl;
        cout << "1.- Alegría 😀" << endl;
        cout << "2.- Tristeza 😞" << endl;
        cout << "3.- Miedo 😰" << endl;
        cout << "4.- Ira 😡" << endl;
        cout << "5.- Asco 🤢" << endl;
        cout << "6.- ¿Qué es la emoción que siento? 🫠" << endl;
        cout << "7.- Buscar apoyo o recursos profesionales 📚" << endl;
        cout << "8.- Información sobre tu asistente 🔎" << endl;
        cout << "9.- Salir del programa🚪" << endl;
        opcMN = obtenerEntradaNumerica<int>("🤓 Esperando tu emoción: ", 1, 9);// Reutilizando la función de validación
        system("color 9");// Color azul claro
        switch (opcMN)
        {
        case 1:
            Alegria();
            break;
        case 2:
            Tristeza();
            break;
        case 3:
            Miedo();
            break;
        case 4:
            Ira();
            break;
        case 5:
            Asco();
            break;
        case 6:
            DescubrirEmocion();
            break;
        case 7:
            apoyoProfesional();
            break;
        case 8:
            InformacionAsistente();
            break;            
        case 9:
            cout << "Saliendo del programa...";
            continuarPrograma = false;
            break;
        }
    } while (continuarPrograma);

    return 0;
}