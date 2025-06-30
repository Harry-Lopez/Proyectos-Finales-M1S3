#include <iostream>
#include <string>
#include <math.h>
#include <limits>
#include <windows.h>

using namespace std;

/*****************************************************
    Funciones especiales para validación de datos
    By: Enrique López
*****************************************************/

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
            cout << endl<< "!!Error!! Por favor, ingrese un número válido entre " << minNum << " y " << maxNum << ".\n";
            cin.clear();                                         // Limpiar el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar entrada inválida
            system("color 04");                                  // Color rojo para el error
        }
        else
        {
            system("color 0B");                                   // Color azul claro si es válido
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
        system("color 0B");
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


/**********************************************************
    Funciones para que el usuario descubra su emoción
    By: Mauricio Canseco
**********************************************************/

// Funcion para identificar el desgloce de la emocion de alegria
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
            system("color 0B"); // Color azul claro
            cout << endl << "😀 La alegría es una emoción agradable de bienestar y placer." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- 😁Alegria pura😁" << endl;
            cout << "Es un poco más enérgica que la serenidad." << endl;
            cout << "Hay un entusiasmo moderado, una sonrisa fácil y ganas de compartir el momento." << endl << endl;
            cout << "2.- 🥰Amor💕" << endl;
            cout << "Sientes una profunda conexión emocional, afecto o cariño." << endl;
            cout << "Además de un sentimiento de seguridad en la relación con otra persona o incluso una pasión." << endl << endl;
            cout << "3.- 🤩Optimismo🤩" << endl;
            cout << "Es una esperanza activa de que cosas buenas y hay entusiasmo por lo que suceda." << endl;
            cout << "Causa una sensación de ilusión, expectativa positiva y alegría hacia el futuro." << endl << endl;
            cout << "4.- 😌Placer😌" << endl;
            cout << "Es una alegría placentera, a menudo inesperada; mezcla de asombro y disfrute." << endl;
            cout << "Suele expresarse con una sonrisa inesperada, una sorpresa grata, asombro o admiración." << endl << endl;
            cout << "5.- 😊Calma😊" << endl;
            cout << "Una sensación de paz interior, tranquilidad, equilibrio. Te sientes a gusto, relajado, sin prisas." << endl;
            cout << "Respiración tranquila, mente clara, sensación de bienestar y pacibidad." << endl << endl;
            cout << "6.- Volver al menu anterior🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de la emoción que sientes: ", 1, 6); // Reutilizando la función de validación
            system("cls");

            switch (opcSB)
            {
            case 1:
                cout << endl << "😀 ¡Me alegra muchísimo escuchar eso!" << endl << endl;
                cout << "😁¿Quieres platicar sobre lo que te causa alegría?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << endl << "🥰 ¡El amor es un motor increíble!" << endl << endl;
                cout << "😊 ¿Quieres compartir un poco sobre lo que te inspira esa emoción?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << endl << "😁 ¡Me encanta tu actitud!" << endl << endl;
                cout << "😊 ¿Quieres platicar sobre futuros planes o lo que hace sentir así?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << endl << "😆 ¡Me alegra que estés disfrutando de eso que te produce placer!" << endl << endl;
                cout << "😁 ¿Quieres platicar sobre que es lo que te hace sentir placentero" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                cout << endl << "😆 ¡Me alegra que estés disfrutando la calma!" << endl << endl;
                cout << "😁 ¿Quieres platicar sobre tu día?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 1, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
}

// Funcion para identificar el desgloce de la emocion de tristeza
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
            system("color 0B"); // Color azul claro
            cout << endl << "La tristeza es una emoción dolorosa que surge ante una pérdida, decepción o desilusión." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- 😞Decepción😞" << endl;
            cout << "Surge cuando una expectativa o una esperanza no se cumple" << endl;
            cout << "Sientes desilusión, frustración con tristeza o engaño por la realidad." << endl << endl;
            cout << "2.- 😫Remordimiento😫" << endl;
            cout << "Sensación de de arrepentimiento profundo por haber causado daño o actuado de forma equivocada." << endl;
            cout << "Sientes culpa o pesar en la conciencia, ansiedad y un deseo de deshacer lo hecho." << endl << endl;
            cout << "3.- 😩Desesperación🤯" << endl;
            cout << "Tristeza intensa y abrumadora donde se percibe que no hay salida, solución o esperanza" << endl;
            cout << "Sentimiento de vacío, derrota, impotencia, falta total de energía, hambre y/o sueño" << endl << endl;
            cout << "4.- 😿Tristeza pura😿" << endl;
            cout << "Un dolor emocional más evidente, puedes sentir ganas de llorar, baja energía y desinterés." << endl;
            cout << "Ojos llorosos, voz apagada, tu cuerpo se encorva y quieres aislarte o ser consolado." << endl << endl;
            cout << "5.- 😔Melancolía😔" << endl;
            cout << "Es una tristeza leve, una sensación de nostalgia, puede haber un suspiro frecuente o una leve opresión en el pecho." << endl;
            cout << "Piensas sobre el pasado, sientes que las cosas son grises, pero no hay desesperación." << endl << endl;
            cout << "6.- Volver al menu principal🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación
            system("cls");

            switch (opcSB)
            {
            case 1:
                cout << endl << "😣 Lamento mucho escuchar eso. Entiendo perfectamente que puedas estar decepcionado/a." << endl << endl;
                cout << "😊 Quieres platicar ¿Qué fue lo que te causó esta decepción?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << endl << "😊 Gracias por compartir esto conmigo. Es valiente de tu parte expresar remordimiento" << endl << endl;
                cout << "😊 ¿Hay algo que pueda hacer para ayudarte?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << endl << "😣 Es muy difícil sentirse así, y lamento que estés experimentando esto." << endl << endl;
                cout << "😊 Quiero que sepas que no estás solo/a en esto, y juntos podemos buscar una salida" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << endl << "😣Lamento mucho que te sientas triste." << endl << endl;
                cout << "😊 Quiero que sepas que estoy aquí para escucharte y apoyarte" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                cout << endl << "😣Lamento que te sientas melancólico." << endl << endl;
                cout << "😊 Quiero que sepas que estoy aquí para escucharte y apoyarte" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 2, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
}

// Funcion para identificar el desgloce de la emocion de miedo
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
            system("color 0B"); // Color azul claro
            cout << endl << "El miedo es una emoción que surge ante una amenaza o peligro." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- 🚨Alarmado😨" << endl;
            cout << "Reacción de susto o sobresalto por el miedo de algo inesperado percibido como peligroso." << endl;
            cout << "Tienes un sobresalto repentino, el corazón se acelera, tienes escalofríos y preocupación." << endl << endl;
            cout << "2.- 😥Ansiedad😖" << endl;
            cout << "Preocupación y nerviosismo constantes por eventos futuros inciertos o amenazantes" << endl;
            cout << "Sientes unaa inquietud constante, tensión, dificultad para relajarse y pensamientos acelerados." << endl << endl;
            cout << "3.- 🙇Sumiso🥹" << endl;
            cout << "Ceder o someterse a la autoridad o poder de otro, por temor a las consecuencias de no hacerlo." << endl;
            cout << "Crees que así no habrá problemas, sientes obediencia, resignación y control" << endl << endl;
            cout << "4.- 😰Temor puro😰" << endl;
            cout << "Preocupación o anticipación de algo negativo, te sientes más tenso y más ancioso." << endl;
            cout << "Tienes pensamientos recurrentes sobre un problema y mayor dificultad para relajarte." << endl << endl;
            cout << "5.- 🫨Inquietud🫨" << endl;
            cout << "Una leve preocupación o anticipación de algo negativo, te sientes un poco tenso." << endl;
            cout << "Tienes pensamientos recurrentes sobre un posible problema y necesidad de controlar la situación" << endl << endl;
            cout << "6.- Volver al menu anterior🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                cout << endl << "😊 No te preocupes, estoy aquí para resolver esta situación" << endl << endl;
                cout << "¿Quieres platicar qué te ha causado tanta alarma?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << endl << "😖 Comprendo que la ansiedad puede ser abrumadora." << endl << endl;
                cout << "😊 Pero tu bienestar es mi prioridad ¿Quieres que lo solucionemos juntos?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << endl << "😊 Quiero que sepas que valoramos tu opinión y tus sentimientos." << endl << endl;
                cout << "No hay problema ¿Quieres que platiquemos de eso?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << endl << "😣 Lamento que estés experimentando temor." << endl << endl;
                cout << "😊 Estoy aquí para apoyarte y guiarte a través de esta situación" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                cout << endl << "😣 Lamento que estés experimentando esa inquietud." << endl << endl;
                cout << "😊 Pero estoy aquí para apoyarte y guiarte a través de esta situación" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 3, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No)  ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
}

// Funcion para identificar el desgloce de la emocion de ira
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
            system("color 0B"); // Color azul claro
            cout << endl << "La ira es una emoción que surge cuando te sientes frustrado, injustamente tratado o amenazado." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- 😒Desprecio😒" << endl;
            cout << "Mezcla potente de enojo y repulsión hacia otra persona, grupo o situación." << endl;
            cout << "Rechazo intenso, indignación moral y creer que el otro es menos" << endl << endl;
            cout << "2.- 😠Agresión😠" << endl;
            cout << "Es la ira canalizada hacia la acción o la confrontación, es el impulso de atacar, defenderse o dominar." << endl;
            cout << "Impulso de confrontar, hostilidad, tensión por liberar, ganas de defenderse y/o  idear una pelea." << endl << endl;
            cout << "3.- 😤Dominio(Negativo)💪🏻" << endl;
            cout << "Cuando la ira se combina con una fuerte confianza, sueles querer controlar una situación o a otros" << endl;
            cout << "Hablas con autoridad, te niegas a seder, quieres el control de la situación y que debes imponer." << endl << endl;
            cout << "4.- 😡Furia😡" << endl;
            cout << "Un enojo explosivo y descontrolado, querer golpear, gritar o destruir." << endl;
            cout << "Tensión extrema, dificultad para pensar claramente, impulsos agresivos y descontrol." << endl << endl;
            cout << "5.- 🫤Molestia🫤" << endl;
            cout << "Es una irritación leve o fastidio por algo, impaciencia, con ganas de que algo cambie o pare." << endl;
            cout << "Se representa en un ceño fruncido, apretar un poco la mandíbula, pensamientos de tu molesta." << endl << endl;
            cout << "6.- Volver al menu principal🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                cout << endl << "😔 Entiendo que te sientes con desprecio hacia una situación" << endl << endl;
                cout << "😊 Estoy aquí para encontrar una solución y me gustaría saber tu perspectiva" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << endl << "😔 Comprendo que te sientes con agresión." << endl << endl;
                cout << "😊 Para poder ayudarte, necesito que me expliques que te está causando tanto enojo" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << endl << "😔Entiendo que tal vez quieras tomar el control de la situación. " << endl << endl;
                cout << "😊 Pero te propongo que trabajemos en equipo para resolver esto." << endl << endl;
                cout << "¿Qué te parece?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << endl << "😔 Ok, entiendo que sientas tanta furia" << endl << endl;
                cout << "😊 Te propongo platicar sobre qué te ha llevado a sentirte así" << endl << endl;
                cout << "Si aceptas, te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                cout << endl << "😔 Ok, entiendo tu molestia" << endl << endl;
                cout << "😊 Te propongo platicar sobre qué te ha llevado a sentirte así" << endl << endl;
                cout << "Si aceptas, te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 4, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
}

// Funcion para identificar el desgloce de la emocion de asco
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
            system("color 0B"); // Color azul claro
            cout << endl << "El Asco/Desagrado es una emoción de aversión o rechazo hacia algo que percibimos como desagradable o tóxico." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "1.- 😫Remordimiento😖" << endl;
            cout << "Una tristeza que nace de sentir aversión por una acción propia o algo que hiciste." << endl;
            cout << "Piensas repetidamente en lo sucedido, sientes vergüenza, malestar contigo mismo/a y culpa." << endl << endl;
            cout << "2.- 😒Desprecio😒" << endl;
            cout << "Una mezcla de enojo y repulsión hacia otra persona, grupo o situación." << endl;
            cout << "Rechazo intenso, condescendencia, indignación moral, evación y repulsión" << endl << endl;
            cout << "3.- 😳Verguenza🫨" << endl;
            cout << "Sientes que se ha cometido un error y ha sido expuesto de forma negativa " << endl;
            cout << "Alta Incomodidad, deseo de esconderse, sonrojo, mirada hacia abajo, voz baja y humillación." << endl << endl;
            cout << "4.- 🤢Asco/Repugnancia🤢" << endl;
            cout << "Es una aversión hacia algo, incluso con una sensación de náuse o querer alejarse." << endl;
            cout << "Quieres cerrar los ojos o taparse la nariz/boca, sudoración fría y repulsión extrema." << endl << endl;
            cout << "5.- 🙄Desinterés🙄" << endl;
            cout << "Es una sensación de falta de estimulación o de que algo no es interesante." << endl;
            cout << "Se expresa en bostezos, dificultad para prestar atención, sensación de que el tiempo pasa lento y buscas distracción." << endl << endl;
            cout << "6.- Volver al menu principal🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                cout << endl << "😊 Gracias por compartir esto conmigo. Es valiente de tu parte expresar remordimiento" << endl << endl;
                cout << "Si me cuentas tu perspectiva, podemos solucionarlo" << endl << endl;
                cout << "😊 ¿Qué te parece?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 2:
                cout << endl << "😳 Comprendo que te sientes con desprecio hacia esta situación o lo que ha sucedido" << endl << endl;
                cout << "😊 Me gustaría saber tu perspectiva para apoyarte" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 3:
                cout << endl << "😊 Gracias por compartir tu vergüenza conmigo" << endl << endl;
                cout << "😊 Es una emoción humana, y lo más importante ahora es ayudarte y resolver la situación." << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 4:
                cout << endl << "😳 Entiendo que esta situación te genere repugnancia" << endl << endl;
                cout << "😊 ¿Quieres platicar sobre eso para solucionarlo juntos?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 5:
                cout << endl << "😳 Entiendo, el desinterés es muy común" << endl << endl;
                cout << "😊 ¿Quieres platicar sobre eso para solucionarlo juntos?" << endl << endl;
                cout << "Te invito a que regreses al menú anterior, seleciones regresar al menú principal y selecciones la opción 5, ahí podremos hablar más a fondo de esta emoción" << endl;
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
}

// Función para la situación de que el usuario no siente ninguna emoción
void noSientoNada()
{
    int respuesta;
int a = 0, b = 0, c = 0, d = 0, e = 0;

system ("cls");
system ("color 9");

cout << "CUESTIONARIO DE ESTADO EMOCIONAL" << endl;
cout << "Responde con 1, 2, 3, 4 o 5" << endl << endl;

// Pregunta 1
cout << "1. ¿Cómo te sientes físicamente ahora?" << endl;
cout << "1) Relajado/a" << endl;
cout << "2) Tenso/a" << endl;
cout << "3) Con energía" << endl;
cout << "4) Pesado/a" << endl;
cout << "5) Inquieto/a" << endl;
respuesta = obtenerEntradaNumerica<int>("Tu  respuesta: ", 1, 5); // Reutilizando la función de validación

if (respuesta == 1) a++;
else if (respuesta == 2) b++;
else if (respuesta == 3) c++;
else if (respuesta == 4) d++;
else if (respuesta == 5) e++;

// Pregunta 2
cout << "\n2. ¿Cómo están tus pensamientos?" << endl;
cout << "1) Calmados" << endl;
cout << "2) Acelerados" << endl;
cout << "3) Enfocados" << endl;
cout << "4) Lentos" << endl;
cout << "5) Dispersos" << endl;
respuesta = obtenerEntradaNumerica<int>("Tu  respuesta: ", 1, 5);

if (respuesta == 1) a++;
else if (respuesta == 2) b++;
else if (respuesta == 3) c++;
else if (respuesta == 4) d++;
else if (respuesta == 5) e++;

// Pregunta 3
cout << "\n3. ¿Qué quieres hacer ahora?" << endl;
cout << "1) Descansar" << endl;
cout << "2) Evitar algo" << endl;
cout << "3) Actuar" << endl;
cout << "4) Nada" << endl;
cout << "5) Buscar seguridad" << endl;
respuesta = obtenerEntradaNumerica<int>("Tu  respuesta: ", 1, 5);

if (respuesta == 1) a++;
else if (respuesta == 2) b++;
else if (respuesta == 3) c++;
else if (respuesta == 4) d++;
else if (respuesta == 5) e++;

// Pregunta 4
cout << "\n4. Si te interrumpen, ¿cómo reaccionas?" << endl;
cout << "1) Con calma" << endl;
cout << "2) Molesto/a" << endl;
cout << "3) Con entusiasmo" << endl;
cout << "4) Aliviado/a" << endl;
cout << "5) Nervioso/a" << endl;
respuesta = obtenerEntradaNumerica<int>("Tu  respuesta: ", 1, 5);

if (respuesta == 1) a++;
else if (respuesta == 2) b++;
else if (respuesta == 3) c++;
else if (respuesta == 4) d++;
else if (respuesta == 5) e++;

// Pregunta 5
cout << "\n5. ¿Cómo ves las próximas horas?" << endl;
cout << "1) Con tranquilidad" << endl;
cout << "2) Con preocupación" << endl;
cout << "3) Con expectativa" << endl;
cout << "4) Con indiferencia" << endl;
cout << "5) Con incertidumbre" << endl;
respuesta = obtenerEntradaNumerica<int>("Tu  respuesta: ", 1, 5);

if (respuesta == 1) a++;
else if (respuesta == 2) b++;
else if (respuesta == 3) c++;
else if (respuesta == 4) d++;
else if (respuesta == 5) e++;

// Mostrar resultados
cout << "\n--- RESULTADO ---" << endl;

if (a >= b && a >= c && a >= d && a >= e) {
    cout << "ESTADO: TRANQUILO/A" << endl;
    cout << "Te sientes en calma y equilibrio." << endl;
    cout << "Te invito a volver a el menú principal e ir a la sección de 'Apoyo profesional' para mayor apoyo" << endl;
}
else if (b >= c && b >= d && b >= e) {
    cout << "ESTADO: ANSIOSO/A" << endl;
    cout << "Experimentas estrés o nerviosismo." << endl;
    cout << "Te invito a volver a el menú principal e ir a la sección de 'Apoyo profesional' para mayor apoyo" << endl;
}
else if (c >= d && c >= e) {
    cout << "ESTADO: MOTIVADO/A" << endl;
    cout << "Tienes energía y entusiasmo." << endl;
    cout << "Te invito a volver a el menú principal e ir a la sección de 'Apoyo profesional' para mayor apoyo" << endl;
}
else if (d >= e) {
    cout << "ESTADO: DESANIMADO/A" << endl;
    cout << "Te sientes con poca energía o triste." << endl;
    cout << "Te invito a volver a el menú principal e ir a la sección de 'Apoyo profesional' para mayor apoyo" << endl;
}
else {
    cout << "ESTADO: PREOCUPADO/A" << endl;
    cout << "Sientes incertidumbre o nerviosismo." << endl;
    cout << "Te invito a volver a el menú principal e ir a la sección de 'Apoyo profesional' para mayor apoyo" << endl;
}
}


/**********************************************************
    Funciones de las terapias para cada emoción (25)
    By: Roxanna Maxim
***********************************************************/
//Alegría
void terapiaAlegriaPura()
{
    string causaAlegriaPura;
    int sensacionAlegria, acompananteAlegria, sensacionAcompananteAlegria, otrasAccionesAlegria;

    system("cls");
    system("color 0B");

    cout << endl << "¡Qué bonito que estés experimentando alegría! 😄 Cuéntame" << endl
         << "¿Qué te hizo sentir así hoy? ✨" << endl
         << "😊 Tu respuesta:" << endl << endl;
    getline(cin, causaAlegriaPura);
    cout << endl << "¡Excelente! Me alegro mucho por ti 😊" << endl << endl
         << "¿Pero cómo te diste cuenta de que estabas alegre? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (sonrisa espontánea, ''mariposas'' en el estómago, ligereza, energía) 🦋" << endl
         << "2.- Por mis pensamientos (positivos, de optimismo, gratitud) 💡" << endl
         << "3.- Por mis acciones (cantar, bailar, querer compartir la noticia) 💃🎶" << endl
         << "4.- Sentí un cambio dentro de mi para bien (Me sentí repentinamente positivo y en bienestar) ✨😊" << endl << endl;
    sensacionAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "Es muy común sentirlo al presentar esta emoción, de hecho, se siente gratificante 🥰" << endl
         << "Me alegro por ti 🎉" << endl << endl
         << "¿Con quién compartiste ese momento? 🤝" << endl << endl;
    cout << "1.- Con un familiar cercano 👨‍👩‍👧‍👦" << endl
         << "2.- En familia 👨‍👩‍👧‍👦" << endl
         << "3.- Con mi pareja ❤️" << endl
         << "4.- Con amigas/amigos 👯‍♀️" << endl
         << "5.- Con mi mascota 🐾" << endl
         << "6.- Solo 🧘‍♀️" << endl << endl;
    acompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 6);
    system("cls");
    system("color 0B");
    switch (acompananteAlegria)
    {
    case 1:
        cout << endl << endl << "¡Qué lindo! Compartir la alegría con un familiar cercano siempre es muy especial. 🤗" << endl
             << "Además, los lazos familiares son un gran apoyo y me imagino que el momento se sintió aún más valioso. ✨" << endl << endl
             << "¿Qué es lo que más aprecias de esa conexión? 🤔" << endl << endl
             << "1.- Que me entiende sin que tenga que explicar mucho. 😌" << endl
             << "2.- Su reacción, siempre se emociona conmigo. 🥰" << endl
             << "3.- Simplemente su compañía, me siento seguro/a. 🛡️" << endl
             << "4.- Que podemos celebrar juntos de verdad, es como que mi alegría se duplica. 🎉" << endl
             << "5.- Que me da buenos consejos o perspectivas sobre lo que me hace feliz. 💡" << endl << endl;
        sensacionAcompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionAcompananteAlegria)
        {
        case 1:
            cout << endl << endl << "¡Eso es un tesoro! 💎 Qué bueno que tienes esa conexión tan profunda. Gracias por compartirlo." << endl;
            break;
        case 2:
            cout << endl << endl << "¡Qué bonito es ver esa emoción compartida! 😄 Me alegro mucho por ti." << endl;
            break;
        case 3:
            cout << endl << endl << "La seguridad que da la compañía de un ser querido es invaluable. ✨ Me alegra que te sientas así." << endl;
            break;
        case 4:
            cout << endl << endl << "¡Me encanta que tu alegría se multiplique! 🥳 Celebrar en compañía siempre es mejor." << endl;
            break;
        case 5:
            cout << endl << endl << "¡Excelente! 🌟 Qué valioso contar con alguien así para reflexionar sobre tu felicidad." << endl;
            break;
        }
        break;
    case 2:
        cout << endl << endl << "¡Qué bien! Un momento de alegría en familia es un tesoro, son los que más se aprecian. 👨‍👩‍👧‍👦💖" << endl
             << "Y se siente genial cuando todos comparten esa buena vibra, ¿verdad? 😊" << endl  << endl
             << "¿Suelen tener muchos momentos así? 🥳" << endl << endl
             << "1.- Sí, somos una familia muy unida y siempre nos apoyamos. 💪" << endl
             << "2.- No tan seguido como quisiéramos, por eso los valoro mucho.👨‍👩‍👧‍👦" << endl
             << "3.- Cuando nos juntamos, casi siempre hay risas y buen ambiente. 😂" << endl
             << "4.- Depende, pero siempre intentamos buscar esos momentos especiales. ✨" << endl
             << "5.- Nos encanta celebrar cualquier cosita, por pequeña que sea. 🥂" << endl << endl;
        sensacionAcompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionAcompananteAlegria)
        {
        case 1:
            cout << endl << endl << "¡Es maravilloso tener una familia así! 🥰 Me da gusto escuchar que se apoyan tanto." << endl;
            break;
        case 2:
            cout << endl << endl << "Entiendo. Es importante valorar esos momentos especiales cuando ocurren. ✨ Gracias por compartirlo conmigo." << endl;
            break;
        case 3:
            cout << endl << endl << "¡Me alegra que sus reuniones estén llenas de alegría! 😄 Las risas en familia son lo mejor. " << endl;
            break;
        case 4:
            cout << endl << endl << "Es genial que busquen esos instantes para conectar.😁 Eso es lo que cuenta. Gracias por compartir." << endl;
            break;
        case 5:
            cout << endl << endl << "¡Esa es una actitud fantástica! 🥳 Celebrar lo pequeño hace la vida más grande." << endl;
            break;
        }
        break;
    case 3:
        cout << endl << endl << "¡Qué hermoso! Compartir la felicidad con tu pareja fortalece mucho la relación. ❤️‍🔥" << endl
             << "Me alegro de que hayan tenido ese momento juntos. 😊" << endl
             << "Me imagino que fue un momento muy íntimo y significativo. ✨" << endl << endl
             << "¿Qué fue lo que más disfrutaste de compartirlo con tu pareja? 🥰" << endl << endl
             << "1.- La conexión que se crea, nos entendemos sin palabras. 💫" << endl
             << "2.- Ver su felicidad reflejada en la mía. 😄" << endl
             << "3.- Saber que tengo a alguien incondicional a mi lado. 💖" << endl
             << "4.- La posibilidad de celebrar y hacer planes juntos. 🥂" << endl
             << "5.- La tranquilidad y paz que me da su presencia. 😌" << endl << endl;
        sensacionAcompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionAcompananteAlegria)
        {
        case 1:
            cout << endl << "¡Qué profundo! 💖 Esa conexión es un regalo. Me alegro que disfruten de ese entendimiento." << endl;
            break;
        case 2:
            cout << endl << "¡Eso es tan lindo! 🥰 La alegría compartida es doble alegría. Gracias por compartir ese sentimiento tan bonito." << endl;
            break;
        case 3:
            cout << endl << "La incondicionalidad en una relación es un pilar. 💪 Me alegra mucho que te sientas así de apoyado/a." << endl;
            break;
        case 4:
            cout << endl << "¡Excelente! 🎉 Celebrar y planear juntos fortalece los lazos. Me da gusto que disfruten esos momentos." << endl;
            break;
        case 5:
            cout << endl << "Esa sensación de paz es invaluable. 🧘‍♀️ Me alegra que encuentres esa calma y tranquilidad en tu pareja." << endl;
            break;
        }
        break;
    case 4:
        cout << endl << endl << "¡Genial! Compartir la alegría con amigos es increíble. 👯‍♀️🎉" << endl
             << "Las risas y los buenos momentos se quedan grabados. 📸" << endl
             << "Me da gusto que hayas podido celebrar tu alegría con ellos. 😄" << endl << endl
             << "¿Qué es lo que más valoras de tus amistades en esos instantes de felicidad? ✨" << endl << endl
             << "1.- Su energía y su forma de celebrar, me contagian. 🚀" << endl
             << "2.- Que siempre están para apoyarme y festejar mis logros. 🏆" << endl
             << "3.- La confianza, puedo ser yo mismo/a y compartirlo todo. 🤝" << endl
             << "4.- Sus risas y bromas, hacen el momento inolvidable. 😂" << endl
             << "5.- El hecho de que son como una segunda familia para mí. 👨‍👩‍👧‍👦" << endl << endl;
        sensacionAcompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionAcompananteAlegria)
        {
        case 1:
            cout << endl << endl << "¡Qué buena vibra! ✨ Es genial tener amigos que te impulsen así. Me alegro mucho por ti." << endl;
            break;
        case 2:
            cout << endl << endl << "¡Eso es invaluable! 💎 Es fundamental tener amigos que te celebren. Me da gusto que los tengas." << endl;
            break;
        case 3:
            cout << endl << endl << "La confianza en la amistad es un tesoro. 🥰 Me alegra que te sientas tan libre con ellos." << endl;
            break;
        case 4:
            cout << endl << endl << "¡Las risas con amigos son lo mejor! 😄 Qué bueno que crean esos momentos tan especiales." << endl;
            break;
        case 5:
            cout << endl << endl << "¡Es un sentimiento hermoso! 💖 Tener amigos que se sienten como familia es una bendición." << endl;
            break;
        }
        break;
    case 5:
        cout << endl << endl << "¡Qué tierno! Las mascotas tienen una forma especial de hacernos sentir bien y de compartir nuestras emociones. 🐾❤️" << endl
             << "Me alegro de que tu mascota haya estado ahí contigo y hayas compartido tu alegría con ella. 😊" << endl << endl
             << "¿Crees que tu mascota te entienda en esos momentos? 🤔" << endl << endl
             << "1.- Tal vez sí lo siente, siempre se pone contento/a cuando yo lo estoy. 🐶🥰" << endl
             << "2.- Estoy casi seguro que sí, me mueve la cola o se me acerca a lamerme. 😻" << endl
             << "3.- La verdad sí, capta mis emociones y siempre está ahí para mí. 🐕‍🦺🌟" << endl
             << "4.- Muy probablemente no, pero siempre puedo contar con ella. 🐾🤝" << endl << endl;
        sensacionAcompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
        switch (sensacionAcompananteAlegria)
        {
        case 1:
            cout << endl << endl << "¡Qué bonito! Nuestros animalitos son muy sensibles. 🥺 Me alegra que sientas esa conexión con tu mascota." << endl;
            break;
        case 2:
            cout << endl << endl << "¡Definitivamente muestran su afecto! 💖 Esas señales son pura alegría." << endl
                 << "😊 Me da gusto que tengas esa compañía tan especial" << endl;
            break;
        case 3:
            cout << endl << endl << "¡Eso es increíble! ✨ Las mascotas tienen una conexión especial con nosotros." << endl
                 << "😊 Me alegra que tengas ese apoyo incondicional." << endl;
            break;
        case 4:
            cout << endl << endl << "Entiendo. Lo importante es que sientas su compañía y su apoyo incondicional. 🥰" << endl;
            break;
        }
        break;
    case 6:
        cout << endl << endl << "¡Comprendo! A veces, la alegría se disfruta más en la intimidad de uno mismo. 🧘‍♀️✨" << endl
             << "De hecho, disfrutar de la alegría en soledad te permite una conexión profunda contigo mismo y tus emociones. introspectiva" << endl
             << "Me alegro de que hayas podido apreciar ese momento a tu manera. 😊" << endl << endl
             << "¿Hay algo en particular que te guste de experimentar la alegría a solas? 🤔" << endl << endl
             << "1.- Sí, puedo saborear el momento sin distracciones. 😌" << endl
             << "2.- Me gusta que me permite reflexionar sobre lo que me hace feliz. 💡" << endl
             << "3.- Me siento muy en paz y conectado/a conmigo mismo/a. 💖" << endl
             << "4.- Puedo celebrarlo a mi manera, sin expectativas de nadie más.  свобода" << endl
             << "5.- Es un momento de pura gratitud personal. 🙏" << endl << endl;
        sensacionAcompananteAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionAcompananteAlegria)
        {
        case 1:
            cout << endl << endl << "¡Qué valioso! 💎 Disfrutar plenamente sin interrupciones es una gran forma de autocuidado." << endl;
            break;
        case 2:
            cout << endl << endl << "¡Excelente! 🌟 La introspección es clave para el bienestar." << endl
                 << "😊 Me da gusto que aproveches esos momentos." << endl;
            break;
        case 3:
            cout << endl << endl << "¡Qué sensación tan hermosa! ✨ Esa conexión interna es muy poderosa." << endl
                 << "😊 Me alegra que encuentres esa paz." << endl;
            break;
        case 4:
            cout << endl << endl << "¡Esa libertad es un regalo! 🎁 Celebrar a tu propio ritmo es genial." << endl
                 << "😊 Me alegra que te sientas cómodo/a así." << endl;
            break;
        case 5:
            cout << endl << endl << "¡Qué lindo! 🥰 La gratitud en la soledad es una práctica muy enriquecedora." << endl << endl;
            break;
        }

        break;
    }

    system("pause");
    system("cls");
    cout << endl
         << "¿Qué otras cosas te provocan esta emoción? 😄" << endl << endl
         << "1.- Actividades (hobbies, deportes, arte) 🎨⚽" << endl
         << "2.- Personas (familia, amigos, pareja) 👨‍👩‍👧‍👦❤️👯‍♀️" << endl
         << "3.- Eventos (viajes, logros) ✈️🏆" << endl
         << "4.- Pequeños placeres (comer algo rico, escuchar música) 🍔🎶" << endl << endl;
    otrasAccionesAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras alegría en ello" << endl << endl;
    cout << "¿Cómo se siente tu cuerpo cuando estás alegre? ✨" << endl << endl
         << "1.- Con ligereza 🎈" << endl
         << "2.- Con energía ⚡" << endl
         << "3.- Con sensaciones específicas en el pecho, cara, etc. 😊" << endl
         << "4.- Todas las anteriores y más 🥳" << endl << endl;
    otrasAccionesAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente la alegría en ti! 😌" << endl
         << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos felices? 🧠💖" << endl << endl
         << "1.- Momentos clave de la vida (graduaciones, bodas, nacimientos) 🎓💍👶" << endl
         << "2.- Logros personales 🏅" << endl
         << "3.- Momentos sencillos de la vida 🍃" << endl
         << "4.- Alguna película, canción, lectura, etc. 🎬🎵📚" << endl << endl;
    otrasAccionesAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos! 💫" << endl
         << "😊 Ya sean grandes hitos o pequeños instantes, todos contribuyen a nuestra historia de felicidad." << endl << endl;

    cout << "¿Sientes que te permites disfrutar plenamente la alegría o a veces te la limitas? 🤔" << endl << endl
         << "1.- Sí, la disfruto sin reservas 🎉" << endl
         << "2.- No me lo permito por algún motivo 😔" << endl
         << "3.- Me cuesta disfrutarla del todo 😕" << endl << endl;
    otrasAccionesAlegria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    if (otrasAccionesAlegria == 2 || otrasAccionesAlegria == 3)
    {
        cout << endl << "Comprendo. Es valioso reconocerlo. 🤔" << endl
             << "A veces, existen razones por las que nos cuesta entregarnos a la alegría. 😔" << endl
             << "Lo importante es ser consciente de ello y trabajar en permitirnos esos momentos. ✨" << endl
             << "Si lo necesitas o estás interesado, tenemos la opción de apoyo profesional en el menú de inicio. 🤝" << endl << endl;
    }
    else
    {
        cout << endl << endl << "¡Eso es fantástico! 🎉 Permitirte sentir la alegría sin límites es un acto de bienestar." << endl
             << "😊 Me da mucho gusto que la abraces completamente" << endl;
    }

    system("pause");
    system("cls");

    // --- Resumen de tu Terapia de Alegría Pura ---
    cout << endl << "--- Resumen de tu Terapia de Alegría Pura ---" << endl;
    cout << "Causa de la alegría: " << causaAlegriaPura << endl;
    cout << "Cómo te diste cuenta de la alegría: " << sensacionAlegria << endl;
    cout << "Con quién compartiste el momento: " << acompananteAlegria << endl;
    cout << "Lo que aprecias de la conexión al compartir: " << sensacionAcompananteAlegria << endl;
    // IMPORTANTE: 'otrasAccionesAlegria' contendrá solo el último valor asignado.
    // Esto se debe a que la variable se reutiliza para varias preguntas diferentes.
    cout << "Última respuesta sobre otras acciones/sensaciones/recuerdos/permiso de disfrute (valor final de 'otrasAccionesAlegria'): " << otrasAccionesAlegria << endl;
    cout << "-----------------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un gusto charlar contigo sobre la alegría y todo lo que la rodea" << endl
         << "😄 Recuerda que permitirte sentir y disfrutar cada momento es clave para tu bienestar" << endl
         << "😊 ¡Te deseo mucha felicidad y, si necesitas algo más, ya sabes dónde encontrarme!" << endl
         << "Hasta la próxima. 👋😊" << endl;
}

void terapiaAmor()
{
    string causaAmor;
    int sensacionAmor, interaccionAmor, profundidadEmocionalAmor, reflexionesAmor;

    cout << endl << "¡Hola! Es un placer que me acompañes hoy. ✨ Hablemos del amor, una emoción tan poderosa." << endl
         << "¿Podrías compartirme algo que te haya causado la emoción del amor recientemente, o incluso un recuerdo que atesores? 🥰" << endl
         << "💖 Tu respuesta:" << endl << endl;
    getline(cin, causaAmor);
    cout << endl << "¡Gracias por compartir eso tan valioso! Es hermoso ver cómo el amor se manifiesta en tu vida. 😊" << endl << endl
         << "Cuando sentiste esa emoción de amor, ¿cómo la notaste principalmente? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (una calidez en el pecho, 'mariposas' en el estómago, una sonrisa incontrolable). 🦋" << endl
         << "2.- Por mis pensamientos (optimistas, de gratitud, de conexión profunda con alguien o algo). 💡" << endl
         << "3.- Por mis acciones o el impulso de hacer algo (abrazar, cuidar, expresar afecto, querer compartirlo). 🫂🥂" << endl
         << "4.- Sentí un bienestar general y una profunda paz interior, una expansión en mi ser. ✨💖" << endl << endl;
    sensacionAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    cout << endl << "Es fascinante cómo el amor se manifiesta en nosotros. ¡Qué alegría que lo experimentes así! 🥰" << endl
         << "Me encanta que te permitas sentirlo. 🎉" << endl << endl
         << "¿Con quien estabas o quien te compañaba en ese momento? 🤝" << endl << endl;
    cout << "1.- Fue con mi pareja, un momento de profunda conexión. ❤️" << endl
         << "2.- Fue con un familiar, sentí un amor incondicional y reconfortante. 👨‍👩‍👧‍👦" << endl
         << "3.- Fue con amigos, un sentimiento de hermandad y apoyo mutuo. 👯‍♀️" << endl
         << "4.- Fue un amor más general (hacia la vida, la naturaleza, una pasión personal) o lo sentí a solas. 🧘‍♀️🌳" << endl << endl;
    interaccionAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccionAmor)
    {
    case 1:
        cout << endl << endl
             << "¡Qué maravilloso! El amor en pareja es una experiencia única y transformadora. ❤️‍🔥" << endl
             << "Me imagino la profundidad y el significado que tuvo ese momento para ti. ✨" << endl << endl
             << "¿Qué aspectos de esa conexión con tu pareja te hacen sentir ese amor tan profundamente? 🥰" << endl << endl
             << "1.- La intimidad y la comprensión mutua sin necesidad de palabras. 💫" << endl
             << "2.- El apoyo incondicional y saber que están ahí el uno para el otro. 💖" << endl
             << "3.- La alegría de compartir sueños, risas y la vida misma. 🥂" << endl
             << "4.- La sensación de ser completamente tú mismo/a y ser amado/a por ello. 😌" << endl << endl;
        profundidadEmocionalAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se identifique contigo: ", 1, 4);
        switch (profundidadEmocionalAmor)
        {
        case 1:
            cout << endl << "¡Esa conexión es un verdadero tesoro! 💖 Es la base de un amor profundo." << endl;
            break;
        case 2:
            cout << endl << "¡Qué valioso! El apoyo mutuo es un pilar fundamental. 💪 Me alegra que lo sientas así." << endl;
            break;
        case 3:
            cout << endl << "¡Me encanta! Celebrar la vida juntos es una de las mayores alegrías. 🎉" << endl;
            break;
        case 4:
            cout << endl << "¡Eso es amor puro! ✨ Sentirte aceptado/a incondicionalmente es un regalo. " << endl;
            break;
        }
        break;
    case 2:
        cout << endl << endl << "¡Qué lindo! El amor familiar tiene una raíz muy profunda y nutritiva. 👨‍👩‍👧‍👦💖" << endl
             << "Suele ser un amor que da seguridad y un sentido de pertenencia. ¿Es así para ti? 😊" << endl << endl
             << "¿Qué es lo más reconfortante para ti de este amor familiar? 🤔" << endl << endl
             << "1.- La sensación de ser siempre aceptado/a y parte de algo más grande. 🤗" << endl
             << "2.- El apoyo incondicional en los momentos difíciles y la celebración en los buenos. 💪" << endl
             << "3.- Los recuerdos compartidos y la historia que los une. 📸" << endl
             << "4.- La simple presencia y el cariño constante que recibes. 🏡" << endl << endl;
        profundidadEmocionalAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te reconforta: ", 1, 4);
        switch (profundidadEmocionalAmor)
        {
        case 1:
            cout << endl << "¡Es maravilloso tener esa sensación de pertenencia! 🥰 Un gran pilar en la vida." << endl;
            break;
        case 2:
            cout << endl << "El apoyo familiar es un tesoro. ✨ Me alegra que puedas contar con él." << endl;
            break;
        case 3:
            cout << endl << "Los recuerdos familiares son un legado de amor. 💖 Qué lindo que los atesores." << endl;
            break;
        case 4:
            cout << endl << "La simple presencia y el cariño son la esencia del hogar. 😊 Gracias por compartirlo." << endl;
            break;
        }
        break;
    case 3:
        cout << endl << endl << "¡Excelente! El amor entre amigos es una fuerza poderosa de apoyo y alegría. 👯‍♀️🎉" << endl
             << "Es un amor que se elige y se cultiva con cuidado. Me alegro que lo sientas así. 😄" << endl << endl
             << "¿Qué aspecto de tus amistades te hace sentir este amor tan especial? ✨" << endl << endl
             << "1.- La confianza para ser tú mismo/a y compartir tus verdaderos sentimientos. 🤝" << endl
             << "2.- La complicidad y las risas que solo tienes con ellos. 😂" << endl
             << "3.- Su apoyo incondicional en tus sueños y desafíos. 🏆" << endl
             << "4.- La libertad de explorar y crecer juntos. 🚀" << endl << endl;
        profundidadEmocionalAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más valoras: ", 1, 4);
        switch (profundidadEmocionalAmor)
        {
        case 1:
            cout << endl << "La confianza en la amistad es un pilar fundamental. 🥰 Qué bueno que te sientes tan libre con ellos." << endl;
            break;
        case 2:
            cout << endl << "¡Las risas con amigos son inolvidables! 😄 Crean momentos que alimentan el alma." << endl;
            break;
        case 3:
            cout << endl << "¡Eso es invaluable! 💎 Tener amigos que te impulsan es una bendición. Me alegro mucho por ti." << endl;
            break;
        case 4:
            cout << endl << "¡Qué genial! La amistad que fomenta el crecimiento es un regalo. 🌟" << endl;
            break;
        }
        break;
    case 4:
        cout << endl << endl << "¡Comprendo! A veces, el amor no se limita a las personas, o se experimenta en una profunda introspección. 🧘‍♀️✨" << endl
             << "Disfrutar de esta emoción a solas te permite una conexión única con tu interior y con el mundo. " << endl
             << "Me alegro de que hayas podido apreciar ese momento a tu manera. 😊" << endl << endl
             << "¿Qué te atrae de experimentar el amor de esta forma más personal o general? 🤔" << endl << endl
             << "1.- La libertad de sentirlo sin expectativas externas, solo para ti. 🕊️" << endl
             << "2.- Me permite reflexionar profundamente sobre el significado del amor en mi vida. 💡" << endl
             << "3.- Siento una gran paz y una conexión con algo más grande que yo. 💖" << endl
             << "4.- Es un momento de pura gratitud y aprecio por la vida y las experiencias. 🙏" << endl << endl;
        profundidadEmocionalAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te identifique: ", 1, 4);
        switch (profundidadEmocionalAmor)
        {
        case 1:
            cout << endl << "¡Qué valioso! 💎 Esa libertad de sentir el amor es un acto de autocuidado." << endl;
            break;
        case 2:
            cout << endl << "¡Excelente! 🌟 La introspección sobre el amor es muy enriquecedora. 😊 Me alegra que la explores." << endl;
            break;
        case 3:
            cout << endl << "¡Qué sensación tan hermosa! ✨ Esa conexión interna y espiritual es muy poderosa. 😊 Me alegra que la encuentres." << endl;
            break;
        case 4:
            cout << endl << "¡Qué lindo! 🥰 La gratitud es un camino directo a la alegría y al amor. " << endl << endl;
            break;
        }
        break;
    }

    system("pause"); // Pausa la consola, espera la entrada del usuario
    system("cls");   // Limpia la pantalla de la consola

    cout << endl << "Ahora, pensando en el futuro. ¿Cómo crees que puedes nutrir más esta emoción del amor en tu vida? 💖" << endl  << endl
         << "1.- Dedicando más tiempo y atención a las personas que amo. 🫂" << endl
         << "2.- Practicando la gratitud y el aprecio por las pequeñas cosas. 🙏" << endl
         << "3.- Abriéndome a nuevas experiencias y conexiones. 🌍" << endl
         << "4.- Cultivando el amor propio y la auto-compasión. 🌱" << endl << endl;
    reflexionesAmor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te inspire: ", 1, 4);
    cout << endl << "¡Qué visión tan hermosa! 😊 Es genial que pienses en cómo seguir cultivando esta emoción tan valiosa." << endl << endl;
    cout << "¿Hay algo que te gustaría explorar más a fondo sobre tu experiencia con el amor? 🤔" << endl << endl
         << "1.- Sí, me gustaría entender mejor cómo mis experiencias pasadas influyen en mi capacidad de amar ahora. 🕰️" << endl
         << "2.- Sí, me gustaría aprender a expresar el amor de formas más saludables y plenas. 🗣️" << endl
         << "3.- Sí, quiero explorar cómo el amor me ayuda a crecer como persona. 🌳" << endl
         << "4.- No por ahora, me siento bien con lo explorado. ✅" << endl << endl;
    reflexionesAmor = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a tu caso: ", 1, 4);
    if (reflexionesAmor == 1 || reflexionesAmor == 2 || reflexionesAmor == 3)
    {
        cout << endl << "¡Qué valiente! Es muy poderoso querer explorar y crecer en tu capacidad de amar. 💪" << endl
             << "Recuerda que el autoconocimiento es el primer paso para relaciones más plenas y un amor más profundo. ✨" << endl
             << "Si en algún momento sientes que necesitas un espacio seguro para profundizar en estos temas, la opción de apoyo profesional está disponible en el menú." << endl << endl;
    }
    else
    {
        cout << endl << endl << "¡Entendido! Me alegra que te sientas en un buen lugar con tus reflexiones sobre el amor. 😊" << endl
             << "Es un signo de bienestar y autoconciencia. " << endl;
    }

    system("pause"); // Pausa la consola, espera la entrada del usuario
    system("cls");   // Limpia la pantalla de la consola

    // --- Resumen de tu Terapia de Amor ---
    cout << endl << "--- Resumen de tu Terapia de Amor ---" << endl;
    cout << "Causa del amor: " << causaAmor << endl;
    cout << "Cómo notaste la emoción: " << sensacionAmor << endl;
    cout << "Con quién compartiste el momento: " << interaccionAmor << endl;
    cout << "Profundidad emocional del amor (aspecto más apreciado/identificado): " << profundidadEmocionalAmor << endl;
    // IMPORTANTE: 'reflexionesAmor' contendrá solo el último valor asignado.
    // Esto se debe a que la variable se reutiliza para varias preguntas diferentes.
    cout << "Última reflexión sobre el amor (valor final de 'reflexionesAmor'): " << reflexionesAmor << endl;
    cout << "-------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta pequeña exploración sobre el amor en tu vida." << endl
         << "😄 Recuerda que el amor, en todas sus formas, es una fuerza vital que nos enriquece y nos impulsa a crecer." << endl
         << "😊 ¡Valora cada momento, cada conexión y cada sentimiento que te traiga el amor!" << endl
         << "Hasta la próxima. 👋😊" << endl;
}

void terapiaOptimismo()
{
    string causaOptimismo;
    int sensacionOptimismo, interaccionOptimismo, profundidadEmocionalOptimismo, otrasAccionesOptimismo;
    int influenciaOptimismo, recursoOptimismo;

    cout << endl << "¡Hola! Es genial que estés aquí para explorar el optimismo ✨" << endl
              << "¿Podrías compartirme lo que te hizo sentir optimismo recientemente o realmente esperanzado/a? 😊" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaOptimismo);
    cout << endl << "¡Gracias por compartirlo! Es inspirador ver cómo el optimismo se manifiesta en tu vida. 😄" << endl << endl
              << "Cuando sentiste esa emoción, ¿Cómo supiste o persiviste que era optimismo? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (ligereza, más energía, una sensación de apertura o expansión). 🦋" << endl
              << "2.- Por mis pensamientos (positivos sobre el futuro, de que las cosas saldrán bien, oportunidades). 💡" << endl
              << "3.- Por mis acciones o el impulso de hacer algo (planificar, tomar iniciativas, sonreír más, hablar con entusiasmo). 🚀" << endl
              << "4.- Sentí una certeza interna de que todo iba a mejorar, una claridad mental. ✨🧘‍♀️" << endl 
              << "5.- Todas las anteriores e inluso puede que más 😅" << endl << endl;
    sensacionOptimismo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 5);
    cout << endl << "Es maravilloso cómo el optimismo nos logra impulsar. ¡Qué bien que lo experimentes así! 😊" << endl
              << "Es una emoción muy valiosa. 🎉" << endl << endl
              << "¿Con quién estabas cuando te sentiste optimista?🤝" << endl << endl;
    cout << "1.- Estaba con mi pareja. ❤️" << endl
              << "2.- Estaba con un familiar cercano. 👨‍👩‍👧‍👦" << endl
              << "3.- Estaba con mis amigos. 👯‍♀️" << endl
              << "4.- Estaba a solas, disfrutando de mi propia reflexión o logro. 🧘‍♀️" << endl
              << "5.- Estaba en un entorno público (trabajo, evento, ciudad). 🏢🌳" << endl << endl;
    interaccionOptimismo= obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccionOptimismo) {
        case 1:
            cout << endl << endl << "¡Qué lindo! Compartir el optimismo con tu pareja puede fortalecer aún más la conexión. ❤️‍🔥" << endl
                      << "Me imagino que su presencia o palabras hicieron el momento aún más especial. ✨" << endl << endl
                      << "¿Cómo crees que su compañía influyó en tu optimismo en ese momento? 🤔" << endl << endl
                      << "1.- Su apoyo incondicional me dio más confianza. 🫂" << endl
                      << "2.- Su visión positiva de la situación me inspiró. 💡" << endl
                      << "3.- El simple hecho de compartir ese momento me hizo sentir más fuerte. 💪" << endl
                      << "4.- Juntos, nos sentimos invencibles ante cualquier desafío. 🚀" << endl << endl;
            profundidadEmocionalOptimismo= obtenerEntradaNumerica<int>("Selecciona la opción que más se relacione contigo: ", 1, 4);
            switch (profundidadEmocionalOptimismo)
             {
                case 1:
                    cout << endl << "¡El apoyo de pareja es un gran pilar! Qué bueno que te impulsó así. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡Es genial cuando se inspiran mutuamente! Es una dinámica muy saludable. ✨" << endl;
                    break;
                case 3:
                    cout << endl << "La unión hace la fuerza, y el **optimismo** se multiplica al compartirlo. 🎉" << endl;
                    break;
                case 4:
                    cout << endl << "¡Esa sensación es poderosa! Juntos pueden lograr mucho. 😊" << endl;
                    break;
            }
            break;
        case 2:
            cout << endl << endl << "¡Qué reconfortante! Sentir optimismo con un familiar cercano es muy especial. 👨‍👩‍👧‍👦" << endl
                      << "Los lazos familiares a menudo nos dan una base sólida de esperanza. ¿Fue así para ti? 😊" << endl << endl
                      << "¿Qué aspecto de la interacción con tu familiar alimentó más tu optimismo? 🤔" << endl << endl
                      << "1.- Sus palabras de sabiduría o consejo. 📚" << endl
                      << "2.- El sentir su amor incondicional y respaldo. 💖" << endl
                      << "3.- Recordar momentos positivos o valores familiares que dan fuerza. 🕰️" << endl
                      << "4.- Su propia actitud positiva que te contagió. 😄" << endl << endl;
            profundidadEmocionalOptimismo = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapta a tu caso: ", 1, 4);
            switch (profundidadEmocionalOptimismo) {
                case 1:
                    cout << endl << "¡Las palabras sabias de la familia son un tesoro! Qué bien que te guíen hacia el optimismo. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "El amor familiar es un refugio seguro. Me alegra que te dé tanta fuerza. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "Nuestras raíces nos dan mucha esperanza para el futuro. ✨ Es hermoso que lo valores." << endl;
                    break;
                case 4:
                    cout << endl << "¡El optimismo en familia es maravilloso! Es una gran fuente de inspiración. 😊" << endl;
                    break;
            }
            break;
        case 3:
            cout << endl << endl << "¡Genial! Compartir el optimismo con amigos es una experiencia muy energizante. 👯‍♀️🎉" << endl
                      << "El apoyo de los amigos pueden hacer que cualquier desafío parezca más manejable. ¿Verdad? 😄" << endl << endl
                      << "¿Qué fue lo que más te impulsó tu optimismo? ✨" << endl << endl
                      << "1.- Sus bromas o risas que aligeraron el ambiente y me hicieron ver lo positivo. 😂" << endl
                      << "2.- Sus palabras de aliento y fe en mis capacidades. 🗣️" << endl
                      << "3.- El simple hecho de compartir un buen rato y sentirme conectado/a. 🤝" << endl
                      << "4.- La sensación de que podemos superar cualquier cosa juntos. 🚀" << endl << endl;
            profundidadEmocionalOptimismo = obtenerEntradaNumerica<int>("Selecciona la opción que más te identifique: ", 1, 4);
            switch (profundidadEmocionalOptimismo)
             {
                case 1:
                    cout << endl << "¡Las risas con amigos son la mejor medicina para el optimismo! Qué bien que las tengas. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡El aliento de los amigos es un motor poderoso! Me alegra que te impulsen. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "Sentirse conectado y en compañía es fundamental para el optimismo. ✨" << endl;
                    break;
                case 4:
                    cout << endl << "¡Esa confianza mutua es genial! Juntos, los amigos pueden lograr mucho. 😊" << endl;
                    break;
            }
            break;
        case 4:
            cout << endl << endl << "¡Comprendo! A veces, el optimismo florece en la tranquilidad de nuestra propia compañía. 🧘‍♀️✨" << endl
                      << "Disfrutar de esta emoción en soledad te permite una profunda reflexión y conexión contigo mismo/a. " << endl
                      << "Me alegro de que hayas podido apreciar ese momento a tu manera. 😊" << endl << endl
                      << "¿Qué te atrae de experimentar el optimismo de esta forma más personal? 🤔" << endl << endl
                      << "1.- La libertad de sentirlo sin distracciones, solo mi propia perspectiva. 🕊️" << endl
                      << "2.- Me permite reflexionar profundamente sobre mis metas y lo que quiero lograr. 💡" << endl
                      << "3.- Siento una gran paz y una conexión con mi fuerza interior. 💖" << endl
                      << "4.- Es un momento de pura gratitud y aprecio por las posibilidades que la vida me ofrece. 🙏" << endl << endl;
            profundidadEmocionalOptimismo = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a tu sentir: ", 1, 4);
            switch (profundidadEmocionalOptimismo) 
            {
                case 1:
                    cout << endl << "¡Qué valioso! 💎 Esa libertad de sentir el optimismo es un acto de auto-cuidado." << endl;
                    break;
                case 2:
                    cout << endl << "¡Excelente! 🌟 La introspección sobre el futuro es muy enriquecedora. 😊 Me alegra que la explores." << endl;
                    break;
                case 3:
                    cout << endl << "¡Qué sensación tan hermosa! ✨ Esa conexión con tu fuerza interior es poderosa. 😊 Me alegra que la encuentres." << endl;
                    break;
                case 4:
                    cout << endl << "¡Qué lindo! 🥰 La gratitud es un camino directo al optimismo personal. " << endl << endl;
                    break;
            }
            break;
        case 5:
            cout << endl << endl << "¡Entendido! A veces el optimismo nos llega al interactuar con el mundo exterior o en un entorno público. 🏢🌳" << endl
                      << "Puede ser una observación, una nueva oportunidad o simplemente la energía del lugar. " << endl
                      << "Me alegra que tu entorno te haya impulsado al optimismo. 😊" << endl << endl
                      << "¿Qué aspecto de el contribuyó a tu optimismo? 🤔" << endl << endl
                      << "1.- Una noticia positiva o un evento inspirador. 📰" << endl
                      << "2.- Observar la creatividad o el progreso de otras personas. 🎨" << endl
                      << "3.- Sentir la energía colectiva de un grupo o comunidad. 🤝" << endl
                      << "4.- Descubrir una nueva oportunidad o posibilidad inesperada. 🗺️" << endl << endl;
            profundidadEmocionalOptimismo = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu experiencia: ", 1, 4);
            switch (profundidadEmocionalOptimismo)
             {
                case 1:
                    cout << endl << "¡Qué bien! Es genial que encuentres optimismo en las buenas noticias del mundo. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡La inspiración está en todas partes! Observar a otros puede ser muy motivador. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "La energía positiva de una comunidad puede ser muy potente para el optimismo. ✨" << endl;
                    break;
                case 4:
                    cout << endl << "¡Las oportunidades inesperadas son un regalo! Me alegra que las identifiques. 😊" << endl << endl;
                    break;
            }
            break;
    }

    system("pause"); // Pausa la consola, espera la entrada del usuario
    system("cls");   // Limpia la pantalla de la consola

    cout << endl << "¿Qué otras cosas te provocan esta emoción de optimismo? 😄" << endl << endl
              << "1.- Actividades que disfruto (hobbies, deportes, creatividad). 🎨⚽" << endl
              << "2.- Pequeños logros diarios o avances en mis proyectos. 📝✅" << endl
              << "3.- Conectar con la naturaleza o experimentar belleza. 🌳🌅" << endl
              << "4.- Aprender algo nuevo o adquirir conocimiento. 📚💡" << endl << endl;
    otrasAccionesOptimismo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras optimismo en estas áreas de tu vida." << endl << endl;

    cout << "¿Cómo se siente tu cuerpo cuando estás optimista? ✨" << endl << endl
              << "1.- Con ligereza y una sensación de poder volar. 🎈" << endl
              << "2.- Con energía renovada y motivación para actuar. ⚡" << endl
              << "3.- Con una sensación de apertura en el pecho y una sonrisa fácil. 😊" << endl
              << "4.- Todas las anteriores y una sensación general de bienestar. 🥳" << endl << endl;
    otrasAccionesOptimismo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente el optimismo en ti! 😌" << endl
              << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause"); // Pausa la consola, espera la entrada del usuario
    system("cls");   // Limpia la pantalla de la consola

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos en los que te sentiste muy optimista? 🧠💖" << endl << endl
              << "1.- Momentos en los que superé un gran desafío. ⛰️" << endl
              << "2.- Logros personales que me abrieron nuevas puertas. 🏅" << endl
              << "3.- Momentos sencillos en los que sentí una gran esperanza o fe. 🍃" << endl
              << "4.- Alguna historia, película o canción que me inspiró a ser optimista. 🎬🎵📚" << endl << endl;
    otrasAccionesOptimismo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos llenos de optimismo! 💫" << endl
              << "😊 Ya sean grandes hitos o pequeños instantes, todos contribuyen a tu capacidad de ver lo positivo." << endl << endl;

    cout << "¿Sientes que te permites ser optimista plenamente o a veces te lo limitas? 🤔" << endl << endl
              << "1.- Sí, me permito sentir el optimismo sin reservas. 🎉" << endl
              << "2.- No me lo permito por algún motivo (miedo a la decepción, no querer 'gafar'). 😔" << endl
              << "3.- Me cuesta ser optimista del todo, hay algo que me frena. 😕" << endl << endl;
    otrasAccionesOptimismo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 3);
    if (otrasAccionesOptimismo == 2 || otrasAccionesOptimismo == 3) {
        cout << endl << "Comprendo. Es valioso reconocerlo. 🤔" << endl
                  << "A veces, existen razones por las que nos cuesta entregarnos al optimismo. 😔" << endl
                  << "Lo importante es ser consciente de ello y trabajar en permitirnos esos momentos de esperanza. ✨" << endl
                  << "Si lo necesitas o estás interesado, tenemos la opción de apoyo profesional en el menú de inicio. 🤝" << endl << endl;
    } else {
        cout << endl << endl << "¡Eso es fantástico! 🎉 Permitirte sentir el optimismo sin límites es un acto de bienestar." << endl
                  << "😊 Me da mucho gusto que lo abraces completamente." << endl;
    }

    system("pause"); 
    system("cls");

    cout << endl << "¿Cómo crees que tu optimismo puede inspirar o influir positivamente en las personas que te rodean? ✨" << endl << endl
              << "1.- Compartiendo mi energía y entusiasmo, puedo contagiarles. 🚀" << endl
              << "2.- Demostrando que, incluso en la adversidad, se puede encontrar la esperanza. 🌱" << endl
              << "3.- Ofreciendo una perspectiva diferente, más positiva, cuando ellos lo necesitan. 💡" << endl
              << "4.- Siendo un ejemplo de resiliencia y actitud positiva. 💪" << endl << endl;
        influenciaOptimismo = obtenerEntradaNumerica<int>("Selecciona la opción que más se identifique contigo: ", 1, 4);
    cout << endl << "¡Qué hermoso! El optimismo es una fuerza poderosa que no solo te beneficia a ti, sino que también puede ser un faro para los demás. ✨" << endl << endl;

    cout << "¿Hay algún recurso (libro, podcast, persona) que te ayude a mantener o fortalecer tu optimismo? 📚🎧👥" << endl << endl
              << "1.- Un libro o material de crecimiento personal que me inspira. 📖" << endl
              << "2.- Un podcast o charlas que me brindan nuevas perspectivas positivas. 🎙️" << endl
              << "3.- Una persona específica que siempre me anima y me impulsa hacia el optimismo. 💖" << endl
              << "4.- Actividades como la meditación o el mindfulness que me ayudan a centrarme en lo positivo. 🧘‍♀️" << endl 
              << "5.- Yo solo 😁" << endl << endl;
        recursoOptimismo = obtenerEntradaNumerica<int>("Selecciona el recurso que más te apoya: ", 1, 4);
    cout << endl << "¡Qué valioso! Identificarlo y usarlo es una estrategia inteligente para nutrir tu optimismo.🌟" << endl << endl;

    cout << "¿Qué pequeño paso podrías dar para fomentar aún más tu optimismo? 👣" << endl
              << "💡 Tu pequeño paso:" << endl << endl;
    string pasoOptimismo;
    getline(cin, pasoOptimismo);
    cout << endl << "¡Excelente! Los pequeños pasos son el cimiento de grandes cambios. Confío en que ese paso te acercará a un optimismo aún mayor. 💪" << endl << endl;

    system ("pause");
    system ("cls");

        // --- Resumen de tu Terapia de Optimismo ---
    cout << endl << "--- Resumen de tu Terapia de Optimismo ---" << endl;
    cout << "Causa del optimismo: " << causaOptimismo << endl;
    cout << "Cómo percibiste el optimismo: " << sensacionOptimismo << endl;
    cout << "Con quién estabas al sentir optimismo: " << interaccionOptimismo << endl;
    cout << "Profundidad emocional del optimismo (lo que más lo impulsó/contribuyó): " << profundidadEmocionalOptimismo << endl;
    // IMPORTANTE: 'otrasAccionesOptimismo' contendrá solo el último valor asignado.
    // Esto se debe a que la variable se reutiliza para varias preguntas diferentes.
    cout << "Última respuesta sobre otras acciones/sensaciones/recuerdos/permiso de optimismo (valor final de 'otrasAccionesOptimismo'): " << otrasAccionesOptimismo << endl;
    cout << "Cómo crees que tu optimismo puede influir en otros: " << influenciaOptimismo << endl;
    cout << "Recurso que te ayuda a mantener el optimismo: " << recursoOptimismo << endl;
    cout << "Tu pequeño paso para fomentar el optimismo: " << pasoOptimismo << endl; // Incluimos la nueva variable string
    cout << "-------------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un gusto charlar contigo sobre el optimismo y todo lo que lo rodea." << endl
              << "😄 Recuerda que mantener una perspectiva optimista puede ser una de tus mayores fortalezas y una elección poderosa que puedes hacer cada día." << endl
              << "😊 ¡Sigue cultivando esa luz interior y viendo el lado positivo de la vida, incluso en los desafíos! Si necesitas algo más, ya sabes dónde encontrarme." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

void terapiaPlacer()
{
    string causaPlacer;
    int sensacionPlacer, interaccionPlacer, profundidadEmocionalPlacer, otrasAccionesPlacer, balancePlacer, masPlacer; 

    cout << endl << "¡Hola! Es un gusto que estés aquí para explorar el placer. ✨" << endl
              << "¿Podrías compartirme eso que te causó placer recientemente? 😊" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaPlacer);
    cout << endl << "¡Gracias por compartir eso! Es inspirador ver cómo el placer se manifiesta en tu vida. 😄" << endl << endl
              << "¿Cómo supiste que era placer? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (relajación, una sensación de bienestar, calidez). 🦋" << endl
              << "2.- Por mis pensamientos (felicidad, satisfacción, aprecio por el momento). 💡" << endl
              << "3.- Por mis acciones o el impulso de hacer algo (sonreír, expresar alegría, querer prolongar el momento). 🚀" << endl
              << "4.- Sentí una profunda paz interior y claridad mental. ✨🧘‍♀️" << endl << endl;
    sensacionPlacer = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    cout << endl << "Es maravilloso cómo el placer nos conecta con el bienestar. ¡Qué bien que lo experimentes así! 😊" << endl
              << "Es una emoción muy valiosa. 🎉" << endl << endl
              << "¿Con quién estabas cuando sentiste placer?🤝" << endl << endl; 
    cout << "1.- Estaba con mi pareja. ❤️" << endl
              << "2.- Estaba con un familiar cercano. 👨‍👩‍👧‍👦" << endl
              << "3.- Estaba con mis amigos. 👯‍♀️" << endl
              << "4.- Estaba a solas, disfrutando de mi propia reflexión o logro. 🧘‍♀️" << endl
              << "5.- Estaba en un entorno público (trabajo, evento, ciudad). 🏢🌳" << endl << endl; 
    interaccionPlacer = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5); 
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccionPlacer) {
        case 1:
            cout << endl << endl << "¡Qué importante es compartir el placer con tu pareja! ❤️‍🔥" << endl
                      << "Saber que cuentas con alguien con quien disfrutar estos momentos es un gran impulso. ✨" << endl << endl
                      << "¿Qué te hizo sentir aún más placentero en ese momento? 🤔" << endl << endl
                      << "1.- Su cariño y cercanía me brindaron seguridad y dicha. 🫂" << endl
                      << "2.- Su alegría o aprecio por la situación me hizo sentir más gozo. 💡" << endl
                      << "3.- El simple hecho de compartir ese momento especial fortaleció mi sensación de bienestar. 💪" << endl
                      << "4.- Sentimos una conexión profunda que hizo el momento inolvidable. 🚀" << endl << endl;
            profundidadEmocionalPlacer = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4);
            switch (profundidadEmocionalPlacer) {
                case 1:
                    cout << endl << "¡El afecto de pareja es un pilar fundamental! Qué bueno que te impulsó así. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡La alegría compartida es un regalo! Qué bien que lo experimentes así. ✨" << endl;
                    break;
                case 3:
                    cout << endl << "La conexión en pareja enriquece profundamente el placer. 🎉" << endl;
                    break;
                case 4:
                    cout << endl << "¡Esa sensación de conexión es poderosa! Qué valioso que la experimentes. 😊" << endl;
                    break;
            }
            break;
        case 2:
            cout << endl << endl << "¡Qué reconfortante! Sentir placer con un familiar cercano es muy especial. 👨‍👩‍👧‍👦" << endl
                      << "Los lazos familiares a menudo nos brindan una base sólida de bienestar. Y creo que lo fué para ti 😊" << endl << endl
                      << "¿Qué aspecto de esa interacción hizo crecer más tu placer? 🤔" << endl << endl
                      << "1.- Sus palabras de sabiduría o consejo. 📚" << endl
                      << "2.- El sentir su amor incondicional y respaldo. 💖" << endl
                      << "3.- Recordar momentos positivos o valores familiares que te brindan alegría. 🕰️" << endl
                      << "4.- Su propia actitud positiva que te contagió. 😄" << endl << endl;
            profundidadEmocionalPlacer = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a ti: ", 1, 4);
            switch (profundidadEmocionalPlacer) {
                case 1:
                    cout << endl << "¡Las palabras sabias de la familia son un tesoro! Qué bien que te guíen hacia el placer. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "El amor familiar es un refugio seguro. Me alegra que te dé tanto placer. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "Nuestras raíces y recuerdos nos brindan mucha satisfacción. ✨ Qué bien que lo valores." << endl;
                    break;
                case 4:
                    cout << endl << "¡El placer en familia es maravilloso! Es una gran fuente de inspiración. 😊" << endl;
                    break;
            }
            break;
        case 3:
            cout << endl << endl << "¡Excelente! Compartir el placer con amigos es una experiencia muy energizante. 👯‍♀️🎉" << endl
                      << "El apoyo de los amigos pueden hacer que los momentos de disfrute sean aún más plenos. ¿Verdad? 😄" << endl << endl
                      << "¿Qué fue lo que más valoraste de la interacción con tus amigos que impulsó tu placer? ✨" << endl << endl
                      << "1.- Sus bromas o risas que aligeraron el ambiente y me llenaron de alegría. 😂" << endl
                      << "2.- Sus palabras de aliento y fe en mis capacidades. 🗣️" << endl
                      << "3.- El simple hecho de compartir un buen rato y sentirme conectado/a. 🤝" << endl
                      << "4.- La sensación de que podemos disfrutar plenamente la vida juntos. 🚀" << endl << endl;
            profundidadEmocionalPlacer = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a ti: ", 1, 4);
            switch (profundidadEmocionalPlacer) {
                case 1:
                    cout << endl << "¡Las risas con amigos son la mejor medicina para el placer! Qué bien que las tengas. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡El aliento de los amigos es un motor poderoso! Me alegra que te impulse al placer. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "Sentirse conectado y en compañía es fundamental para el placer. ✨" << endl;
                    break;
                case 4:
                    cout << endl << "¡Esa confianza mutua es genial! Compartir momentos de disfrute es un gran placer. 😊" << endl;
                    break;
            }
            break;
        case 4:
            cout << endl << endl << "¡Qué poderoso! Encontrar el placer dentro de ti, en la tranquilidad de tu propia compañía, es una señal de gran fortaleza interna. 🧘‍♀️✨" << endl
                      << "Es un placer que nace de tu propia sabiduría y auto-conexión. Me alegro mucho. 😄" << endl << endl
                      << "¿Qué te ayudó a conectar con ese placer desde tu interior mientras estabas a solas? 🤔" << endl << endl
                      << "1.- La libertad de experimentar el momento sin distracciones externas. 🕊️" << endl
                      << "2.- Me permitió reflexionar profundamente sobre mis satisfacciones y bienestar. 💡" << endl
                      << "3.- Sentí una gran paz y una conexión con mi fuerza interior. 💖" << endl
                      << "4.- Fue un momento de pura gratitud y aprecio por las alegrías de la vida. 🙏" << endl << endl;
            profundidadEmocionalPlacer = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a tu caso: ", 1, 4);
            switch (profundidadEmocionalPlacer) {
                case 1:
                    cout << endl << "¡Qué valioso! 💎 Esa libertad de sentir el placer es un acto de auto-cuidado." << endl;
                    break;
                case 2:
                    cout << endl << "¡Excelente! 🌟 La introspección sobre tu bienestar es muy enriquecedora. 😊 Me alegra que la explores." << endl;
                    break;
                case 3:
                    cout << endl << "¡Qué sensación tan hermosa! ✨ Esa conexión con tu fuerza interior es poderosa. 😊 Me alegra que la encuentres." << endl;
                    break;
                case 4:
                    cout << endl << "¡Qué lindo! 🥰 La gratitud es un camino directo al placer personal. " << endl << endl;
                    break;
            }
            break;
        case 5:
            cout << endl << endl << "¡Comprendo! A veces el placer surge de una nueva perspectiva o de lo que sucede a nuestro alrededor en entornos públicos. 🏢🌳" << endl
                      << "Un evento, una observación o la energía del lugar pueden cambiar radicalmente nuestra forma de sentir. " << endl
                      << "Me alegro de que tu entorno te haya impulsado al placer. 😊" << endl << endl
                      << "¿Qué aspecto contribuyó a tu placer? 🤔" << endl << endl
                      << "1.- Una noticia positiva o un evento inspirador que presencié. 📰" << endl
                      << "2.- Observar la belleza o la creatividad en el ambiente. 🎨" << endl
                      << "3.- Sentir la energía colectiva de un grupo o comunidad disfrutando. 🤝" << endl
                      << "4.- Un descubrimiento inesperado que me brindó alegría. 🗺️" << endl << endl;
            profundidadEmocionalPlacer = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu experiencia: ", 1, 4);
            switch (profundidadEmocionalPlacer) {
                case 1:
                    cout << endl << "¡Qué bien! Es genial que encuentres placer en las experiencias del mundo. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡La inspiración está en todas partes! Observar la belleza puede ser muy gratificante. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "La energía positiva de una comunidad puede ser muy potente para el placer. ✨" << endl;
                    break;
                case 4:
                    cout << endl << "¡Los descubrimientos inesperados son un regalo! Me alegra que los identifiques como fuente de placer. 😊" << endl << endl;
                    break;
            }
            break;
    }

    system("pause"); 
    system("cls");   

    cout << endl << "¿Qué otras cosas te provocan esta emoción de placer? 😄" << endl << endl
              << "1.- Actividades que disfruto (hobbies, deportes, creatividad). 🎨⚽" << endl
              << "2.- Pequeños logros diarios o avances en mis proyectos. 📝✅" << endl
              << "3.- Conectar con la naturaleza o experimentar belleza. 🌳🌅" << endl
              << "4.- Aprender algo nuevo o adquirir conocimiento. 📚💡" << endl << endl;
    otrasAccionesPlacer = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras placer en estas áreas de tu vida." << endl << endl;

    cout << "¿Cómo se siente tu cuerpo cuando sientes placer? ✨" << endl << endl
              << "1.- Con ligereza y una sensación de bienestar general. 🎈" << endl
              << "2.- Con energía renovada y motivación para actuar. ⚡" << endl
              << "3.- Con una sensación de apertura en el pecho y una sonrisa fácil. 😊" << endl
              << "4.- Todas las anteriores y una sensación general de satisfacción. 🥳" << endl << endl;
    otrasAccionesPlacer = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente el placer en ti! 😌" << endl
              << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos en los que sentiste un profundo placer? 🧠💖" << endl << endl
              << "1.- Momentos en los que logré algo que me llenó de satisfacción. ⛰️" << endl
              << "2.- Experiencias que me abrieron nuevas posibilidades de disfrute. 🏅" << endl
              << "3.- Momentos sencillos en los que sentí una gran alegría o gratitud. 🍃" << endl
              << "4.- Alguna historia, película o canción que me brindó una profunda sensación de bienestar. 🎬🎵📚" << endl << endl;
    otrasAccionesPlacer = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos llenos de placer! 💫" << endl
              << "😊 Ya sean grandes hitos o pequeños instantes, todos contribuyen a tu capacidad de disfrutar la vida." << endl << endl;

    cout << "¿Sientes que te permites experimentar el placer plenamente o a veces te lo limitas? 🤔" << endl << endl
              << "1.- Sí, me permito sentir el placer sin reservas. 🎉" << endl
              << "2.- No me lo permito por algún motivo (miedo a que se acabe, sentir que no lo merezco). 😔" << endl
              << "3.- Me cuesta disfrutarlo del todo, hay algo que me frena. 😕" << endl << endl;
    otrasAccionesPlacer = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 3);
    if (otrasAccionesPlacer == 2 || otrasAccionesPlacer == 3) {
        cout << endl << "Comprendo. Es valioso reconocerlo. 🤔" << endl
                  << "A veces, existen razones por las que nos cuesta entregarnos al placer. 😔" << endl
                  << "Lo importante es ser consciente de ello y trabajar en permitirnos esos momentos de disfrute. ✨" << endl
                  << "Si lo necesitas o estás interesado, podemos explorar opciones de apoyo profesional en otro momento. 🤝" << endl << endl;
    } else {
        cout << endl << endl << "¡Eso es fantástico! 🎉 Permitirte sentir el placer sin límites es un acto de bienestar." << endl
                  << "😊 Me da mucho gusto que lo abraces completamente." << endl;
    }

    system("pause"); 
    system("cls");

    cout << endl << "¿De qué manera crees que el placer contribuye a tu equilibrio y bienestar? ⚖️" << endl << endl
              << "1.- Es esencial para recargarme y mantener mi energía. 🔋" << endl
              << "2.- Me ayuda a reducir el estrés y a relajarme. 💨" << endl
              << "3.- Me motiva a seguir adelante y a apreciar más la vida. 🌱" << endl
              << "4.- Todas las anteriores, lo veo como un componente vital de mi felicidad. 😊" << endl << endl;
              balancePlacer = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu sentir: ", 1, 4);
    if (balancePlacer > 2) { 
        cout << endl << "Es muy valioso reconocer la importancia del placer para tu bienestar integral. Es un pilar fundamental para una vida plena. ✨" << endl << endl;
    } else {
        cout << endl << "Comprendo. Es importante recordar que el placer puede ser un motor significativo para tu bienestar general y no solo una distracción. Considera cómo el disfrute puede nutrirte y darte más energía. 🌱" << endl << endl;
    }

    cout << "¿Cómo te sentirías al tener más momentos de placer en tu futuro? 🤔" << endl << endl
              << "1.- Me emociona la idea y estoy dispuesto/a a buscar más disfrute. 🎉" << endl
              << "2.- Me parece una buena idea, aunque necesitaría planificarlo. 🗓️" << endl
              << "3.- Siento cierta resistencia o culpa al pensar en ello. 😬" << endl
              << "4.- No lo había considerado así, pero suena como algo valioso. 💡" << endl << endl;
        masPlacer = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a lo que sientes: ", 1, 4);
    if (masPlacer == 3) {
        cout << endl << "Comprendo ese sentimiento. A veces la culpa se asocia con el propio placer. Recuerda que mereces sentirte bien y que el disfrute es una parte esencial de tu cuidado personal. ✨" << endl << endl;
    } else {
        cout << endl << "¡Qué excelente disposición! Es un paso importante abrirte a más placer en tu vida. Te lo mereces. 😊" << endl << endl;
    }

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Placer ---
    cout << endl << "--- Resumen de tu Terapia de Placer ---" << endl;
    cout << "Causa del placer: " << causaPlacer << endl;
    cout << "Cómo percibiste el placer: " << sensacionPlacer << endl;
    cout << "Con quién estabas al sentir placer: " << interaccionPlacer << endl;
    cout << "Profundidad emocional del placer (lo que más lo impulsó/contribuyó): " << profundidadEmocionalPlacer << endl;
    // IMPORTANTE: 'otrasAccionesPlacer' contendrá solo el último valor asignado.
    // Esto se debe a que la variable se reutiliza para varias preguntas diferentes.
    cout << "Última respuesta sobre otras acciones/sensaciones/recuerdos/permiso de placer (valor final de 'otrasAccionesPlacer'): " << otrasAccionesPlacer << endl;
    cout << "Cómo el placer contribuye a tu equilibrio y bienestar: " << balancePlacer << endl;
    cout << "Cómo te sentirías al tener más momentos de placer en tu futuro: " << masPlacer << endl;
    cout << "-------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración sobre el placer." << endl
              << "😄 Recuerda que buscar y experimentar el placer es una parte fundamental de vivir una vida plena y de cuidar tu bienestar." << endl
              << "😊 ¡Permítete disfrutar de esas experiencias que te nutren cada día! Si necesitas algo más, ya sabes dónde encontrarme." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

void terapiaCalma()
{
    string causaCalma;
    int sensacionCalma, interaccionCalma, profundidadEmocionalCalma, otrasAccionesCalma, calmaManejoEstres, gestoCalma; 

    cout << endl << "¡Hola! Es un gusto que estés aquí para explorar la calma. 🌿" << endl
              << "¿Podrías compartirme lo que te haya causado la sensación de calma? 😊" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaCalma);
    cout << endl << "¡Gracias por compartir eso! Es inspirador ver cómo la calma se manifiesta en tu vida. 😄" << endl << endl
              << "¿Cómo la notaste principalmente en ti? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (respiración lenta, músculos relajados, una sensación de ligereza). 🦋" << endl
              << "2.- Por mis pensamientos (claros, sin preocupaciones, de aceptación). 💡" << endl
              << "3.- Por mis acciones o el impulso de hacer algo (moverme lentamente, sonreír suavemente, simplemente estar). 🚀" << endl
              << "4.- Sentí una profunda paz interior y una quietud mental. ✨🧘‍♀️" << endl << endl;
    sensacionCalma = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    cout << endl << "Es maravilloso cómo la calma nos envuelve y nos da serenidad. ¡Qué bien que la experimentes así! 😊" << endl
              << "Es una emoción muy valiosa para nuestro bienestar. 🎉" << endl << endl
              << "¿Con quién estabas cuando te sentiste en calma?🤝" << endl << endl; 
    cout << "1.- Estaba con mi pareja, disfrutando de un momento de tranquilidad. ❤️" << endl
              << "2.- Estaba con un familiar cercano, en un ambiente pacífico. 👨‍👩‍👧‍👦" << endl
              << "3.- Estaba con mis amigos, en un ambiente relajado. 👯‍♀️" << endl
              << "4.- Estaba a solas, disfrutando de mi propio espacio y quietud. 🧘‍♀️" << endl
              << "5.- Estaba en un entorno público (un parque, una biblioteca, un café tranquilo). 🏢🌳" << endl << endl; 
    interaccionCalma = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5); 
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccionCalma) {
        case 1:
            cout << endl << endl << "¡Qué armonioso! Compartir la calma con tu pareja puede fortalecer aún más la conexión. ❤️‍🔥" << endl
                      << "Seguro que su presencia te brindó un apoyo extra para esa serenidad. ✨" << endl << endl
                      << "¿Cómo crees que su compañía influyó en tu calma en ese momento? 🤔" << endl << endl
                      << "1.- Su apoyo incondicional me hizo sentir seguro/a y tranquilo/a. 🫂" << endl
                      << "2.- Compartir un momento de silencio o entendimiento mutuo me dio paz. 💡" << endl
                      << "3.- El simple hecho de compartir ese espacio de tranquilidad me hizo sentir más sereno/a. 💪" << endl
                      << "4.- Juntos, creamos una atmósfera de completa relajación. 🚀" << endl << endl;
            profundidadEmocionalCalma = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4);
            switch (profundidadEmocionalCalma ) {
                case 1:
                    cout << endl << "¡El apoyo de pareja es un gran pilar! Qué bueno que te brindó esa calma. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡Es genial cuando se encuentra la paz juntos! Una dinámica muy saludable. ✨" << endl;
                    break;
                case 3:
                    cout << endl << "La unión calma el alma. Qué valioso que lo experimentes. 🎉" << endl;
                    break;
                case 4:
                    cout << endl << "¡Esa sensación es poderosa! Juntos, la calma se profundiza. 😊" << endl;
                    break;
            }
            break;
        case 2:
            cout << endl << endl << "¡Qué reconfortante! Sentir calma con un familiar cercano es muy especial. 👨‍👩‍👧‍👦" << endl
                      << "Los lazos familiares a menudo nos dan una base sólida de serenidad. ¿Verdad? 😊" << endl << endl
                      << "¿Qué aspecto de la interacción con tu familiar alimentó más tu calma? 🤔" << endl << endl
                      << "1.- Sus palabras de sabiduría o consejo. 📚" << endl
                      << "2.- El sentir su amor incondicional y su presencia tranquilizadora. 💖" << endl
                      << "3.- Recordar momentos pacíficos o tradiciones familiares que te dan paz. 🕰️" << endl
                      << "4.- Su propia actitud tranquila que te contagió. 😄" << endl << endl;
            profundidadEmocionalCalma = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            switch (profundidadEmocionalCalma ) {
                case 1:
                    cout << endl << "¡Las palabras sabias de la familia son un tesoro! Qué bien que te guíen hacia la calma. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "El amor familiar es un refugio seguro. Me alegra que te dé tanta paz. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "Nuestras raíces nos dan mucha serenidad para el futuro. ✨ Es hermoso que lo valores." << endl;
                    break;
                case 4:
                    cout << endl << "¡La calma en familia es maravillosa! Es una gran fuente de bienestar. 😊" << endl;
                    break;
            }
            break;
        case 3:
            cout << endl << endl << "¡Genial! Compartir la calma con amigos es una experiencia muy enriquecedora. 👯‍♀️🎉" << endl
                      << "La camaradería y el apoyo de los amigos pueden hacer que los momentos de tranquilidad sean aún más profundos. ¿Verdad? 😄" << endl << endl
                      << "¿Qué fue lo que más valoraste de la interacción con tus amigos? ✨" << endl << endl
                      << "1.- Sus pláticas tranquilas o el silencio compartido que me brindó paz. 😂" << endl
                      << "2.- Sus palabras de apoyo que me ayudaron a relajarme. 🗣️" << endl
                      << "3.- El simple hecho de compartir un momento pacífico y sentirme conectado/a. 🤝" << endl
                      << "4.- La sensación de que podemos encontrar la paz juntos. 🚀" << endl << endl;
            profundidadEmocionalCalma = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            switch (profundidadEmocionalCalma) {
                case 1:
                    cout << endl << "¡Las pláticas tranquilas o los silencios compartidos con amigos son un tesoro! Qué bien que los disfrutas. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡El apoyo de los amigos es un motor poderoso para la calma! Me alegra que te impulsen. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "Sentirse conectado y en compañía es fundamental para la calma. ✨" << endl;
                    break;
                case 4:
                    cout << endl << "¡Esa confianza mutua es genial! Juntos, los amigos pueden encontrar mucha paz. 😊" << endl;
                    break;
            }
            break;
        case 4:
            cout << endl << endl << "¡Qué poderoso! Encontrar la calma dentro de ti, en la tranquilidad de tu propia compañía, es una señal de gran fortaleza interna. 🧘‍♀️✨" << endl
                      << "Es una calma que nace de tu propia sabiduría y auto-conexión. Me alegro mucho. 😄" << endl << endl
                      << "¿Qué te ayudó a conectar con esa calma desde tu interior mientras estabas a solas? 🤔" << endl << endl
                      << "1.- La libertad de experimentar el momento sin distracciones externas. 🕊️" << endl
                      << "2.- Me permitió reflexionar profundamente sobre mis pensamientos y encontrar claridad. 💡" << endl
                      << "3.- Sentí una gran paz y una conexión con mi fuerza interior. 💖" << endl
                      << "4.- Fue un momento de pura gratitud y aprecio por la quietud. 🙏" << endl << endl;
            profundidadEmocionalCalma = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4);
            switch (profundidadEmocionalCalma) {
                case 1:
                    cout << endl << "¡Qué valioso! 💎 Esa libertad de sentir la calma es un acto de auto-cuidado." << endl;
                    break;
                case 2:
                    cout << endl << "¡Excelente! 🌟 La introspección es muy enriquecedora. 😊 Me alegra que la explores para encontrar calma." << endl;
                    break;
                case 3:
                    cout << endl << "¡Qué sensación tan hermosa! ✨ Esa conexión con tu fuerza interior es poderosa. 😊 Me alegra que la encuentres." << endl;
                    break;
                case 4:
                    cout << endl << "¡Qué lindo! 🥰 La gratitud por la quietud es un camino directo a la calma personal. " << endl << endl;
                    break;
            }
            break;
        case 5:
            cout << endl << endl << "¡Comprendo! A veces la calma surge de una nueva perspectiva o de lo que sucede a nuestro alrededor en entornos públicos. 🏢🌳" << endl
                      << "Un ambiente tranquilo, una observación o la energía del lugar pueden generar serenidad. " << endl
                      << "Me alegro de que tu entorno te haya impulsado a la calma. 😊" << endl << endl
                      << "¿Qué aspecto de ese entorno o situación contribuyó a tu calma? 🤔" << endl << endl
                      << "1.- Un ambiente pacífico o una actividad relajante que presencié. 📰" << endl
                      << "2.- Observar la naturaleza o la belleza en el ambiente urbano. 🎨" << endl
                      << "3.- Sentir la tranquilidad o el ritmo pausado de un lugar. 🤝" << endl
                      << "4.- Un descubrimiento inesperado que me brindó una sensación de paz. 🗺️" << endl << endl;
            profundidadEmocionalCalma = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu experiencia: ", 1, 4);
            switch (profundidadEmocionalCalma) {
                case 1:
                    cout << endl << "¡Qué bien! Es genial que encuentres calma en ambientes serenos. 🌟" << endl;
                    break;
                case 2:
                    cout << endl << "¡La inspiración está en todas partes! Observar la belleza puede ser muy tranquilizadora. 💪" << endl;
                    break;
                case 3:
                    cout << endl << "La energía tranquila de un lugar puede ser muy potente para la calma. ✨" << endl;
                    break;
                case 4:
                    cout << endl << "¡Los descubrimientos inesperados son un regalo! Me alegra que los identifiques como fuente de calma. 😊" << endl << endl;
                    break;
            }
            break;
    }

    system("pause"); 
    system("cls");   

    cout << endl << "¿Qué otras cosas te provocan esta emoción de calma? 😄" << endl << endl
              << "1.- Actividades relajantes (meditación, leer, escuchar música suave). 🎨🎧" << endl
              << "2.- Momentos de silencio o quietud en mi día a día. 🤫✅" << endl
              << "3.- Conectar con la naturaleza o el aire libre. 🌳🌅" << endl
              << "4.- Realizar tareas repetitivas o que no requieren mucha concentración. 📚💡" << endl << endl;
    otrasAccionesCalma = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras calma en estas áreas de tu vida." << endl << endl;

    cout << "¿Cómo se siente tu cuerpo cuando estás calma? ✨" << endl << endl
              << "1.- Con una ligereza y una sensación de flotar. 🎈" << endl
              << "2.- Con los músculos relajados y una respiración profunda. ⚡" << endl
              << "3.- Con una sensación de calorcito suave y el corazón en paz. 😊" << endl
              << "4.- Todas las anteriores y una sensación general de serenidad total. 🥳" << endl << endl;
    otrasAccionesCalma = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente la calma en ti! 😌" << endl
              << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos en los que sentiste una profunda calma? 🧠💖" << endl << endl
              << "1.- Momentos en los que logré resolver algo que me preocupaba. ⛰️" << endl
              << "2.- Experiencias en la naturaleza que me conectaron con la tranquilidad. 🏅" << endl
              << "3.- Momentos sencillos en los que sentí una gran paz interior. 🍃" << endl
              << "4.- Alguna melodía, paisaje o lectura que me brindó una profunda serenidad. 🎬🎵📚" << endl << endl;
    otrasAccionesCalma = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos llenos de calma! 💫" << endl
              << "😊 Ya sean grandes logros o pequeños instantes, todos contribuyen a tu capacidad de encontrar la paz." << endl << endl;

    cout << "¿Sientes que te permites experimentar la calma plenamente o a veces te la limitas? 🤔" << endl << endl
              << "1.- Sí, me permito sentir la calma sin reservas. 🎉" << endl
              << "2.- No me lo permito por algún motivo (creer que no hay tiempo, sentir que debo estar activo/a). 😔" << endl
              << "3.- Me cuesta relajarme del todo, hay algo que me frena. 😕" << endl << endl;
    otrasAccionesCalma = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 3);
    if (otrasAccionesCalma == 2 || otrasAccionesCalma == 3) {
        cout << endl << "Comprendo. Es valioso reconocerlo. 🤔" << endl
                  << "A veces, existen razones por las que nos cuesta entregarnos a la calma. 😔" << endl
                  << "Lo importante es ser consciente de ello y trabajar en permitirnos esos momentos de serenidad. ✨" << endl
                  << "Si lo necesitas o estás interesado, podemos explorar opciones de apoyo profesional en otro momento. 🤝" << endl << endl;
    } else {
        cout << endl << endl << "¡Eso es fantástico! 🎉 Permitirte sentir la calma sin límites es un acto de bienestar." << endl
                  << "😊 Me da mucho gusto que la abraces completamente." << endl;
    }

    system("pause"); 
    system("cls");

    cout << endl << "¿De qué manera crees que la calma te ayuda a manejar el estrés o la ansiedad en tu vida diaria? 🛡️" << endl << endl
              << "1.- Me permite pensar con más claridad y encontrar soluciones. 💡" << endl
              << "2.- Me ayuda a mantener la perspectiva y no sentirme abrumado/a. 🧘‍♀️" << endl
              << "3.- Reduce la tensión física y mental, permitiéndome descansar. 🌬️" << endl
              << "4.- Todas las anteriores, es una herramienta clave para mi bienestar. 💪" << endl << endl;
        calmaManejoEstres = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4);
    if (calmaManejoEstres > 2) { 
        cout << endl << "Es muy valioso reconocer cómo la calma se convierte en tu aliada para enfrentar los desafíos. Es una herramienta poderosa. ✨" << endl << endl;
    } else {
        cout << endl << "Comprendo. Es importante que identifiques cómo la calma puede ser un recurso fundamental para tu gestión del estrés. Incluso pequeños momentos de serenidad pueden marcar una gran diferencia. 🌱" << endl << endl;
    }

    cout << "¿Qué pequeño gesto puedes hacer hoy mismo para invitar más calma a tu día? 👣" << endl << endl
              << "1.- Tomarme unos minutos para respirar profundamente y en silencio. 🌬️" << endl
              << "2.- Escuchar música relajante o sonidos de la naturaleza. 🎶" << endl
              << "3.- Dar un paseo corto y consciente, prestando atención a mi entorno. 🚶‍♀️🌳" << endl
              << "4.- Dedicar un momento a una actividad sencilla que me dé paz, como leer o dibujar. 📖✍️" << endl << endl;
         gestoCalma = obtenerEntradaNumerica<int>("Selecciona el gesto que más te gustaría hacer: ", 1, 4);
    cout << endl << "¡Excelente! Los pequeños gestos son el cimiento de grandes cambios. Confío en que ese paso te acercará a una calma aún mayor. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Calma ---
    cout << endl << "--- Resumen de tu Terapia de Calma ---" << endl;
    cout << "Causa de la calma: " << causaCalma << endl;
    cout << "Cómo percibiste la calma: " << sensacionCalma << endl;
    cout << "Con quién estabas al sentir calma: " << interaccionCalma << endl;
    cout << "Profundidad emocional de la calma (lo que más la impulsó/contribuyó): " << profundidadEmocionalCalma << endl;
    // IMPORTANTE: 'otrasAccionesCalma' contendrá solo el último valor asignado.
    // Esto se debe a que la variable se reutiliza para varias preguntas diferentes.
    cout << "Última respuesta sobre otras acciones/sensaciones/recuerdos/permiso de calma (valor final de 'otrasAccionesCalma'): " << otrasAccionesCalma << endl;
    cout << "Cómo la calma te ayuda a manejar el estrés/ansiedad: " << calmaManejoEstres << endl;
    cout << "Pequeño gesto para invitar más calma a tu día: " << gestoCalma << endl;
    cout << "-----------------------------------" << endl;


    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración sobre la calma y todo lo que la rodea." << endl
              << "😄 Recuerda que cultivar la calma es una de tus mayores fortalezas y una elección poderosa que puedes hacer cada día." << endl
              << "😊 ¡Sigue buscando esos momentos de serenidad y permítete vivirlos plenamente! Si necesitas algo más, ya sabes dónde encontrarme." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

//Tristeza
void terapiaDecepcion ()
{
    string causaDecepcion;
    int impactoExpectativaDecepcion, fuenteDecepcion, reaccionesInicialesDecepcion, aprendizajeYAccionDecepcion; 
    int primerasReaccionesDecepcion, pensamientosRecurrentesDecepcion, alivioMomentaneoDecepcion, recursosInternosDecepcion,  accionConcretaDecepcion;

    // --- Inicio de la mini-terapia sobre la emoción de la decepción ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la *decepción* que sientes. Es una emoción desafiante, y es un acto de fortaleza abordarla. 😔" << endl
              << "¿Podrías compartirme brevemente la situación específica que te causó esta *decepción*? No necesitas entrar en detalles si no lo deseas, solo el evento principal. 💔" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaDecepcion);
    cout << endl << "Gracias por compartir eso. Es completamente válido sentir *decepción* cuando las cosas no salen como esperamos. Permítete reconocer esa emoción. 🙏" << endl << endl
              << "Pensando en esa situación, ¿cuál crees que fue la expectativa principal que no se cumplió y te llevó a sentir *decepción*? 🤔" << endl << endl;
    cout << "1.- Esperaba un resultado diferente en un evento o proyecto. 📊" << endl
              << "2.- Tenía una expectativa clara sobre el comportamiento o las palabras de alguien. 🗣" << endl
              << "3.- Confiaba en que una oportunidad se concretaría o que algo cambiaría. 🚀" << endl
              << "4.- Creía en mis propias capacidades o decisiones, y siento que me fallé a mí mismo/a. 🧠" << endl << endl;
    impactoExpectativaDecepcion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa esa expectativa: ", 1, 4);
    cout << endl << "Es crucial identificar qué expectativa se rompió, ya que esto nos ayuda a entender la raíz de tu *decepción*. Reconocerlo es un paso importante. 💡" << endl
              << "Ahora, ¿quién o qué fue la fuente principal de esta *decepción* en la situación que me compartiste? 💔" << endl << endl;
    cout << "1.- Fue la acción o inacción de otra persona. 👤" << endl
              << "2.- Fue una circunstancia externa incontrolable (un evento, una situación del entorno). 🌫" << endl
              << "3.- Fue el resultado de mis propias decisiones o acciones. ✋" << endl
              << "4.- Fue una combinación de factores externos e internos. 🔗" << endl << endl; 
    fuenteDecepcion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte a tu caso: ", 1, 4); 
    system("cls"); // Limpia la pantalla de la consola

    switch (fuenteDecepcion) {
        case 1:
            cout << endl << endl << "Entiendo. Es especialmente doloroso cuando la *decepción* viene de otra persona. 🫂" << endl
                      << "Nuestras expectativas sobre los demás pueden ser fuertes, y cuando no se cumplen, duele profundamente. 😔" << endl << endl
                      << "¿Cómo crees que esta decepción específica por la otra persona te impactó a nivel emocional? 🤔" << endl << endl
                      << "1.- Me sentí traicionado/a o engañado/a. 🔪" << endl
                      << "2.- Sentí que mi confianza fue vulnerada. 💔" << endl
                      << "3.- Me sentí subestimado/a o que no fui tomado/a en cuenta. 🌬" << endl
                      << "4.- La situación me hizo reevaluar la relación con esa persona. ⚖" << endl << endl;
            reaccionesInicialesDecepcion = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4);
            break;
        case 2:
            cout << endl << endl << "Comprendo. Es frustrante cuando la *decepción* surge de circunstancias que están fuera de nuestro control. ☔" << endl
                      << "A veces la vida nos presenta desafíos inesperados. Es válido sentir esa frustración. 😔" << endl << endl
                      << "¿Cómo crees que esta decepción por la circunstancia externa te impactó a nivel emocional? 🤔" << endl << endl
                      << "1.- Me sentí impotente o sin control sobre la situación. 🌫" << endl
                      << "2.- Sentí que mis esfuerzos fueron en vano, a pesar de mis intenciones. 💧" << endl
                      << "3.- Me vi obligado/a a cambiar mis planes o expectativas de forma abrupta. 🗺" << endl
                      << "4.- Me sentí desanimado/a sobre el futuro o sobre situaciones similares. 📉" << endl << endl;
            reaccionesInicialesDecepcion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            break;
        case 3:
            cout << endl << endl << "Es un acto de gran honestidad reconocer que la *decepción* puede venir de nuestras propias acciones o decisiones. 🧠" << endl
                      << "Esta es una oportunidad para aprender y crecer a partir de lo sucedido. 💪" << endl << endl
                      << "¿Cómo crees que esta decepción por tus propias acciones te impactó a nivel emocional? 🤔" << endl << endl
                      << "1.- Sentí arrepentimiento o culpa por mis elecciones. 😔" << endl
                      << "2.- Dudé de mis capacidades o mi juicio. 💡" << endl
                      << "3.- Me sentí frustrado/a por no haber hecho las cosas de otra manera. 🚧" << endl
                      << "4.- Me impulsó a reflexionar profundamente sobre mi comportamiento o mis patrones. 🌟" << endl << endl;
            reaccionesInicialesDecepcion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            break;
        case 4:
            cout << endl << endl << "Comprendo. A veces la *decepción* es el resultado de una compleja interacción entre factores externos y nuestras propias reacciones. 🔗" << endl
                      << "Esto puede hacerla sentir aún más abrumadora, pero también ofrece múltiples puntos para la reflexión. ✨" << endl << endl
                      << "¿Cómo crees que esta combinación de factores te impactó emocionalmente? 🤔" << endl << endl
                      << "1.- Me sentí sobrepasado/a por la complejidad de la situación. 🌪" << endl
                      << "2.- Me costó distinguir qué parte era mi responsabilidad y cuál no. 🧭" << endl
                      << "3.- Sentí una mezcla de frustración con el exterior y conmigo mismo/a. 🎭" << endl
                      << "4.- Esto me llevó a reevaluar tanto mis expectativas como mi entorno. 🔄" << endl << endl;
            reaccionesInicialesDecepcion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las primeras reacciones que tuviste ante esa *decepción*. ¿Cuál de estas describe mejor cómo te sentiste o qué hiciste inicialmente? 😥" << endl << endl
              << "1.- Me sentí triste y con ganas de aislarme o llorar. 😔" << endl
              << "2.- Sentí frustración o enojo por lo sucedido. 😠" << endl
              << "3.- Experimenté una sensación de shock o incredulidad. 😲" << endl
              << "4.- Me sentí sin energía o con desmotivación para seguir adelante. 😴" << endl << endl;
        primerasReaccionesDecepcion = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4);
    cout << endl << "Es natural reaccionar de esas maneras ante la *decepción*. Estas reacciones iniciales son parte del proceso de asimilación. 🫂" << endl << endl;

    cout << "¿Qué pensamientos recurrentes o mensajes internos te surgen cuando piensas en esta situación de *decepción*? 💭" << endl << endl
              << "1.- 'Esto no es justo' o 'No lo merecía'. ⚖" << endl
              << "2.- 'Debí haber hecho las cosas de otra manera' o 'Fue mi culpa'. ✋" << endl
              << "3.- 'Nunca va a mejorar' o 'Siempre me pasa lo mismo'. 🌧" << endl
              << "4.- 'Qué puedo aprender de esto' o 'Cómo puedo seguir adelante'. 🌱" << endl << endl;
        pensamientosRecurrentesDecepcion = obtenerEntradaNumerica<int>("Selecciona la opción que más se acerque a tus pensamientos: ", 1, 4);
    cout << endl << "Nuestros pensamientos moldean mucho cómo vivimos la *decepción*. Identificarlos es clave para poder transformarlos, si es necesario. ✨" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "En medio de esta *decepción*, ¿qué recursos internos o fortalezas personales crees que te podrían ayudar a manejarla? 💪" << endl << endl
              << "1.- Mi capacidad de resiliencia y de adaptarme a los cambios.  resilient_person" << endl
              << "2.- Mi optimismo y la habilidad de encontrar el lado positivo. 🌟" << endl
              << "3.- Mi red de apoyo (familia, amigos) en quienes puedo confiar. 🤝" << endl
              << "4.- Mi creatividad para encontrar nuevas soluciones o caminos. 🎨" << endl << endl;
        recursosInternosDecepcion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te resuene: ", 1, 4);
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Esas son tus herramientas más valiosas para superar la *decepción*." << endl
              << "Recuerda que ya tienes la capacidad dentro de ti para afrontar esto. 💖" << endl << endl;

    cout << "¿Hay algo que te haya ayudado a sentir un poco de alivio o a distraerte de la *decepción*, aunque sea por un momento? 😌" << endl << endl
              << "1.- Hablar con alguien de confianza. 🗣" << endl
              << "2.- Realizar una actividad que disfruto (un hobby, ejercicio, lectura). 📚" << endl
              << "3.- Permitirme llorar o expresar la tristeza. 😭" << endl
              << "4.- Darme tiempo para procesarlo a solas, en silencio. 🤫" << endl << endl;
        alivioMomentaneoDecepcion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    if (alivioMomentaneoDecepcion == 3) {
        cout << endl << "Permitirte expresar la tristeza es un paso vital para liberar la *decepción*. Es un acto de autenticidad. 🙏" << endl;
    } else {
        cout << endl << "Es genial que hayas encontrado algo que te brinde un respiro. Esos momentos de alivio son importantes en el proceso de sanación. ✨" << endl;
    }

    system("pause"); 
    system("cls");

    // --- Pasos hacia adelante y aprendizaje ---

    cout << endl << "Ahora, miremos hacia adelante. ¿Qué puedes aprender de esta situación de *decepción* para futuras experiencias? 📈" << endl << endl
              << "1.- La importancia de ajustar mis expectativas a la realidad. 💡" << endl
              << "2.- Cómo proteger mi confianza en los demás o en mí mismo/a. 🛡" << endl
              << "3.- Nuevas formas de comunicarme o de gestionar situaciones difíciles. 🗣" << endl
              << "4.- Reconocer mis límites o los de la situación, y saber cuándo soltar. 🍃" << endl << endl;
    aprendizajeYAccionDecepcion = obtenerEntradaNumerica<int>("Selecciona la lección más importante para ti: ", 1, 4);
    cout << endl << "¡Excelente! Cada *decepción* puede ser un maestro. Convertir el dolor en aprendizaje es una habilidad poderosa que te acompañará. 🌱" << endl << endl;

    cout << "Finalmente, ¿qué acción pequeña y concreta puedes comprometerte a tomar HOY o en los próximos días para empezar a sanar o avanzar de esta *decepción*? 👣" << endl << endl
              << "1.- Hablar abiertamente con la persona involucrada (si aplica y es seguro). 💬" << endl
              << "2.- Establecer un límite o una nueva expectativa para proteger mi bienestar. 🚫" << endl
              << "3.- Enfocar mi energía en un nuevo proyecto o meta que me ilusione. 🌟" << endl
              << "4.- Practicar el auto-cuidado (meditación, ejercicio, tiempo de calidad conmigo mismo/a). 💖" << endl << endl;
        accionConcretaDecepcion = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4);
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia adelante. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Decepción ---
    cout << endl << "--- Resumen de tu Terapia de Decepción ---" << endl;
    cout << "Causa de la decepción: " << causaDecepcion << endl;
    cout << "Expectativa principal no cumplida: " << impactoExpectativaDecepcion << endl;
    cout << "Fuente principal de la decepción: " << fuenteDecepcion << endl;
    cout << "Reacciones iniciales emocionales ante la decepción: " << reaccionesInicialesDecepcion << endl;
    cout << "Tus primeras reacciones (físicas/emocionales) a la decepción: " << primerasReaccionesDecepcion << endl;
    cout << "Pensamientos recurrentes sobre la decepción: " << pensamientosRecurrentesDecepcion << endl;
    cout << "Recursos internos para manejar la decepción: " << recursosInternosDecepcion << endl;
    cout << "Alivio momentáneo de la decepción: " << alivioMomentaneoDecepcion << endl;
    cout << "Aprendizaje clave de esta decepción: " << aprendizajeYAccionDecepcion << endl;
    cout << "Acción concreta para sanar/avanzar: " << accionConcretaDecepcion << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *decepción*." << endl
              << "😄 Recuerda que sentir decepción es parte de ser humano, y tu capacidad para afrontarla te hace más fuerte." << endl
              << "😊 Confío en tu resiliencia para transformar esta experiencia. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

void decepionRemordimiento ()
{
    string causaRemordimiento;
    int tipoAccionRemordimiento, impactoAccionRemordimiento, reaccionInicialRemordimiento; 

    // --- Inicio de la mini-terapia sobre la emoción del remordimiento ---
    cout << endl << "¡Hola! Es un espacio seguro para que exploremos el remordimiento. Es una emoción que puede pesar, y es valiente de tu parte abordarla. 😔" << endl
              << "¿Podrías compartirme brevemente la situación o acción específica que te está causando remordimiento en este momento? No tienes que dar detalles si no lo deseas, solo el evento principal. 💔" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaRemordimiento);
    cout << endl << "Gracias por compartir eso. Reconocer el remordimiento es el primer paso para entenderlo y sanar. Es una emoción compleja, y es completamente válido sentirla. 🙏" << endl << endl
              << "Pensando en esa situación, ¿cómo describirías la acción que te generó el remordimiento? 🤔" << endl << endl;
    cout << "1.- Fue algo que hice directamente y que lamento. 🛠" << endl
              << "2.- Fue algo que no hice, una omisión de mi parte. ⏳" << endl
              << "3.- Fue algo que dije y desearía no haber dicho. 🗣" << endl
              << "4.- Fue algo que pensé o sentí, y que me pesa. 🧠" << endl << endl;
    tipoAccionRemordimiento = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa esa acción: ", 1, 4);
    cout << endl << "Identificar la naturaleza de la acción nos ayuda a comprender mejor el remordimiento. Es importante ser honesto/a con uno mismo en este proceso. 💡" << endl
              << "Ahora, ¿cuál fue el impacto principal de esa acción (o inacción) en ti o en otras personas? 💔" << endl << endl;
    cout << "1.- Causó daño o malestar a otra persona. 😥" << endl
              << "2.- Me afectó directamente a mí mismo/a (mis metas, mi bienestar). 😔" << endl
              << "3.- Rompió mi propia moral o mis valores personales. ⚖" << endl
              << "4.- Generó una pérdida de confianza o una oportunidad importante. 📉" << endl << endl; 
    impactoAccionRemordimiento = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); 
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoAccionRemordimiento) {
        case 1:
            cout << endl << endl << "Entiendo. Cuando nuestras acciones afectan a otros, el remordimiento puede ser muy profundo. 🫂" << endl
                      << "Es un signo de empatía y de tu capacidad para reconocer el impacto en los demás. 😔" << endl << endl
                      << "¿Cómo crees que el remordimiento por el daño a otra persona te está afectando a nivel emocional? 🤔" << endl << endl
                      << "1.- Me siento culpable y con un deseo profundo de reparar el daño. 🩹" << endl
                      << "2.- Siento una gran tristeza por la otra persona. 💧" << endl
                      << "3.- Me preocupa cómo esa acción afectó la relación o su percepción de mí. 🌬" << endl
                      << "4.- Estoy buscando activamente una forma de compensar o disculparme. ✨" << endl << endl;
            reaccionInicialRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4);
            break;
        case 2:
            cout << endl << endl << "Comprendo. El remordimiento por algo que nos afecta a nosotros mismos puede ser igualmente pesado. 🧠" << endl
                      << "A veces, las decisiones que tomamos nos alejan de nuestras propias metas o bienestar. Es válido sentir esa frustración. 😔" << endl << endl
                      << "¿Cómo crees que este remordimiento por el impacto en ti mismo/a te está afectando emocionalmente? 🤔" << endl << endl
                      << "1.- Siento frustración por no haber actuado de otra manera o por haber fallado en algo importante. 🚧" << endl
                      << "2.- Me siento decepcionado/a de mí mismo/a. 📉" << endl
                      << "3.- Me doy cuenta de una oportunidad perdida por mi toma de decisión. ⏳" << endl
                      << "4.- Estoy reconsiderando mis prioridades o mi camino debido a esto. 🧭" << endl << endl;
            reaccionInicialRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            break;
        case 3:
            cout << endl << endl << "Es un acto de gran integridad sentir remordimiento cuando una acción va en contra de tus valores. 🌟" << endl
                      << "Esto demuestra tu compromiso con ser la persona que deseas ser, y es una señal de crecimiento. 💪" << endl << endl
                      << "¿Cómo crees que este remordimiento por ir en contra de tus valores te impactó emocionalmente? 🤔" << endl << endl
                      << "1.- Siento una disonancia interna, como si no fuera yo mismo/a. 🎭" << endl
                      << "2.- Me siento culpable por haber traicionado mis principios. 😔" << endl
                      << "3.- Esto me impulsa a reafirmar mis valores y a ser más consciente de ellos. ✨" << endl
                      << "4.- Me cuestiono mis propias creencias o mi camino. ❓" << endl << endl;
            reaccionInicialRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            break;
        case 4:
            cout << endl << endl << "Comprendo. El remordimiento por una pérdida de confianza o una oportunidad importante puede ser muy desalentador. 💔" << endl
                      << "Es natural sentir el peso de lo que se perdió. Es un momento para la reflexión profunda. 😔" << endl << endl
                      << "¿Cómo crees que este remordimiento por la pérdida te impactó emocionalmente? 🤔" << endl << endl
                      << "1.- Siento tristeza por lo que ya no puede ser. 😥" << endl
                      << "2.- Me siento frustrado/a por haber contribuido a esa pérdida. 😠" << endl
                      << "3.- Estoy reevaluando mis relaciones o mis decisiones futuras. 🔄" << endl
                      << "4.- Me siento con la necesidad de reconstruir la confianza o buscar nuevas oportunidades. 🚧" << endl << endl;
            reaccionInicialRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en la intensidad de este remordimiento. ¿Cómo lo describirías en este momento? 😟" << endl << endl
              << "1.- Es un sentimiento constante y muy pesado. 🌧" << endl
              << "2.- Aparece y desaparece, pero es intenso cuando está presente. 🌬" << endl
              << "3.- Es una punzada ocasional, pero puedo gestionarla. 🍃" << endl
              << "4.- Siento que ha disminuido, y estoy en proceso de aceptación. 🌱" << endl << endl;
    int intensidadRemordimiento = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4);
    cout << endl << "Reconocer la intensidad del remordimiento nos ayuda a entender dónde te encuentras en tu proceso. Es un paso importante. 🫂" << endl << endl;

    cout << "¿Qué pensamientos o creencias sobre ti mismo/a están siendo desafiados por este remordimiento? 💭" << endl << endl
              << "1.- Mi autoimagen de ser una buena persona o de hacer las cosas bien. 💖" << endl
              << "2.- Mi capacidad para tomar buenas decisiones. 💡" << endl
              << "3.- Mi creencia en que los errores son parte del aprendizaje y el crecimiento. 🌟" << endl
              << "4.- Mi capacidad para perdonarme a mí mismo/a. 🙏" << endl << endl;
    int pensamientosDesafiadosRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más se acerque a tus pensamientos: ", 1, 4);
    cout << endl << "El remordimiento a menudo nos confronta con nuestras propias percepciones. Identificar estos pensamientos es crucial para reconstruir y fortalecer tu autoimagen. ✨" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "En medio de este remordimiento, ¿qué recursos o apoyos crees que te podrían ayudar a manejarlo y encontrar la paz? 💪" << endl << endl
              << "1.- Hablar con alguien de confianza (un amigo, familiar, terapeuta). 🗣" << endl
              << "2.- Escribir sobre mis sentimientos o la situación en un diario. 📝" << endl
              << "3.- Buscar formas de enmendar la situación, si es posible. 🩹" << endl
              << "4.- Practicar la auto-compasión y el perdón hacia mí mismo/a. 💖" << endl << endl;
    int recursosApoyoRemordimiento = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te resuene: ", 1, 4);
    cout << endl << "¡Es muy poderoso reconocer tus propias herramientas de sanación! 🚀 Esos son tus mayores aliados para superar el remordimiento." << endl
              << "Recuerda que no tienes que llevar esta carga solo/a. 🫂" << endl << endl;

    cout << "¿Qué pequeño paso puedes dar hoy para empezar a procesar o liberar este remordimiento? 👣" << endl << endl
              << "1.- Escribir una carta (que no tienes que enviar) expresando lo que sientes. 💌" << endl
              << "2.- Dedicar 5 minutos a la meditación o la respiración consciente. 🌬" << endl
              << "3.- Investigar sobre el perdón o la auto-compasión. 📚" << endl
              << "4.- Comprometerte a hacer una acción, por pequeña que sea, para rectificar si es posible. ✅" << endl << endl;
    int pequenoPasoRemordimiento = obtenerEntradaNumerica<int>("Selecciona el paso que te sientes capaz de realizar: ", 1, 4);
    if (pequenoPasoRemordimiento == 1) {
        cout << endl << "Escribir es una poderosa herramienta para liberar emociones. Ese acto de expresar te ayudará a procesar el remordimiento. 🙏" << endl;
    } else if (pequenoPasoRemordimiento == 2) {
        cout << endl << "La meditación y la respiración son anclas de paz. Es un excelente paso para encontrar serenidad ante el remordimiento. ✨" << endl;
    } else if (pequenoPasoRemordimiento == 3) {
        cout << endl << "Buscar conocimiento sobre el perdón es un camino hacia la liberación. Es una gran forma de trabajar con el remordimiento. 💡" << endl;
    } else {
        cout << endl << "Asumir la responsabilidad con una acción es un paso valiente hacia la reparación y la liberación del remordimiento. 🚀" << endl;
    }

    system ("pause");
    system ("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que el remordimiento, aunque doloroso, puede ser un maestro para tu crecimiento personal y moral? 🌱" << endl << endl
              << "1.- Me enseña sobre la importancia de la empatía y de pensar en el impacto de mis acciones. 💖" << endl
              << "2.- Me ayuda a ser más consciente de mis valores y a vivir de acuerdo a ellos. ⚖" << endl
              << "3.- Me impulsa a buscar el perdón (propio o ajeno) y a sanar. 🩹" << endl
              << "4.- Todas las anteriores, lo veo como una oportunidad para convertirme en una mejor persona. 🦋" << endl << endl;
    int remordimientoMaestro = obtenerEntradaNumerica<int>("Selecciona la lección más importante para ti: ", 1, 4);
    cout << endl << "¡Excelente! Convertir el remordimiento en una fuerza para el aprendizaje y la mejora es un signo de profunda fortaleza. 🌱 Tu capacidad de reflexionar es muy valiosa. ✨" << endl << endl;

    cout << "¿Cómo te sientes al pensar en el camino hacia la auto-compasión y el perdón respecto a esta situación? 🤔" << endl << endl
              << "1.- Me siento esperanzado/a y dispuesto/a a trabajar en ello. 🎉" << endl
              << "2.- Me parece un desafío, pero estoy abierto/a a intentarlo. 🗓" << endl
              << "3.- Me cuesta mucho, siento que aún no me lo merezco o que es difícil. 😬" << endl
              << "4.- No me lo había planteado así, pero suena necesario. 💡" << endl << endl;
    int autoCompasionPerdonRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a lo que sientes: ", 1, 4);
    if (autoCompasionPerdonRemordimiento == 3) {
        cout << endl << "Comprendo ese sentimiento. Es común que el remordimiento venga acompañado de auto-exigencia. Recuerda que el perdón a uno mismo es un proceso gradual y que mereces la paz. ✨" << endl << endl;
    } else {
        cout << endl << "¡Qué valiente disposición! El camino hacia la auto-compasión y el perdón es fundamental para liberar el remordimiento. Estás en el camino correcto. 💪" << endl << endl;
    }

    system ("cls");
    system ("pause");

    // --- Resumen de tu Terapia de Remordimiento ---
    cout << endl << "--- Resumen de tu Terapia de Remordimiento ---" << endl;
    cout << "Causa del remordimiento: " << causaRemordimiento << endl;
    cout << "Tipo de acción que causó remordimiento: " << tipoAccionRemordimiento << endl;
    cout << "Impacto principal de la acción: " << impactoAccionRemordimiento << endl;
    cout << "Reacción inicial emocional ante el remordimiento: " << reaccionInicialRemordimiento << endl;
    // Las siguientes variables no fueron definidas ni asignadas en el código proporcionado
    // Por lo tanto, no se pueden incluir en el resumen con valores significativos.
    cout << "Intensidad del remordimiento: " << intensidadRemordimiento << endl;
    cout << "Pensamientos desafiados por el remordimiento: " << pensamientosDesafiadosRemordimiento << endl;
    cout << "Recursos de apoyo para manejar el remordimiento: " << recursosApoyoRemordimiento << endl;
    cout << "Pequeño paso para procesar/liberar el remordimiento: " << pequenoPasoRemordimiento << endl;
    cout << "Remordimiento como maestro para el crecimiento: " << remordimientoMaestro << endl;
    cout << "Camino hacia la auto-compasión y el perdón: " << autoCompasionPerdonRemordimiento << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del remordimiento." << endl
              << "😄 Recuerda que reconocer y procesar esta emoción es un paso fundamental hacia tu bienestar y crecimiento personal." << endl
              << "😊 Confío en tu capacidad para aprender de esta experiencia y encontrar el camino hacia la paz. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

void terapiaDesesperacion()
{
    string causaDesesperacion; // Variable renombrada
    int origenDesesperacion, impactoEmocionalDesesperacion, senalesCuerpoMenteDesesperacion, busquedaApoyoDesesperacion; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la desesperación ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la *desesperación*. Es una emoción intensa y abrumadora, y es un acto de gran valentía enfrentarla. 🌑" << endl
                 << "¿Podrías compartirme brevemente la situación o el sentimiento que te ha llevado a sentir *desesperación* últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaDesesperacion); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte. Reconocer la *desesperación* es el primer y más importante paso. Es completamente válido sentirse así cuando las circunstancias son difíciles. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el origen principal de tu *desesperación*? 🤔" << endl << endl;
    cout << "1.- Siento que no hay solución o salida a mi problema actual. 🚧" << endl
                 << "2.- La pérdida de algo o alguien significativo que me dejó sin esperanza. 💔" << endl
                 << "3.- Una sensación de impotencia o falta de control sobre mi vida o el futuro. ⛓" << endl
                 << "4.- Un cúmulo de problemas o dificultades que parecen no tener fin. 🌧" << endl << endl;
    origenDesesperacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4);
    cout << endl << "Entender el origen de tu *desesperación* nos da claridad sobre lo que estás enfrentando. Este reconocimiento es una herramienta poderosa. 💡" << endl
                 << "Ahora, ¿cómo ha impactado esta *desesperación* tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Afecta mi motivación y energía para hacer cosas que antes disfrutaba. 😴" << endl
                 << "2.- Me siento aislado/a o con dificultades para conectar con los demás. 👤" << endl
                 << "3.- Tengo problemas para dormir o para concentrarme en mis tareas. 🧠" << endl
                 << "4.- Experimenté una profunda tristeza o una sensación de vacío persistente. 🌑" << endl << endl; 
    impactoEmocionalDesesperacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoEmocionalDesesperacion) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. La *desesperación* puede drenar nuestra energía y robar la alegría de actividades que antes nos llenaban. 🔋" << endl
                         << "Es un impacto significativo, y es válido sentir esa pérdida. 😔" << endl << endl
                         << "¿Cómo crees que esta disminución de motivación te afecta más en tu día a día? 🤔" << endl << endl
                         << "1.- Me cuesta iniciar tareas o proyectos que son importantes. ⏳" << endl
                         << "2.- Siento que mis relaciones personales se ven afectadas. 🫂" << endl
                         << "3.- Me siento abrumado/a incluso con las responsabilidades más pequeñas. ⛰" << endl
                         << "4.- Mis pensamientos se vuelven más negativos o pesimistas. 📉" << endl << endl;
            senalesCuerpoMenteDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. La *desesperación* a menudo nos empuja al aislamiento, dificultando la conexión con otros. 😔" << endl
                         << "Aunque te sientas así, es importante recordar que la conexión humana es un recurso vital. 🙏" << endl << endl
                         << "¿Cómo crees que este aislamiento o dificultad para conectar te afecta más? 🤔" << endl << endl
                         << "1.- Siento una profunda soledad, a pesar de estar rodeado/a de gente. 🌧" << endl
                         << "2.- Me cuesta pedir ayuda o expresar lo que siento. 🗣" << endl
                         << "3.- Siento que nadie puede entenderme realmente en este momento. 🔒" << endl
                         << "4.- Me alejo de actividades sociales o reuniones que antes disfrutaba. 🚶‍♀" << endl << endl;
            senalesCuerpoMenteDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. La *desesperación* puede afectar profundamente nuestro descanso y nuestra claridad mental. 🧠" << endl
                         << "Es un ciclo agotador que puede dificultar aún más encontrar soluciones. 🌙" << endl << endl
                         << "¿Cómo crees que estos problemas para dormir o concentrarte te afectan más en tu vida? 🤔" << endl << endl
                         << "1.- Me siento constantemente cansado/a y sin energía. 😴" << endl
                         << "2.- Mis pensamientos están acelerados y no puedo 'desconectar'. ⚡" << endl
                         << "3.- Me cuesta tomar decisiones o resolver problemas cotidianos. 🧭" << endl
                         << "4.- Siento que mi rendimiento en el trabajo o estudios ha disminuido. 📉" << endl << endl;
            senalesCuerpoMenteDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. La *desesperación* a menudo se manifiesta como una tristeza profunda o un vacío persistente. 🌑" << endl
                         << "Es un peso emocional que puede sentirse abrumador. Es importante reconocer esta intensidad. 😥" << endl << endl
                         << "¿Cómo crees que esta tristeza o vacío te impacta más en tu vida emocional? 🤔" << endl << endl
                         << "1.- Me siento desconectado/a de mis propias emociones o de lo que me rodea. 🧊" << endl
                         << "2.- Siento una sensación de desesperanza sobre el futuro. 🌬" << endl
                         << "3.- Me cuesta encontrar alegría o interés en cualquier cosa. 🚫" << endl
                         << "4.- Mis pensamientos se centran en lo negativo o en la falta de sentido. 🥀" << endl << endl;
            senalesCuerpoMenteDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las señales que tu cuerpo y mente te dan cuando sientes *desesperación*. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Sensación de nudo en el estómago o pecho, o dolor físico sin causa aparente. 🌪" << endl
                 << "2.- Dificultad para respirar, opresión o sensación de ahogo. 🌬" << endl
                 << "3.- Fatiga extrema, falta de energía o movimientos lentos. 🐌" << endl
                 << "4.- Pensamientos repetitivos, negativos o dificultad para concentrarse. 🧠" << endl << endl;
    senalesCuerpoMenteDesesperacion = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer cómo la *desesperación* se manifiesta en tu cuerpo y mente es vital. Escuchar estas señales te ayudará a actuar cuando más lo necesitas. 🫂" << endl << endl;

    cout << "¿Qué recursos internos o fortalezas personales, por pequeñas que parezcan, crees que aún posees para enfrentar esta *desesperación*? 🌟" << endl << endl
                 << "1.- Mi capacidad de resiliencia, de haber superado dificultades antes. 💪" << endl
                 << "2.- Mi deseo de encontrar una salida, por mínima que sea. 💡" << endl
                 << "3.- Mi habilidad para reflexionar y buscar comprensión. 📚" << endl
                 << "4.- Mi fe en que las cosas pueden mejorar, incluso si ahora es difícil de ver. 🙏" << endl << endl;
    int recursosInternosDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando te sientes *desesperado/a*, estas capacidades residen en ti y pueden ser tus anclas. 💖" << endl
                 << "Recuerda que no estás solo/a en esto. 🫂" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Exploremos ahora las posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento de *desesperación*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental (terapeuta, psicólogo). 🗣" << endl
                 << "2.- Conectar con un ser querido que te escuche sin juzgar. 🫂" << endl
                 << "3.- Unirte a un grupo de apoyo o comunidad con experiencias similares. 👥" << endl
                 << "4.- Buscar información o recursos sobre cómo manejar la *desesperación* y encontrar soluciones. 📚" << endl << endl;
    busquedaApoyoDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *desesperación*. Es un paso hacia la sanación. ✨" << endl << endl;

    cout << "¿Qué pequeño gesto de autocuidado puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para aliviar un poco esta *desesperación*? 👣" << endl << endl
                 << "1.- Tomar una pausa para respirar profundamente durante 5 minutos. 🌬" << endl
                 << "2.- Escuchar música que te genere calma o que te permita expresar tus emociones. 🎶" << endl
                 << "3.- Dar un paseo corto, incluso si es solo alrededor de la casa. 🚶‍♀" << endl
                 << "4.- Beber un vaso de agua conscientemente y notar la sensación. 💧" << endl << endl;
    int gestoAutocuidadoDesesperacion = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system("pause"); 
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que el solo hecho de hablar sobre tu *desesperación* te ha ayudado, aunque sea un poco? 🗣" << endl << endl
                 << "1.- Me ha ayudado a sentirme menos solo/a. 🫂" << endl
                 << "2.- Me ha permitido organizar mis pensamientos y sentimientos. 🧠" << endl
                 << "3.- Me ha dado una perspectiva diferente o me ha hecho ver posibles pasos. 💡" << endl
                 << "4.- Me ha aliviado un peso que estaba cargando. 🎈" << endl << endl;
    int hablarAyudaDesesperacion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de expresar tus emociones es un paso significativo. Tu valentía para hablar sobre la *desesperación* es una fortaleza. 🌱" << endl << endl;

    cout << "¿Qué mensaje de esperanza o fortaleza te gustaría darte a ti mismo/a en este momento de *desesperación*? ✨" << endl << endl
                 << "1.- 'Esto también pasará, soy más fuerte de lo que creo.' 🚀" << endl
                 << "2.- 'Merezco apoyo y puedo pedirlo.' 🤝" << endl
                 << "3.- 'Un paso a la vez, no tengo que resolverlo todo ahora.' 👣" << endl
                 << "4.- 'Cada día es una nueva oportunidad para encontrar un poco de luz.' ☀" << endl << endl;
    int mensajeEsperanzaDesesperacion = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio de la *desesperación*. Recuerda que mereces sentirte mejor y que la esperanza es un motor para el cambio. 💖" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Desesperación ---
    cout << endl << "--- Resumen de tu Terapia de Desesperación ---" << endl;
    cout << "Causa de la desesperación: " << causaDesesperacion << endl;
    cout << "Origen principal de la desesperación: " << origenDesesperacion << endl;
    cout << "Impacto emocional de la desesperación: " << impactoEmocionalDesesperacion << endl;
    cout << "Señales en cuerpo y mente de la desesperación: " << senalesCuerpoMenteDesesperacion << endl;
    // Las siguientes variables no fueron definidas ni asignadas con los nombres utilizados para el resumen
    // Por lo tanto, no se pueden incluir en el resumen con valores significativos.
    cout << "Recursos internos para enfrentar la desesperación: " << recursosInternosDesesperacion << endl;
    cout << "Tipo de apoyo más útil en la desesperación: " << busquedaApoyoDesesperacion << endl;
    cout << "Gesto de autocuidado para aliviar la desesperación: " << gestoAutocuidadoDesesperacion << endl;
    cout << "Cómo hablar sobre la desesperación te ha ayudado: " << hablarAyudaDesesperacion << endl;
    cout << "Mensaje de esperanza para ti mismo/a: " << mensajeEsperanzaDesesperacion << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *desesperación*." << endl
                 << "😄 Recuerda que buscar ayuda y permitirte sentir es un acto de amor propio. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para encontrar el camino, un paso a la vez. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaTristesa()
{
    string causaTristesa; // Variable renombrada
    int origenTristeza, impactoEmocionalTristesa, manifestacionFisicaTristesa, gestionEmocionTristesa; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la tristeza ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la *tristeza*. Es una emoción fundamental y a veces pesada, y es valiente de tu parte permitirte sentirla y abordarla. 🌧" << endl
                 << "¿Podrías compartirme brevemente la situación o el sentimiento que te ha llevado a sentir *tristeza* últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaTristesa); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la *tristeza* es el primer paso para procesarla. Es una emoción completamente válida y necesaria en nuestras vidas. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el origen principal de tu *tristeza*? 🤔" << endl << endl;
    cout << "1.- La pérdida de algo o alguien significativo para mí. 🥀" << endl
                 << "2.- Una desilusión o expectativa no cumplida. 😔" << endl
                 << "3.- Sentimientos de soledad o aislamiento. 👤" << endl
                 << "4.- Un cúmulo de pequeñas frustraciones o eventos estresantes. 🌫" << endl << endl;
    origenTristeza = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4);
    cout << endl << "Entender el origen de tu *tristeza* nos da claridad sobre lo que estás enfrentando. Este reconocimiento es una herramienta poderosa para empezar a sanar. 💡" << endl
                 << "Ahora, ¿cómo ha impactado esta *tristeza* tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Afecta mi motivación y energía para realizar mis actividades. 😴" << endl
                 << "2.- Me siento con ganas de llorar o con los ojos húmedos con frecuencia. 💧" << endl
                 << "3.- Tengo dificultades para concentrarme o mis pensamientos se vuelven lentos. 🧠" << endl
                 << "4.- Me siento más irritable o sensible de lo habitual. 😠" << endl << endl; 
    impactoEmocionalTristesa = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoEmocionalTristesa) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. La *tristeza* a menudo drena nuestra energía y puede hacer que las tareas cotidianas parezcan gigantes. 🔋" << endl
                         << "Es un impacto significativo, y es válido sentir esa pérdida de impulso. 😔" << endl << endl
                         << "¿Cómo crees que esta disminución de motivación te afecta más en tu día a día? 🤔" << endl << endl
                         << "1.- Me cuesta iniciar mis responsabilidades o proyectos. ⏳" << endl
                         << "2.- Siento que mis relaciones personales se ven afectadas por mi estado de ánimo. 🫂" << endl
                         << "3.- Me siento abrumado/a con facilidad ante cualquier desafío. ⛰" << endl
                         << "4.- Tiendo a posponer cosas o a sentir desinterés. 🐌" << endl << endl;
            manifestacionFisicaTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. El llanto es una forma natural y saludable de expresar la *tristeza* y liberar emociones.💧" << endl
                         << "Permitirte llorar es un acto de auto-compasión. 🙏" << endl << endl
                         << "¿Cómo crees que esta expresión de tristeza te afecta más? 🤔" << endl << endl
                         << "1.- Después de llorar, siento un ligero alivio o una sensación de liberación. 🍃" << endl
                         << "2.- Me siento agotado/a o con los ojos hinchados después de llorar. 😴" << endl
                         << "3.- Me preocupa que otros me vean triste o vulnerable. 🎭" << endl
                         << "4.- A veces me siento avergonzado/a o culpable por llorar. 😥" << endl << endl;
            manifestacionFisicaTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. La *tristeza* puede afectar profundamente nuestra capacidad de concentración y la claridad de nuestros pensamientos. 🧠" << endl
                         << "Es como si una neblina cubriera la mente, haciendo todo más lento. 🌫" << endl << endl
                         << "¿Cómo crees que estas dificultades para concentrarte te afectan más en tu vida? 🤔" << endl << endl
                         << "1.- Me cuesta tomar decisiones o planificar el día. 🧭" << endl
                         << "2.- Siento que no estoy siendo productivo/a o que mi rendimiento disminuye. 📉" << endl
                         << "3.- Mis pensamientos son repetitivos o negativos, y me cuesta salir de ellos. 🥀" << endl
                         << "4.- Olvido cosas con más facilidad o me siento en las nubes. ☁" << endl << endl;
            manifestacionFisicaTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. La *tristeza* a veces viene acompañada de una mayor irritabilidad o sensibilidad emocional. 😠" << endl
                         << "Es como si las emociones estuvieran a flor de piel. Es natural experimentar esto. 😔" << endl << endl
                         << "¿Cómo crees que esta irritabilidad o sensibilidad te impacta más en tu vida? 🤔" << endl << endl
                         << "1.- Reacciono de forma exagerada a situaciones pequeñas. 💥" << endl
                         << "2.- Me siento más susceptible a los comentarios o acciones de los demás. 💔" << endl
                         << "3.- Me cuesta regular mis emociones, sintiendo altibajos intensos. 🎢" << endl
                         << "4.- Me siento fácilmente frustrado/a o enojado/a con cosas que antes no me afectaban. 😡" << endl << endl;
            manifestacionFisicaTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las señales físicas que tu cuerpo te da cuando sientes *tristeza*. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Una sensación de pesadez en el pecho o en el cuerpo. 🏋‍♀" << endl
                 << "2.- Opresión en la garganta o ganas de llorar. 💧" << endl
                 << "3.- Falta de apetito o cambios en los patrones de alimentación. 🍽" << endl
                 << "4.- Dolores de cabeza o molestias físicas sin una causa clara. 🤕" << endl << endl;
    manifestacionFisicaTristesa = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer cómo la *tristeza* se manifiesta en tu cuerpo es vital. Escuchar estas señales te ayudará a actuar cuando más lo necesitas y a darte el cuidado que mereces. 🫂" << endl << endl;

    cout << "¿Qué recursos internos o fortalezas personales, por pequeñas que parezcan, crees que aún posees para enfrentar esta *tristeza*? 🌟" << endl << endl
                 << "1.- Mi capacidad de auto-reflexión y de buscar el porqué de mis sentimientos. 🧠" << endl
                 << "2.- Mi deseo de sentirme mejor y de buscar soluciones. 💡" << endl
                 << "3.- Mi conexión con personas que me importan, incluso si ahora me cuesta contactarlas. 🤝" << endl
                 << "4.- Mi capacidad para apreciar pequeños momentos de consuelo o belleza, incluso en la tristeza. 🍃" << endl << endl;
    int recursosInternosTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando te sientes triste, estas capacidades residen en ti y pueden ser tus anclas. 💖" << endl
                 << "Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en cómo gestionas la *tristeza*. ¿Qué estrategias utilizas (o has utilizado) para lidiar con ella? 🧘‍♀" << endl << endl
                 << "1.- Hablar con alguien de confianza sobre lo que siento. 🗣" << endl
                 << "2.- Distraerme con actividades (películas, juegos, trabajo). 🎬" << endl
                 << "3.- Expresar la emoción a través del arte, la escritura o la música. 🎨" << endl
                 << "4.- Buscar momentos de soledad para procesar mis sentimientos. 🤫" << endl << endl;
    gestionEmocionTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Es bueno que tengas estrategias para manejar la *tristeza*. Recuerda que no todas las estrategias son igualmente saludables o útiles en todo momento, pero lo importante es que estás buscando formas de afrontarla. ✨" << endl << endl;

    cout << "¿Qué pequeño gesto de autocuidado puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para nutrirte en medio de la *tristeza*? 👣" << endl << endl
                 << "1.- Permitirme llorar si siento la necesidad, sin juzgarme. 💧" << endl
                 << "2.- Abrirme a alguien de confianza y compartir un poco de lo que siento. 🫂" << endl
                 << "3.- Escuchar una canción que me permita sentir la tristeza y luego otra que me dé un poco de esperanza. 🎶" << endl
                 << "4.- Abrazar una almohada, una mascota o a un ser querido para sentir un poco de consuelo. 🤗" << endl << endl;
    int gestoAutocuidadoTristesa = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system("pause"); 
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que la *tristeza*, aunque dolorosa, puede ser un mensaje o una oportunidad para ti? 🌱" << endl << endl
                 << "1.- Me indica que necesito un cambio o que algo no está funcionando en mi vida. 🧭" << endl
                 << "2.- Me permite conectar con mi vulnerabilidad y con mi humanidad. 💖" << endl
                 << "3.- Me ayuda a valorar más los momentos de alegría y a buscar lo que realmente me importa. 🌟" << endl
                 << "4.- Todas las anteriores, la veo como una emoción que, al ser escuchada, me guía. 💡" << endl << endl;
    int tristezaMensajeTristesa = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el mensaje de la *tristeza* es un paso significativo. Tu capacidad para reflexionar y encontrar significado, incluso en el dolor, es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué mensaje de auto-compasión o paciencia te gustaría darte a ti mismo/a en este momento de *tristeza*? ✨" << endl << endl
                 << "1.- 'Está bien no estar bien, me doy permiso para sentir esto.' 🙏" << endl
                 << "2.- 'Merezco apoyo y puedo buscarlo.' 🤝" << endl
                 << "3.- 'Esto también pasará, la tristeza no es permanente.' ⏳" << endl
                 << "4.- 'Soy resiliente y puedo superar esto, un paso a la vez.' 🚀" << endl << endl;
    int mensajeAutoCompasionTristesa = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio de la *tristeza*. Recuerda que mereces ser amable contigo mismo/a y que el camino hacia la sanación es un proceso. 💖" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Tristeza ---
    cout << endl << "--- Resumen de tu Terapia de Tristeza ---" << endl;
    cout << "Causa de la tristeza: " << causaTristesa << endl;
    cout << "Origen principal de la tristeza: " << origenTristeza << endl;
    cout << "Impacto emocional de la tristeza: " << impactoEmocionalTristesa << endl;
    cout << "Manifestaciones físicas de la tristeza: " << manifestacionFisicaTristesa << endl;
    // Las siguientes variables no fueron definidas ni asignadas con los nombres utilizados para el resumen
    // en el ámbito principal de esta función.
    cout << "Recursos internos para enfrentar la tristeza: " << recursosInternosTristesa << endl;
    cout << "Estrategias de gestión de la emoción: " << gestionEmocionTristesa << endl;
    cout << "Gesto de autocuidado para nutrirte: " << gestoAutocuidadoTristesa << endl;
    cout << "La tristeza como mensaje u oportunidad: " << tristezaMensajeTristesa << endl;
    cout << "Mensaje de auto-compasión o paciencia: " << mensajeAutoCompasionTristesa << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *tristeza*." << endl
                 << "😄 Recuerda que sentir y procesar esta emoción es un acto de amor propio y de profunda humanidad. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia el bienestar. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaMelancolia()
{
    string causaMelancolia; // Variable renombrada
    int origenMelancolia, impactoEmocionalMelancolia, manifestacionFisicaMelancolia, gestionEmocionMelancolia; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la melancolía ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la melancolía. Es una emoción que a menudo se siente como una tristeza suave, teñida de nostalgia o introspección. Es valiente de tu parte permitirte sentirla. 🍂" << endl
                 << "¿Podrías compartirme brevemente la situación, el recuerdo o el sentimiento que te ha llevado a sentir melancolía últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaMelancolia); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la melancolía es el primer paso para entender su mensaje. Es una emoción válida y a menudo es muy importante que sepas su significado o que es lo que hace que te sientas con esta emoción. Puedes hablar sobre tu emoción y sentirte libre, recuerda que es un espacio sano donde no habrá ningún juicio sobre lo que sientes.🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el origen principal de tu melancolía? 🤔" << endl << endl;
    cout << "1.- La nostalgia por el pasado (personas, lugares, momentos) que ya no está. 🕰" << endl
                 << "2.- Una sensación de nostalgia por algo inalcanzable o un ideal no cumplido. 💭" << endl
                 << "3.-Pensar en cómo todo cambia y desaparece, y encontrar belleza en que nada dura para siempre." << endl
                 << "4.- Un sentimiento general de tristeza suave o una inquietud contemplativa sin una causa clara. 🌫" << endl << endl;
    origenMelancolia = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4);
    cout << endl << "Entender el origen de tu melancolía nos da claridad sobre la capa más profunda de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a abrazarla. 💡" << endl
                 << "Ahora, ¿cómo ha impactado esta melancolía tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Me siento más reflexivo/a e introspectivo/a. 🧠" << endl
                 << "2.- Me siento con una tristeza suave, a veces dulce, a veces un poco pesada. 💧" << endl
                 << "3.- Me siento más sensible a la belleza, el arte o la música. 🎶" << endl
                 << "4.- Afecta mi energía, siento un deseo de estar a solas la mayor parte del tiempo.😴" << endl << endl; 
    impactoEmocionalMelancolia = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoEmocionalMelancolia) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. La melancolía a menudo nos invita a la introspección, llevándonos a un estado de profunda reflexión. 🧠" << endl
                         << "Es un espacio valioso para el autoconocimiento y la contemplación. 😔" << endl << endl
                         << "¿Cómo crees que esta reflexión te ayuda o afecta en tu día a día? 🤔" << endl << endl
                         << "1.- Me ayuda a procesar eventos pasados o sentimientos no resueltos. ⏳" << endl
                         << "2.- Me lleva a apreciar más la vida y los momentos significativos. 🌟" << endl
                         << "3.- A veces me siento un poco distante o desconectado/a del ritmo exterior. 🌫" << endl
                         << "4.- Me inspira a crear, escribir o expresar lo que siento. 🎨" << endl << endl;
            manifestacionFisicaMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. Esa tristeza suave y agridulce es la esencia de la melancolía. 💧" << endl
                         << "Es una emoción que nos permite conectar con la profundidad de nuestros sentimientos. Permítete sentirla. 🙏" << endl << endl
                         << "¿Cómo crees que esta tristeza suave te afecta más? 🤔" << endl << endl
                         << "1.- Me siento con una necesidad de inquietud, de simplemente querer estar a solas. 🍃" << endl
                         << "2.- Me siento más sensible a mis recuerdos o a las emociones ajenas. 🫂" << endl
                         << "3.- A veces me pregunto sobre el sentido de la vida o de mis experiencias. ❓" << endl
                         << "4.- Siento un anhelo por algo que no puedo definir completamente. 💭" << endl << endl;
            manifestacionFisicaMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. La melancolía a menudo agudiza nuestra percepción de la belleza, especialmente en el arte o la música. 🎶" << endl
                         << "Es como si esta emoción abriera un canal más profundo para la apreciación estética. 🌟" << endl << endl
                         << "¿Cómo crees que esta sensibilidad te impacta más en tu vida? 🤔" << endl << endl
                         << "1.- Disfruto más de la música, películas o libros con un tono nostálgico. 🎬" << endl
                         << "2.- Me siento más conectado/a con la expresión artística y sus mensajes profundos. 🎨" << endl
                         << "3.- Me inspira a buscar o crear belleza en mi propio entorno. ✨" << endl
                         << "4.- Siento que entiendo las emociones humanas de una manera más compleja. 🧠" << endl << endl;
            manifestacionFisicaMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. La melancolía a veces nos pide un respiro del ajetreo, invitándonos a la quietud y al recogimiento. 😴" << endl
                         << "Es una señal de que necesitas un momento para ti, para procesar y descansar. 🍂" << endl << endl
                         << "¿Cómo crees que esta necesidad de quietud te impacta más en tu vida? 🤔" << endl << endl
                         << "1.- Me siento con menos ganas de interactuar socialmente. 👤" << endl
                         << "2.- Busco momentos para estar a solas, sin distracciones. 🤫" << endl
                         << "3.- Me cuesta concentrarme en tareas que requieren mucha energía mental. ⏳" << endl
                         << "4.- Siento que necesito recargar mis emociones y mi espíritu. 🔋" << endl << endl;
            manifestacionFisicaMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las señales físicas que tu cuerpo te da cuando sientes melancolía. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Una sensación de calma o cansancio en el cuerpo. 🌬" << endl
                 << "2.- Un suspiro frecuente o una respiración más profunda. 💧" << endl
                 << "3.- Un leve peso en el pecho o una sensación de dulzura agridulce. 💖" << endl
                 << "4.- Una sensación de retardo o deseo de descansar. 😴" << endl << endl;
    manifestacionFisicaMelancolia = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer cómo la melancolía se manifiesta en tu cuerpo es importante. Estas señales sutiles pueden indicarte la necesidad de introspección y autocuidado. 🫂" << endl << endl;

    cout << "¿Qué recursos internos o fortalezas personales, por pequeñas que parezcan, crees que te ayudan a transitar la melancolía? 🌟" << endl << endl
                 << "1.- Mi capacidad de apreciación por la belleza y los recuerdos. 🎨" << endl
                 << "2.- Mi paciencia y mi capacidad para darme tiempo para procesar. ⏳" << endl
                 << "3.- Mi conexión con mi mundo interior y mi creatividad. 🧠" << endl
                 << "4.- Mi capacidad para encontrar consuelo en momentos de quietud. 🤫" << endl << endl;
    int recursosInternosMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso en la melancolía, estas capacidades residen en ti y pueden ser tus anclas. 💖" << endl
                 << "Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en cómo gestionas la melancolía. ¿Qué estrategias utilizas (o has utilizado) para abrazarla o transitarla? 🧘‍♀" << endl << endl
                 << "1.- Permitirme sumergirme en recuerdos o música que evoca nostalgia. 🎶" << endl
                 << "2.- Escribir, dibujar o crear algo para expresar lo que siento. ✍" << endl
                 << "3.- Buscar la naturaleza o lugares tranquilos para reflexionar. 🌳" << endl
                 << "4.- Compartir mis sentimientos con alguien que entienda mi introspección. 🗣" << endl << endl;
    gestionEmocionMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Es genial que tengas estrategias para abrazar y transitar la melancolía. Esta emoción, bien gestionada, puede ser una fuente de profunda conexión contigo mismo/a. ✨" << endl << endl;

    cout << "¿Qué pequeño gesto de autocuidado puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para nutrirte en medio de la melancolía? 👣" << endl << endl
                 << "1.- Dedicar un tiempo a escuchar tu música favorita que te evoque sentimientos. 🎧" << endl
                 << "2.- Mirar por la ventana y observar el cielo, la naturaleza o la gente pasando. 🌥" << endl
                 << "3.- Leer un poema o un fragmento de un libro que resuene con tu estado de ánimo. 📚" << endl
                 << "4.- Simplemente, permitirte sentir y estar contigo mismo/a en quietud, sin hacer nada. 🧘‍♀" << endl << endl;
    int gestoAutocuidadoMelancolia = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que la melancolía, aunque puede sentirse como una tristeza, es también una emoción que te enriquece? 🌱" << endl << endl
                 << "1.- Me permite apreciar la profundidad de la vida y sus ciclos. 💫" << endl
                 << "2.- Me conecta con mi pasado, mis raíces y mi identidad. 🕰" << endl
                 << "3.- Me inspira a la creatividad y a la expresión artística. 🎨" << endl
                 << "4.- Todas las anteriores, la veo como una compañera que me enseña sobre la belleza de la existencia. 🦋" << endl << endl;
    int melancoliaEnriqueceMelancolia = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de la melancolía es un paso significativo. Tu capacidad para encontrar significado y riqueza en esta emoción es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué mensaje de aceptación o consuelo te gustaría darte a ti mismo/a en este momento de melancolía? ✨" << endl << endl
                 << "1.- 'Está bien sentir esto, es parte de la experiencia humana.' 🙏" << endl
                 << "2.- 'Merezco este tiempo para la reflexión y el descanso.' 😴" << endl
                 << "3.- 'La belleza también se encuentra en la nostalgia y la quietud.' 🍂" << endl
                 << "4.- 'Soy capaz de abrazar todas mis emociones, incluso las más suaves.' 💖" << endl << endl;
    int mensajeAceptacionMelancolia = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio de la melancolía. Recuerda que es una emoción que te invita a la introspección y a la apreciación de la vida en todas sus facetas. 💖" << endl << endl;

    system ("cls");
    system ("pause");

    // --- Resumen de tu Terapia de Melancolía ---
    cout << endl << "--- Resumen de tu Terapia de Melancolía ---" << endl;
    cout << "Causa de la melancolía: " << causaMelancolia << endl;
    cout << "Origen principal de la melancolía: " << origenMelancolia << endl;
    cout << "Impacto emocional de la melancolía: " << impactoEmocionalMelancolia << endl;
    cout << "Manifestaciones físicas de la melancolía: " << manifestacionFisicaMelancolia << endl;
    // Las siguientes variables no fueron definidas ni asignadas con los nombres utilizados para el resumen
    // en el ámbito principal de esta función.
    cout << "Recursos internos para transitar la melancolía: " << recursosInternosMelancolia << endl;
    cout << "Estrategias de gestión de la emoción: " << gestionEmocionMelancolia << endl;
    cout << "Gesto de autocuidado para nutrirte: " << gestoAutocuidadoMelancolia << endl;
    cout << "La melancolía como emoción que te enriquece: " << melancoliaEnriqueceMelancolia << endl;
    cout << "Mensaje de aceptación o consuelo: " << mensajeAceptacionMelancolia << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la melancolía." << endl
                 << "😄 Recuerda que es una emoción que te conecta con la profundidad de tu ser y con la riqueza de tus recuerdos y reflexiones. No estás solo/a en esto." << endl
                 << "😊 Confío en tu capacidad para abrazar esta emoción y encontrar en ella una fuente de inspiración y autoconocimiento. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

//Miedo
void terapiaAlarmado()
{
    string causaAlarmado; // Variable renombrada
    int origenAlarmaAlarmado, impactoFisicoMentalAlarmado, busquedaApoyoAlarmado, accionConcretaAlarmado; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de estar alarmado ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de estar *alarmado*. Es una señal intensa de que algo nos preocupa o nos pone en alerta. Es valiente de tu parte permitirte sentirla y abordarla. 🚨" << endl
                 << "¿Podrías compartirme brevemente la situación o el pensamiento principal que te ha llevado a sentirte *alarmado* últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaAlarmado); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la sensación de estar *alarmado* es el primer paso para entender qué la provoca. Es una emoción que, aunque incómoda, nos avisa de posibles peligros o desafíos. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de esta alarma que sientes? 🤔" << endl << endl;
    cout << "1.- Una amenaza real o percibida para mi seguridad o bienestar. 🛡" << endl
                 << "2.- La incertidumbre sobre el futuro o un evento próximo. ❓" << endl
                 << "3.- La preocupación por la seguridad o el bienestar de alguien más. 🫂" << endl
                 << "4.- Un cúmulo de estrés o ansiedad que llegó a un punto crítico. ⚡" << endl << endl;
    origenAlarmaAlarmado = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *alarma* nos da claridad sobre la raíz de esta intensa emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta sensación de estar alarmado en tu cuerpo y tu mente? 😥" << endl << endl;
    cout << "1.- Siento mi corazón acelerado, respiración agitada o tensión muscular. 💨" << endl
                 << "2.- Tengo pensamientos intrusivos o una sensación constante de preocupación. 🧠" << endl
                 << "3.- Me siento inquieto/a, con ganas de moverme o con dificultad para quedarme quieto/a.  restless_person" << endl
                 << "4.- Mi sueño o apetito se han visto afectados, o me siento agotado/a. 😴" << endl << endl; 
    impactoFisicoMentalAlarmado = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoFisicoMentalAlarmado) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. Esas son respuestas físicas comunes a la *alarma*. Tu cuerpo está reaccionando a lo que percibe como una amenaza. 💨" << endl
                         << "Reconocer estas señales te permite empezar a buscar calma. 😔" << endl << endl
                         << "¿Cómo crees que estas sensaciones físicas te afectan más en tu día a día? 🤔" << endl << endl
                         << "1.- Me cuesta relajarme o sentirme en paz. 🧘‍♀" << endl
                         << "2.- Me siento constantemente en estado de alerta o 'a la defensiva'. 🛡" << endl
                         << "3.- La tensión me causa dolores de cabeza o molestias musculares. 🤕" << endl
                         << "4.- Me siento abrumado/a por la intensidad de las sensaciones. 🌊" << endl << endl;
            // No se asigna a manifestacionFisica, se asume que es una variable local no declarada previamente o se usa como dummy call
            obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Dummy call para mantener estructura
            break;
        case 2:
            cout << endl << endl << "Entiendo. Los pensamientos intrusivos o la preocupación constante pueden ser muy agotadores cuando te sientes *alarmado*. 🧠" << endl
                         << "Es como si tu mente no pudiera encontrar un descanso. Es válido sentir esa fatiga mental. 😔" << endl << endl
                         << "¿Cómo crees que estos pensamientos te afectan más? 🤔" << endl << endl
                         << "1.- Me cuesta concentrarme en otras cosas o en mis tareas. 📚" << endl
                         << "2.- Me siento atrapado/a en un ciclo de 'qué pasaría si'. 🔄" << endl
                         << "3.- La preocupación me quita el sueño o me genera insomnio. 😴" << endl
                         << "4.- Siento que no puedo disfrutar del presente. 🚫" << endl << endl;
            obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Dummy call para mantener estructura
            break;
        case 3:
            cout << endl << endl << "Comprendo. Sentirse inquieto/a o con dificultad para quedarse quieto/a es una manifestación común de estar *alarmado*.  restless_person" << endl
                         << "Es como si tu cuerpo buscara una salida para la energía acumulada. ⚡" << endl << endl
                         << "¿Cómo crees que esta inquietud te afecta más en tu vida? 🤔" << endl << endl
                         << "1.- Me cuesta relajarme o descansar. 🛋" << endl
                         << "2.- Siento la necesidad de estar siempre haciendo algo. 🏃‍♀" << endl
                         << "3.- Me genera impaciencia o frustración conmigo mismo/a. 😠" << endl
                         << "4.- Afecta mi capacidad para interactuar con calma con los demás. 🗣" << endl << endl;
            obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Dummy call para mantener estructura
            break;
        case 4:
            cout << endl << endl << "Entiendo. La *alarma* puede tener un impacto significativo en tu bienestar físico, afectando el sueño y el apetito. 😴" << endl
                         << "Es una señal clara de que tu cuerpo está bajo estrés. 😔" << endl << endl
                         << "¿Cómo crees que estos efectos físicos te impactan más en tu vida? 🤔" << endl << endl
                         << "1.- Me siento constantemente fatigado/a y con poca energía. 🔋" << endl
                         << "2.- Mi estado de ánimo se ve afectado por la falta de descanso.  mood_swing" << endl
                         << "3.- Me cuesta cuidar mi alimentación o mis hábitos saludables. 🍎" << endl
                         << "4.- Me siento más vulnerable a enfermedades o resfriados. 🤧" << endl << endl;
            obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Dummy call para mantener estructura
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Reconocer cómo la *alarma* se manifiesta en tu cuerpo y mente es vital. Estas señales son mensajes importantes que tu sistema te envía. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal*, por pequeña que parezca, crees que aún posees para enfrentar esta situación que te alarma? 🌟" << endl << endl
                 << "1.- Mi capacidad para analizar la situación y buscar soluciones lógicas. 📊" << endl
                 << "2.- Mi resiliencia, porque he superado momentos difíciles antes. 💪" << endl
                 << "3.- Mi red de apoyo (familia, amigos) a quienes puedo recurrir. 🤝" << endl
                 << "4.- Mi fe o mi capacidad para mantener la esperanza, incluso en la adversidad. 🙏" << endl << endl;
    int recursosInternosAlarmado = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando te sientes *alarmado*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl
                 << "Recuerda que no estás solo/a en esto. 🫂" << endl << endl;

    cout << "Exploremos ahora las *posibilidades de apoyo*. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental para estrategias de manejo del estrés/ansiedad. 🗣" << endl
                 << "2.- Conectar con un ser querido que te brinde calma y una escucha activa. 🫂" << endl
                 << "3.- Realizar una actividad que te ayude a disipar la tensión (ejercicio, meditación). 🧘‍♀" << endl
                 << "4.- Buscar información confiable o planificar pasos concretos para abordar la situación que me alarma. 📚" << endl << endl;
    busquedaApoyoAlarmado = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *alarma*. Es un paso hacia la calma. ✨" << endl << endl;

    system("pause"); 
    system("cls");

    cout << endl << "¿Qué *pequeño gesto de autocuidado* puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para aliviar un poco esta sensación de estar *alarmado*? 👣" << endl << endl
                 << "1.- Tomar una pausa para hacer 5 respiraciones profundas y lentas. 🌬" << endl
                 << "2.- Escuchar una canción relajante o que te brinde una sensación de seguridad. 🎶" << endl
                 << "3.- Beber un vaso de agua lentamente, prestando atención a la sensación. 💧" << endl
                 << "4.- Escribir brevemente lo que sientes en un papel para sacarlo de tu mente. 📝" << endl << endl;
    accionConcretaAlarmado = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    cout << "¿De qué manera crees que esta sensación de estar *alarmado, aunque incómoda, podría contener un **mensaje importante* o una *oportunidad* para ti? 🌱" << endl << endl
                 << "1.- Me indica que necesito poner límites o protegerme en alguna área de mi vida. 🛡" << endl
                 << "2.- Me impulsa a buscar soluciones o a tomar acción ante una situación que he ignorado. 🧭" << endl
                 << "3.- Me enseña sobre mi propia capacidad de reacción y resiliencia ante el estrés. 🚀" << endl
                 << "4.- Me invita a reflexionar sobre mis miedos y cómo los gestiono. 🧠" << endl << endl;
    int mensajeOportunidadAlarmado = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el mensaje detrás de la *alarma* es un paso significativo. Tu capacidad para transformar la incomodidad en aprendizaje es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de tranquilidad* o *confianza* te gustaría darte a ti mismo/a en este momento de *alarma*? ✨" << endl << endl
                 << "1.- 'Estoy a salvo en este momento y puedo manejar un paso a la vez.' 🏞" << endl
                 << "2.- 'No estoy solo/a, y puedo buscar el apoyo que necesito.' 🤝" << endl
                 << "3.- 'Mis sentimientos son válidos, y me doy permiso para sentirlos sin juicio.' 🙏" << endl
                 << "4.- 'Esta sensación es temporal, y tengo la capacidad de encontrar la calma.' 💖" << endl << endl;
    int mensajeFinalAlarmado = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio de la *alarma*. Recuerda que mereces sentirte seguro/a y tranquilo/a, y que tienes la capacidad de navegar a través de esta emoción. 💖" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Estar Alarmado ---
    cout << endl << "--- Resumen de tu Terapia de Estar Alarmado ---" << endl;
    cout << "Causa de la alarma: " << causaAlarmado << endl;
    cout << "Origen principal de la alarma: " << origenAlarmaAlarmado << endl;
    cout << "Impacto físico y mental de la alarma: " << impactoFisicoMentalAlarmado << endl;
    // Nota: Las siguientes variables no fueron asignadas en el ámbito principal
    // de la función con los nombres que se usan en las preguntas posteriores,
    // por lo que no se pueden mostrar sus valores específicos aquí.
    cout << "Recursos internos para enfrentar la alarma: " << recursosInternosAlarmado << endl;
    cout << "Tipo de apoyo más útil: " << busquedaApoyoAlarmado << endl;
    cout << "Gesto de autocuidado comprometido: " << accionConcretaAlarmado << endl;
    cout << "Mensaje u oportunidad de la alarma: " << mensajeOportunidadAlarmado << endl;
    cout << "Mensaje de tranquilidad o confianza: " << mensajeFinalAlarmado << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la sensación de estar *alarmado*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la calma. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaAnsiedad()
{
    string causaAnsiedad; // Variable renombrada
    int origenAnsiedadGeneral, impactoFisicoMentalAnsiedad, senalesCuerpoMenteAnsiedad, busquedaApoyoAnsiedad; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la ansiedad ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la *ansiedad*. Es una emoción que nos puede abrumar con preocupaciones sobre el futuro. Es valiente de tu parte reconocerla y abordarla. 🌪" << endl
                 << "¿Podrías compartirme brevemente la situación o los pensamientos que te han llevado a sentir *ansiedad* últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaAnsiedad); // Usando la variable renombrada
    cout << endl << "Gracias por compartir eso. Reconocer la *ansiedad* es el primer paso para entenderla y gestionarla. Es una emoción compleja, y es completamente válido sentirla. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *ansiedad*? 🤔" << endl << endl;
    cout << "1.- La preocupación constante por eventos futuros o situaciones inciertas. ❓" << endl
                 << "2.- Sentir una presión excesiva por cumplir expectativas (propias o ajenas). 📈" << endl
                 << "3.- La sensación de falta de control o incapacidad para manejar lo que viene. ⛓" << endl
                 << "4.- Un cúmulo de pequeñas preocupaciones diarias que se volvieron abrumadoras. 🌧" << endl << endl;
    origenAnsiedadGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *ansiedad* nos da claridad sobre la raíz de esta intensa emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta *ansiedad* tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Afecta mi concentración, me siento distraído/a o con 'la mente en blanco'. 🧠" << endl
                 << "2.- Tengo problemas para dormir, siento inquietud o nerviosismo constante. 😴" << endl
                 << "3.- Me siento irritable o con cambios de humor frecuentes. 😠" << endl
                 << "4.- Evito situaciones o lugares que me generan ansiedad. 🚫" << endl << endl; 
    impactoFisicoMentalAnsiedad = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoFisicoMentalAnsiedad) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. La *ansiedad* a menudo puede hacer que nuestra mente se sienta dispersa o sobrecargada, dificultando la concentración. 🧠" << endl
                         << "Es un impacto significativo, y es válido sentir esa frustración mental. 😔" << endl << endl
                         << "¿Cómo crees que esta dificultad para concentrarte te afecta más en tu día a día? 🤔" << endl << endl
                         << "1.- Me cuesta iniciar tareas o mantener el enfoque en ellas. ⏳" << endl
                         << "2.- Siento que mis pensamientos están acelerados y no puedo 'apagarme'. ⚡" << endl
                         << "3.- Me siento abrumado/a incluso con las responsabilidades más pequeñas. ⛰" << endl
                         << "4.- Mi rendimiento en el trabajo o estudios se ha visto afectado. 📉" << endl << endl;
            senalesCuerpoMenteAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. Los problemas para dormir y la inquietud constante son manifestaciones muy comunes de la *ansiedad*. 😴" << endl
                         << "Es como si tu cuerpo estuviera siempre en alerta, sin poder relajarse. Es agotador, y es importante reconocerlo. 🙏" << endl << endl
                         << "¿Cómo crees que esta inquietud o problemas de sueño te afectan más? 🤔" << endl << endl
                         << "1.- Me siento constantemente cansado/a y sin energía durante el día. 🔋" << endl
                         << "2.- Me cuesta relajarme, incluso cuando tengo tiempo libre. 🛋" << endl
                         << "3.- Mis pensamientos ansiosos aumentan al intentar dormir. 🌃" << endl
                         << "4.- Siento un malestar físico general por la falta de descanso. 🤕" << endl << endl;
            senalesCuerpoMenteAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. La *ansiedad* a menudo nos pone 'a flor de piel', haciendo que nos sintamos más irritables o con cambios de humor. 😠" << endl
                         << "Es una respuesta a la tensión interna que experimentas. Es válido sentirlo. 😔" << endl << endl
                         << "¿Cómo crees que esta irritabilidad o cambios de humor te afectan más? 🤔" << endl << endl
                         << "1.- Reacciono de forma exagerada a situaciones pequeñas. 💥" << endl
                         << "2.- Me cuesta mantener la calma en mis interacciones con los demás. 🗣" << endl
                         << "3.- Siento que mi paciencia se agota rápidamente. ⏳" << endl
                         << "4.- Después de un episodio de irritabilidad, me siento culpable o frustrado/a. 😥" << endl << endl;
            senalesCuerpoMenteAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. La evitación es una estrategia común, aunque a veces limitante, que usamos para lidiar con la *ansiedad*. 🚫" << endl
                         << "Es un mecanismo de protección, pero puede impedirnos vivir plenamente. 😔" << endl << endl
                         << "¿Cómo crees que esta evitación te afecta más en tu vida? 🤔" << endl << endl
                         << "1.- Me pierdo de oportunidades o experiencias que me gustaría vivir. 🗺" << endl
                         << "2.- Me siento limitado/a en mi día a día o en mis decisiones. ⛓" << endl
                         << "3.- Siento que la ansiedad 'gana terreno' en mi vida. 📉" << endl
                         << "4.- Me genera más estrés o frustración a largo plazo. 🌧" << endl << endl;
            senalesCuerpoMenteAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las *señales que tu cuerpo y mente te dan* cuando sientes *ansiedad*. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Sensación de nudo en el estómago, mariposas o malestar digestivo. 🦋" << endl
                 << "2.- Respiración rápida o superficial, sensación de falta de aire. 🌬" << endl
                 << "3.- Tensión muscular, temblores o inquietud en las extremidades. ⚡" << endl
                 << "4.- Sudoración, palmas húmedas o sensación de calor/frío. 🌡" << endl << endl;
    senalesCuerpoMenteAnsiedad = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer cómo la *ansiedad* se manifiesta en tu cuerpo y mente es vital. Escuchar estas señales te ayudará a actuar cuando más lo necesitas y a darte el cuidado que mereces. 🫂" << endl << endl;

    cout << "¿Qué *recursos internos* o *fortalezas personales, por pequeñas que parezcan, crees que aún posees para enfrentar esta **ansiedad*? 🌟" << endl << endl
                 << "1.- Mi capacidad de auto-observación y de darme cuenta de lo que siento. 🧠" << endl
                 << "2.- Mi deseo de encontrar calma y bienestar. 💡" << endl
                 << "3.- Mi habilidad para buscar información o aprender sobre el manejo de la ansiedad. 📚" << endl
                 << "4.- Mi resiliencia, porque sé que he superado momentos difíciles antes. 💪" << endl << endl;
    int recursosInternosAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando te sientes ansioso/a, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl
                 << "Recuerda que no estás solo/a en esto. 🫂" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento de **ansiedad*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental (terapeuta, psicólogo). 🗣" << endl
                 << "2.- Conectar con un ser querido que te escuche sin juzgar y te brinde compañía. 🫂" << endl
                 << "3.- Unirte a un grupo de apoyo o comunidad donde puedas compartir experiencias. 👥" << endl
                 << "4.- Buscar información confiable o recursos de autoayuda sobre la ansiedad. 📚" << endl << endl;
    busquedaApoyoAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *ansiedad*. Es un paso hacia la sanación. ✨" << endl << endl;

    cout << "¿Qué *pequeño gesto de autocuidado* puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para aliviar un poco esta *ansiedad*? 👣" << endl << endl
                 << "1.- Realizar una técnica de respiración profunda (por ejemplo, 4-7-8). 🌬" << endl
                 << "2.- Escuchar música relajante o sonidos de la naturaleza. 🎶" << endl
                 << "3.- Dar un paseo corto al aire libre, prestando atención a tu entorno. 🌳" << endl
                 << "4.- Anotar en un papel tus preocupaciones por 5 minutos y luego guardarlas. 📝" << endl << endl;
    int gestoAutocuidadoAnsiedad = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system("pause"); 
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que la *ansiedad, aunque dolorosa, puede ser un **mensaje* o una *oportunidad* para tu crecimiento personal? 🌱" << endl << endl
                 << "1.- Me indica la necesidad de establecer límites o priorizar mi bienestar. 🛡" << endl
                 << "2.- Me impulsa a desarrollar nuevas herramientas de afrontamiento y resiliencia. 🚀" << endl
                 << "3.- Me ayuda a reevaluar mis expectativas y a vivir más en el presente. 🧭" << endl
                 << "4.- Me conecta con mi vulnerabilidad y la importancia de pedir ayuda. 🤝" << endl << endl;
    int ansiedadMensajeAnsiedad = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el mensaje de la *ansiedad* es un paso significativo. Tu capacidad para transformar la incomodidad en aprendizaje es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *esperanza* te gustaría darte a ti mismo/a en este momento de *ansiedad*? ✨" << endl << endl
                 << "1.- 'Está bien sentir esto, mis emociones son válidas.' 🙏" << endl
                 << "2.- 'Soy más fuerte y capaz de lo que la ansiedad me hace creer.' 💪" << endl
                 << "3.- 'Un paso a la vez, puedo manejar esto y la calma llegará.' 👣" << endl
                 << "4.- 'Merezco paz y bienestar, y estoy trabajando para lograrlo.' 💖" << endl << endl;
    int mensajeAutoCompasionAnsiedad = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio de la *ansiedad*. Recuerda que mereces sentirte en paz y que tienes la capacidad de transitar y gestionar esta emoción. 💖" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Ansiedad ---
    cout << endl << "--- Resumen de tu Terapia de Ansiedad ---" << endl;
    cout << "Causa de la ansiedad: " << causaAnsiedad << endl;
    cout << "Origen principal de la ansiedad: " << origenAnsiedadGeneral << endl;
    cout << "Impacto físico y mental de la ansiedad: " << impactoFisicoMentalAnsiedad << endl;
    cout << "Señales en cuerpo y mente de la ansiedad: " << senalesCuerpoMenteAnsiedad << endl;
    // Nota: Las siguientes variables no fueron asignadas en el ámbito principal
    // de la función con los nombres que se usan en las preguntas posteriores,
    // por lo que no se pueden mostrar sus valores específicos aquí.
    cout << "Recursos internos para enfrentar la ansiedad: " << recursosInternosAnsiedad << endl;
    cout << "Tipo de apoyo más útil en la ansiedad: " << busquedaApoyoAnsiedad << endl;
    cout << "Gesto de autocuidado para aliviar la ansiedad: " << gestoAutocuidadoAnsiedad << endl;
    cout << "Mensaje u oportunidad de la ansiedad: " << ansiedadMensajeAnsiedad << endl;
    cout << "Mensaje de auto-compasión o esperanza: " << mensajeAutoCompasionAnsiedad << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *ansiedad*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la calma. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaSumiso()
{
    string causaSumision; // Variable renombrada
    int origenSumisionGeneral, impactoPersonalSumision, senalesInternasSumision, primerPasoSumision; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de sumisión ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de la *sumisión*. A veces, sentir que cedemos nuestro poder puede ser complejo y agotador. Es valiente de tu parte reconocer esta dinámica y abordarla. 🙇‍♀" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste que actuaste de manera *sumisa* o cediste ante la voluntad de otros, aunque no quisieras? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaSumision); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la *sumisión* es el primer paso para entenderla y, si lo deseas, transformarla. Es una emoción válida, y a menudo, una respuesta aprendida. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de esa sensación de sumisión o de ceder tu voluntad? 🤔" << endl << endl;
    cout << "1.- El miedo al conflicto o al rechazo por parte de otros. 👥" << endl
                 << "2.- La necesidad de aprobación o el deseo de agradar a los demás. 💖" << endl
                 << "3.- Sentir que la opinión o el deseo del otro es más importante que el tuyo. 💡" << endl
                 << "4.- Un patrón aprendido de la infancia o de relaciones pasadas. 🕰" << endl << endl;
    origenSumisionGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de la *sumisión* nos da claridad sobre las raíces de este comportamiento. Este reconocimiento es una herramienta poderosa para empezar a cambiar la narrativa. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta tendencia a la *sumisión* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Siento frustración o resentimiento después de ceder. 😠" << endl
                 << "2.- Mi autoestima se ve afectada, siento que mis deseos no importan. 📉" << endl
                 << "3.- Las relaciones se vuelven desequilibradas o unidireccionales. ⚖" << endl
                 << "4.- Acumulo estrés o emociones no expresadas, afectando mi paz mental. 🤯" << endl << endl; 
    impactoPersonalSumision = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoPersonalSumision) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. Sentir frustración o resentimiento después de ser sumiso/a es una señal clara de que tus propias necesidades no fueron satisfechas. 😠" << endl
                         << "Es válido y necesario reconocer estas emociones. 😔" << endl << endl
                         << "¿Cómo crees que esta frustración o resentimiento te afecta más? 🤔" << endl << endl
                         << "1.- Me cuesta perdonarme por no haber actuado de otra manera. 😥" << endl
                         << "2.- Afecta mi deseo de interactuar con la persona involucrada. 👤" << endl
                         << "3.- Siento que estoy cargando un peso emocional. 🏋‍♀" << endl
                         << "4.- Me hace cuestionar mi valía o mi capacidad para defenderme. ❓" << endl << endl;
            senalesInternasSumision = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. Cuando la *sumisión* afecta la autoestima, es como si tu voz interior se silenciara. 📉" << endl
                         << "Recuerda que tus deseos y opiniones son importantes y válidos. 🙏" << endl << endl
                         << "¿Cómo crees que esta afectación a tu autoestima te impacta más? 🤔" << endl << endl
                         << "1.- Me cuesta tomar decisiones o confiar en mi propio juicio. 💡" << endl
                         << "2.- Siento que no tengo derecho a pedir lo que quiero o necesito. 🚫" << endl
                         << "3.- Me comparo negativamente con los demás o siento que no soy suficiente. 🥀" << endl
                         << "4.- Acepto situaciones que no me benefician para evitar conflictos. 😥" << endl << endl;
            senalesInternasSumision = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. Las relaciones desequilibradas pueden ser agotadoras y socavar tu energía. ⚖" << endl
                         << "La *sumisión* en este contexto puede llevar a sentir que tus necesidades son constantemente ignoradas. 😔" << endl << endl
                         << "¿Cómo crees que este desequilibrio en tus relaciones te afecta más? 🤔" << endl << endl
                         << "1.- Siento que no soy escuchado/a o valorado/a. 👂" << endl
                         << "2.- Me siento agotado/a de dar más de lo que recibo. 🔋" << endl
                         << "3.- Mis necesidades o deseos quedan en segundo plano constantemente. 🗺" << endl
                         << "4.- Me siento resentido/a con las personas involucradas. 😠" << endl << endl;
            senalesInternasSumision = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. Acumular emociones no expresadas puede convertirse en una carga pesada y afectar tu bienestar mental. 🤯" << endl
                         << "La *sumisión* a menudo implica reprimir lo que realmente sientes. Es crucial encontrar formas de liberar esa tensión. 🌬" << endl << endl
                         << "¿Cómo crees que esta acumulación de estrés te impacta más? 🤔" << endl << endl
                         << "1.- Me siento con ansiedad o irritabilidad frecuente. 🌪" << endl
                         << "2.- Tengo problemas para dormir o concentrarme. 😴" << endl
                         << "3.- Me siento desconectado/a de mis propias emociones o deseos. 🧊" << endl
                         << "4.- Siento que exploto por cosas pequeñas después de acumular mucho. 💥" << endl << endl;
            senalesInternasSumision = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las *señales internas* que experimentas cuando te encuentras en una situación de *sumisión*. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Una sensación de nudo en el estómago o de pesadez en el cuerpo. 🏋‍♀" << endl
                 << "2.- Silenciar tus propios pensamientos o decir sí cuando quieres decir no. 🤫" << endl
                 << "3.- Sentir una voz interna que te dice que no eres lo suficientemente bueno/a o que tus deseos no valen. 💬" << endl
                 << "4.- La necesidad de aprobación de los demás antes de actuar o expresar algo. 💖" << endl << endl;
    senalesInternasSumision = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que es momento de reconectar con tu propio poder. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que te podría ayudar a empezar a transformar la **sumisión* en autoafirmación? 🌟" << endl << endl
                 << "1.- Mi deseo de vivir de forma más auténtica y plena. ✨" << endl
                 << "2.- Mi capacidad para reflexionar sobre mis patrones y aprender de ellos. 🧠" << endl
                 << "3.- La conciencia de que mis límites son válidos y necesarios. 🚫" << endl
                 << "4.- Mi resiliencia para cambiar y crecer, incluso si es difícil. 💪" << endl << endl;
    int recursosInternosSumision = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso en este proceso de cambio, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Exploremos ahora las *posibilidades de apoyo* para empoderarte y reducir la *sumisión*. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento? 🤝" << endl << endl
                 << "1.- Hablar con un terapeuta que te ayude a establecer límites y mejorar la autoafirmación. 🗣" << endl
                 << "2.- Practicar decir no en situaciones de baja presión o menos importantes. 🚫" << endl
                 << "3.- Rodearme de personas que me valoren y respeten mi individualidad. 🫂" << endl
                 << "4.- Leer libros o artículos sobre autoafirmación y establecimiento de límites. 📚" << endl << endl;
    primerPasoSumision = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para transformar la *sumisión*. Es un paso hacia tu empoderamiento. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a cultivar tu autoafirmación y reducir la *sumisión*? 👣" << endl << endl
                 << "1.- Identificar una pequeña situación donde usualmente cederías y, conscientemente, elegir actuar diferente. 🌱" << endl
                 << "2.- Escribir una lista de tus propios deseos y necesidades, sin juzgarlos. 📝" << endl
                 << "3.- Practicar la respiración profunda o la meditación para conectar con tu centro y fortaleza interior. 🧘‍♀" << endl
                 << "4.- Elegir una acción pequeña que solo sea para ti y que te dé placer, sin considerar a nadie más. 💖" << endl << endl;
    int accionConcretaSumision = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu empoderamiento. 💪" << endl << endl;

    system("pause"); 
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que el proceso de transformar la *sumisión* en autoafirmación puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá vivir con más autenticidad y congruencia. ✨" << endl
                 << "2.- Mejorará la calidad de mis relaciones, haciéndolas más equilibradas y respetuosas. 🤝" << endl
                 << "3.- Aumentará mi autoestima y mi confianza en mí mismo/a. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida más plena y satisfactoria. 🦋" << endl << endl;
    int enriqueceVidaSumision = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de empoderamiento* o *auto-compasión* te gustaría darte a ti mismo/a al iniciar este camino de transformación? ✨" << endl << endl
                 << "1.- 'Mi voz importa, y merezco ser escuchado/a.' 🗣" << endl
                 << "2.- 'Está bien decir no y poner límites, es un acto de amor propio.' 🚫" << endl
                 << "3.- 'Soy digno/a de respeto y de tener mis propias necesidades.' 🙏" << endl
                 << "4.- 'Cada paso, por pequeño que sea, me acerca a la persona empoderada que soy.' 💖" << endl << endl;
    int mensajeEmpoderamientoSumision = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia el empoderamiento. Recuerda que mereces vivir una vida donde tus necesidades y deseos sean valorados. 💖" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Sumisión ---
    cout << endl << "--- Resumen de tu Terapia de Sumisión ---" << endl;
    cout << "Causa de la sumisión: " << causaSumision << endl;
    cout << "Origen principal de la sumisión: " << origenSumisionGeneral << endl;
    cout << "Impacto personal de la sumisión: " << impactoPersonalSumision << endl;
    cout << "Señales internas de la sumisión: " << senalesInternasSumision << endl;
    // Nota: Las siguientes variables no fueron asignadas en el ámbito principal
    // de la función con los nombres que se usan en las preguntas posteriores,
    // por lo que no se pueden mostrar sus valores específicos aquí.
    cout << "Recursos internos para transformar la sumisión: " << recursosInternosSumision << endl;
    cout << "Primer paso de apoyo para el empoderamiento: " << primerPasoSumision << endl;
    cout << "Acción concreta para cultivar la autoafirmación: " << accionConcretaSumision << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << enriqueceVidaSumision << endl;
    cout << "Mensaje de empoderamiento o auto-compasión: " << mensajeEmpoderamientoSumision << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *sumisión* y el camino hacia la autoafirmación." << endl
                 << "😄 Recuerda que este es un proceso gradual y que cada pequeño paso cuenta. Sé amable contigo mismo/a." << endl
                 << "😊 Confío en tu resiliencia y en tu capacidad para reconectar con tu poder interior. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaTemor()
{
    string causaTemor; // Variable renombrada
    int origenTemorGeneral, impactoFisicoMentalTemor, senalesCuerpoMenteTemor, accionConcretaTemor; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción del temor ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del *temor*. Es una respuesta natural ante una amenaza, real o percibida, y es valiente de tu parte reconocerla y abordarla. 😨" << endl
                 << "¿Podrías compartirme brevemente la situación o el pensamiento principal que te ha llevado a sentir *temor* últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaTemor); // Usando la variable renombrada
    cout << endl << "Gracias por compartir eso. Reconocer el *temor* es el primer paso para entenderlo y gestionarlo. Es una emoción válida y a menudo protectora. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *temor*? 🤔" << endl << endl;
    cout << "1.- Una amenaza directa a mi seguridad física o la de mis seres queridos. 🛡" << endl
                 << "2.- La posibilidad de fracaso, rechazo o juicio en una situación importante. 📉" << endl
                 << "3.- Lo desconocido o la incertidumbre sobre el futuro. ❓" << endl
                 << "4.- Un evento pasado traumático o una experiencia negativa que se repite. 🕰" << endl << endl;
    origenTemorGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *temor* nos da claridad sobre la raíz de esta intensa emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* este *temor* tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Me siento paralizado/a, con dificultad para tomar decisiones o actuar. 🥶" << endl
                 << "2.- Evito situaciones o personas relacionadas con mi temor. 🚫" << endl
                 << "3.- Tengo pensamientos intrusivos o una preocupación constante sobre lo que temo. 🧠" << endl
                 << "4.- Mi sueño o apetito se han visto afectados. 😴" << endl << endl; 
    impactoFisicoMentalTemor = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoFisicoMentalTemor) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. Sentirse paralizado/a por el *temor* es una respuesta natural de protección, pero puede limitar tu capacidad de acción. 🥶" << endl
                         << "Es válido sentir esa dificultad para moverse hacia adelante. 😔" << endl << endl
                         << "¿Cómo crees que esta parálisis te afecta más en tu día a día? 🤔" << endl << endl
                         << "1.- Me cuesta iniciar tareas o tomar decisiones importantes. ⏳" << endl
                         << "2.- Siento que estoy perdiendo oportunidades por miedo a actuar. 📉" << endl
                         << "3.- Me siento frustrado/a conmigo mismo/a por no poder superar el temor. 😠" << endl
                         << "4.- Afecta mi confianza en mi propia capacidad de respuesta. ❓" << endl << endl;
            senalesCuerpoMenteTemor = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. La evitación es una estrategia común para lidiar con el *temor*, pero a largo plazo puede limitar tu vida. 🚫" << endl
                         << "Es un mecanismo de protección, pero puede impedirnos experimentar cosas nuevas. 🙏" << endl << endl
                         << "¿Cómo crees que esta evitación te afecta más? 🤔" << endl << endl
                         << "1.- Me siento limitado/a en mis actividades diarias o sociales. ⛓" << endl
                         << "2.- Siento que el temor 'gana terreno' en mi vida. 📉" << endl
                         << "3.- Me genera más estrés o frustración a largo plazo. 🌧" << endl
                         << "4.- Siento que me estoy perdiendo de vivir plenamente. 😔" << endl << endl;
            senalesCuerpoMenteTemor = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. Los pensamientos intrusivos y la preocupación constante son compañeros frecuentes del *temor*. 🧠" << endl
                         << "Es como si tu mente estuviera atrapada en un ciclo de alerta. Es agotador, y es importante reconocerlo. 😔" << endl << endl
                         << "¿Cómo crees que estos pensamientos te afectan más en tu vida? 🤔" << endl << endl
                         << "1.- Me cuesta concentrarme en otras cosas o en mis tareas. 📚" << endl
                         << "2.- Siento que no puedo desconectar mi mente, incluso al intentar descansar. ⚡" << endl
                         << "3.- La preocupación me quita el sueño o me genera insomnio. 😴" << endl
                         << "4.- Siento que estoy siempre en estado de alerta o 'a la defensiva'. 🛡" << endl << endl;
            senalesCuerpoMenteTemor = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. El *temor* puede tener un impacto significativo en tu bienestar físico, afectando el sueño y el apetito. 😴" << endl
                         << "Es una señal clara de que tu cuerpo está bajo estrés. 😔" << endl << endl
                         << "¿Cómo crees que estos efectos físicos te impactan más en tu vida? 🤔" << endl << endl
                         << "1.- Me siento constantemente fatigado/a y con poca energía. 🔋" << endl
                         << "2.- Mi estado de ánimo se ve afectado por la falta de descanso.  mood_swing" << endl
                         << "3.- Me cuesta cuidar mi alimentación o mis hábitos saludables. 🍎" << endl
                         << "4.- Me siento más vulnerable a enfermedades o resfriados. 🤧" << endl << endl;
            senalesCuerpoMenteTemor = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las *señales que tu cuerpo y mente te dan* cuando sientes *temor*. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Corazón acelerado, sudoración o temblores. 💨" << endl
                 << "2.- Sensación de tensión muscular, especialmente en cuello, hombros o mandíbula. 💪" << endl
                 << "3.- Piel fría, 'escalofrío' o sensación de 'nudo' en el estómago. 🥶" << endl
                 << "4.- Dificultad para respirar profundamente o sensación de ahogo. 🌬" << endl << endl;
    senalesCuerpoMenteTemor = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer cómo el *temor* se manifiesta en tu cuerpo y mente es vital. Escuchar estas señales te ayudará a actuar cuando más lo necesitas y a darte el cuidado que mereces. 🫂" << endl << endl;

    cout << "¿Qué *recursos internos* o *fortalezas personales, por pequeñas que parezcan, crees que aún posees para enfrentar este **temor*? 🌟" << endl << endl
                 << "1.- Mi capacidad para analizar la situación y buscar información. 📊" << endl
                 << "2.- Mi resiliencia, porque he superado desafíos en el pasado. 💪" << endl
                 << "3.- Mi habilidad para buscar apoyo en personas de confianza. 🤝" << endl
                 << "4.- Mi fe o mi capacidad para mantener la esperanza, incluso en la adversidad. 🙏" << endl << endl;
    int recursosInternosTemor = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *temor*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl
                 << "Recuerda que no estás solo/a en esto. 🫂" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento de **temor*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental que te ayude a manejar el temor y sus causas. 🗣" << endl
                 << "2.- Conectar con un ser querido que te escuche sin juzgar y te brinde compañía. 🫂" << endl
                 << "3.- Realizar una actividad que te ayude a disipar la tensión (ejercicio, meditación, hobby). 🧘‍♀" << endl
                 << "4.- Buscar estrategias prácticas para enfrentar directamente la situación que te causa temor, si es posible. 🧭" << endl << endl;
    int busquedaApoyoTemor = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el *temor*. Es un paso hacia la sanación. ✨" << endl << endl;

    cout << "¿Qué *pequeño gesto de autocuidado* o *acción* puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para aliviar un poco este *temor*? 👣" << endl << endl
                 << "1.- Realizar una técnica de respiración consciente (ej. respiración diafragmática) por 5 minutos. 🌬" << endl
                 << "2.- Escuchar música que te genere calma o te distraiga de la preocupación. 🎶" << endl
                 << "3.- Dar un paseo corto, aunque sea dentro de casa, para mover el cuerpo. 🚶‍♀" << endl
                 << "4.- Escribir en un diario sobre lo que sientes y te preocupa. 📝" << endl << endl;
    accionConcretaTemor = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system("pause"); 
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que el *temor, aunque incómodo, puede ser un **maestro* o una *oportunidad* para tu crecimiento personal? 🌱" << endl << endl
                 << "1.- Me indica las áreas de mi vida donde necesito establecer límites o protegerme. 🛡" << endl
                 << "2.- Me impulsa a desarrollar coraje y a enfrentar mis miedos de forma gradual. 🚀" << endl
                 << "3.- Me ayuda a ser más consciente de mis reacciones y a encontrar nuevas formas de afrontar el estrés. 🧠" << endl
                 << "4.- Me conecta con mi vulnerabilidad y la importancia de pedir ayuda cuando la necesito. 🤝" << endl << endl;
    int temorMaestroTemor = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el mensaje del *temor* es un paso significativo. Tu capacidad para transformar la incomodidad en aprendizaje es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de valentía* o *auto-compasión* te gustaría darte a ti mismo/a en este momento de *temor*? ✨" << endl << endl
                 << "1.- 'Soy más valiente de lo que creo, y puedo enfrentar esto.' 💪" << endl
                 << "2.- 'Está bien sentir miedo, es una señal de que algo me importa.' 🙏" << endl
                 << "3.- 'No tengo que hacerlo todo solo/a, el apoyo me fortalece.' 🫂" << endl
                 << "4.- 'Cada paso que doy, por pequeño que sea, es un acto de coraje.' 💖" << endl << endl;
    int mensajeValentiaTemor = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio del *temor*. Recuerda que mereces sentirte seguro/a y que tienes la capacidad de transitar y gestionar esta emoción. 💖" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Temor ---
    cout << endl << "--- Resumen de tu Terapia de Temor ---" << endl;
    cout << "Causa del temor: " << causaTemor << endl;
    cout << "Origen principal del temor: " << origenTemorGeneral << endl;
    cout << "Impacto físico y mental del temor: " << impactoFisicoMentalTemor << endl;
    cout << "Señales en cuerpo y mente del temor: " << senalesCuerpoMenteTemor << endl;
    // Nota: Las siguientes variables no fueron asignadas en el ámbito principal
    // de la función con los nombres que se usan en las preguntas posteriores,
    // por lo que no se pueden mostrar sus valores específicos aquí.
    cout << "Recursos internos para enfrentar el temor: " << recursosInternosTemor << endl;
    cout << "Tipo de apoyo más útil en el temor: " << busquedaApoyoTemor << endl;
    cout << "Gesto de autocuidado o acción concreta: " << accionConcretaTemor << endl;
    cout << "El temor como maestro u oportunidad: " << temorMaestroTemor << endl;
    cout << "Mensaje de valentía o auto-compasión: " << mensajeValentiaTemor << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del *temor*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la seguridad y la calma. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaInquietud()
{
    string causaInquietud; // Variable renombrada
    int origenInquietudGeneral, impactoFisicoMentalInquietud, senalesCuerpoMenteInquietud, accionConcretaInquietud; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la inquietud ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de la *inquietud*. Es esa sensación de desasosiego o agitación, a menudo sin una causa clara, y es valiente de tu parte reconocerla y abordarla. 🌪" << endl
                 << "¿Podrías compartirme brevemente la situación o el sentimiento general que te ha llevado a sentir *inquietud* últimamente? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaInquietud); // Usando la variable renombrada
    cout << endl << "Gracias por compartir eso. Reconocer la *inquietud* es el primer paso para entenderla y gestionarla. Es una emoción válida y a menudo un llamado a la introspección. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *inquietud*? 🤔" << endl << endl;
    cout << "1.- La incertidumbre sobre el futuro o la espera de un evento. ❓" << endl
                 << "2.- Sentir que hay algo pendiente o no resuelto en tu vida. ⏳" << endl
                 << "3.- Un exceso de pensamientos o sobrecarga mental. 🧠" << endl
                 << "4.- Una energía interna que no encuentra dónde canalizarse. ⚡" << endl << endl;
    origenInquietudGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *inquietud* nos da claridad sobre la raíz de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta *inquietud* tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Me cuesta concentrarme, me siento distraído/a o con dificultad para mantener la atención. 🧠" << endl
                 << "2.- Tengo problemas para relajarme, siento nerviosismo o agitación constante. 🛋" << endl
                 << "3.- Mi sueño se ha visto afectado, me cuesta conciliarlo o lo siento interrumpido. 😴" << endl
                 << "4.- Me siento con ganas de moverme, de hacer algo, pero no sé qué. 🏃‍♀" << endl << endl; 
    impactoFisicoMentalInquietud = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    switch (impactoFisicoMentalInquietud) { // Usando la variable renombrada
        case 1:
            cout << endl << endl << "Comprendo. La *inquietud* a menudo puede hacer que nuestra mente se sienta dispersa o sobrecargada, dificultando la concentración. 🧠" << endl
                         << "Es un impacto significativo, y es válido sentir esa frustración mental. 😔" << endl << endl
                         << "¿Cómo crees que esta dificultad para concentrarte te afecta más en tu día a día? 🤔" << endl << endl
                         << "1.- Me cuesta iniciar tareas o mantener el enfoque en ellas. ⏳" << endl
                         << "2.- Siento que mis pensamientos están acelerados y no puedo 'apagarme'. ⚡" << endl
                         << "3.- Me siento abrumado/a incluso con las responsabilidades más pequeñas. ⛰" << endl
                         << "4.- Mi rendimiento en el trabajo o estudios se ha visto afectado. 📉" << endl << endl;
            senalesCuerpoMenteInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4); // Usando la variable renombrada
            break;
        case 2:
            cout << endl << endl << "Entiendo. Los problemas para relajarse y el nerviosismo constante son manifestaciones muy comunes de la *inquietud*. 🛋" << endl
                         << "Es como si tu cuerpo estuviera siempre en un estado de alerta suave. Es agotador, y es importante reconocerlo. 🙏" << endl << endl
                         << "¿Cómo crees que esta inquietud o nerviosismo te afectan más? 🤔" << endl << endl
                         << "1.- Me cuesta encontrar momentos de paz o tranquilidad. 🧘‍♀" << endl
                         << "2.- Me siento constantemente 'en el borde' o a la expectativa. ❓" << endl
                         << "3.- Mis relaciones personales se ven afectadas por mi estado de nerviosismo. 🫂" << endl
                         << "4.- Siento un malestar físico general por la tensión constante. 🤕" << endl << endl;
            senalesCuerpoMenteInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 3:
            cout << endl << endl << "Comprendo. La *inquietud* a menudo interfiere con nuestro descanso, afectando el sueño. 😴" << endl
                         << "Es como si tu mente no pudiera desconectar. Es importante buscar formas de mejorar tu descanso. 😔" << endl << endl
                         << "¿Cómo crees que estos problemas de sueño te impactan más? 🤔" << endl << endl
                         << "1.- Me siento constantemente fatigado/a y con poca energía durante el día. 🔋" << endl
                         << "2.- Mi estado de ánimo se ve afectado por la falta de descanso. mood_swing" << endl
                         << "3.- Me cuesta tomar decisiones o mi juicio se nubla. 🧭" << endl
                         << "4.- Siento que mi cuerpo no se recupera adecuadamente. 📉" << endl << endl;
            senalesCuerpoMenteInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
        case 4:
            cout << endl << endl << "Entiendo. Esa sensación de 'tener que hacer algo' sin saber qué es muy característica de la *inquietud*. 🏃‍♀" << endl
                         << "Es como si tu energía no tuviera un rumbo claro. Es importante encontrar una válvula de escape. 😔" << endl << endl
                         << "¿Cómo crees que esta necesidad de movimiento o acción te afecta más? 🤔" << endl << endl
                         << "1.- Me siento impaciente o frustrado/a conmigo mismo/a. 😠" << endl
                         << "2.- Busco constantemente distracciones o nuevas actividades. 🎮" << endl
                         << "3.- Me cuesta relajarme y simplemente 'estar'. 🧘‍♀" << endl
                         << "4.- Siento que mi mente y mi cuerpo están siempre en marcha, sin un propósito claro. 🚀" << endl << endl;
            senalesCuerpoMenteInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4); // Usando la variable renombrada
            break;
    }
    
    system("pause"); 
    system("cls");   

    cout << endl << "Ahora, pensemos en las *señales que tu cuerpo y mente te dan* cuando sientes *inquietud*. ¿Cuáles de estas son las más notorias en ti? 😟" << endl << endl
                 << "1.- Agitación en las piernas o manos, dificultad para quedarse quieto/a. restless_person" << endl
                 << "2.- Una sensación de 'nudo' en el estómago o tensión en el pecho. 🌪" << endl
                 << "3.- Suspiros frecuentes o una respiración más superficial. 🌬" << endl
                 << "4.- Pensamientos dispersos, dificultad para concentrarse o 'ruido mental'. 🧠" << endl << endl;
    senalesCuerpoMenteInquietud = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer cómo la *inquietud* se manifiesta en tu cuerpo y mente es vital. Escuchar estas señales te ayudará a actuar cuando más lo necesitas y a darte el cuidado que mereces. 🫂" << endl << endl;

    cout << "¿Qué *recursos internos* o *fortalezas personales, por pequeñas que parezcan, crees que aún posees para enfrentar esta **inquietud*? 🌟" << endl << endl
                 << "1.- Mi capacidad de auto-observación y de identificar lo que me está pasando. 🧠" << endl
                 << "2.- Mi deseo de encontrar calma y serenidad. 💡" << endl
                 << "3.- Mi habilidad para buscar actividades que me distraigan o me relajen. 🧘‍♀" << endl
                 << "4.- Mi resiliencia, porque sé que he superado momentos de desasosiego antes. 💪" << endl << endl;
    int recursosInternosInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando te sientes inquieto/a, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl
                 << "Recuerda que no estás solo/a en esto. 🫂" << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento de **inquietud*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental para estrategias de manejo del estrés/ansiedad. 🗣" << endl
                 << "2.- Conectar con un ser querido que te escuche sin juzgar y te brinde compañía. 🫂" << endl
                 << "3.- Realizar una actividad física que te ayude a liberar el exceso de energía. 🏃‍♀" << endl
                 << "4.- Establecer una rutina de relajación o meditación diaria. 🧘‍♀" << endl << endl;
    int busquedaApoyoInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *inquietud*. Es un paso hacia la calma. ✨" << endl << endl;

    cout << "¿Qué *pequeño gesto de autocuidado* o *acción* puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para aliviar un poco esta *inquietud*? 👣" << endl << endl
                 << "1.- Realizar una técnica de respiración consciente (ej. respiración diafragmática) por 5 minutos. 🌬" << endl
                 << "2.- Escuchar música relajante o sonidos de la naturaleza. 🎶" << endl
                 << "3.- Dar un paseo corto al aire libre, prestando atención a tu entorno. 🌳" << endl
                 << "4.- Anotar en un papel tus pensamientos o preocupaciones para sacarlos de tu mente. 📝" << endl << endl;
    accionConcretaInquietud = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system("pause"); 
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que la *inquietud, aunque incómoda, puede ser un **mensaje* o una *oportunidad* para tu crecimiento personal? 🌱" << endl << endl
                 << "1.- Me indica la necesidad de prestar atención a algo que estoy ignorando. 💡" << endl
                 << "2.- Me impulsa a encontrar nuevas formas de canalizar mi energía o creatividad. 🚀" << endl
                 << "3.- Me ayuda a desarrollar paciencia y a practicar el desapego de lo que no puedo controlar. 🧘‍♀" << endl
                 << "4.- Me conecta con mi necesidad de paz y tranquilidad en mi vida. 💖" << endl << endl;
    int inquietudMensajeInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente! Reconocer el mensaje de la *inquietud* es un paso significativo. Tu capacidad para transformar la incomodidad en aprendizaje es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *paciencia* te gustaría darte a ti mismo/a en este momento de *inquietud*? ✨" << endl << endl
                 << "1.- 'Está bien no saberlo todo, un paso a la vez.' 👣" << endl
                 << "2.- 'Merezco la calma y puedo encontrarla dentro de mí.' 🏞" << endl
                 << "3.- 'Mi cuerpo y mente me están dando una señal, y los escucharé con amabilidad.' 🙏" << endl
                 << "4.- 'Esta sensación es temporal, y estoy aprendiendo a gestionarla.' 💖" << endl << endl;
    int mensajeAutoCompasionInquietud = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio de la *inquietud*. Recuerda que mereces sentirte en paz y que tienes la capacidad de transitar y gestionar esta emoción. 💖" << endl << endl;

    // Preguntas adicionales de opción múltiple
    cout << endl << "Para profundizar un poco más, ¿hay alguna pequeña acción que puedas tomar para *reducir la incertidumbre* que sientes, si es que esa es la raíz de tu inquietud? 🔍" << endl
                 << "1.- Hacer una llamada o enviar un mensaje para obtener información específica. 📞" << endl
                 << "2.- Crear una pequeña lista de cosas que sí puedes controlar en este momento. ✅" << endl
                 << "3.- Posponer una decisión difícil para cuando te sientas más tranquilo/a. ⏸" << endl
                 << "4.- Investigar más sobre el tema que te genera incertidumbre para tener más claridad. 📚" << endl << endl;
    int accionReducirIncertidumbreInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Variable renombrada
    cout << endl << "Gracias por pensar en eso. Identificar una acción concreta, por pequeña que sea, puede ser un gran paso para moverte de la *inquietud* hacia la acción y el control. 💪" << endl << endl;

    cout << "¿Y qué podrías hacer para darle a tu mente un *'descanso' intencional* hoy, incluso si es por unos pocos minutos? Esto puede ayudar a romper el ciclo de pensamientos. ⏸" << endl
                 << "1.- Observar un objeto o la naturaleza con total atención por un minuto. 🌳" << endl
                 << "2.- Escuchar tu canción favorita, prestando atención solo a la música. 🎧" << endl
                 << "3.- Realizar un estiramiento suave o mover tu cuerpo conscientemente. 🤸‍♀" << endl
                 << "4.- Simplemente, cerrar los ojos y respirar profundamente, sin juzgar los pensamientos que vengan. 🧘" << endl << endl;
    int descansoIntencionalInquietud = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Variable renombrada
    cout << endl << "¡Excelente idea! Permitirte esos momentos de *descanso intencional* puede hacer una gran diferencia en cómo manejas la *inquietud*. Recuerda que cuidarte también es un acto de fuerza. ✨" << endl << endl;

    system ("pause");
    system ("cls");

     // --- Resumen de tu Terapia de Inquietud ---
    cout << endl << "--- Resumen de tu Terapia de Inquietud ---" << endl;
    cout << "Causa de la inquietud: " << causaInquietud << endl;
    cout << "Origen principal de la inquietud: " << origenInquietudGeneral << endl;
    cout << "Impacto físico y mental de la inquietud: " << impactoFisicoMentalInquietud << endl;
    cout << "Señales en cuerpo y mente de la inquietud: " << senalesCuerpoMenteInquietud << endl;
    // Nota: Las siguientes variables no fueron asignadas en el ámbito principal
    // de la función con los nombres que se usan en las preguntas posteriores,
    // por lo que no se pueden mostrar sus valores específicos aquí.
    cout << "Recursos internos para enfrentar la inquietud: " << recursosInternosInquietud << endl;
    cout << "Tipo de apoyo más útil en la inquietud: " << busquedaApoyoInquietud << endl;
    cout << "Gesto de autocuidado o acción concreta: " << accionConcretaInquietud << endl;
    cout << "La inquietud como mensaje u oportunidad: " << inquietudMensajeInquietud << endl;
    cout << "Mensaje de auto-compasión o paciencia: " << mensajeAutoCompasionInquietud << endl;
    cout << "Acción para reducir la incertidumbre: " << accionReducirIncertidumbreInquietud << endl;
    cout << "Descanso intencional para la mente: " << descansoIntencionalInquietud << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *inquietud*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la calma. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

//Ira
void terapiaDesprecio()
{
    string causaDesprecio; // Variable renombrada
    int origenDesprecioGeneral, impactoPersonalDesprecio, senalesInternasDesprecio, recursosInternosDesprecio, posibilidadesApoyoDesprecio; // Variables renombradas
    int accionConcretaDesprecio, transformarDesprecioProceso, mensajeFinalDesprecio, creenciaSubyacenteDesprecio, accionNoReaccionDesprecio; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción del desprecio ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del *desprecio*. A menudo es una emoción compleja, una mezcla de ira y disgusto, que nos distancia de los demás. Es un acto de valentía reconocerla y abordarla. 😠" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste *desprecio* hacia alguien o algo? No necesitas entrar en detalles, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaDesprecio); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer el *desprecio* es el primer paso para entender qué lo provoca y cómo te afecta. Es una emoción intensa que puede tener un gran impacto. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *desprecio*? 🤔" << endl << endl;
    cout << "1.- Sentir que la otra persona o situación carece de valor o merece mi condena. 👎" << endl
                 << "2.- Percibir una violación de mis valores fundamentales o de lo que considero correcto. ⚖" << endl
                 << "3.- Una sensación de superioridad o de que soy 'mejor' que la otra persona/situación. 👑" << endl
                 << "4.- Una experiencia pasada dolorosa o un patrón repetitivo de decepción con esa persona/situación. 🕰" << endl << endl;
    origenDesprecioGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *desprecio* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *desprecio* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me siento distante o desconectado/a de esa persona o de mi entorno. 🧊" << endl
                 << "2.- Tengo pensamientos negativos recurrentes o juicios constantes. 🧠" << endl
                 << "3.- Afecta mi capacidad de empatía o de ver la perspectiva de los demás. 🚧" << endl
                 << "4.- Me genera una sensación de amargura o de estar siempre 'a la defensiva'. 😠" << endl << endl;
    impactoPersonalDesprecio = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalDesprecio) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Esa distancia emocional puede ser agotadora y aislante. Es válido sentirlo. 😔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. Esos pensamientos negativos pueden ser muy invasivos. Reconocerlos es el primer paso. 🧠" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. Cuando la empatía se ve afectada, puede impactar profundamente tus conexiones. Es un área importante a explorar. 🚧" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Esa sensación de amargura o estar a la defensiva consume mucha energía. Es importante liberar esa carga. 😠" << endl;
            break;
    }
    
    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo el *desprecio* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes *desprecio*? 😟" << endl << endl;
    cout << "1.- Una sensación de contracción o endurecimiento en el pecho o el estómago. 💥" << endl
                 << "2.- Una sonrisa sardónica, levantar el labio o un gesto facial de disgusto. 😒" << endl
                 << "3.- Una voz interna crítica o juiciosa hacia la persona/situación. 💬" << endl
                 << "4.- Sentir una distancia emocional o una frialdad hacia el otro. 🥶" << endl << endl;
    senalesInternasDesprecio = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar este **desprecio*? 🌟" << endl << endl
                 << "1.- Mi capacidad para reflexionar y cuestionar mis propios juicios. 🧠" << endl
                 << "2.- Mi deseo de encontrar paz y liberarme de emociones negativas. ✨" << endl
                 << "3.- Mi habilidad para recordar la humanidad compartida, incluso en la diferencia. 🤝" << endl
                 << "4.- Mi resiliencia para cambiar patrones emocionales, incluso si es difícil. 💪" << endl << endl;
    recursosInternosDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *desprecio*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar el **desprecio*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental para explorar las raíces y estrategias de manejo. 🗣" << endl
                 << "2.- Conectar con un ser querido que te ofrezca una perspectiva diferente o una escucha sin juicio. 🫂" << endl
                 << "3.- Practicar ejercicios de empatía o toma de perspectiva (ej. intentar ver la situación desde el otro lado). 🧭" << endl
                 << "4.- Trabajar en perdonar o dejar ir, si es aplicable a la situación. 🕊" << endl << endl;
    posibilidadesApoyoDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el *desprecio*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a gestionar el *desprecio* que sientes? 👣" << endl << endl
                 << "1.- Tomar 3 respiraciones profundas cuando notes la emoción de desprecio, para crear una pausa. 🌬" << endl
                 << "2.- Escribir en un diario sobre los pensamientos y sentimientos que surgen cuando sientes desprecio, sin juzgarte. 📝" << endl
                 << "3.- Identificar un rasgo positivo, por pequeño que sea, en la persona o situación hacia la que sientes desprecio. ➕" << endl
                 << "4.- Intentar posponer el juicio y simplemente observar la situación sin reaccionar inmediatamente. 🧘" << endl << endl;
    accionConcretaDesprecio = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar el *desprecio* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá vivir con más paz interior y menos carga emocional. 🏞" << endl
                 << "2.- Mejorará la calidad de mis relaciones, haciéndolas más auténticas y compasivas. 🤝" << endl
                 << "3.- Aumentará mi autoconocimiento y mi capacidad de empatía. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida más plena y conectada. 🦋" << endl << endl;
    transformarDesprecioProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *aceptación* te gustaría darte a ti mismo/a al iniciar este camino de transformación del *desprecio*? ✨" << endl << endl
                 << "1.- 'Está bien sentir esta emoción, pero puedo elegir cómo respondo a ella.' 🙏" << endl
                 << "2.- 'Soy capaz de crecer y de transformar mis emociones más difíciles.' 💪" << endl
                 << "3.- 'Mi paz interior es una prioridad, y merezco liberarme de lo que me pesa.' 💖" << endl
                 << "4.- 'Cada paso hacia la comprensión y la compasión es un regalo para mí mismo/a.' 🎁" << endl << endl;
    mensajeFinalDesprecio = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la liberación del *desprecio*. Recuerda que mereces vivir una vida con más compasión, empezando por ti mismo/a. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿hay alguna *creencia subyacente* que tengas sobre ti mismo/a o sobre los demás que pueda estar alimentando este sentimiento de *desprecio*? 🤔" << endl << endl
                 << "1.- 'Siento que mis estándares son muy altos y los demás no los cumplen.' 📈" << endl
                 << "2.- 'Creo que debo protegerme de ser herido/a o decepcionado/a.' 🛡" << endl
                 << "3.- 'Hay una parte de mí que siente frustración por no poder cambiar a los demás.' 🤯" << endl
                 << "4.- 'Siento que mi valía depende de cuán 'correctas' sean mis opiniones.' 👑" << endl << endl;
    creenciaSubyacenteDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar esas *creencias subyacentes* es clave, ya que a menudo son los cimientos de nuestras emociones más complejas. Solo al reconocerlas, podemos empezar a cuestionarlas y, si es necesario, cambiarlas. 💡" << endl << endl;

    cout << "¿Qué *pequeña acción consciente* puedes tomar hoy para practicar la *no-reacción* o la *observación* desapegada la próxima vez que surja el desprecio? 🧘" << endl << endl
                 << "1.- Respirar profundamente 3 veces y nombrar la emoción: 'Estoy sintiendo desprecio.' 🌬" << endl
                 << "2.- Cambiar el foco de mi atención a algo neutral o positivo en mi entorno. 🌳" << endl
                 << "3.- Recordarme que la emoción es mía y no define la valía del otro. ✨" << endl
                 << "4.- Elegir conscientemente una respuesta diferente a la que normalmente tendría. 🔄" << endl << endl;
    accionNoReaccionDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Practicar la *no-reacción* y la *observación desapegada* son herramientas poderosas para ganar control sobre tus respuestas emocionales. Cada vez que lo intentes, estás fortaleciendo tu capacidad de elegir la paz. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Desprecio ---
    cout << endl << "--- Resumen de tu Terapia de Desprecio ---" << endl;
    cout << "Causa del desprecio: " << causaDesprecio << endl;
    cout << "Origen principal del desprecio: " << origenDesprecioGeneral << endl;
    cout << "Impacto personal del desprecio: " << impactoPersonalDesprecio << endl;
    cout << "Señales internas del desprecio: " << senalesInternasDesprecio << endl;
    cout << "Recursos internos para transformar el desprecio: " << recursosInternosDesprecio << endl;
    cout << "Posibilidades de apoyo para gestionar el desprecio: " << posibilidadesApoyoDesprecio << endl;
    cout << "Acción concreta para gestionar el desprecio: " << accionConcretaDesprecio << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << transformarDesprecioProceso << endl;
    cout << "Mensaje de auto-compasión o aceptación: " << mensajeFinalDesprecio << endl;
    cout << "Creencia subyacente que alimenta el desprecio: " << creenciaSubyacenteDesprecio << endl;
    cout << "Acción consciente para practicar la no-reacción: " << accionNoReaccionDesprecio << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del *desprecio*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la compasión y la conexión. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaAgresion()
{
    string causaAgresion; // Variable renombrada
    int origenAgresionGeneral, impactoPersonalAgresion, senalesInternasAgresion, recursosInternosAgresion, posibilidadesApoyoAgresion; // Variables renombradas
    int accionConcretaAgresion, transformarAgresionProceso, mensajeFinalAgresion, senalTempranaAgresion, preguntaConscienteAgresion; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la agresión ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de la *agresión*. A menudo, la agresión es una respuesta intensa a la frustración, el miedo o la percepción de una amenaza. Es un acto de valentía reconocerla y abordarla. 💥" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste o expresaste *agresión*? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaAgresion); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la *agresión* es el primer paso para entender qué la provoca y cómo te afecta. Es una emoción poderosa y compleja. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *agresión*? 🤔" << endl << endl;
    cout << "1.- La frustración ante un obstáculo o una situación que no puedo controlar. 😠" << endl
                 << "2.- Sentirme amenazado/a, atacado/a o que mis límites fueron violados. 🛡" << endl
                 << "3.- Una acumulación de estrés o ira no expresada que finalmente explotó. 🤯" << endl
                 << "4.- La incapacidad para comunicarme o ser escuchado/a de otra manera. 🗣" << endl << endl;
    origenAgresionGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *agresión* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *agresión* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Siento remordimiento o culpa después de un episodio agresivo. 😔" << endl
                 << "2.- Mis relaciones personales se han visto tensas o dañadas. 💔" << endl
                 << "3.- Me siento con mucha energía negativa, tensión o agotamiento. 🔋" << endl
                 << "4.- Me cuesta confiar en mí mismo/a para manejar mis emociones de forma constructiva. 📉" << endl << endl;
    impactoPersonalAgresion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalAgresion) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Esos sentimientos de culpa pueden ser muy pesados. Reconocerlos es importante. 😔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. El daño en las relaciones es un impacto significativo. Trabajar en esto puede reconstruir la confianza. 💔" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. Esa energía negativa consume mucho. Es necesario encontrar una salida saludable. 🔋" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. La falta de confianza en tu manejo emocional puede ser limitante. Estás dando un paso valiente al abordarlo. 📉" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo la *agresión* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes que la *agresión* está surgiendo? 😟" << endl << endl;
    cout << "1.- Tensión muscular (mandíbula apretada, puños cerrados, hombros tensos). 💪" << endl
                 << "2.- Aumento del ritmo cardíaco, respiración acelerada, calor corporal. 💨" << endl
                 << "3.- Pensamientos acelerados, impulsividad o ganas de atacar verbal o físicamente. 🧠" << endl
                 << "4.- Una sensación de irritabilidad o impaciencia extrema. ⚡" << endl << endl;
    senalesInternasAgresion = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar esta **agresión* en una respuesta más constructiva? 🌟" << endl << endl
                 << "1.- Mi capacidad para reconocer cuándo estoy perdiendo el control. 🚦" << endl
                 << "2.- Mi deseo de mejorar mis relaciones y mi paz interior. ✨" << endl
                 << "3.- Mi habilidad para aprender nuevas formas de expresar mis necesidades. 📚" << endl
                 << "4.- Mi resiliencia para cambiar patrones de comportamiento. 💪" << endl << endl;
    recursosInternosAgresion = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *agresión*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar la **agresión*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental que te ayude a identificar detonantes y estrategias de manejo. 🗣" << endl
                 << "2.- Aprender y practicar técnicas de manejo de la ira o de comunicación asertiva. 📚" << endl
                 << "3.- Buscar actividades físicas o creativas para canalizar la energía acumulada. 🏃‍♀" << endl
                 << "4.- Conectar con un ser querido que te escuche y te ayude a ver la situación desde otra perspectiva. 🫂" << endl << endl;
    posibilidadesApoyoAgresion = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *agresión*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a gestionar la *agresión* cuando surja? 👣" << endl << endl
                 << "1.- Alejarte físicamente de la situación por unos minutos antes de responder. 🚶" << endl
                 << "2.- Realizar 5 respiraciones profundas y lentas para calmar tu cuerpo. 🌬" << endl
                 << "3.- Identificar la emoción real debajo de la agresión (ej. miedo, tristeza, frustración). 💡" << endl
                 << "4.- Escribir lo que sientes en un diario antes de hablar o reaccionar. 📝" << endl << endl;
    accionConcretaAgresion = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar la *agresión* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá comunicarme de forma más efectiva y constructiva. 🗣" << endl
                 << "2.- Mejorará mis relaciones al reducir conflictos y aumentar la confianza. 🤝" << endl
                 << "3.- Aumentará mi autoconocimiento y mi capacidad de regular mis emociones. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida con más paz y conexión. 🦋" << endl << endl;
    transformarAgresionProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *esperanza* te gustaría darte a ti mismo/a al iniciar este camino de transformación de la *agresión*? ✨" << endl << endl
                 << "1.- 'Está bien sentir ira, lo importante es cómo elijo responder a ella.' 🙏" << endl
                 << "2.- 'Soy capaz de aprender y desarrollar nuevas formas de expresar mis emociones.' 💪" << endl
                 << "3.- 'Merezco paz y relaciones saludables, y estoy trabajando para lograrlas.' 💖" << endl
                 << "4.- 'Cada momento es una nueva oportunidad para elegir la calma sobre la reacción.' 🔄" << endl << endl;
    mensajeFinalAgresion = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión de la *agresión*. Recuerda que mereces vivir una vida con más calma y respeto, empezando por ti mismo/a. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué *señal temprana* podrías aprender a identificar para darte cuenta de que la agresión está escalando, y así poder intervenir antes? 🤔" << endl << endl
                 << "1.- Una sensación de calor o presión en el pecho o la cabeza. 🌡" << endl
                 << "2.- Mi voz se eleva o mis palabras se vuelven más cortantes. 🗣" << endl
                 << "3.- Siento el impulso de interrumpir a los demás o de no escuchar. 👂" << endl
                 << "4.- Empiezo a culpar a otros por lo que siento o pienso. blaming_person" << endl << endl;
    senalTempranaAgresion = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar esas *señales tempranas* es clave para crear una \"ventana de oportunidad\" y elegir una respuesta diferente. La autoconciencia es tu mayor herramienta. 💡" << endl << endl;

    cout << "Cuando sientes el impulso de actuar agresivamente, ¿qué *pregunta consciente* podrías hacerte para redirigir tu energía de forma más productiva? 🧘" << endl << endl
                 << "1.- \"¿Qué necesidad real estoy tratando de satisfacer con esta agresión?\" ❓" << endl
                 << "2.- \"¿Qué resultado quiero realmente lograr en esta situación?\" ✅" << endl
                 << "3.- \"¿Hay otra forma, más constructiva, de comunicar lo que siento?\" 🗣" << endl
                 << "4.- \"¿Qué acción puedo tomar que me acerque a la calma en lugar de alejarme?\" 🏞" << endl << endl;
    preguntaConscienteAgresion = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Hacerte esas *preguntas conscientes* en el momento puede cambiar radicalmente tu respuesta. Estás eligiendo el autocontrol y la sabiduría sobre el impulso. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Agresión ---
    cout << endl << "--- Resumen de tu Terapia de Agresión ---" << endl;
    cout << "Causa de la agresión: " << causaAgresion << endl;
    cout << "Origen principal de la agresión: " << origenAgresionGeneral << endl;
    cout << "Impacto personal de la agresión: " << impactoPersonalAgresion << endl;
    cout << "Señales internas de la agresión: " << senalesInternasAgresion << endl;
    cout << "Recursos internos para transformar la agresión: " << recursosInternosAgresion << endl;
    cout << "Posibilidades de apoyo para gestionar la agresión: " << posibilidadesApoyoAgresion << endl;
    cout << "Acción concreta para gestionar la agresión: " << accionConcretaAgresion << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << transformarAgresionProceso << endl;
    cout << "Mensaje de auto-compasión o esperanza: " << mensajeFinalAgresion << endl;
    cout << "Señal temprana para intervenir en la agresión: " << senalTempranaAgresion << endl;
    cout << "Pregunta consciente para redirigir la energía: " << preguntaConscienteAgresion << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *agresión*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la calma y la auto-regulación. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaDominio()
{
    string causaDominio; // Variable renombrada
    int origenDominioGeneral, impactoPersonalDominio, senalesInternasDominio, recursosInternosDominio, posibilidadesApoyoDominio; // Variables renombradas
    int accionConcretaDominio, transformarDominioProceso, mensajeFinalDominio, reconocerNecesidadDominio, cambiarPatronDominio; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción del dominio negativo ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del *dominio negativo*. Esta es la sensación o el impulso de ejercer control excesivo o manipulador sobre otros, o de sentirte dominado/a de una manera perjudicial. Es un acto de valentía reconocer esta dinámica y abordarla. 🔗" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste o ejerciste un *dominio negativo*? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaDominio); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer el *dominio negativo* es el primer paso para entender qué lo provoca y cómo te afecta. Es una emoción compleja que impacta profundamente las relaciones. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu sentir o ejercer el *dominio negativo*? 🤔" << endl << endl;
    cout << "1.- El miedo a perder el control o a ser vulnerable. 😨" << endl
                 << "2.- La necesidad de sentirte seguro/a o de imponer tu voluntad. 👑" << endl
                 << "3.- Un patrón aprendido en relaciones pasadas o en tu entorno familiar. 🕰" << endl
                 << "4.- La percepción de que necesitas manipular para lograr tus objetivos. 🎭" << endl << endl;
    origenDominioGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen del *dominio negativo* nos da claridad sobre las raíces de esta dinámica. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción o patrón de *dominio negativo* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Mis relaciones se sienten tensas, desequilibradas o basadas en el miedo. 💔" << endl
                 << "2.- Siento agotamiento, culpa o una presión constante por mantener el control. 🤯" << endl
                 << "3.- Me cuesta construir confianza genuina o intimidad con otros. 🧊" << endl
                 << "4.- Impide que otros expresen su autonomía o su verdadera opinión cerca de mí. 🚫" << endl << endl;
    impactoPersonalDominio = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalDominio) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Las relaciones tensas son agotadoras. Reconocerlo es un gran paso hacia el cambio. 💔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. La necesidad de control puede generar mucha presión interna. Es importante aliviar esa carga. 🤯" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. La falta de confianza genuina es un muro. Explorar esto puede abrir nuevas posibilidades. 🧊" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Impedir la autonomía de otros es una señal clara de dominio negativo. Es hora de dar espacio. 🚫" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo el *dominio negativo* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes el impulso de ejercer un *dominio negativo*? 😟" << endl << endl;
    cout << "1.- Una sensación de tensión o rigidez en el cuerpo, como si te prepararas para un conflicto. 💪" << endl
                 << "2.- Un aumento de la frustración o la impaciencia si las cosas no salen como quieres. 😠" << endl
                 << "3.- Pensamientos de que 'solo yo sé cómo se deben hacer las cosas' o 'si no lo hago yo, saldrá mal'. 🧠" << endl
                 << "4.- El impulso de interrumpir, corregir o invalidar la opinión de otros. 🗣" << endl << endl;
    senalesInternasDominio = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar este **dominio negativo* en una interacción más equitativa y respetuosa? 🌟" << endl << endl
                 << "1.- Mi capacidad para la auto-reflexión y el deseo de crecer. 🧠" << endl
                 << "2.- Mi deseo de tener relaciones más sanas y auténticas. ✨" << endl
                 << "3.- Mi habilidad para escuchar activamente y validar a los demás. 👂" << endl
                 << "4.- Mi resiliencia para cambiar patrones de comportamiento arraigados. 💪" << endl << endl;
    recursosInternosDominio = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes la tendencia al *dominio negativo*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar el **dominio negativo*? 🤝" << endl << endl
                 << "1.- Buscar terapia o coaching para trabajar en patrones de control y comunicación. 🗣" << endl
                 << "2.- Practicar la empatía activa, intentando ver las situaciones desde la perspectiva de otros. 🧭" << endl
                 << "3.- Establecer límites saludables en tus relaciones, tanto para ti como para los demás. 🚫" << endl
                 << "4.- Rodearte de personas que te desafíen a crecer y a ser más colaborativo/a. 🫂" << endl << endl;
    posibilidadesApoyoDominio = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el *dominio negativo*. Es un paso hacia tu bienestar emocional y relacional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a cambiar el patrón de *dominio negativo*? 👣" << endl << endl
                 << "1.- Escuchar activamente a alguien sin interrumpir, incluso si no estás de acuerdo. 👂" << endl
                 << "2.- Delegar una tarea o responsabilidad, confiando en la capacidad de otro. ✅" << endl
                 << "3.- Preguntar la opinión de otra persona antes de dar la tuya o tomar una decisión. ❓" << endl
                 << "4.- Practicar soltar el control sobre una pequeña situación que te genere ansiedad. 🌬" << endl << endl;
    accionConcretaDominio = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar el *dominio negativo* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Mis relaciones serán más equilibradas, respetuosas y llenas de confianza. 🤝" << endl
                 << "2.- Sentiré más paz interior y menos necesidad de control constante. 🏞" << endl
                 << "3.- Aumentará mi capacidad de colaborar y de valorar las perspectivas de los demás. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida más auténtica y conectada. 🦋" << endl << endl;
    transformarDominioProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *crecimiento* te gustaría darte a ti mismo/a al iniciar este camino de transformación del *dominio negativo*? ✨" << endl << endl
                 << "1.- 'Estoy aprendiendo a confiar más en mí y en los demás.' 🙏" << endl
                 << "2.- 'Merezco relaciones basadas en el respeto mutuo, no en el control.' 💪" << endl
                 << "3.- 'Cada vez que elijo soltar el control, me abro a nuevas posibilidades.' 💖" << endl
                 << "4.- 'Mi valor no depende de mi capacidad para controlar a otros.' 🌟" << endl << endl;
    mensajeFinalDominio = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión del *dominio negativo*. Recuerda que mereces vivir una vida con más libertad y conexión genuina, empezando por ti mismo/a. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué *necesidad profunda no satisfecha* crees que podría estar impulsando el impulso de control o dominio? (Ej: necesidad de seguridad, validación, amor...) 🤔" << endl << endl
                 << "1.- Necesidad de sentir seguridad o certeza. 🛡" << endl
                 << "2.- Necesidad de ser reconocido/a o validado/a. 🏆" << endl
                 << "3.- Necesidad de evitar el dolor o la vulnerabilidad. 💔" << endl
                 << "4.- Necesidad de sentirte competente o capaz. ✅" << endl << endl;
    reconocerNecesidadDominio = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar esas *necesidades profundas* es clave, ya que a menudo el dominio es una estrategia (disfuncional) para satisfacerlas. Solo al reconocerlas, podemos buscar formas más saludables de nutrirlas. 💡" << endl << endl;

    cout << "Si pudieras visualizar una interacción ideal donde no hubiera *dominio negativo, ¿qué **cambio de comportamiento* específico te gustaría implementar en ti mismo/a la próxima vez? 🧘" << endl << endl
                 << "1.- Practicar la escucha activa y hacer preguntas abiertas. 👂" << endl
                 << "2.- Permitir que la otra persona tome una decisión o lleve la iniciativa. 🚀" << endl
                 << "3.- Expresar mi propia vulnerabilidad o una preocupación genuina. 💖" << endl
                 << "4.- Celebrar un logro o idea de otro sin añadir mi 'mejora'. ✨" << endl << endl;
    cambiarPatronDominio = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Visualizar y comprometerte con un *cambio de comportamiento* específico es un paso poderoso hacia relaciones más equitativas y satisfactorias. Cada pequeño paso construye una nueva forma de ser. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Dominio Negativo ---
    cout << endl << "--- Resumen de tu Terapia de Dominio Negativo ---" << endl;
    cout << "Causa del dominio negativo: " << causaDominio << endl;
    cout << "Origen principal del dominio negativo: " << origenDominioGeneral << endl;
    cout << "Impacto personal del dominio negativo: " << impactoPersonalDominio << endl;
    cout << "Señales internas del impulso de dominio negativo: " << senalesInternasDominio << endl;
    cout << "Recursos internos para transformar el dominio negativo: " << recursosInternosDominio << endl;
    cout << "Posibilidades de apoyo para gestionar el dominio negativo: " << posibilidadesApoyoDominio << endl;
    cout << "Acción concreta para cambiar el patrón de dominio negativo: " << accionConcretaDominio << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << transformarDominioProceso << endl;
    cout << "Mensaje de auto-compasión o crecimiento: " << mensajeFinalDominio << endl;
    cout << "Necesidad profunda que impulsa el control/dominio: " << reconocerNecesidadDominio << endl;
    cout << "Cambio de comportamiento específico en una interacción ideal: " << cambiarPatronDominio << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del *dominio negativo*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la colaboración, el respeto mutuo y la conexión genuina. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaFuria()
{
    string causaFuria; // Variable renombrada
    int origenFuriaGeneral, impactoPersonalFuria, senalesInternasFuria, recursosInternosFuria, posibilidadesApoyoFuria; // Variables renombradas
    int accionConcretaFuria, transformarFuriaProceso, mensajeFinalFuria, reconocerDetonanteFuria, canalizarFuriaMetodo; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la furia ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de la *furia*. Es una de las emociones más intensas y a menudo surge cuando percibimos una injusticia o una amenaza significativa. Es valiente de tu parte reconocerla y abordarla. 😡" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste *furia*? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaFuria); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la *furia* es el primer paso para entender qué la provoca y cómo te afecta. Es una emoción poderosa. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *furia*? 🤔" << endl << endl;
    cout << "1.- Sentir que he sido tratado/a injustamente o que se ha cometido una injusticia. ⚖" << endl
                 << "2.- La frustración extrema ante un obstáculo o algo que está fuera de mi control. 😠" << endl
                 << "3.- La percepción de una amenaza significativa a mi bienestar o el de mis seres queridos. 🛡" << endl
                 << "4.- La acumulación de estrés, irritación o frustración que finalmente desborda. 🤯" << endl << endl;
    origenFuriaGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *furia* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *furia* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me siento agotado/a después de un episodio de furia o con remordimiento. 😔" << endl
                 << "2.- Mis relaciones personales se han visto tensas o dañadas por mi expresión de furia. 💔" << endl
                 << "3.- Dificulta mi capacidad para pensar con claridad o tomar decisiones racionales. 🧠" << endl
                 << "4.- Genera una sensación de descontrol o de ser dominado/a por la emoción. 💥" << endl << endl;
    impactoPersonalFuria = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalFuria) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. El agotamiento y el remordimiento son cargas pesadas. Reconocerlo es crucial para el cambio. 😔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. El impacto en las relaciones puede ser doloroso. Es un área importante para sanar. 💔" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. La furia puede nublar el juicio. Aprender a gestionarla puede restaurar tu claridad. 🧠" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Esa sensación de descontrol puede ser muy frustrante. Estás dando un paso valiente al buscar el manejo. 💥" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo la *furia* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes que la *furia* está surgiendo? 😟" << endl << endl;
    cout << "1.- Tensión extrema en el cuerpo, mandíbula apretada, puños cerrados, músculos rígidos. 💪" << endl
                 << "2.- Aumento rápido del ritmo cardíaco, calor intenso, temblor o sudoración. 💨" << endl
                 << "3.- Pensamientos de venganza, deseos de gritar, golpear o destruir. 🤯" << endl
                 << "4.- Una sensación de explosión inminente o de que 'vas a estallar'. 🌋" << endl << endl;
    senalesInternasFuria = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar esta **furia* en una respuesta más adaptativa? 🌟" << endl << endl
                 << "1.- Mi capacidad para pausar y respirar antes de reaccionar. 🌬" << endl
                 << "2.- Mi deseo de encontrar soluciones pacíficas a los conflictos. ✨" << endl
                 << "3.- Mi habilidad para reflexionar sobre las consecuencias de mis acciones. 🧠" << endl
                 << "4.- Mi resiliencia para aprender de mis experiencias y crecer. 💪" << endl << endl;
    recursosInternosFuria = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *furia*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar la **furia*? 🤝" << endl << endl
                 << "1.- Buscar terapia especializada en manejo de la ira o gestión emocional. 🗣" << endl
                 << "2.- Aprender y practicar técnicas de relajación como la meditación o el mindfulness. 🧘" << endl
                 << "3.- Desarrollar habilidades de comunicación asertiva para expresar tus necesidades sin agresión. 📚" << endl
                 << "4.- Identificar y evitar detonantes conocidos o modificar tu entorno para reducirlos. 🚧" << endl << endl;
    posibilidadesApoyoFuria = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *furia*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a gestionar la *furia* cuando surja? 👣" << endl << endl
                 << "1.- Dar un paseo corto o realizar alguna actividad física intensa para liberar energía. 🏃‍♀" << endl
                 << "2.- Contar lentamente hasta 10 (o 20) antes de responder a una situación frustrante. ⏳" << endl
                 << "3.- Expresar tu frustración o enojo con palabras calmadas, enfocándote en tus sentimientos. 🗣" << endl
                 << "4.- Escribir una carta (que no enviarás) a la persona o situación que te provoca furia. 📝" << endl << endl;
    accionConcretaFuria = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar la *furia* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá experimentar más paz interior y menos reactividad. 🏞" << endl
                 << "2.- Mis relaciones serán más armoniosas y basadas en el respeto. 🤝" << endl
                 << "3.- Aumentará mi inteligencia emocional y mi capacidad de auto-regulación. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida con más calma y control. 🦋" << endl << endl;
    transformarFuriaProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *esperanza* te gustaría darte a ti mismo/a al iniciar este camino de transformación de la *furia*? ✨" << endl << endl
                 << "1.- 'Soy capaz de aprender a manejar esta emoción, un paso a la vez.' 🙏" << endl
                 << "2.- 'Merezco la calma y la paz en mi vida y en mis relaciones.' 💪" << endl
                 << "3.- 'Mi furia me señala algo que necesita atención, y lo abordaré con valentía.' 💖" << endl
                 << "4.- 'Cada vez que elijo la pausa, estoy construyendo una versión más tranquila de mí.' 🌟" << endl << endl;
    mensajeFinalFuria = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión de la *furia*. Recuerda que mereces vivir una vida con más calma y control sobre tus emociones. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué *detonante específico* o tipo de situación suele encender tu furia más rápidamente? Identificarlo puede ayudarte a anticipar. 🤔" << endl << endl
                 << "1.- Sentir que mis límites personales han sido invadidos o ignorados. ⛔" << endl
                 << "2.- Cuando las cosas no salen como esperaba o hay mucha incertidumbre. ❓" << endl
                 << "3.- Percibir hipocresía o injusticia por parte de otros. 🎭" << endl
                 << "4.- Estar bajo mucho estrés, cansancio o hambre. 🔋" << endl << endl;
    reconocerDetonanteFuria = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar tus *detonantes* específicos es clave para desarrollar estrategias preventivas y reactivas. La autoconciencia es tu mayor herramienta. 💡" << endl << endl;

    cout << "Cuando sientas que la furia está surgiendo, ¿qué *estrategia de canalización* saludable podrías aplicar para liberar esa energía sin dañar a otros o a ti mismo/a? 🧘" << endl << endl
                 << "1.- Hacer ejercicio vigoroso (correr, saltar, boxear en el aire). 🏃‍♀" << endl
                 << "2.- Gritar en una almohada o en un lugar donde no molestes a nadie. 📣" << endl
                 << "3.- Dibujar, pintar o escribir intensamente sobre lo que sientes. 🎨" << endl
                 << "4.- Practicar técnicas de relajación profunda como la tensión-distensión muscular progresiva. 💆" << endl << endl;
    canalizarFuriaMetodo = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Canalizar la *furia* de forma saludable es fundamental para tu bienestar. Estás eligiendo el autocontrol y la sabiduría sobre el impulso destructivo. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Furia ---
    cout << endl << "--- Resumen de tu Terapia de Furia ---" << endl;
    cout << "Causa de la furia: " << causaFuria << endl;
    cout << "Origen principal de la furia: " << origenFuriaGeneral << endl;
    cout << "Impacto personal de la furia: " << impactoPersonalFuria << endl;
    cout << "Señales internas de la furia: " << senalesInternasFuria << endl;
    cout << "Recursos internos para transformar la furia: " << recursosInternosFuria << endl;
    cout << "Posibilidades de apoyo para gestionar la furia: " << posibilidadesApoyoFuria << endl;
    cout << "Acción concreta para gestionar la furia: " << accionConcretaFuria << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << transformarFuriaProceso << endl;
    cout << "Mensaje de auto-compasión o esperanza: " << mensajeFinalFuria << endl;
    cout << "Detonante específico de la furia: " << reconocerDetonanteFuria << endl;
    cout << "Estrategia de canalización saludable de la furia: " << canalizarFuriaMetodo << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *furia*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la calma, la auto-regulación y la expresión constructiva de tus emociones. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaMolestia()
{
    string causaMolestia; // Variable renombrada
    int origenMolestiaGeneral, impactoPersonalMolestia, senalesInternasMolestia, recursosInternosMolestia, posibilidadesApoyoMolestia; // Variables renombradas
    int accionConcretaMolestia, transformarMolestiaProceso, mensajeFinalMolestia, reinterpretarMolestiaEstrategia, comunicacionMolestiaEstrategia; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la molestia ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de la *molestia*. Es esa sensación de irritación o descontento leve, a menudo provocada por pequeñas interrupciones o frustraciones cotidianas. Es valiente de tu parte reconocerla y abordarla. 😒" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste *molestia*? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaMolestia); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la *molestia* es el primer paso para entender qué la provoca y cómo te afecta. Es una emoción común. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *molestia*? 🤔" << endl << endl;
    cout << "1.- La percepción de una injusticia menor o algo que no es 'justo'. ⚖" << endl
                 << "2.- Una interrupción o un obstáculo en tus planes o rutina. 🚧" << endl
                 << "3.- Sentir que tus expectativas no fueron cumplidas por alguien o algo. 📉" << endl
                 << "4.- La acumulación de pequeñas irritaciones que se van sumando. 😠" << endl << endl;
    origenMolestiaGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *molestia* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *molestia* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me siento impaciente o de mal humor, lo que afecta mi día. 😔" << endl
                 << "2.- Mis interacciones con otros se vuelven más tensas o cortantes. 🗣" << endl
                 << "3.- Me cuesta concentrarme en otras cosas debido a la irritación. 🧠" << endl
                 << "4.- Siento una energía baja o me siento fácilmente frustrado/a. 🔋" << endl << endl;
    impactoPersonalMolestia = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalMolestia) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Ese mal humor puede colorear todo tu día. Reconocerlo es importante. 😔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. Las interacciones tensas pueden desgastar las relaciones. Es un área importante para trabajar. 🗣" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. La irritación puede ser una distracción. Aprender a gestionarla puede mejorar tu enfoque. 🧠" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Esa energía baja y frustración pueden ser agotadoras. Estás dando un paso valiente al buscar manejo. 🔋" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo la *molestia* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes que la *molestia* está surgiendo? 😟" << endl << endl;
    cout << "1.- Ceño fruncido, tensión ligera en la mandíbula o en los hombros. 💪" << endl
                 << "2.- Una sensación de calor o una ligera opresión en el pecho. ♨" << endl
                 << "3.- Un diálogo interno crítico o quejumbroso sobre la situación. 💬" << endl
                 << "4.- Impaciencia, ganas de que la situación termine rápido o de alejarte. ⏳" << endl << endl;
    senalesInternasMolestia = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar esta **molestia* en una respuesta más calmada o productiva? 🌟" << endl << endl
                 << "1.- Mi capacidad para respirar profundamente y calmarme. 🌬" << endl
                 << "2.- Mi deseo de encontrar soluciones en lugar de quedarme en la queja. ✨" << endl
                 << "3.- Mi habilidad para reír o encontrar el lado cómico de las situaciones. 😂" << endl
                 << "4.- Mi resiliencia para no dejar que las pequeñas cosas arruinen mi día. 💪" << endl << endl;
    recursosInternosMolestia = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *molestia*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar la **molestia*? 🤝" << endl << endl
                 << "1.- Practicar el mindfulness o la atención plena para observar la molestia sin apego. 🧘" << endl
                 << "2.- Hablar con un amigo o familiar de confianza para desahogarte de forma segura. 🗣" << endl
                 << "3.- Buscar formas de modificar o evitar las situaciones que te generan molestia recurrente. 🚧" << endl
                 << "4.- Leer o aprender sobre técnicas de manejo del estrés y la frustración. 📚" << endl << endl;
    posibilidadesApoyoMolestia = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *molestia*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a gestionar la *molestia* cuando surja? 👣" << endl << endl
                 << "1.- Dar un pequeño tiempo fuera de la situación (ej. ir por un vaso de agua). 🚶" << endl
                 << "2.- Identificar una cosa que sí esté bajo tu control en la situación. ✅" << endl
                 << "3.- Reírte de la situación o de tu reacción, si es posible. 😂" << endl
                 << "4.- Expresar tu molestia de forma asertiva pero calmada, si es apropiado. 🗣" << endl << endl;
    accionConcretaMolestia = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar la *molestia* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá experimentar más paciencia y menos irritabilidad. 🏞" << endl
                 << "2.- Mis relaciones serán más fluidas y menos propensas a pequeños conflictos. 🤝" << endl
                 << "3.- Aumentará mi capacidad para adaptarme a lo inesperado y soltar el control. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida con más ligereza y satisfacción. 🦋" << endl << endl;
    transformarMolestiaProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *aceptación* te gustaría darte a ti mismo/a al iniciar este camino de transformación de la *molestia*? ✨" << endl << endl
                 << "1.- 'Está bien sentir molestia, pero puedo elegir no aferrarme a ella.' 🙏" << endl
                 << "2.- 'Merezco un día tranquilo y estoy aprendiendo a crearlo para mí.' 💪" << endl
                 << "3.- 'Cada pequeña irritación es una oportunidad para practicar la calma.' 💖" << endl
                 << "4.- 'La vida tiene sus baches, y yo tengo las herramientas para superarlos.' 🌟" << endl << endl;
    mensajeFinalMolestia = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión de la *molestia*. Recuerda que mereces vivir una vida con más ligereza y menos irritación. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿cómo podrías *reinterpretar* la situación que te causó molestia para verla desde una perspectiva diferente, menos irritante? 🤔" << endl << endl
                 << "1.- Pensar en cómo esta situación podría ser una lección o un recordatorio importante. 💡" << endl
                 << "2.- Buscar el lado positivo o un beneficio inesperado de la interrupción. ✨" << endl
                 << "3.- Recordar que todos cometemos errores y que la imperfección es parte de la vida. 🫂" << endl
                 << "4.- Verla como una oportunidad para practicar tu paciencia o tu flexibilidad. 🧘" << endl << endl;
    reinterpretarMolestiaEstrategia = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. *Reinterpretar* las situaciones puede cambiar radicalmente cómo las experimentas, transformando la molestia en una oportunidad de crecimiento. 💡" << endl << endl;

    cout << "Si la molestia surge de una interacción con otra persona, ¿qué *tipo de comunicación* podrías intentar para abordar la situación de forma constructiva, en lugar de acumular la molestia? 🗣" << endl << endl
                 << "1.- Usar 'mensajes Yo' para expresar tus sentimientos sin culpar al otro (ej. 'Me siento molesto cuando...'). 📝" << endl
                 << "2.- Preguntar con curiosidad la perspectiva del otro antes de sacar conclusiones. ❓" << endl
                 << "3.- Proponer una solución o un compromiso, en lugar de solo expresar el problema. ✅" << endl
                 << "4.- Decidir dejar ir la situación si es algo pequeño y no vale la pena el conflicto. 🌬" << endl << endl;
    comunicacionMolestiaEstrategia = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Una *comunicación consciente* puede transformar una molestia en una oportunidad para fortalecer tus relaciones y resolver problemas. Estás eligiendo la conexión sobre la irritación. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Molestia ---
    cout << endl << "--- Resumen de tu Terapia de Molestia ---" << endl;
    cout << "Causa de la molestia: " << causaMolestia << endl;
    cout << "Origen principal de la molestia: " << origenMolestiaGeneral << endl;
    cout << "Impacto personal de la molestia: " << impactoPersonalMolestia << endl;
    cout << "Señales internas de la molestia: " << senalesInternasMolestia << endl;
    cout << "Recursos internos para transformar la molestia: " << recursosInternosMolestia << endl;
    cout << "Posibilidades de apoyo para gestionar la molestia: " << posibilidadesApoyoMolestia << endl;
    cout << "Acción concreta para gestionar la molestia: " << accionConcretaMolestia << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << transformarMolestiaProceso << endl;
    cout << "Mensaje de auto-compasión o aceptación: " << mensajeFinalMolestia << endl;
    cout << "Estrategia para reinterpretar la molestia: " << reinterpretarMolestiaEstrategia << endl;
    cout << "Tipo de comunicación para abordar la molestia: " << comunicacionMolestiaEstrategia << endl;
    cout << "---------------------------------------" << endl;

    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *molestia*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la calma, la paciencia y una mayor fluidez en tu día a día. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

//Asco
void terapiaRemordimiento()
{
    string causaRemordimiento; // Variable renombrada
    int origenRemordimientoAscoGeneral, impactoPersonalRemordimiento, senalesInternasRemordimiento, recursosInternosRemordimiento, posibilidadesApoyoRemordimiento; // Variables renombradas
    int accionConcretaRemordimiento, transformarRemordimientoProceso, mensajeFinalRemordimiento, reconocerAscoSubyacenteProfundo, perdonAccionConcreta; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción del remordimiento desde el asco ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del *remordimiento, especialmente cuando surge de una profunda sensación de **asco* (hacia una acción que hiciste, una decisión, o incluso hacia una parte de ti mismo/a). Es una emoción pesada, y es muy valiente de tu parte reconocerla y abordarla. 🤢" << endl
                 << "¿Podrías compartirme brevemente la situación o el sentimiento general que te ha llevado a sentir *remordimiento, y cómo crees que se conecta con una sensación de **asco*? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaRemordimiento); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la conexión entre el *remordimiento* y el *asco* es un paso profundo. Es una emoción válida y a menudo un llamado a la sanación y al crecimiento. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *remordimiento* que se siente ligado al *asco*? 🤔" << endl << endl;
    cout << "1.- Haber actuado de una manera que va en contra de tus valores o principios más profundos. ⚖" << endl
                 << "2.- Haber causado daño o dolor a otra persona de forma directa o indirecta. 😔" << endl
                 << "3.- Sentir que te decepcionaste a ti mismo/a o no estuviste a la altura de tus propias expectativas. 📉" << endl
                 << "4.- Haber tomado una decisión que ahora percibes como 'sucia' o 'degradante'. 🤢" << endl << endl;
    origenRemordimientoAscoGeneral = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *remordimiento* y su conexión con el *asco* nos da claridad sobre la raíz de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y avanzar. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* este *remordimiento* y la sensación de *asco* en tu vida diaria y tus emociones? 😥" << endl << endl;
    cout << "1.- Me cuesta perdonarme a mí mismo/a, me siento constantemente juzgado/a. 😔" << endl
                 << "2.- Tengo problemas para dormir, me siento inquieto/a o revivo la situación. 😴" << endl
                 << "3.- Me siento alejado/a o aislado/a de otros, por vergüenza o culpa. 🧊" << endl
                 << "4.- Afecta mi autoestima y mi sentido de valía personal. 📉" << endl << endl;
    impactoPersonalRemordimiento = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalRemordimiento) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. La dificultad para perdonarte puede ser una carga inmensa. Es importante comenzar ese proceso. 🙏" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. El remordimiento a menudo roba la paz del sueño. Buscar la resolución puede ayudarte a descansar. 😴" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. El aislamiento por vergüenza solo profundiza el dolor. Es importante buscar conexión segura. 🫂" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Cuando la autoestima se ve afectada, todo se siente más difícil. Tu valía no se define por un error. 💖" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo el *remordimiento* y el *asco* se manifiestan en tu cuerpo y mente es vital. Escuchar estas señales te ayudará a actuar cuando más lo necesitas y a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes este *remordimiento* mezclado con *asco*? 😟" << endl << endl;
    cout << "1.- Una sensación de náusea o repulsión física en el estómago o garganta. 🤢" << endl
                 << "2.- Sentimientos de suciedad, impureza o desvalorización personal. 🗑" << endl
                 << "3.- Pensamientos repetitivos sobre la situación o la acción, rumiación mental. 🧠" << endl
                 << "4.- Evitación de ciertas personas, lugares o recuerdos relacionados con la situación. 🚶" << endl << endl;
    senalesInternasRemordimiento = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeñas que parezcan, crees que aún posees para empezar a procesar este **remordimiento* y la sensación de *asco*? 🌟" << endl << endl
                 << "1.- Mi capacidad de auto-observación y de buscar la verdad sobre lo ocurrido. 🧠" << endl
                 << "2.- Mi deseo de enmendar lo que se pueda o de aprender de mis errores. 💡" << endl
                 << "3.- Mi habilidad para buscar ayuda o apoyo cuando me siento abrumado/a. 🫂" << endl
                 << "4.- Mi resiliencia, porque sé que he superado momentos difíciles antes. 💪" << endl << endl;
    recursosInternosRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando te sientes abrumado/a por el *remordimiento* y el *asco*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes recursos valiosos dentro de ti. ✨" << endl
                 << "Recuerda que no estás solo/a en esto. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para sanar el **remordimiento* y el *asco*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental para procesar la culpa y la vergüenza. 🗣" << endl
                 << "2.- Buscar el perdón, si es posible y seguro, de la persona a la que pudiste haber dañado. 🕊" << endl
                 << "3.- Realizar acciones concretas para reparar el daño o contribuir positivamente. ✅" << endl
                 << "4.- Conectar con grupos de apoyo o personas que hayan transitado emociones similares. 🫂" << endl << endl;
    posibilidadesApoyoRemordimiento = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el *remordimiento* y el *asco*. Es un paso hacia la sanación. ✨" << endl << endl;

    cout << "¿Qué *pequeño gesto de autocuidado* o *acción* puedes comprometerte a hacer hoy mismo o en las próximas 24 horas para aliviar un poco esta sensación de *remordimiento* y *asco*? 👣" << endl << endl
                 << "1.- Realizar una limpieza física o un acto simbólico de 'purificación' (ej. una ducha consciente, limpiar tu espacio). 💧" << endl
                 << "2.- Escribir en un papel todo lo que sientes, incluso el asco, y luego romperlo o quemarlo simbólicamente. 📝🔥" << endl
                 << "3.- Darte un momento de auto-compasión, reconociendo tu humanidad y la posibilidad de error. 🙏" << endl
                 << "4.- Recordarte una cualidad positiva tuya que no esté relacionada con la situación que te causa remordimiento. 🌟" << endl << endl;
    accionConcretaRemordimiento = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños actos de autocuidado y simbolismo son poderosos anclajes. Comprométete con esa acción y date crédito por cuidarte en este momento. 💪" << endl << endl;

    system("pause");
    system("cls");

    // --- Reflexión final y camino a seguir ---

    cout << endl << "¿De qué manera crees que el *remordimiento, aunque incómodo y ligado al asco, puede ser un **mensaje* o una *oportunidad* para tu crecimiento personal y cambio? 🌱" << endl << endl
                 << "1.- Me indica la necesidad de alinear mis acciones con mis valores más profundos. 💡" << endl
                 << "2.- Me impulsa a buscar el perdón (propio o ajeno) y la reparación del daño. 🕊" << endl
                 << "3.- Me ayuda a desarrollar una mayor auto-compasión y aceptación de mi imperfección. 💖" << endl
                 << "4.- Me conecta con mi deseo de ser una mejor persona y aprender de mis errores. 🚀" << endl << endl;
    transformarRemordimientoProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el mensaje del *remordimiento* y el *asco* es un paso significativo. Tu capacidad para transformar la incomodidad en aprendizaje y acción es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-perdón* o *aceptación radical* te gustaría darte a ti mismo/a en este momento de *remordimiento* y *asco*? ✨" << endl << endl
                 << "1.- 'Soy humano/a, cometo errores, y estoy aprendiendo a crecer de ellos.' 🙏" << endl
                 << "2.- 'Merezco la paz y la liberación de esta carga, y estoy en el camino para lograrlo.' 🏞" << endl
                 << "3.- 'Mi pasado no define mi futuro; puedo elegir ser diferente a partir de hoy.' 💖" << endl
                 << "4.- 'Me acepto con todas mis imperfecciones, y estoy trabajando en mi evolución.' 🌟" << endl << endl;
    mensajeFinalRemordimiento = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en medio del *remordimiento* y el *asco*. Recuerda que mereces sentirte en paz y que tienes la capacidad de transitar y gestionar esta emoción hacia el auto-perdón y la sanación. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué *parte de la situación o de tu acción* es la que te genera mayor *asco* subyacente al remordimiento? Identificarlo puede ayudarte a enfocar la sanación. 🔍" << endl << endl
                 << "1.- La forma en que te sentiste al actuar, la sensación interna de repulsión. 🤢" << endl
                 << "2.- Las consecuencias concretas de tu acción, el daño causado a otros o a ti mismo/a. 💔" << endl
                 << "3.- La idea de que esa acción es parte de tu personalidad o que revela algo 'feo' de ti. 🎭" << endl
                 << "4.- El contraste entre quien crees que deberías ser y quien fuiste en ese momento. 💡" << endl << endl;
    reconocerAscoSubyacenteProfundo = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Reconocer la *raíz del asco* es fundamental para poder limpiar esa herida y avanzar hacia el auto-perdón y la aceptación. 💡" << endl << endl;

    cout << "¿Qué *acción concreta de auto-perdón o reparación* podrías considerar para empezar a aliviar el peso del remordimiento y el asco, incluso si es un acto simbólico? 🕊" << endl << endl
                 << "1.- Escribir una carta de auto-perdón a ti mismo/a, reconociendo tu humanidad y tus esfuerzos. 📝" << endl
                 << "2.- Realizar un acto de bondad desinteresado hacia alguien, para equilibrar la balanza. 🤝" << endl
                 << "3.- Comprometerte con un cambio de comportamiento específico para no repetir esa acción. ✅" << endl
                 << "4.- Pasar tiempo en la naturaleza o en un espacio que te haga sentir 'limpio/a' y en paz. 🌳" << endl << endl;
    perdonAccionConcreta = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Comprometerte con una *acción de auto-perdón o reparación* es un paso poderoso hacia la liberación. Estás eligiendo la sanación y el crecimiento sobre la inmovilización. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Remordimiento (desde el Asco) ---
    cout << endl << "--- Resumen de tu Terapia de Remordimiento ---" << endl;
    cout << "Causa del remordimiento (y conexión con el asco): " << causaRemordimiento << endl;
    cout << "Origen principal del remordimiento ligado al asco: " << origenRemordimientoAscoGeneral << endl;
    cout << "Impacto personal del remordimiento y asco: " << impactoPersonalRemordimiento << endl;
    cout << "Señales internas del remordimiento mezclado con asco: " << senalesInternasRemordimiento << endl;
    cout << "Recursos internos para procesar el remordimiento/asco: " << recursosInternosRemordimiento << endl;
    cout << "Posibilidades de apoyo para sanar el remordimiento/asco: " << posibilidadesApoyoRemordimiento << endl;
    cout << "Pequeño gesto de autocuidado/acción para aliviar: " << accionConcretaRemordimiento << endl;
    cout << "Cómo el remordimiento puede ser un mensaje/oportunidad de crecimiento: " << transformarRemordimientoProceso << endl;
    cout << "Mensaje de auto-perdón o aceptación radical: " << mensajeFinalRemordimiento << endl;
    cout << "Parte de la situación que genera mayor asco subyacente: " << reconocerAscoSubyacenteProfundo << endl;
    cout << "Acción concreta de auto-perdón o reparación: " << perdonAccionConcreta << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del *remordimiento* y su conexión con el *asco*." << endl
                 << "😄 Recuerda que reconocer y procesar estas emociones es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia el auto-perdón, la sanación y una mayor paz interior. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaAscoDesprecio()
{
    string causaDesprecio; // Variable renombrada
    int origenDesprecioRaiz, impactoPersonalDesprecio, senalesInternasDesprecio, recursosInternosDesprecio, posibilidadesApoyoDesprecio; // Variables renombradas
    int accionConcretaDesprecio, transformarDesprecioProceso, mensajeFinalDesprecio, creenciaSubyacenteDesprecio, accionNoReaccionDesprecio; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción del desprecio ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del *desprecio*. A menudo es una emoción compleja, una mezcla de ira y disgusto, que nos distancia de los demás. Es un acto de valentía reconocerla y abordarla. 😠" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste *desprecio* hacia alguien o algo? No necesitas entrar en detalles, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaDesprecio); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer el *desprecio* es el primer paso para entender qué lo provoca y cómo te afecta. Es una emoción intensa que puede tener un gran impacto. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *desprecio*? 🤔" << endl << endl;
    cout << "1.- Sentir que la otra persona o situación carece de valor o merece mi condena. 👎" << endl
                 << "2.- Percibir una violación de mis valores fundamentales o de lo que considero correcto. ⚖" << endl
                 << "3.- Una sensación de superioridad o de que soy 'mejor' que la otra persona/situación. 👑" << endl
                 << "4.- Una experiencia pasada dolorosa o un patrón repetitivo de decepción con esa persona/situación. 🕰" << endl << endl;
    origenDesprecioRaiz = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *desprecio* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *desprecio* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me siento distante o desconectado/a de esa persona o de mi entorno. 🧊" << endl
                 << "2.- Tengo pensamientos negativos recurrentes o juicios constantes. 🧠" << endl
                 << "3.- Afecta mi capacidad de empatía o de ver la perspectiva de los demás. 🚧" << endl
                 << "4.- Me genera una sensación de amargura o de estar siempre 'a la defensiva'. 😠" << endl << endl;
    impactoPersonalDesprecio = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalDesprecio) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Esa distancia emocional puede ser agotadora y aislante. Es válido sentirlo. 😔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. Esos pensamientos negativos pueden ser muy invasivos. Reconocerlos es el primer paso. 🧠" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. Cuando la empatía se ve afectada, puede impactar profundamente tus conexiones. Es un área importante a explorar. 🚧" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Esa sensación de amargura o estar a la defensiva consume mucha energía. Es importante liberar esa carga. 😠" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo el *desprecio* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes que el *desprecio* está surgiendo? 😟" << endl << endl;
    cout << "1.- Una sensación de contracción o endurecimiento en el pecho o el estómago. 💥" << endl
                 << "2.- Una sonrisa sardónica, levantar el labio o un gesto facial de disgusto. 😒" << endl
                 << "3.- Una voz interna crítica o juiciosa hacia la persona/situación. 💬" << endl
                 << "4.- Sentir una distancia emocional o una frialdad hacia el otro. 🥶" << endl << endl;
    senalesInternasDesprecio = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar este **desprecio*? 🌟" << endl << endl
                 << "1.- Mi capacidad para reflexionar y cuestionar mis propios juicios. 🧠" << endl
                 << "2.- Mi deseo de encontrar paz y liberarme de emociones negativas. ✨" << endl
                 << "3.- Mi habilidad para recordar la humanidad compartida, incluso en la diferencia. 🤝" << endl
                 << "4.- Mi resiliencia para cambiar patrones emocionales, incluso si es difícil. 💪" << endl << endl;
    recursosInternosDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *desprecio*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar el **desprecio*? 🤝" << endl << endl
                 << "1.- Hablar con un profesional de la salud mental para explorar las raíces y estrategias de manejo. 🗣" << endl
                 << "2.- Conectar con un ser querido que te ofrezca una perspectiva diferente o una escucha sin juicio. 🫂" << endl
                 << "3.- Practicar ejercicios de empatía o toma de perspectiva (ej. intentar ver la situación desde el otro lado). 🧭" << endl
                 << "4.- Trabajar en perdonar o dejar ir, si es aplicable a la situación. 🕊" << endl << endl;
    posibilidadesApoyoDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el *desprecio*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a gestionar el *desprecio* cuando surja? 👣" << endl << endl
                 << "1.- Tomar 3 respiraciones profundas cuando notes la emoción de desprecio, para crear una pausa. 🌬" << endl
                 << "2.- Escribir en un diario sobre los pensamientos y sentimientos que surgen cuando sientes desprecio, sin juzgarte. 📝" << endl
                 << "3.- Identificar un rasgo positivo, por pequeño que sea, en la persona o situación hacia la que sientes desprecio. ➕" << endl
                 << "4.- Intentar posponer el juicio y simplemente observar la situación sin reaccionar inmediatamente. 🧘" << endl << endl;
    accionConcretaDesprecio = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar el *desprecio* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá vivir con más paz interior y menos carga emocional. 🏞" << endl
                 << "2.- Mejorará la calidad de mis relaciones, haciéndolas más auténticas y compasivas. 🤝" << endl
                 << "3.- Aumentará mi autoconocimiento y mi capacidad de empatía. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida más plena y conectada. 🦋" << endl << endl;
    transformarDesprecioProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *aceptación* te gustaría darte a ti mismo/a al iniciar este camino de transformación del *desprecio*? ✨" << endl << endl
                 << "1.- 'Está bien sentir esta emoción, pero puedo elegir cómo respondo a ella.' 🙏" << endl
                 << "2.- 'Soy capaz de crecer y de transformar mis emociones más difíciles.' 💪" << endl
                 << "3.- 'Mi paz interior es una prioridad, y merezco liberarme de lo que me pesa.' 💖" << endl
                 << "4.- 'Cada paso hacia la comprensión y la compasión es un regalo para mí mismo/a.' 🎁" << endl << endl;
    mensajeFinalDesprecio = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la liberación del *desprecio*. Recuerda que mereces vivir una vida con más compasión, empezando por ti mismo/a. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿hay alguna *creencia subyacente* que tengas sobre ti mismo/a o sobre los demás que pueda estar alimentando este sentimiento de *desprecio*? (Ej: 'Siempre tengo que tener la razón', 'La gente no cambia', 'Soy superior a...') 🤔" << endl << endl
                 << "1.- 'Siento que mis estándares son muy altos y los demás no los cumplen.' 📈" << endl
                 << "2.- 'Creo que debo protegerme de ser herido/a o decepcionado/a.' 🛡" << endl
                 << "3.- 'Hay una parte de mí que siente frustración por no poder cambiar a los demás.' 🤯" << endl
                 << "4.- 'Siento que mi valía depende de cuán 'correctas' sean mis opiniones.' 👑" << endl << endl;
    creenciaSubyacenteDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar esas *creencias subyacentes* es clave, ya que a menudo son los cimientos de nuestras emociones más complejas. Solo al reconocerlas, podemos empezar a cuestionarlas y, si es necesario, cambiarlas. 💡" << endl << endl;

    cout << "¿Qué *pequeña acción consciente* puedes tomar hoy para practicar la *no-reacción* o la *observación* desapegada la próxima vez que surja el desprecio? 🧘" << endl << endl
                 << "1.- Respirar profundamente 3 veces y nombrar la emoción: 'Estoy sintiendo desprecio.' 🌬" << endl
                 << "2.- Cambiar el foco de mi atención a algo neutral o positivo en mi entorno. 🌳" << endl
                 << "3.- Recordarme que la emoción es mía y no define la valía del otro. ✨" << endl
                 << "4.- Elegir conscientemente una respuesta diferente a la que normalmente tendría. 🔄" << endl << endl;
    accionNoReaccionDesprecio = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Practicar la *no-reacción* y la *observación desapegada* son herramientas poderosas para ganar control sobre tus respuestas emocionales. Cada vez que lo intentes, estás fortaleciendo tu capacidad de elegir la paz. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Desprecio ---
    cout << endl << "--- Resumen de tu Terapia de Desprecio ---" << endl;
    cout << "Causa del desprecio: " << causaDesprecio << endl;
    cout << "Origen principal del desprecio: " << origenDesprecioRaiz << endl;
    cout << "Impacto personal del desprecio: " << impactoPersonalDesprecio << endl;
    cout << "Señales internas del desprecio: " << senalesInternasDesprecio << endl;
    cout << "Recursos internos para transformar el desprecio: " << recursosInternosDesprecio << endl;
    cout << "Posibilidades de apoyo para gestionar el desprecio: " << posibilidadesApoyoDesprecio << endl;
    cout << "Acción concreta para gestionar el desprecio: " << accionConcretaDesprecio << endl;
    cout << "Cómo el proceso de transformación enriquece tu vida: " << transformarDesprecioProceso << endl;
    cout << "Mensaje de auto-compasión o aceptación: " << mensajeFinalDesprecio << endl;
    cout << "Creencia subyacente que alimenta el desprecio: " << creenciaSubyacenteDesprecio << endl;
    cout << "Pequeña acción consciente para practicar la no-reacción/observación: " << accionNoReaccionDesprecio << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del *desprecio*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la compasión y la conexión. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaVerguenza()
{
    string causaVerguenza; // Variable renombrada
    int origenVerguenzaRaiz, impactoPersonalVerguenza, senalesInternasVerguenza, recursosInternosVerguenza, posibilidadesApoyoVerguenza; // Variables renombradas
    int accionConcretaVerguenza, transformarVerguenzaProceso, mensajeFinalVerguenza, reconocerVulnerabilidadProfunda, comunicarVerguenzaAbiertamente; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de la vergüenza ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción de la *vergüenza*. Esta es una emoción profunda y a menudo dolorosa, que surge de la percepción de un defecto personal o de haber hecho algo 'malo'. Es un acto de valentía reconocerla y abordarla. 😔" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste *vergüenza*? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaVerguenza); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer la *vergüenza* es el primer paso para entender qué la provoca y cómo te afecta. Es una emoción compleja y a menudo silenciada. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *vergüenza*? 🤔" << endl << endl;
    cout << "1.- Sentir que hiciste algo moralmente 'incorrecto' o que dañaste a alguien. 💔" << endl
                 << "2.- La percepción de ser defectuoso/a o inadecuado/a como persona. 📉" << endl
                 << "3.- Creer que no cumples con las expectativas de otros o de la sociedad. 🎭" << endl
                 << "4.- La exposición de una parte de ti que querías mantener oculta. 🙈" << endl << endl;
    origenVerguenzaRaiz = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *vergüenza* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y encontrar la auto-compasión. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *vergüenza* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me siento indigno/a o inmerecedor/a de amor y conexión. 😔" << endl
                 << "2.- Tiendo a aislarme o a evitar situaciones sociales para no ser 'descubierto/a'. 🧊" << endl
                 << "3.- Me cuesta mostrar mi verdadero yo o ser vulnerable con otros. 🛡" << endl
                 << "4.- Afecta mi autoestima y mi capacidad para tomar riesgos o intentar cosas nuevas. 📉" << endl << endl;
    impactoPersonalVerguenza = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalVerguenza) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Esos sentimientos de indignidad son muy dolorosos. Es importante recordar tu valor inherente. 🙏" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. El aislamiento es una respuesta común a la vergüenza, pero puede perpetuarla. Buscar conexión segura es clave. 🫂" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. La dificultad para ser vulnerable puede crear barreras en tus relaciones. Es un área importante para sanar. 🛡" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Cuando la vergüenza afecta la autoestima, puede limitar tu crecimiento. Tu valía no se define por un momento o un defecto percibido. 💖" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo la *vergüenza* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes que la *vergüenza* está surgiendo? 😟" << endl << endl;
    cout << "1.- Sonrojarse, bajar la mirada, o querer desaparecer físicamente. 🙈" << endl
                 << "2.- Una sensación de hundimiento en el estómago o el pecho, opresión. ⬇" << endl
                 << "3.- Pensamientos de auto-crítica intensa o de que soy un fracaso. 💬" << endl
                 << "4.- El impulso de esconderte, de no hablar o de desviar la atención. 🤐" << endl << endl;
    senalesInternasVerguenza = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar esta **vergüenza* en auto-compasión? 🌟" << endl << endl
                 << "1.- Mi capacidad para reconocer mis errores y desear aprender de ellos. 💡" << endl
                 << "2.- Mi deseo de sentirme más libre y conectado/a con otros. ✨" << endl
                 << "3.- Mi habilidad para la empatía, que puedo extender hacia mí mismo/a. 🫂" << endl
                 << "4.- Mi resiliencia para enfrentar emociones difíciles y buscar la sanación. 💪" << endl << endl;
    recursosInternosVerguenza = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *vergüenza*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes y cómo te tratas a ti mismo/a. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar la **vergüenza*? 🤝" << endl << endl
                 << "1.- Hablar con un terapeuta que te ofrezca un espacio seguro para explorar la vergüenza sin juicio. 🗣" << endl
                 << "2.- Compartir tu experiencia con alguien de mucha confianza que te ofrezca validación y apoyo. 🫂" << endl
                 << "3.- Practicar ejercicios de auto-compasión, como la escritura o la meditación guiada. 🧘" << endl
                 << "4.- Leer sobre la vergüenza y entender que es una experiencia humana común. 📚" << endl << endl;
    posibilidadesApoyoVerguenza = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar la *vergüenza*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a abordar la *vergüenza*? 👣" << endl << endl
                 << "1.- Escribir una carta a tu 'yo avergonzado/a' con palabras de consuelo y aceptación. 📝" << endl
                 << "2.- Identificar una parte de ti que te haga sentir orgullo y enfocarte en ella por unos minutos. 🌟" << endl
                 << "3.- Permitirte ser imperfecto/a en una situación pequeña y observar qué sucede. 🌈" << endl
                 << "4.- Compartir una pequeña vulnerabilidad con alguien de confianza para practicar la conexión. 🗣" << endl << endl;
    accionConcretaVerguenza = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar la *vergüenza* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá experimentar mayor auto-aceptación y amor propio. 💖" << endl
                 << "2.- Mis relaciones serán más auténticas y profundas, basadas en la vulnerabilidad. 🤝" << endl
                 << "3.- Aumentará mi resiliencia y mi capacidad para manejar la imperfección. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida con más libertad y plenitud. 🦋" << endl << endl;
    transformarVerguenzaProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *aceptación radical* te gustaría darte a ti mismo/a al iniciar este camino de transformación de la *vergüenza*? ✨" << endl << endl
                 << "1.- 'Soy suficiente tal como soy, incluso con mis imperfecciones.' 🙏" << endl
                 << "2.- 'Merezco amor y conexión, y estoy aprendiendo a dármelos a mí mismo/a.' 💪" << endl
                 << "3.- 'La vergüenza es solo una emoción, no define quién soy.' 💖" << endl
                 << "4.- 'Estoy en un camino de crecimiento, y cada paso es válido.' 🌟" << endl << endl;
    mensajeFinalVerguenza = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión de la *vergüenza*. Recuerda que mereces vivir una vida con más auto-compasión y aceptación. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué *narrativa o creencia específica* sobre ti mismo/a (ej. 'soy un fraude', 'no soy bueno/a suficiente') sientes que la *vergüenza* está reforzando? 🤔" << endl << endl
                 << "1.- La creencia de que necesitas ser perfecto/a para ser amado/a. 👑" << endl
                 << "2.- La idea de que tus errores te hacen fundamentalmente defectuoso/a. 💔" << endl
                 << "3.- La presión de las expectativas externas o de cómo deberías ser. 🎭" << endl
                 << "4.- La noción de que no mereces ser feliz o tener éxito. 😔" << endl << endl;
    reconocerVulnerabilidadProfunda = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar esas *narrativas subyacentes* es clave para desmantelar el poder de la vergüenza. A menudo, la vergüenza se aferra a historias que nos contamos sobre nosotros mismos. 💡" << endl << endl;

    cout << "Si pudieras *comunicar* una parte de tu experiencia de *vergüenza* a alguien en quien confías plenamente, ¿qué *verdadero sentimiento o miedo* expresarías para disolver su poder? 🗣" << endl << endl
                 << "1.- 'Tengo miedo de que si me conoces de verdad, no me aceptarías.' 😨" << endl
                 << "2.- 'Me siento solo/a con este secreto o esta parte de mí.' 🧊" << endl
                 << "3.- 'Deseo ser perdonado/a (por mí mismo/a o por otros) por lo que hice/soy.' 🙏" << endl
                 << "4.- 'Me siento profundamente avergonzado/a y no sé cómo salir de esto.' 😔" << endl << endl;
    comunicarVerguenzaAbiertamente = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! La *comunicación abierta* de la vergüenza con una persona de confianza es una de las herramientas más poderosas para disolver su poder y encontrar la conexión. Estás eligiendo la vulnerabilidad valiente sobre el aislamiento. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Vergüenza ---
    cout << endl << "--- Resumen de tu Terapia de Vergüenza ---" << endl;
    cout << "Causa de la vergüenza: " << causaVerguenza << endl;
    cout << "Origen principal de la vergüenza: " << origenVerguenzaRaiz << endl;
    cout << "Impacto personal de la vergüenza: " << impactoPersonalVerguenza << endl;
    cout << "Señales internas de la vergüenza: " << senalesInternasVerguenza << endl;
    cout << "Recursos internos para transformar la vergüenza: " << recursosInternosVerguenza << endl;
    cout << "Posibilidades de apoyo para gestionar la vergüenza: " << posibilidadesApoyoVerguenza << endl;
    cout << "Pequeño paso concreto para abordar la vergüenza: " << accionConcretaVerguenza << endl;
    cout << "Cómo el proceso de transformar la vergüenza enriquece tu vida: " << transformarVerguenzaProceso << endl;
    cout << "Mensaje de auto-compasión o aceptación radical: " << mensajeFinalVerguenza << endl;
    cout << "Narrativa o creencia específica que la vergüenza refuerza: " << reconocerVulnerabilidadProfunda << endl;
    cout << "Verdadero sentimiento o miedo a comunicar para disolver la vergüenza: " << comunicarVerguenzaAbiertamente << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración de la *vergüenza*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la auto-aceptación, la compasión y relaciones más auténticas. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaAsco()
{
    string causaAsco; // Variable renombrada
    int origenAscoRaiz, impactoPersonalAsco, senalesInternasAsco, recursosInternosAsco, posibilidadesApoyoAsco; // Variables renombradas
    int accionConcretaAsco, transformarAscoProceso, mensajeFinalAsco, mensajeInternoAscoProfundo, respuestaSaludableAsco; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción de Asco/Repugnancia ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del asco/repugnancia. Es una emoción poderosa que nos indica rechazo hacia algo que percibimos como sucio, dañino, o moralmente inaceptable. Es valiente de tu parte reconocerla y abordarla. 🤢" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste asco o repugnancia? No necesitas entrar en detalles si no lo deseas, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaAsco); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer el asco/repugnancia es el primer paso para entender qué lo provoca y cómo te afecta. Es una emoción con una función. Recuerda que en este espacio estás libre de expresarte sin ningún prejuicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el origen principal de tu asco/repugnancia? 🤔" << endl << endl;
    cout << "1.- Algo físico que percibes como sucio, contaminado o en descomposición. 🦠" << endl
                 << "2.- Una acción o comportamiento de otra persona que consideras moralmente inaceptable o cruel. 💔" << endl
                 << "3.- Una situación que te hace sentir invadido/a o que viola tus límites personales. 🚫" << endl
                 << "4.- Un pensamiento o una acción propia que te genera auto-repulsión. 😔" << endl << endl;
    origenAscoRaiz = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu asco/repugnancia nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a gestionarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha impactado esta emoción de asco/repugnancia en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me genera una sensación de náusea o malestar físico. 🤢" << endl
                 << "2.- Tiendo a evitar ciertas situaciones, personas o temas para no volver a sentirlo. 🚶" << endl
                 << "3.- Me siento juzgado/a con una actitud negativa hacia otros o hacia mí mismo/a. 👎" << endl
                 << "4.- Afecta mi apetito, mi sueño o mi energía general. 😴" << endl << endl;
    impactoPersonalAsco = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalAsco) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Ese malestar físico es una señal clara de la intensidad del asco. Reconocerlo y saber su significado es importante. 🤢" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. La evitación es una estrategia común, pero puede limitar tu vida. Es importante encontrar formas de manejarlo. 🚶" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. Una actitud juzgadora puede afectar tus relaciones. Explorar esto puede abrir nuevas perspectivas. 👎" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Cuando el asco afecta tu bienestar básico, es una señal de que necesita atención. Estás dando un paso valiente al abordarlo. 😴" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo el asco/repugnancia se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué señales internas notas en tu cuerpo o mente cuando sientes que el asco/repugnancia está surgiendo? 😟" << endl << endl;
    cout << "1.- Náuseas, contracción en el estómago, o el impulso de alejarte físicamente. 🤢" << endl
                 << "2.- Una expresión facial de disgusto, como arrugar la nariz o fruncir el ceño. 😒" << endl
                 << "3.- Pensamientos de desaprobación intensa, crítica o rechazo hacia lo que lo provoca. 💬" << endl
                 << "4.- La sensación de que algo es 'corrupto' o 'inaceptable'. 🤮" << endl << endl;
    senalesInternasAsco = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué recurso interno o fortaleza personal, por pequeña que parezca, crees que aún posees para empezar a transformar este **asco/repugnancia en una respuesta más equilibrada? 🌟" << endl << endl
                 << "1.- Mi capacidad para la observación y el análisis de la situación. 🧠" << endl
                 << "2.- Mi deseo de comprender la situación o el comportamiento, incluso si es difícil. 💡" << endl
                 << "3.- Mi habilidad para establecer límites saludables cuando algo me resulta inaceptable. 🚫" << endl
                 << "4.- Mi resiliencia para no dejar que las emociones fuertes me dominen. 💪" << endl << endl;
    recursosInternosAsco = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes asco/repugnancia, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar el **asco/repugnancia? 🤝" << endl << endl
                 << "1.- Hablar con un profesional para procesar las causas profundas del asco (ej. trauma, experiencias pasadas). 🗣" << endl
                 << "2.- Practicar la exposición gradual y controlada si el asco es desproporcionado (con guía profesional). 📈" << endl
                 << "3.- Fortalecer tus propios valores y límites, para sentirte más seguro/a en tus reacciones. ⚖" << endl
                 << "4.- Buscar actividades que te generen sensaciones de limpieza, pureza o renovación (ej. ordenar, tomar un baño relajante). ✨" << endl << endl;
    posibilidadesApoyoAsco = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el asco/repugnancia. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué pequeño paso concreto puedes comprometerte a tomar HOY o en los próximos días para empezar a gestionar el asco/repugnancia cuando surja? 👣" << endl << endl
                 << "1.- Apartarte físicamente de la situación o el estímulo que te lo provoca, si es posible. 🚶" << endl
                 << "2.- Practicar una respiración profunda y lenta para calmar tu sistema nervioso. 🌬" << endl
                 << "3.- Identificar si el asco es hacia la acción en sí o hacia la persona/cosa que la realiza, para diferenciar. 💡" << endl
                 << "4.- Escribir sobre lo que te genera asco, para procesarlo fuera de ti. 📝" << endl << endl;
    accionConcretaAsco = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar el asco/repugnancia puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá tener mayor control sobre mis reacciones viscerales. 🏞" << endl
                 << "2.- Me ayudará a establecer límites más claros y saludables en mis interacciones. 🤝" << endl
                 << "3.- Aumentará mi capacidad de discernimiento y de responder con sabiduría. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida con más libertad y menos evitación. 🦋" << endl << endl;
    transformarAscoProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué mensaje de auto-compasión o aceptación te gustaría darte a ti mismo/a al iniciar este camino de transformación del asco/repugnancia? ✨" << endl << endl
                 << "1.- 'Mi sensación de asco me protege, pero puedo elegir cuándo y cómo respondo a él.' 🙏" << endl
                 << "2.- 'Merezco sentirme seguro/a y en control de mis emociones.' 💪" << endl
                 << "3.- 'Estoy aprendiendo a procesar las cosas que me repelen de una manera sana.' 💖" << endl
                 << "4.- 'Puedo encontrar la pureza y la calma incluso en situaciones desafiantes.' 🌟" << endl << endl;
    mensajeFinalAsco = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión del asco/repugnancia. Recuerda que mereces vivir una vida con más discernimiento y menos incomodidad. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué mensaje interno fundamental crees que el asco está tratando de comunicarte sobre tus valores o tus necesidades? (Ej: 'Esto es tóxico', 'Mis límites han sido cruzados', 'Necesito pureza') 🤔" << endl << endl
                 << "1.- 'Necesito proteger mi integridad física o emocional.' 🛡" << endl
                 << "2.- 'Mis valores morales están siendo desafiados o violados.' ⚖" << endl
                 << "3.- 'Necesito un entorno más limpio o un trato más respetuoso.' ✨" << endl
                 << "4.- 'Debo ser más consciente de lo que permito en mi vida.' 🚫" << endl << endl;
    mensajeInternoAscoProfundo = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Entender el mensaje interno del asco es crucial, ya que te guía hacia lo que es verdaderamente importante para ti y lo que necesitas proteger o establecer. 💡" << endl << endl;

    cout << "Cuando el asco te impulse a reaccionar (ej. alejarte bruscamente, criticar), ¿qué respuesta saludable y consciente podrías elegir en su lugar para gestionar la emoción sin dañar? 🧘" << endl << endl
                 << "1.- Establecer un límite verbal claro y calmado si la situación lo permite. 🗣" << endl
                 << "2.- Reconocer el sentimiento internamente y luego decidir conscientemente tu próximo paso. 🧠" << endl
                 << "3.- Si es apropiado, alejarte de la situación con respeto, sin necesidad de un juicio expresado. 🚶" << endl
                 << "4.- Buscar una actividad que te ayude a limpiar o procesar esa energía (ej. escribir, limpiar, meditar). 📝" << endl << endl;
    respuestaSaludableAsco = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Elegir una respuesta saludable y consciente te permite honrar tus sentimientos sin ser controlado/a por ellos. Estás eligiendo el autocontrol y la sabiduría sobre la reactividad. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Asco/Repugnancia ---
    cout << endl << "--- Resumen de tu Terapia de Asco/Repugnancia ---" << endl;
    cout << "Causa del asco/repugnancia: " << causaAsco << endl;
    cout << "Origen principal del asco/repugnancia: " << origenAscoRaiz << endl;
    cout << "Impacto personal del asco/repugnancia: " << impactoPersonalAsco << endl;
    cout << "Señales internas del asco/repugnancia: " << senalesInternasAsco << endl;
    cout << "Recursos internos para transformar el asco/repugnancia: " << recursosInternosAsco << endl;
    cout << "Posibilidades de apoyo para gestionar el asco/repugnancia: " << posibilidadesApoyoAsco << endl;
    cout << "Pequeño paso concreto para gestionar el asco/repugnancia: " << accionConcretaAsco << endl;
    cout << "Cómo el proceso de transformar el asco/repugnancia enriquece tu vida: " << transformarAscoProceso << endl;
    cout << "Mensaje de auto-compasión o aceptación para el asco/repugnancia: " << mensajeFinalAsco << endl;
    cout << "Mensaje interno fundamental que el asco comunica: " << mensajeInternoAscoProfundo << endl;
    cout << "Respuesta saludable y consciente a elegir ante el asco: " << respuestaSaludableAsco << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del asco/repugnancia." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la auto-protección, el discernimiento y una mayor paz interior. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}

void terapiaDesinteres()
{
    string causaDesinteres; // Variable renombrada
    int origenDesinteresRaiz, impactoPersonalDesinteres, senalesInternasDesinteres, recursosInternosDesinteres, posibilidadesApoyoDesinteres; // Variables renombradas
    int accionConcretaDesinteres, transformarDesinteresProceso, mensajeFinalDesinteres, reconocerNecesidadInternaDesinteres, reconectarActividadDesinteres; // Variables renombradas

    // --- Inicio de la mini-terapia sobre la emoción del desinterés ---
    cout << endl << "¡Hola! Este es un espacio seguro para que exploremos la emoción del *desinterés*. A menudo, el desinterés se manifiesta como una falta de entusiasmo, motivación o preocupación por algo que antes podría haberte importado. Es un acto de valentía reconocer esta ausencia de emoción y abordarla. 😴" << endl
                 << "¿Podrías compartirme brevemente una situación reciente o un patrón recurrente donde sentiste *desinterés*? No necesitas entrar en detalles, solo el aspecto principal. 💔" << endl
                 << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causaDesinteres); // Usando la variable renombrada
    cout << endl << "Gracias por abrirte y compartir eso. Reconocer el *desinterés* es el primer paso para entender qué lo provoca y cómo te afecta. Es una señal importante que puede indicarnos algo más profundo. Permítete sentir sin juicio. 🙏" << endl << endl
                 << "Pensando en esa situación, ¿cuál dirías que es el *origen principal* de tu *desinterés*? 🤔" << endl << endl;
    cout << "1.- La sensación de estar abrumado/a, agotado/a o con falta de energía. 😴" << endl
                 << "2.- La pérdida de sentido o propósito en lo que estás haciendo o en tu vida. 📉" << endl
                 << "3.- Sentir que tus esfuerzos no son valorados o que no puedes generar un impacto. 😔" << endl
                 << "4.- Un cambio significativo en tu vida o una transición importante. 🔄" << endl << endl;
    origenDesinteresRaiz = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa el origen: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Entender el origen de tu *desinterés* nos da claridad sobre las raíces de esta emoción. Este reconocimiento es una herramienta poderosa para empezar a abordarla y elegir cómo responder. 💡" << endl
                 << "Ahora, ¿cómo ha *impactado* esta emoción de *desinterés* en tu bienestar personal y en tus relaciones? 😥" << endl << endl;
    cout << "1.- Me siento apático/a, sin ganas de hacer cosas o con poca motivación. 😔" << endl
                 << "2.- Mis relaciones personales se han visto afectadas por mi falta de participación o entusiasmo. 🧊" << endl
                 << "3.- Me cuesta concentrarme, tomar decisiones o sentir alegría. 🧠" << endl
                 << "4.- Siento un vacío, o una desconexión general con mi entorno. 🕸" << endl << endl;
    impactoPersonalDesinteres = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor se adapte al impacto: ", 1, 4); // Usando la variable renombrada
    system("cls"); // Limpia la pantalla de la consola

    // La siguiente sección se mantiene como un "dummy switch" para mantener la estructura de diálogo,
    // pero no solicita más entrada del usuario aquí, para agilizar el flujo.
    switch (impactoPersonalDesinteres) { // Usando la variable renombrada
        case 1:
            cout << endl << "Comprendo. Esa apatía puede hacer que todo se sienta pesado. Reconocerlo es importante. 😔" << endl;
            break;
        case 2:
            cout << endl << "Entiendo. El impacto en las relaciones puede ser sutil pero significativo. Es un área importante para explorar. 🧊" << endl;
            break;
        case 3:
            cout << endl << "Comprendo. Cuando te cuesta concentrarte o sentir alegría, es una señal importante. Buscar el origen puede ayudarte a recuperar la vitalidad. 🧠" << endl;
            break;
        case 4:
            cout << endl << "Entiendo. Esa sensación de vacío o desconexión es una experiencia profunda. Estás dando un paso valiente al abordarla. 🕸" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "Reconocer cómo el *desinterés* se manifiesta en tu vida es vital. Estas señales son mensajes importantes que tu sistema te envía sobre lo que necesitas abordar. Escucharlas te ayudará a darte el cuidado que mereces. 🫂" << endl << endl
                 << "¿Qué *señales internas* notas en tu cuerpo o mente cuando sientes que el *desinterés* está presente? 😟" << endl << endl;
    cout << "1.- Cansancio físico persistente, falta de energía o pesadez en el cuerpo. 😴" << endl
                 << "2.- Dificultad para iniciar tareas, postergación constante. ⏳" << endl
                 << "3.- Pensamientos de que 'nada importa realmente' o 'para qué molestarse'. 💬" << endl
                 << "4.- Una sensación de 'niebla mental' o de poca claridad. 🌫" << endl << endl;
    senalesInternasDesinteres = obtenerEntradaNumerica<int>("Selecciona el número de tu opción: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Reconocer estas señales internas es un acto de conciencia crucial. Son tus alarmas personales que te indican que esta emoción está presente y necesita ser explorada. 💡" << endl << endl;

    cout << "¿Qué *recurso interno* o *fortaleza personal*, por pequeña que parezca, crees que aún posees para empezar a reavivar el interés en tu vida? 🌟" << endl << endl
                 << "1.- Mi curiosidad natural por aprender o probar cosas nuevas. 🧐" << endl
                 << "2.- Mi deseo de sentirme más vivo/a y conectado/a. ✨" << endl
                 << "3.- Mi habilidad para dar pequeños pasos, incluso cuando no siento motivación. 👣" << endl
                 << "4.- Mi resiliencia para buscar soluciones y mejorar mi bienestar. 💪" << endl << endl;
    recursosInternosDesinteres = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Es muy poderoso reconocer tus propias fortalezas! 🚀 Incluso cuando sientes *desinterés*, estas capacidades residen en ti y pueden ser tus anclas. Recuerda que tienes un poder interior inmenso para elegir cómo respondes y cómo buscas el bienestar. 💖" << endl
                 << "Recuerda que no tienes que hacer esto solo/a. 🫂" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "Exploremos ahora las *posibilidades de apoyo. ¿Qué tipo de apoyo crees que podría ser más útil para ti en este momento para gestionar el **desinterés*? 🤝" << endl << endl
                 << "1.- Buscar ayuda profesional (terapia, coaching) para explorar las causas y estrategias. 🗣" << endl
                 << "2.- Re conectar con actividades que solías disfrutar, incluso si es solo por unos minutos. 🎨" << endl
                 << "3.- Hablar con un amigo o familiar cercano que pueda ofrecerte motivación y compañía. 🫂" << endl
                 << "4.- Establecer pequeñas metas realistas y celebrar cada logro, por insignificante que parezca. ✅" << endl << endl;
    posibilidadesApoyoDesinteres = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Identificar y buscar apoyo es un signo de valentía y una estrategia fundamental para afrontar el *desinterés*. Es un paso hacia tu bienestar emocional. ✨" << endl << endl;

    cout << "¿Qué *pequeño paso concreto* puedes comprometerte a tomar HOY o en los próximos días para empezar a combatir el *desinterés*? 👣" << endl << endl
                 << "1.- Dedicar 5 minutos a una actividad que antes disfrutabas, sin presión de hacer más. ⏳" << endl
                 << "2.- Salir a la naturaleza o a un espacio abierto para un cambio de ambiente. 🌳" << endl
                 << "3.- Conectar con una persona que te inspire o te haga sentir bien. 💖" << endl
                 << "4.- Anotar una cosa, por pequeña que sea, por la que sientes gratitud. 🙏" << endl << endl;
    accionConcretaDesinteres = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones. Comprométete con esa acción y date crédito por dar este paso hacia tu bienestar. 💪" << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿De qué manera crees que el proceso de transformar el *desinterés* puede enriquecer tu vida y tus relaciones? 🌱" << endl << endl
                 << "1.- Me permitirá experimentar más alegría, entusiasmo y vitalidad. 🌟" << endl
                 << "2.- Mis relaciones serán más dinámicas y significativas. 🤝" << endl
                 << "3.- Aumentará mi sentido de propósito y mi conexión con el mundo. 🚀" << endl
                 << "4.- Todas las anteriores, me abrirá a una vida más rica y plena. 🦋" << endl << endl;
    transformarDesinteresProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! Reconocer el valor de este proceso es un paso significativo. Tu capacidad para buscar el crecimiento y el bienestar es una gran fortaleza. 🌱" << endl << endl;

    cout << "¿Qué *mensaje de auto-compasión* o *esperanza* te gustaría darte a ti mismo/a al iniciar este camino de transformación del *desinterés*? ✨" << endl << endl
                 << "1.- 'Está bien no sentirme siempre motivado/a, y puedo encontrar mi camino de regreso.' 🙏" << endl
                 << "2.- 'Merezco una vida llena de pasión y significado.' 💪" << endl
                 << "3.- 'Cada pequeño paso que doy para reconectarme cuenta.' 💖" << endl
                 << "4.- 'La chispa está dentro de mí, y puedo reavivarla.' 🌟" << endl << endl;
    mensajeFinalDesinteres = obtenerEntradaNumerica<int>("Selecciona el mensaje que más te resuene: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Qué poderoso mensaje! Lleva contigo esas palabras. Son un faro de luz en tu camino hacia la gestión del *desinterés*. Recuerda que mereces vivir una vida con más vitalidad y propósito. 💖" << endl << endl;

    // --- Preguntas adicionales de opción múltiple ---
    system("pause");
    system("cls");

    cout << endl << "Para profundizar en tu reflexión, ¿qué *necesidad interna* no satisfecha (ej. descanso, autonomía, validación, desafío) crees que podría estar manifestándose como *desinterés*? 🤔" << endl << endl
                 << "1.- Necesidad de descanso y recuperación profunda (física o mental). 😴" << endl
                 << "2.- Necesidad de autonomía y control sobre mis decisiones. 👑" << endl
                 << "3.- Necesidad de sentir que mis contribuciones son valoradas. 🏆" << endl
                 << "4.- Necesidad de un nuevo desafío o propósito que me inspire. 🚀" << endl << endl;
    reconocerNecesidadInternaDesinteres = obtenerEntradaNumerica<int>("Selecciona la opción que más resuene contigo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "Gracias por esa reflexión. Identificar esas *necesidades internas* es clave, ya que el desinterés a menudo es una señal de que algo fundamental no está siendo nutrido. Al atenderlas, puedes empezar a sentir un cambio. 💡" << endl << endl;

    cout << "Si pudieras *reconectar* con una *actividad o área de tu vida* que antes te apasionaba, ¿cuál sería y qué pequeña acción concreta podrías tomar hoy para acercarte a ella? 🌟" << endl << endl
                 << "1.- Volver a un hobby creativo (ej. dibujar, escribir, tocar música) por 10 minutos. 🎨" << endl
                 << "2.- Leer sobre un tema que antes te interesaba, aunque sea un artículo corto. 📚" << endl
                 << "3.- Recordar un momento en el que sentiste gran entusiasmo y qué lo provocó. 💖" << endl
                 << "4.- Planificar una salida o experiencia que sabes que te solía llenar de energía. 🗺" << endl << endl;
    reconectarActividadDesinteres = obtenerEntradaNumerica<int>("Selecciona la opción que te parezca más útil: ", 1, 4); // Usando la variable renombrada
    cout << endl << "¡Excelente! *Reconectar* con lo que una vez te apasionó es un camino poderoso para reavivar tu interés y energía. Estás eligiendo la curiosidad y la vitalidad sobre la apatía. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Desinterés ---
    cout << endl << "--- Resumen de tu Terapia de Desinterés ---" << endl;
    cout << "Causa del desinterés: " << causaDesinteres << endl;
    cout << "Origen principal del desinterés: " << origenDesinteresRaiz << endl;
    cout << "Impacto personal del desinterés: " << impactoPersonalDesinteres << endl;
    cout << "Señales internas del desinterés: " << senalesInternasDesinteres << endl;
    cout << "Recursos internos para reavivar el interés: " << recursosInternosDesinteres << endl;
    cout << "Posibilidades de apoyo para gestionar el desinterés: " << posibilidadesApoyoDesinteres << endl;
    cout << "Pequeño paso concreto para combatir el desinterés: " << accionConcretaDesinteres << endl;
    cout << "Cómo el proceso de transformar el desinterés enriquece tu vida: " << transformarDesinteresProceso << endl;
    cout << "Mensaje de auto-compasión o esperanza: " << mensajeFinalDesinteres << endl;
    cout << "Necesidad interna no satisfecha que el desinterés podría manifestar: " << reconocerNecesidadInternaDesinteres << endl;
    cout << "Actividad o área de tu vida para reconectar y pequeña acción: " << reconectarActividadDesinteres << endl;
    cout << "---------------------------------------" << endl;
    
    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración del *desinterés*." << endl
                 << "😄 Recuerda que reconocer y procesar esta emoción es un acto de amor propio y de profunda conciencia. No estás solo/a en esto." << endl
                 << "😊 Confío en tu resiliencia para transitar este sentimiento y encontrar el camino hacia la reconexión con tu propósito y la vitalidad. Si necesitas seguir explorando esto o cualquier otra emoción, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}


/****************************************************************************
    Terapia de la opción de apoyo profesional para saber si la necesita
    By: Mauricio Canseco
******************************************************************************/

void terapiaApoyoProfesional()
{
    int razonPrincipalApoyoProfesional; // Variable renombrada
    int intentosPreviosApoyoProfesional, expectativaApoyoProfesional, miedoObstaculoApoyoProfesional, primerPasoApoyoProfesional; // Variables renombradas
    int confianzaProcesoApoyoProfesional, bienestarActualApoyoProfesional, creenciasAyudaApoyoProfesional, apoyoActualApoyoProfesional, momentoDecisivoApoyoProfesional, compromisoPersonalApoyoProfesional; // Variables renombradas

    system ("cls");

    cout << endl << "😲 Es valiente de tu parte explorar la posibilidad de buscar apoyo profesional." << endl 
    << "🤓 Surge cuando sentimos que hemos intentado manejar nuestras emociones o situaciones por nuestra cuenta" << endl 
    << "y necesitamos ahora una perspectiva y herramientas adicionales. 🙏" << endl << endl
                 << "¿Por qué consideras que necesitas buscar apoyo profesional? 🤔" << endl << endl;
    cout << "1.- Me siento abrumado/a y mis emociones son difíciles de manejar por mi cuenta. 🌊" << endl
                 << "2.- Mi comportamiento negativo o hábitos me están causando problemas constantemente. 🔄" << endl
                 << "3.- Quiero aprender a frontar mejor mis problemas o situaciones emocionales futuras. 🌱" << endl
                 << "4.- He pasado por una situación traumática o un evento muy estresante. 💔" << endl
                 << "5.- Mis relaciones interpersonales se están viendo seriamente afectadas por algo. 🧊" << endl
                 << "6.- Siento un malestar general que no puedo identificar ni resolver. ❓" << endl
                 << "7.- Un médico o alguien de confianza me lo ha sugerido. 🗣️" << endl << endl;
    razonPrincipalApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa tu situación: ", 1, 7); // Usando la variable renombrada
    cout << endl << "😊 Gracias por compartir eso." << endl 
    << "🤓 Reconocerlo es el primer paso para poder trabajar en ello." << endl << endl
                 << "¿Cómo describirías tu estado actual comparado a cuando en algún momento te sentías bien? 😥" << endl << endl;
    cout << "1.- Me siento notoriamente peor y mi actitud ha decaido mucho. 📉" << endl
                 << "2.- Siento que estoy estancado/a y eso me frustra. 🚧" << endl
                 << "3.- Hay días buenos y días malos, pero los malos son cada vez más frecuentes. 🎢" << endl
                 << "4.- Por mas que espero, no alcanzo un bienestar ni equilibrio. ⚖️" << endl << endl;
    bienestarActualApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor refleje tu estado: ", 1, 4); // Usando la variable renombrada

    switch (bienestarActualApoyoProfesional) { // Usando la variable renombrada
        case 1: cout << endl << "Entiendo. Esa disminución en la calidad de vida es una señal clara. 📉" << endl;
            break;
        case 2: cout << endl << "Comprendo la frustración de sentirse estancado/a. 🚧" << endl;
            break;
        case 3: cout << endl << "Es válido sentir esa sensación. Los picos negativos son impactantes. 🎢" << endl;
            break;
        case 4: cout << endl << "A veces, una situación específica puede ser el detonante. ⚖️" << endl;
            break;
    }

    system("pause");
    system("cls");

    cout << endl << "¿Qué tipo de estrategias has probado para manejar esta situación y cuál fue el resultado? 🤔" << endl << endl;
    cout << "1.- Hablar con amigos/familiares: Me ayudó un poco, pero no resolvió el problema de fondo. 🗣️" << endl
                 << "2.- Leer libros de autoayuda/artículos online: Obtuve algo de información, pero no pude aplicarlo consistentemente. 📚" << endl
                 << "3.- Ejercicio, meditación o hobbies: Me distrae temporalmente, pero el problema persiste. 🧘" << endl
                 << "4.- Ignorar o suprimir el problema: Solo ha empeorado la situación o las emociones. 💨" << endl
                 << "5.- No he intentado mucho, me siento paralizado/a. ❄️" << endl << endl;
    intentosPreviosApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tus intentos previos: ", 1, 5); // Usando la variable renombrada
    if (intentosPreviosApoyoProfesional == 1 || intentosPreviosApoyoProfesional == 2 || intentosPreviosApoyoProfesional == 3)
    {
    cout << endl << "Es admirable que hayas intentado manejar esto con tus propios recursos." << endl 
    << "Cada uno de esos intentos te ha brindado información valiosa sobre lo que funciona y lo que no. ✨" << endl << endl;
    }
    else if (intentosPreviosApoyoProfesional == 4 || intentosPreviosApoyoProfesional == 5)
    {
        cout << "😔 Comprendo, es entendible esta situación" << endl 
        << "🫡 Aunque una buana manera de comenzar es intentado conseguir apoyo" << endl << endl;
    }

    cout << "¿Qué crees que podría ofrecerte un profesional de la salud mental? 🤝" << endl << endl;
    cout << "1.- Herramientas o estrategias para manejar mis emociones y situaciones. 🛠️" << endl
                 << "2.- Un espacio para explorar y liberar mis pensamientos y sentimientos. 🗣️" << endl
                 << "3.- Ayuda para comprender las raíces de mis sentimientos y/o problemas. 🔍" << endl
                 << "4.- Apoyo para desarrollar un crecimiento personal. 🌱" << endl
                 << "5.- Perspectivas y nuevas formas de ver mi situación. 🧠" << endl
                 << "6.- Todas las anteriores y un camino hacia una vida más plena. 🌈" << endl << endl;
    expectativaApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa tu expectativa: ", 1, 6); // Usando la variable renombrada
    cout << endl << "😁¡Excelente! El tener expectativas claras te ayudará a mejorar.";

    system("pause");
    system("cls");

    cout << "¿Qué miedos o preocupaciones te surgen al pensar en buscar apoyo profesional?😟" << endl << endl;
    cout << "1.- Miedo a lo que otros puedan pensar/decir. 🤫" << endl
                 << "2.- Preocupación por el costo económico. 💸" << endl
                 << "3.- Incertidumbre sobre si encontraré al profesional adecuado o si realmente me ayudará. ❓" << endl
                 << "4.- Miedo a enfrentar verdades incómodas o molestas sobre mí mismo/a o mi pasado. 😨" << endl
                 << "5.- Falta de tiempo para las sesiones en mi horario. ⏰" << endl
                 << "6.- No saber por dónde empezar o como expresarme. 🗺️" << endl
                 << "7.- No estoy seguro/a de si estoy lo suficientemente mal como para necesitarlo. ⚖️" << endl << endl;
    miedoObstaculoApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más resuene con tus miedos o dudas: ", 1, 7); // Usando la variable renombrada
    cout << endl << " 🤗Es completamente normal sentir esos miedos o dudas." << endl 
    << "🤓De hecho, son parte del proceso y reconocerlos son clave para resolverlos.🫂" << endl << endl;

    cout << "¿Para ti que representa buscar ayuda profecional? 🤔" << endl << endl;
    cout << "1.- Es un signo de fortaleza y auto-cuidado. 💪" << endl
                 << "2.- Es una opción válida cuando otras estrategias no funcionan. 💡" << endl
                 << "3.- A veces es necesario, pero preferiría resolverlo por mi cuenta. 🚧" << endl
                 << "4.- Es solo para personas con problemas 'graves' o 'locura'.😔" << endl << endl;
    creenciasAyudaApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la opción que más se acerque a tu creencia: ", 1, 4); // Usando la variable renombrada
    if (creenciasAyudaApoyoProfesional == 1 || creenciasAyudaApoyoProfesional == 2)
    {
    cout << endl << "😊Tu perspectiva sobre buscar ayuda influye mucho en su solución." << endl 
    << "Me alegro mucho que pienses eso. ✨" << endl << endl;
    }
    else if (creenciasAyudaApoyoProfesional == 3)
    {
        cout << endl << "😊Ok, es entendible, intentar resolver las cosas por tu cuenta es buena opción 😁" << endl
        << "Aunque siempre, cuando no puedas, es bueno buscar ayuda 🤗" << endl << endl;
    }
    else if (creenciasAyudaApoyoProfesional == 4)
    {
        cout << endl << "🤓Es entendible tu punto de vista, sin embargo..." << endl
        << "Es totalmente normal y válido buscar ayuda, ya que es un  símbolo de valentía y reponsabilidad 😁" << endl << endl;
    }

    system("pause");
    system("cls");

    cout << endl << "¿Cómo describirías el apoyo que recibes actualmente de la gente que te rodea? 👥" << endl << endl;
    cout << "1.- Recibo mucho apoyo y me siento bien, pero siento que necesito algo más allá de lo que me pueden ofrecer. 💖" << endl
                 << "2.- Tengo algo de apoyo, pero a veces no me comprenden o ayudan del todo. 🤝" << endl
                 << "3.- Siento que tengo poco o ningún apoyo en este momento. 🧊" << endl
                 << "4.- No quiero que mis seres queridos carguen con mis problemas. 🤫" << endl << endl;
    apoyoActualApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu apoyo actual: ", 1, 4); // Usando la variable renombrada
    cout << endl << "😊 Es útil evaluar el apoyo que ya tienes." << endl 
    << "A veces, el apoyo profesional complementa el personal de maneras únicas, inténtalo. 🫂" << endl << endl;

    cout << "¿Cuál es el hecho principal de que ahora busques apoyo profesional? 🤔" << endl << endl;
    cout << "1.- La situación o mis emociones han alcanzado un nivel que ya no puedo manejar. 💥" << endl
                 << "2.- Me he dado cuenta de que lo negativo se repite y necesito romperlo. 🔄" << endl
                 << "3.- Quiero mejorar en mi crecimiento y bienestar a largo plazo. 🌱" << endl
                 << "4.- Me siento motivado/a en poder sentirme mejor o lograr mis metas. 🚀" << endl << endl;
    momentoDecisivoApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu momento decisivo: ", 1, 4); // Usando la variable renombrada
    cout << endl << "🤓Ok, identificar este hecho es fundamental para mejorar. 💡" << endl << endl;

    cout << "¿Qué paso estás dispuesto a dar para obtener ayuda profesional? 👣" << endl << endl;
    cout << "1.- Investigar opciones de profesionales o clínicas cerca de mí(online, recomendaciones). 💻" << endl
                 << "2.- Hablar con alguien de confianza que ya haya recibido apoyo profesional o me pueda aconsejar. 🗣️" << endl
                 << "3.- Leer un artículo o un blog sobre los beneficios de la terapia. 📚" << endl
                 << "4.- Contactar a un profesional para una primera consulta breve. 🗓️" << endl
                 << "5.- Identificar y anotar los 3 principales obstáculos que te impiden dar el primer paso. 🚧" << endl << endl;
    primerPasoApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 5); // Usando la variable renombrada
    cout << endl << "🤗 ¡Maravilloso! Los pequeños pasos son el inicio de grandes transformaciones." << endl 
    << "Comprométete con esa acción y da este paso tan importante hacia tu bienestar. 💪" << endl << endl;

    system ("pause");
    system ("cls");

    cout << "¿Cómo crees que buscar y recibir apoyo profesional podría beneficiarte tu vida? 🌱" << endl << endl;
    cout << "1.- Aumentará mi auto-conocimiento y mi inteligencia emocional. 🧠" << endl
                 << "2.- Mejorará mi capacidad para afrontar desafíos futuros y tomar decisiones saludables. 🚀" << endl
                 << "3.- Fortalecerá mi bienestar general, llevándome a una vida más plena. 💖" << endl
                 << "4.- Me empoderará para vivir una vida más consciente y centrada en mis valores. 🦋" << endl
                 << "5.- Todas las anteriores y me ayudará a desarrollar una mayor resiliencia. 🌟" << endl << endl;
    confianzaProcesoApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 5); // Usando la variable renombrada
    cout << endl << "🤩 ¡Excelente! Reconocer el valor a largo plazo es una gran motivación." << endl 
    << "Buscar las metas futuras y beneficios son clave del proceso. 🌱" << endl << endl;

    cout << "¿Cuál sería tu conclusión final? ✨" << endl << endl;
    cout << "1.- Estoy listo/a para buscar apoyo profesional y dar el siguiente paso. ✅" << endl
                 << "2.- Necesito más información, tiempo o reflexión antes de decidir. 💡" << endl
                 << "3.- Por ahora, creo que puedo seguir manejando esto por mi cuenta, pero si la llego a neceitar la buscaré. ⚖️" << endl
                 << "4.- Reconozco la necesidad, pero mis obstáculos (ej. costo, miedo) son más grandes en este momento. 🚧" << endl << endl;
    compromisoPersonalApoyoProfesional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor refleje tu decisión actual: ", 1, 4); // Usando la variable renombrada
    if (compromisoPersonalApoyoProfesional == 1 || compromisoPersonalApoyoProfesional == 2 ||  compromisoPersonalApoyoProfesional == 3)
    {
    cout << endl << "🤗 ¡Qué valiosa reflexión!" <<  endl 
    << "Lleva contigo esta claridad para tu bienestar. 💖" << endl << endl;
    }
    else if (compromisoPersonalApoyoProfesional == 4)
    {
        cout << endl << "🫡 Es comprensible" <<  endl 
        << "Tómate tu tiempo para reflexionar, recuerda que tu bienestar es lo principal. 💖" << endl << endl;
    }
    
    system ("pause");
    system ("cls");

    // --- Resumen de tu Terapia de Apoyo Profesional ---
    cout << endl << "--- Resumen de tu Terapia de Apoyo Profesional ---" << endl;
    cout << "Razón principal para buscar apoyo profesional: " << razonPrincipalApoyoProfesional << endl;
    cout << "Estado actual de bienestar comparado con antes: " << bienestarActualApoyoProfesional << endl;
    cout << "Intentos previos para manejar la situación: " << intentosPreviosApoyoProfesional << endl;
    cout << "Expectativa de lo que podría ofrecerte un profesional: " << expectativaApoyoProfesional << endl;
    cout << "Miedos u obstáculos al buscar apoyo profesional: " << miedoObstaculoApoyoProfesional << endl;
    cout << "Creencia personal sobre buscar ayuda profesional: " << creenciasAyudaApoyoProfesional << endl;
    cout << "Descripción del apoyo actual recibido: " << apoyoActualApoyoProfesional << endl;
    cout << "Momento decisivo para buscar apoyo profesional: " << momentoDecisivoApoyoProfesional << endl;
    cout << "Paso concreto a dar para obtener ayuda profesional: " << primerPasoApoyoProfesional << endl;
    cout << "Beneficios esperados al recibir apoyo profesional: " << confianzaProcesoApoyoProfesional << endl;
    cout << "Conclusión final sobre buscar apoyo profesional: " << compromisoPersonalApoyoProfesional << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración profunda de la necesidad de apoyo profesional." << endl
                 << "😄 Recuerda que buscar ayuda no es un signo de debilidad, sino de gran valentía y te llevará una mejor vida." << endl
                 << "😊 Confío en tu sabiduría para tomar la mejor decisión para ti, cualquier cosa, estoy aquí para apoyarte." << endl
                 << "Hasta la próxima. 👋😊" << endl;
}


/********************************************************
    Funciones adicionales apoyo profesional
    By: Daniela Vargas and América Ramirez 
**********************************************************/

void tiposDeProfecionales()
{
    string opcExt;
    int opcionMenu;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system ("cls");
            system("color 0B"); // Color azul claro
            // Menu principal
            cout << "Bienvenido/a. Aquí puedes explorar diferentes caminos para tu bienestar emocional." << endl;
        cout << "Por favor, selecciona el número de la opción que te interese para conocer más:" << endl << endl;

        cout << "1. 🧠 Psicología / Terapia Psicológica" << endl;
        cout << "2. ⚕️ Psiquiatría / Medicina Psiquiátrica" << endl;
        cout << "3. 🗣️ Coaching de Vida / Life Coaching" << endl;
        cout << "4. 🧘 Terapia Ocupacional" << endl;
        cout << "5. 💖 Consejería (Counseling)" << endl;
        cout << "6. 🧘‍♂️ Terapias Holísticas / Complementarias" << endl;
        cout << "7. 🤝 Grupos de Apoyo" << endl;
        cout << "8. 🚪 Salir del menú" << endl << endl;

        opcionMenu = obtenerEntradaNumerica<int>("Ingresa tu opción: ", 1, 8);
            system("color 0B"); // Color azul claro

            switch (opcionMenu)
            {
            case 1:
               cout << "\n--- 🧠 Psicología / Terapia Psicológica ---" << endl << endl;
            cout << "Profesional: Psicólogo/a (licenciado/a en Psicología, a menudo con posgrado en terapia)." << endl;
            cout << "Descripción: Es un proceso de conversación y exploración con un profesional capacitado." << endl 
            << "Ayuda a entender patrones de pensamiento, emociones y comportamientos; a desarrollar estrategias de afrontamiento." << endl 
            << "Procesar traumas y a mejorar la salud mental general." << endl;
            cout << "Cuándo buscarlo: Ideal para manejar ansiedad, depresión, estrés, fobias, duelos," << endl 
            <<"problemas de relación, trastornos de la personalidad, o simplemente para crecimiento personal y autoconocimiento." << endl;
            cout << "Objetivo: Promover el cambio, el bienestar emocional y el desarrollo de recursos internos para afrontar los desafíos de la vida." << endl;
            cout << "Ejemplos: - Dr. Paco Paz: Experto en psicoterapia Gestalt, terapia de parejas, depresión, trastornos de ansiedad y sexología." << endl
            << "Ubicado en C. 2 de Abril 1780, Veracruz." << endl
            << "- Lic. Nancy Patricia Ríos Maya: Se especializa en duelo, apoyo emocional a mujeres y terapia cognitivo-conductual." << endl
            << "Ubicada en Bugambilia 583, Veracruz." << endl
            << "- Lic. Lorena Cortés Medina: Ofrece terapia individual, de parejas y familiar, con experiencia en trauma psicológico." << endl
            << "Ubicada en Av. Valentín Gómez Farías 1435, Veracruz." << endl
            << "- Mtra. Ana Laura Espinosa Velazquez: Proporciona psicoterapia Gestalt, asesoramiento en duelo y psicoterapia humanista." << endl
            << "Ubicada en Avenida de Las Americas 329, Veracruz." << endl << endl;
                break;
            case 2:
                cout << "\n--- ⚕️ Psiquiatría / Medicina Psiquiátrica ---" << endl << endl;
            cout << "Profesional: Psiquiatra (médico/a especializado/a en salud mental)." << endl;
            cout << "Descripción: Se enfoca en el diagnóstico, tratamiento y prevención de los trastornos mentales desde una perspectiva médica y biológica." << endl
            << "Los psiquiatras pueden recetar medicamentos (como antidepresivos, ansiolíticos) y también ofrecer terapia." << endl
            << "A menudo, trabajan en conjunto con psicólogos." << endl;
            cout << "Cuándo buscarlo: Cuando hay síntomas severos de trastornos mentales" << endl
            << "(depresión mayor, trastorno bipolar, esquizofrenia, trastornos de ansiedad graves) que pueden requerir medicación." << endl
            << "También para una evaluación diagnóstica completa desde una perspectiva médica." << endl;
            cout << "Objetivo: Estabilizar los síntomas a través de la medicación y/o terapia, buscando el equilibrio químico y funcional del cerebro." << endl;
            cout << "Ejemplos: - Dr. Arturo Morlet Barjau: Especialista en psiquiatría y psicoterapia, con experiencia en ansiedad, depresión y medicina psicosomática." << endl
            << "Ubicado en Antonio de Mendoza No. 129, Fraccionamiento Virginia, Veracruz." << endl << endl;
                break;
            case 3:
                cout << "\n--- 🗣️ Coaching de Vida / Life Coaching ---" << endl << endl;
            cout << "Profesional: Coach de vida (profesional certificado en coaching)." << endl;
            cout << "Descripción: El coaching se centra en el presente y el futuro, ayudando a las personas a identificar metas," << endl
            << "superar obstáculos y maximizar su potencial. No es terapia; un coach no diagnostica ni trata trastornos mentales" <<  endl
            << "sino que facilita el descubrimiento de soluciones y la acción." << endl;
            cout << "Cuándo buscarlo: Para claridad en objetivos personales o profesionales, desarrollo de liderazgo," << endl
            << "gestión del tiempo, mejora de la autoestima, transiciones de vida (carrera, relaciones), o para encontrar motivación y dirección." << endl;
            cout << "Objetivo: Impulsar el crecimiento personal, la consecución de metas y el desarrollo de habilidades específicas para el futuro." << endl;
                break;
            case 4:
                cout << "\n--- 🧘 Terapia Ocupacional ---" << endl << endl;
            cout << "Profesional: Terapeuta Ocupacional (profesional de la salud)." << endl;
            cout << "Descripción: Se enfoca en ayudar a las personas a participar en las ocupaciones de la vida diaria." << endl
            << "En el contexto emocional, esto puede incluir desarrollar rutinas, habilidades de manejo del estrés" << endl
            << "o adaptar el entorno para mejorar la función y el bienestar emocional." << endl;
            cout << "Cuándo buscarlo: Cuando las emociones (depresión, ansiedad) o condiciones de salud mental" << endl
            << "afectan la capacidad de la persona para realizar tareas cotidianas, trabajar, estudiar o participar en la vida social." << endl;
            cout << "Objetivo: Mejorar la participación en actividades significativas, promover la independencia y la calidad de vida," << endl
            << "y adaptar las funciones diarias para apoyar el bienestar emocional." << endl;
                break;
            case 5:
                cout << "\n--- 💖 Consejería (Counseling) ---" << endl << endl;
            cout << "Profesional: Consejero/a (profesional con formación en consejería, a menudo similar a psicología," << endl
            << "pero con un enfoque más centrado en problemas específicos y soluciones prácticas)." << endl;
            cout << "Descripción: La consejería es un tipo de apoyo a corto o mediano plazo que se enfoca en problemas específicos" << endl
            << "y situaciones actuales. Ayuda a las personas a explorar sus sentimientos, identificar opciones y tomar decisiones" << endl
            << "para resolver dificultades. Puede abordar problemas de relación, estrés, duelo, o transiciones de vida." << endl;
            cout << "Cuándo buscarlo: Para abordar crisis específicas, desarrollar habilidades de comunicación," << endl
            << "manejar el estrés laboral o personal, o procesar pérdidas. Es un enfoque más directo y orientado a la solución" << endl
            << "de problemas concretos." << endl;
            cout << "Objetivo: Ayudar a las personas a resolver problemas específicos, a mejorar su bienestar emocional" << endl
            << "y a tomar decisiones informadas." << endl;
                break;
            case 6:
                cout << "\n--- 🧘‍♂️ Terapia Holística / Terapias Complementarias ---" << endl << endl;
            cout << "Profesional: Varios (terapeutas de yoga, meditación, arteterapia, musicoterapia," << endl
            << "reiki, acupuntura, etc.)." << endl;
            cout << "Descripción: Este enfoque considera al individuo en su totalidad (mente, cuerpo, espíritu)." << endl
            << "Las terapias complementarias no sustituyen la medicina o la psicología convencional," << endl
            << "pero pueden apoyar el bienestar emocional. Se basan en diversas filosofías y técnicas." << endl;
            cout << "Cuándo buscarlo: Como complemento a otros tratamientos, para reducir el estrés," << endl
            << "fomentar la relajación, mejorar la conciencia corporal, expresar emociones de forma" << endl
            << "creativa o explorar el bienestar espiritual. No para trastornos mentales graves sin supervisión médica." << endl;
            cout << "Objetivo: Promover el equilibrio general del ser, facilitar la relajación," << endl
            << "la autoconciencia y la sanación a través de métodos no convencionales." << endl;
                break;
            case 7:
                cout << "\n--- 🤝 Grupos de Apoyo ---" << endl << endl;
            cout << "Profesional: Facilitador/a (a menudo, personas con experiencia vivida o" << endl
            << "profesionales de la salud mental)." << endl;
            cout << "Descripción: Son encuentros de personas que comparten experiencias, problemas" << endl
            << "o desafíos similares (ej. grupos para el duelo, adicciones, enfermedades crónicas, ansiedad)." << endl
            << "Ofrecen un espacio para compartir, sentirse comprendido/a y aprender de otros." << endl;
            cout << "Cuándo buscarlo: Para sentirte menos solo/a, obtener diferentes perspectivas," << endl
            << "compartir estrategias de afrontamiento, recibir y dar apoyo emocional, y construir una comunidad." << endl;
            cout << "Objetivo: Brindar apoyo mutuo, reducir el aislamiento y facilitar el aprendizaje" << endl
            << "a través de la experiencia compartida." << endl;
            cout << "Ejemplos: - Asociación Libre: Un equipo de psicólogos que ofrece tratamiento para adolescentes y adultos" << endl
            << "Ubicado en Colonia Reforma, Veracruz." << endl
            << "- Centro de Salud Emocional: Proporciona servicios psicológicos, incluyendo terapia individual, de parejas y sexología." << endl
            << "Ubicado en Av. Fernando de Magallanes 252 Departamento 2 Col. Reforma, Veracruz." << endl << endl;
                break;
            case 8:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcionMenu != 8)
            {
                cout << "¿Quieres salir de la sección de Tipos de profesionales?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }

            } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menú anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcionMenu != 8);
}

void recursosEnLinea()
{
    string opcExt;
    int opcionMenu;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system ("cls");
            system("color 0B"); // Color azul claro
            // Menu principal
            cout << "Explora diferentes recursos digitales para tu bienestar." << endl;
        cout << "Por favor, selecciona el número de la categoría que te interese:" << endl << endl;

        cout << "1.- 🏛️ Recursos Gubernamentales" << endl;
        cout << "2.- 🧠 Recursos de Salud Mental (Directorios y Portales)" << endl;
        cout << "3.- 📊 Estudios y Estadísticas sobre Salud Mental" << endl;
        cout << "4.- 📱 Aplicaciones y Recursos de Bienestar Online" << endl;
        cout << "5.- 🚪 Salir del menú" << endl << endl;

        opcionMenu = obtenerEntradaNumerica<int>("Ingresa tu opción: ", 1, 5);
            system("color 0B"); // Color azul claro

            switch (opcionMenu)
            {
            case 1:
               cout << "## 🏛️ Recursos Gubernamentales:" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Línea de la Vida (CONADIC - México)**" << endl;
                cout << "  Descripción: Es un servicio telefónico y en línea gratuito y confidencial del Gobierno de México (CONADIC) que brinda apoyo y orientación sobre problemas de adicciones y salud mental. Ofrece intervención breve, referencia y consejería." << endl;
                cout << "  Contacto: Línea telefónica 800 911 2000; también tienen un chat en línea en su sitio web." << endl;
                cout << "  Notas: Ideal para crisis, orientación y referencias a servicios." << endl << endl;

                cout << "- **Secretaría de Salud de México - Salud Mental**" << endl;
                cout << "  Descripción: El sitio oficial de la Secretaría de Salud ofrece información general sobre salud mental, programas, campañas de prevención y promoción, y datos sobre la red de servicios en el país." << endl;
                cout << "  Enlace: Busca 'Salud Mental Secretaría de Salud Gobierno de México' en tu navegador." << endl;
                cout << "  Notas: Fuente oficial de políticas y programas nacionales." << endl << endl;

                cout << "- **IMSS - Información sobre Salud Mental (Derechohabientes)**" << endl;
                cout << "  Descripción: El Instituto Mexicano del Seguro Social (IMSS) proporciona información sobre sus servicios de salud mental para derechohabientes, incluyendo guías, tips y acceso a sus unidades de atención." << endl;
                cout << "  Enlace: Busca 'Salud Mental IMSS' en tu navegador." << endl;
                cout << "  Notas: Si eres derechohabiente, este es tu primer punto de contacto para servicios médicos." << endl << endl;

                cout << "- **ISSSTE - Salud Mental (Derechohabientes)**" << endl;
                cout << "  Descripción: El Instituto de Seguridad y Servicios Sociales de los Trabajadores del Estado (ISSSTE) también ofrece servicios y recursos para la salud mental de sus afiliados." << endl;
                cout << "  Enlace: Busca 'Salud Mental ISSSTE' en tu navegador." << endl;
                cout << "  Notas: Similar al IMSS, pero para trabajadores del estado." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 2:
                cout << "## 🧠 Recursos de Salud Mental (Directorios y Portales):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Directorios de Psicólogos en Línea (Ej. Terapify, Psicología y Mente, Doctoralia)**" << endl;
                cout << "  Descripción: Plataformas que conectan a usuarios con psicólogos y terapeutas certificados en México, muchos de los cuales ofrecen sesiones virtuales. Permiten filtrar por especialidad, costo y tipo de terapia." << endl;
                cout << "  Enlace/Notas: Busca 'Terapify', 'Psicología y Mente psicólogos', 'Doctoralia psicólogos' en tu navegador." << endl;
                cout << "  Notas: Conveniente para encontrar profesionales desde casa." << endl << endl;

                cout << "- **Asociación Psiquiátrica Mexicana (APM)**" << endl;
                cout << "  Descripción: La principal organización de psiquiatras en México. Su sitio web puede ofrecer un directorio de profesionales y recursos informativos valiosos sobre diversos trastornos mentales." << endl;
                cout << "  Enlace: Busca 'Asociación Psiquiátrica Mexicana' en tu navegador." << endl;
                cout << "  Notas: Útil para encontrar psiquiatras y conocer más sobre su campo." << endl << endl;

                cout << "- **UNAM - Psicoterapia en línea / Clínicas Universitarias**" << endl;
                cout << "  Descripción: Algunas facultades o centros de la UNAM (como la Facultad de Psicología) ofrecen servicios de psicoterapia a bajo costo o gratuitos, a menudo con opciones en línea, como parte de sus programas de formación o servicio social." << endl;
                cout << "  Enlace: Busca 'Psicoterapia en línea UNAM' o 'Clínicas psicológicas UNAM' en tu navegador." << endl;
                cout << "  Notas: Excelente opción para servicios accesibles y de calidad." << endl << endl;

                cout << "- **Centro Comunitario de Salud Mental (CCOMSAM)**" << endl;
                cout << "  Descripción: Centros que forman parte de la red de servicios de salud mental del sector público, ofreciendo atención multidisciplinaria a nivel comunitario." << endl;
                cout << "  Enlace: Busca 'CCOMSAM México' en tu navegador para encontrar el más cercano." << endl;
                cout << "  Notas: Ofrecen servicios integrales en tu comunidad." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 3:
                cout << "## 📊 Estudios y Estadísticas sobre Salud Mental:" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **INSP (Instituto Nacional de Salud Pública) - Publicaciones**" << endl;
                cout << "  Descripción: El INSP realiza investigaciones y publica datos epidemiológicos sobre diversas áreas de la salud en México, incluyendo la salud mental. Sus publicaciones pueden ofrecer estadísticas nacionales y análisis de tendencias." << endl;
                cout << "  Enlace: Visita la sección de publicaciones del INSP (insp.mx) y busca temas de salud mental." << endl;
                cout << "  Notas: Fuente de información robusta para datos nacionales." << endl << endl;

                cout << "- **INEGI - Encuestas de Bienestar y Salud**" << endl;
                cout << "  Descripción: El Instituto Nacional de Estadística y Geografía (INEGI) a menudo incluye módulos sobre bienestar subjetivo y salud en sus encuestas nacionales, lo que puede proporcionar datos relevantes sobre la percepción de la salud mental en la población mexicana." << endl;
                cout << "  Enlace: Busca 'INEGI Encuestas de Bienestar' o 'INEGI Salud' en su portal (inegi.org.mx)." << endl;
                cout << "  Notas: Datos demográficos y de percepción a nivel nacional." << endl << endl;

                cout << "- **OMS/OPS - Datos sobre Salud Mental en las Américas**" << endl;
                cout << "  Descripción: La Organización Mundial de la Salud (OMS) y la Organización Panamericana de la Salud (OPS) publican informes y estadísticas globales y regionales sobre la salud mental, lo que puede dar un contexto internacional a la situación en México." << endl;
                cout << "  Enlace: Busca 'OMS Salud Mental' o 'OPS Salud Mental México' en sus sitios web." << endl;
                cout << "  Notas: Perspectiva global y comparativa de la salud mental." << endl << endl;

                cout << "- **McKinsey Health Institute - Reportes**" << endl;
                cout << "  Descripción: El McKinsey Health Institute publica estudios globales sobre diversas tendencias de salud, incluyendo la salud mental. Sus reportes, como 'La epidemia de salud mental en Gen Z', ofrecen análisis profundos sobre el bienestar en diferentes poblaciones." << endl;
                cout << "  Enlace: Busca 'McKinsey Health Institute mental health report' en tu navegador." << endl;
                cout << "  Notas: Fuentes de investigación de alto nivel con datos recientes." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 4:
                cout << "## 📱 Aplicaciones y Recursos de Bienestar Online:" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Headspace / Calm (Meditación y Mindfulness)**" << endl;
                cout << "  Descripción: Aplicaciones líderes que ofrecen guías de meditación, ejercicios de mindfulness, historias para dormir, música relajante y cursos para reducir el estrés, mejorar el sueño y aumentar la concentración." << endl;
                cout << "  Disponibilidad: App Store y Google Play. Ofrecen versiones gratuitas y de suscripción." << endl;
                cout << "  Notas: Excelentes para el autocuidado diario y el manejo del estrés." << endl << endl;

                cout << "- **Happify (Juegos y Actividades)**" << endl;
                cout << "  Descripción: Una aplicación que utiliza juegos y actividades interactivas basadas en la ciencia (psicología positiva y TCC) para superar pensamientos negativos, manejar el estrés y construir resiliencia." << endl;
                cout << "  Disponibilidad: App Store y Google Play. Contenido gratuito y premium." << endl;
                cout << "  Notas: Enfoque lúdico para mejorar el bienestar emocional." << endl << endl;

                cout << "- **Insight Timer (Meditación Gratuita)**" << endl;
                cout << "  Descripción: Una de las aplicaciones de meditación más grandes del mundo, con miles de meditaciones guiadas, música, charlas y cursos gratuitos de terapeutas y maestros de todo el mundo." << endl;
                cout << "  Disponibilidad: App Store y Google Play. Mayormente gratuita." << endl;
                cout << "  Notas: Una vasta biblioteca de recursos de mindfulness." << endl << endl;

                cout << "- **Sanvello (TCC y Apoyo Comunitario)**" << endl;
                cout << "  Descripción: Una aplicación que ofrece herramientas de Terapia Cognitivo-Conductual (TCC), mindfulness, seguimiento del estado de ánimo y una comunidad de apoyo para manejar la ansiedad y la depresión. Ofrece contenido gratuito y premium." << endl;
                cout << "  Disponibilidad: App Store y Google Play. Contenido gratuito y premium." << endl;
                cout << "  Notas: Combina herramientas clínicas con el apoyo de pares." << endl << endl;

                cout << "- **Clara (Terapia Cognitivo-Conductual y Mindfulness)**" << endl;
                cout << "  Descripción: Una aplicación española (también relevante para público hispanohablante) que ofrece un programa estructurado de TCC y mindfulness para el manejo de la ansiedad y la depresión." << endl;
                cout << "  Disponibilidad: App Store y Google Play." << endl;
                cout << "  Notas: Programa guiado para aprender técnicas de autoayuda." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcionMenu != 5)
            {
                cout << "¿Quieres salir de la sección de recursos en lineas?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }

            } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menú anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcionMenu != 5);
}

void institucionesCentrosApoyo()
{
    string opcExt;
    int opcionMenu;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system ("cls");
            system("color 0B"); // Color azul claro
            // Menu principal
            cout << "--- 🏥 Directorio de Instituciones y Centros de Apoyo en Salud Mental ---" << endl; 
        cout << "Descubre opciones de apoyo presencial y especializado en Veracruz y zonas cercanas." << endl;
        cout << "Por favor, selecciona el número de la categoría que te interese:" << endl << endl;

        cout << "1.- 🏨 Hospitales con Área de Salud Mental" << endl;
        cout << "2.- 👨‍👩‍👧‍👦 Centros de Atención Primaria en Salud Mental (COMUSAM/CCOMSAM)" << endl;
        cout << "3.- 🏢 Clínicas y Centros Privados de Psicoterapia" << endl;
        cout << "4.- 🎓 Centros Universitarios de Apoyo Psicológico" << endl;
        cout << "5.- 🤝 Organizaciones y Asociaciones Civiles" << endl;
        cout << "6.- 🚪 Salir del menú" << endl << endl;

        opcionMenu = obtenerEntradaNumerica<int>("Ingresa tu opción: ", 1, 6);
            system("color 0B"); // Color azul claro

            switch (opcionMenu)
            {
            case 1:
                cout << "## 🏨✨ Hospitales con Área de Salud Mental (Veracruz y zonas cercanas):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Hospital Regional de Alta Especialidad de Veracruz** 🏥🚑🌟" << endl;
                cout << " Descripción: Es un hospital de referencia para la zona conurbada. Su departamento de Psiquiatría ofrece evaluación, diagnóstico y tratamiento de diversos trastornos mentales. Es un recurso vital para emergencias psiquiátricas y estabilización de crisis agudas, incluyendo un área de internamiento para pacientes que lo requieran. 🚨🛌" << endl;
                cout << " Ubicación: Av. 20 de Noviembre #1072, Col. Centro, Veracruz, Ver. 📍🗺️" << endl;
                cout << " Servicios: Hospitalización psiquiátrica (aguda y de corta estancia), consulta externa de psiquiatría, interconsultas a otras especialidades del hospital, manejo de crisis y urgencias psiquiátricas, psicofarmacología. 🩺💬💊" << endl;
                cout << " Población: Adultos. Atención de urgencias psiquiátricas y referencias de otros niveles de atención. 🧑‍🤝‍🧑👤" << endl;
                cout << " Consideraciones: Para acceso a consulta externa, generalmente se requiere referencia. Para urgencias, la atención es inmediata si se considera una emergencia. Es una institución de carácter público. ✍️➡️🆓" << endl << endl;

                cout << "- **Hospital de Salud Mental de Orizaba (Dr. Víctor Manuel Concha Vásquez)** 🧠🌳🌟" << endl;
                cout << " Descripción: El principal hospital psiquiátrico del estado de Veracruz, especializado en la atención de trastornos mentales complejos y crónicos. Ofrece programas de rehabilitación y reintegración social, además de la atención médica y terapéutica con enfoques a largo plazo. 🌱🧘‍♀️" << endl;
                cout << " Ubicación: Carretera Federal Fortín-Orizaba km 2.5, Colonia Ferrer Guardia, Orizaba, Ver. (confirmar dirección exacta). 📍🗺️🧐" << endl;
                cout << " Servicios: Hospitalización de media y larga estancia, consulta externa de psiquiatría y psicología, farmacoterapia, terapia ocupacional, terapia de grupo, rehabilitación psicosocial, apoyo familiar, programas de desintoxicación y manejo de adicciones con comorbilidad psiquiátrica. 🛌🗣️👨‍👩‍👧‍👦💉" << endl;
                cout << " Población: Adolescentes y adultos con trastornos mentales graves o persistentes. También atiende casos de pacientes con adicciones y problemas de salud mental. 🧑‍🤝‍🧑 किशोर🧑" << endl;
                cout << " Consideraciones: Es un hospital estatal. Los procesos de ingreso pueden requerir evaluación previa o derivación de otros centros de salud. Tienen un enfoque integral. 📄➡️ holistic" << endl << endl; // Nota: 'holistic' no es un emoji. Mantengo el texto original.

                cout << "- **Hospitales Generales del IMSS, ISSSTE, PEMEX (Veracruz/Boca del Río)** 👨‍⚕️👩‍⚕️📋" << endl;
                cout << " Descripción: Estos hospitales, dirigidos a derechohabientes de sus respectivas instituciones, cuentan con servicios de salud mental generalmente a través de sus departamentos de medicina interna o especialidades. La atención psiquiátrica suele ser para interconsultas (pacientes ya hospitalizados) o para casos referidos dentro de su propio sistema de salud. En algunos casos, pueden tener clínicas de salud mental ambulatorias. 🏥💼🩺" << endl;
                cout << " Ubicación: Varía según la institución. Ej. Hospital General de Zona No. 71 del IMSS (Díaz Mirón), Hospital de Alta Especialidad del ISSSTE (Av. Cuauhtémoc), Hospital Regional de PEMEX (Boca del Río). 📍🌐" << endl;
                cout << " Servicios: Interconsulta psiquiátrica para pacientes internados, valoración psiquiátrica inicial, medicación, y en algunos casos, referencia a Unidades de Medicina Familiar (UMF) para seguimiento, o a servicios especializados propios de la institución. 🗣️💊➡️" << endl;
                cout << " Población: Derechohabientes de cada institución. 💳👥" << endl;
                cout << " Consideraciones: La atención está ligada a la afiliación. Es fundamental acudir primero a la Unidad de Medicina Familiar (UMF) o clínica de adscripción para una derivación al servicio de psiquiatría. 📝✅" << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;

            case 2:
                cout << "## 👨‍👩‍👧‍👦🏡 Centros de Atención Primaria en Salud Mental (COMUSAM/CCOMSAM):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Centros Comunitarios de Salud Mental y Adicciones (CECOSAMA / CCOMSAM)** 🏘️🤝🌟" << endl;
                cout << " Descripción: Son unidades ambulatorias fundamentales de la Secretaría de Salud en Veracruz que ofrecen atención psicológica, psiquiátrica (con disponibilidad variable de especialistas), de trabajo social y enfermería para trastornos mentales comunes (ansiedad, depresión leve a moderada), problemas de conducta y adicciones. Se enfocan en la prevención, detección temprana y rehabilitación comunitaria, siendo un primer contacto accesible. 🗣️🧠🌿" << endl;
                cout << " Ubicación en Veracruz: Existen varios. Por ejemplo, en la Colonia Centro, Colonia Norte, y otras colonias con alta densidad poblacional. Es importante buscar el más cercano a tu domicilio. 📍🗺️🏡" << endl;
                cout << " Servicios: Consulta externa psicológica (individual, familiar, grupal), psicoterapia breve, orientación familiar, detección temprana de trastornos, programas de prevención de adicciones, talleres psicoeducativos, y referencia a niveles de atención especializados (hospitalarios o psiquiátricos) cuando el caso lo amerita. Algunos cuentan con psiquiatra para valoración y seguimiento farmacológico. 💬🧑‍🤝‍🧑🚫💊" << endl;
                cout << " Población: Niños, adolescentes, adultos y adultos mayores. Son de acceso público y gratuito, buscando la integración comunitaria de la salud mental. 👶🧑‍🦱👴👵🆓" << endl;
                cout << " Consideraciones: Generalmente no requieren referencia médica para la primera consulta. Son un excelente punto de partida para cualquier persona que busque apoyo inicial y no cuente con otros medios. ✅🚀" << endl << endl;

                cout << "- **CAPASITS / SARE (Centros de Atención Integral a Personas con VIH/SIDA y Salud Reproductiva)** 🛡️❤️‍🩹🌈" << endl;
                cout << " Descripción: Aunque su misión principal es la atención a personas con VIH/SIDA e Infecciones de Transmisión Sexual (ITS), estos centros reconocen la estrecha relación entre la salud física y mental. Por ello, incluyen servicios de apoyo psicológico y, en ocasiones, psiquiátrico como parte integral de sus servicios, brindando un espacio de confidencialidad, comprensión y libre de estigma. 🤝🔒" << endl;
                cout << " Ubicación: En Veracruz, suelen estar ubicados en la Av. 20 de Noviembre #1063, Col. Centro, o direcciones similares. (Verificar dirección exacta y horarios). 📍⏰" << endl;
                cout << " Servicios: Asesoramiento psicológico, psicoterapia individual, apoyo a la adherencia al tratamiento antirretroviral, manejo del estigma, intervención en crisis, y en algunos casos, atención psiquiátrica de enlace para condiciones relacionadas. 🗣️💊🫂" << endl;
                cout << " Población: Personas que viven con VIH/SIDA y sus familiares, así como población en riesgo o interesada en salud sexual y reproductiva. El apoyo psicológico es un pilar para la calidad de vida de sus usuarios. 🧑‍🤝‍🧑💞" << endl;
                cout << " Consideraciones: Ofrecen un servicio altamente especializado y sensible a las necesidades de su población objetivo. El acceso es gratuito y confidencial. 💯🔐" << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;

            case 3:
                cout << "## 🏢💼✨ Clínicas y Centros Privados de Psicoterapia y Psiquiatría (Veracruz):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Asociación Libre (Psicólogos)** 🗣️🛋️🧠" << endl;
                cout << " Descripción: Un reconocido centro de psicoterapia con un equipo de profesionales con diversas especialidades y enfoques terapéuticos. Se caracterizan por ofrecer un espacio de diálogo abierto y constructivo para explorar y resolver problemáticas emocionales. Atienden un amplio rango de edades y situaciones. 💬🧐🌈" << endl;
                cout << " Ubicación: Colonia Reforma, Veracruz, Ver. (Se recomienda buscar en línea para la dirección exacta y agendar cita). 📍🌐🗓️" << endl;
                cout << " Servicios: Psicoterapia individual para adolescentes y adultos, terapia de pareja, terapia familiar, tratamiento especializado en depresión, ansiedad, trastornos de la personalidad, duelo, trauma psicológico, fobias, estrés, y programas de desarrollo personal. Ofrecen diferentes modalidades de terapia para adaptarse al paciente. 🧑‍🤝‍🧑💔💡" << endl;
                cout << " Enfoques: Psicoterapia Gestalt, Terapia Cognitivo-Conductual (TCC), Terapia Humanista, Psicoterapia Psicodinámica, entre otros (es importante consultar con el centro sus enfoques específicos). 🧩📜" << endl;
                cout << " Contacto: Buscar 'Asociación Libre Veracruz Psicólogos' en Google, suelen tener sitio web o perfiles en directorios especializados. Es necesario agendar cita previa. 📞💻🗓️" << endl << endl;

                cout << "- **Centro de Salud Emocional (Veracruz)** ❤️‍🩹💖🌟" << endl;
                cout << " Descripción: Un espacio dedicado al bienestar emocional que ofrece servicios psicológicos especializados con un enfoque integral y moderno. Se distinguen por su profunda especialización en terapia de pareja y sexología, además de la atención individual para diversas problemáticas. 💏🏳️‍🌈" << endl;
                cout << " Ubicación: Av. Fernando de Magallanes 252 Departamento 2 Col. Reforma, Veracruz, Ver. 📍🗺️" << endl;
                cout << " Servicios: Terapia individual para adultos y adolescentes, terapia de pareja, sexología (abordaje de disfunciones sexuales, orientación sobre identidad de género y diversidad sexual), talleres psicoeducativos y grupos terapéuticos sobre temas específicos. 🗣️💑⚧️📚" << endl;
                cout << " Enfoques: Generalmente enfoques integrativos que combinan elementos de diversas corrientes psicológicas para crear un plan de tratamiento personalizado. 💡🔄" << endl;
                cout << " Contacto: Buscar 'Centro de Salud Emocional Veracruz' en línea para conocer su oferta de servicios y agendar una primera sesión. 🌐📞🗓️" << endl << endl;

                cout << "- **Consultorios y Clínicas Privadas de Psiquiatría (Veracruz)** 🧑‍⚕️🧠💊" << endl;
                cout << " Descripción: En Veracruz, hay psiquiatras privados que ofrecen atención médica especializada para trastornos mentales. Ellos pueden realizar diagnósticos, prescribir y ajustar medicación (farmacoterapia), y en muchos casos, combinar esto con psicoterapia. Son cruciales para el manejo de condiciones que requieren intervención farmacológica. 🩺📈" << endl;
                cout << " Ubicación: Diversas zonas de Veracruz y Boca del Río. Muchos tienen consultorios en zonas céntricas o en complejos médicos. 📍🏢" << endl;
                cout << " Servicios: Evaluación psiquiátrica completa, diagnóstico y tratamiento de trastornos como depresión mayor, trastorno bipolar, esquizofrenia, trastornos de ansiedad graves, TOC, TDAH en adultos, etc. Manejo farmacológico, y en algunos casos, psicoterapia de apoyo o derivación a psicólogos. 📋💊🗣️" << endl;
                cout << " Contacto: Se recomienda usar directorios especializados como Doctoralia, buscar en Google Maps 'psiquiatra Veracruz', o pedir recomendaciones a médicos de confianza. Es indispensable agendar cita. 📱🌐🗓️" << endl;
                cout << " Consideraciones: Los costos pueden ser significativos, pero la inversión en la salud mental es fundamental. Algunos psiquiatras también ofrecen teleconsultas. 💰💻✅" << endl << endl;

                cout << "- **Centro Psicológico Integral 'Armonía' (Ejemplo Ficticio de Centro con Diversas Terapias)** 💫🌟🌈" << endl;
                cout << " Descripción: (Ejemplo de un centro que podría existir). Un centro que ofrece una variedad de terapias y especialidades en un solo lugar, buscando la comodidad del paciente. Podría incluir psicología clínica, neuropsicología, terapia familiar y coaching. 🛋️👨‍👩‍👧‍👦📈" << endl;
                cout << " Ubicación: Av. Juan Pablo II #XXX, Boca del Río, Ver. (Ejemplo). 📍🗺️" << endl;
                cout << " Servicios: Psicoterapia para niños, adolescentes y adultos, neuropsicología (evaluación y rehabilitación), terapia de lenguaje, terapia de juego, coaching personal y ejecutivo, talleres de desarrollo de habilidades sociales. 👶🧑‍🦱👴🗣️🧩🎮" << endl;
                cout << " Contacto: Buscar centros con nombres similares en Veracruz o Boca del Río y verificar sus servicios. 🌐📞" << endl;
                cout << " Notas: Estos centros buscan ofrecer un abordaje más holístico y conveniente. ✨🚀" << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;

            case 4:
                cout << "## 🎓📚 Centros Universitarios de Apoyo Psicológico (Veracruz y Xalapa):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Clínicas de la Facultad de Psicología (Universidad Veracruzana - UV)** 🧑‍🎓🧠🌟" << endl;
                cout << " Descripción: La UV, a través de su Facultad de Psicología (principalmente con sus clínicas en Xalapa, pero con posible vinculación en Veracruz/Boca del Río), opera clínicas universitarias. Estos centros son fundamentales para la formación de futuros profesionales de la psicología y, al mismo tiempo, brindan servicios de psicoterapia y evaluación psicológica a la comunidad a costos muy accesibles o, en ocasiones, de forma gratuita. 📚💡🆓" << endl;
                cout << " Ubicación: La Clínica de Atención Psicológica de la Facultad de Psicología de la UV está en Xalapa (Av. Dr. Luis Castelazo Ayala s/n, Col. Industrial Las Ánimas). En Veracruz, es necesario verificar directamente con la Facultad de Psicología del Campus Mocambo si ofrecen servicios directos al público o solo prácticas académicas. 📍🗺️🧐" << endl;
                cout << " Servicios: Psicoterapia individual para niños, adolescentes y adultos; terapia familiar y de pareja; evaluación psicológica (diagnóstico, vocacional, neuropsicológica); grupos terapéuticos y talleres psicoeducativos. La atención es supervisada por docentes con amplia experiencia. 🗣️👨‍👩‍👧‍👦📊🎓" << endl;
                cout << " Población: Abierta al público en general, con costos simbólicos o ajustados a estudios socioeconómicos. 👥💰" << endl;
                cout << " Contacto: Buscar 'Clínica de Psicología UV Xalapa' o 'Facultad de Psicología UV Veracruz' para obtener información de contacto, horarios de atención y proceso de ingreso. 📞🌐⏰" << endl;
                cout << " Notas: Son una excelente opción para recibir atención de calidad a un costo reducido, ideal para quienes tienen limitaciones económicas. ⭐👍" << endl << endl;

                cout << "- **Servicios Psicológicos de Universidades Privadas (Veracruz)** 🏫🤝🌟" << endl;
                cout << " Descripción: Varias universidades privadas en Veracruz con programas de psicología (ej. Universidad Cristóbal Colón, Universidad del Valle de México - UVM, Instituto de Estudios Superiores de Veracruz - IESVER) también cuentan con sus propios centros de atención psicológica. Estos centros cumplen una doble función: campo de práctica para los estudiantes de psicología y recurso de apoyo para la comunidad, ofreciendo servicios a tarifas accesibles. 🎓🧑‍🎓💸" << endl;
                cout << " Ubicación: Depende de cada universidad. Se encuentran en sus respectivos campus o en clínicas afiliadas. (Ej. Campus de la Universidad Cristóbal Colón en Boca del Río). 📍🗺️" << endl;
                cout << " Servicios: Diversos tipos de psicoterapia (individual, pareja, familiar), consejería, evaluaciones psicológicas (ej. rendimiento académico, personalidad), talleres y programas de intervención. 🗣️🧑‍🤝‍🧑📊📚" << endl;
                cout << " Población: Estudiantes de la universidad, personal y público en general, con tarifas diferenciadas. 👥💲" << endl;
                cout << " Contacto: Investigar en los sitios web oficiales de cada universidad o contactar directamente a sus facultades de psicología para conocer los servicios que ofrecen y los requisitos para acceder a ellos. 🌐📞" << endl << " Notas: Otra alternativa para atención psicológica de calidad a precios moderados, con la supervisión académica de por medio. ✅👍" << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;

            case 5:
                cout << "## 🤝❤️ Organizaciones y Asociaciones Civiles sin Fines de Lucro (Veracruz y Nacionales):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Cáritas de Veracruz (Programas de Apoyo Social y Psicológico)** 🙏💖🌟" << endl;
                cout << " Descripción: Cáritas es una organización humanitaria de la Iglesia Católica que ofrece asistencia social integral. Sus programas a menudo incluyen apoyo psicológico o consejería, especialmente dirigidos a poblaciones vulnerables, personas en situación de crisis, o aquellos que enfrentan dificultades socioeconómicas que impactan su salud mental. Su enfoque es la caridad y el servicio a la comunidad. 🫂🤲" << endl;
                cout << " Ubicación: Av. 16 de Septiembre No. 1317, Col. Centro, Veracruz, Ver. (Sujeto a confirmación de la dirección exacta y servicios actuales). 📍🗺️🧐" << endl;
                cout << " Servicios: Asistencia alimentaria, orientación legal, programas de desarrollo comunitario, y en muchos casos, servicios de escucha, consejería emocional o referencia a psicólogos con los que tienen convenio, a bajo costo o sin costo. Pueden tener talleres de resiliencia. 🍎⚖️🗣️💪" << endl;
                cout << " Población: Abierto a la comunidad, con un enfoque especial en grupos vulnerables y personas en necesidad. 🧑‍🤝‍🧑🆘" << endl;
                cout << " Contacto: Se recomienda contactar directamente a Cáritas Veracruz para conocer sus programas actuales y si ofrecen servicios psicológicos directos o referencias. 📞🌐" << endl << endl;

                cout << "- **Grupos de Autoayuda (Ej. Alcohólicos Anónimos, Narcóticos Anónimos, Al-Anon, Grupos para el Duelo)** 🫂✨🗣️" << endl;
                cout << " Descripción: Son comunidades de apoyo entre pares donde personas que comparten una misma problemática (adicciones, codependencia, duelo, ansiedad, etc.) se reúnen para compartir experiencias, fortalecerse mutuamente y aprender estrategias de afrontamiento. No son dirigidos por profesionales de la salud mental, pero son un recurso invaluable de apoyo emocional y comprensión. 🤝🧠❤️‍🩹" << endl;
                cout << " Ubicación: Múltiples ubicaciones en Veracruz y en todo el país. Muchos grupos también han adoptado reuniones en línea, lo que amplía su accesibilidad. 📍🌐💻" << endl;
                cout << " Servicios: Apoyo mutuo entre pares, intercambio de vivencias, desarrollo de herramientas de afrontamiento basadas en la experiencia compartida, un espacio seguro para expresar emociones y sentirse comprendido. 🗣️🤲🔒" << endl;
                cout << " Población: Personas que enfrentan una problemática específica (adicciones, duelo, codependencia, etc.) y buscan el apoyo de otros en situaciones similares. 🧑‍🤝‍🧑💔🚭" << endl;
                cout << " Contacto: Buscar 'Alcohólicos Anónimos Veracruz', 'Narcóticos Anónimos Veracruz', 'Grupos de apoyo para el duelo Veracruz' en línea. Las reuniones suelen ser gratuitas y confidenciales. 🌐📞🆓" << endl;
                cout << " Notas: Complemento ideal a la terapia profesional. Ofrecen un sentido de pertenencia y validación. ✅👍" << endl << endl;

                cout << "- **Cruz Roja Mexicana (Delegación Veracruz) - Apoyo Psicosocial** 🚑🚨❤️‍🩹" << endl;
                cout << " Descripción: Además de su reconocida labor en emergencias médicas y desastres naturales, la Cruz Roja Mexicana a menudo cuenta con equipos de apoyo psicosocial. Estos equipos están capacitados para brindar primeros auxilios psicológicos y contención emocional a personas afectadas por eventos traumáticos o situaciones de crisis. 🆘🩹" << endl;
                cout << " Ubicación: Díaz Mirón S/N Esq. Juan Soto, Col. Centro, Veracruz, Ver. (Sujeto a confirmación de la dirección exacta y disponibilidad de servicios). 📍🗺️🧐" << endl;
                cout << " Servicios: Primeros auxilios psicológicos en campo, contención emocional, apoyo en situaciones de crisis, referencia a otros servicios de salud mental, y en algunos casos, talleres de preparación y resiliencia comunitaria. 🗣️🫂💪📚" << endl;
                cout << " Población: Personas afectadas por emergencias, desastres, o en situaciones de vulnerabilidad que requieran apoyo emocional inmediato. 🌊🌪️😢" << endl;
                cout << " Contacto: Consultar directamente a la delegación local de la Cruz Roja para conocer los servicios específicos de apoyo psicosocial que ofrecen. 📞🌐" << endl;
                cout << " Notas: Un recurso fundamental en momentos de necesidad urgente y situaciones de alto estrés. ⭐ lifeline" << endl << endl; // Nota: 'lifeline' no es un emoji. Mantengo el texto original.

                cout << "- **Fondo Unido / United Way México (Proyectos de Salud Mental)** 🤝💰🌟" << endl;
                cout << " Descripción: Aunque no son un centro de atención directa, Fondo Unido México (United Way) es una organización global que trabaja con socios locales para implementar proyectos en áreas como la educación, la estabilidad financiera y la salud. Es posible que apoyen iniciativas o programas de salud mental a través de alianzas con otras ONG en Veracruz o a nivel nacional. 🌎🇲🇽" << endl;
                cout << " Ubicación: A nivel nacional, con posibles proyectos en Veracruz a través de socios locales. 📍🌐" << endl;
                cout << " Servicios: Financiamiento y apoyo a proyectos de salud, incluyendo salud mental, a través de organizaciones aliadas. No ofrecen atención directa al público. 💲📈" << endl;
                cout << " Contacto: Visitar su sitio web oficial 'Fondo Unido México' para conocer sus proyectos y organizaciones aliadas en salud. 🌐📧" << endl;
                cout << " Notas: Para buscar recursos indirectos o alianzas. 💡🔗" << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;

            case 6: // Opción para salir del programa
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcionMenu != 6)
            {
                cout << "¿Quieres abandonar la sección de Centros de apoyo?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }

            } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menú anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcionMenu != 6);
}


/******************************************************
    Funciones para las opciones del menú principal
    By: Enrique López
******************************************************/

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
            system("color 0B"); // Color azul claro
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
   ___      _              __ _             _            
  /   \    | |     ___    / _` |    _ _    (_)    __ _   
  | - |    | |    / -_)   \__, |   | '_|   | |   / _` |  
  |_|_|   _|_|_   \___|   |___/   _|_|_   _|_|_  \__,_|  
_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 
)";
        cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
        cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << endl << "😀 La alegría es una emoción agradable de bienestar y placer." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "__________________________________________________________________________________________________" << endl;
            cout << "| 1.- 😁Alegria pura😁                                                                           |" << endl;
            cout << "| Es un poco más enérgica que la serenidad.                                                       |" << endl;
            cout << "| Hay un entusiasmo moderado, una sonrisa fácil y ganas de compartir el momento.                  |" << endl;
            cout << "|=================================================================================================|" << endl;
            cout << "| 2.- 🥰Amor💕                                                                                   |" << endl;
            cout << "| Sientes una profunda conexión emocional, afecto o cariño.                                       |" << endl;
            cout << "| Además de un sentimiento de seguridad en la relación con otra persona o incluso una pasión.     |" << endl;
            cout << "|=================================================================================================|" << endl;
            cout << "| 3.- 😊Optimismo😊                                                                              |" << endl;
            cout << "| Es una esperanza activa de que cosas buenas y hay entusiasmo por lo que suceda.                 |" << endl;
            cout << "| Causa una sensación de ilusión, expectativa positiva y alegría hacia el futuro.                 |" << endl;
            cout << "|=================================================================================================|" << endl;
            cout << "| 4.- 😌Placer😌                                                                                 |" << endl;
            cout << "| Es una alegría placentera, a menudo inesperada; mezcla de asombro y disfrute.                   |" << endl;
            cout << "| Suele expresarse con una sonrisa inesperada, una sorpresa grata, asombro o admiración.          |" << endl;
            cout << "|=================================================================================================|" << endl;
            cout << "| 5.- 😊Calma😊                                                                                  |" << endl;
            cout << "| Una sensación de paz interior, tranquilidad, equilibrio, a gusto, relajado, sin prisas.         |" << endl;
            cout << "|=================================================================================================|" << endl;
            cout << "| Respiración tranquila, mente clara, sensación de bienestar y pacibidad.                         |" << endl;
            cout << "|=================================================================================================|" << endl;
            cout << "| 6.- Volver al menu anterior 🔚                                                                 |" << endl;
            cout << "|_________________________________________________________________________________________________|" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de la emoción que sientes: ", 1, 6); // Reutilizando la función de validación
            system("cls");

            switch (opcSB)
            {
            case 1:
                terapiaAlegriaPura();
                break;
            case 2:
                terapiaAmor();
                break;
            case 3:
                terapiaOptimismo();
                break;
            case 4:
                terapiaPlacer();
                break;
            case 5:
                terapiaCalma();
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú principal?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu principal..." << endl;
        system("pause");
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
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
            system("color 0B"); // Color azul claro
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"( 
  ______     _      __                  
 /_  __/____(_)____/ /____  ____  ____ _
  / / / ___/ / ___/ __/ _ \/_  / / __ `/
 / / / /  / (__  ) /_/  __/ / /_/ /_/ / 
/_/ /_/  /_/____/\__/\___/ /___/\__,_/                                                                              
            )";
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << endl << "La tristeza es una emoción dolorosa que surge ante una pérdida, decepción o desilusión." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "=================================================================================================" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 1.- 😞Decepción😞                                                                              |"<< endl;
            cout << "| Surge cuando una expectativa o una esperanza no se cumple                                      |" << endl;
            cout << "| Sientes desilusión, frustración con tristeza o engaño por la realidad.                         |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 2.- 😫Remordimiento😫                                                                          |" << endl;
            cout << "| Sensación de de arrepentimiento profundo por haber causado daño o actuado de forma equivocada. |" << endl;
            cout << "| Sientes culpa o pesar en la conciencia, ansiedad y un deseo de deshacer lo hecho.              |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 3.- 😩Desesperación🤯                                                                          |" << endl;
            cout << "| Tristeza intensa y abrumadora donde se percibe que no hay salida, solución o esperanza         |" << endl;
            cout << "| Sentimiento de vacío, derrota, impotencia, falta total de energía, hambre y/o sueño            |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 4.- 😿Tristeza pura😿                                                                          |" << endl;
            cout << "| Un dolor emocional más evidente, puedes sentir ganas de llorar, baja energía y desinterés      |" << endl;
            cout << "| Ojos llorosos, voz apagada, tu cuerpo se encorva y quieres aislarte o ser consolado.           |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 5.- 😔Melancolía😔                                                                             |" << endl;
            cout << "| Es una tristeza leve, nostalgia, un suspiro frecuente o una leve opresión en el pecho.         |" << endl;
            cout << "| Piensas sobre el pasado, sientes que las cosas son grises, pero no hay desesperación.          |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 6.- Volver al menu principal🔚                                                                 |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "=================================================================================================" << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación
            system("cls");

            switch (opcSB)
            {
            case 1:
                terapiaDecepcion();
                break;
            case 2:
                terapiaRemordimiento();
                break;
            case 3:
                terapiaDesesperacion();
                break;
            case 4:
                terapiaTristesa();
                break;
            case 5:
                terapiaMelancolia();
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
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
            system("color 0B"); // Color azul claro
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
    __  ____          __    
   /  |/  (_)__  ____/ /___ 
  / /|_/ / / _ \/ __  / __ \
 / /  / / /  __/ /_/ / /_/ /
/_/  /_/_/\___/\__,_/\____/                                   
            )";
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << endl << "El miedo es una emoción que surge ante una amenaza o peligro." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "=================================================================================================" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 1.- 🚨Alarmado😨                                                                               |" << endl;
            cout << "| Reacción de susto o sobresalto por el miedo de algo inesperado percibido como peligroso.       |" << endl;
            cout << "| Tienes un sobresalto repentino, el corazón se acelera, tienes escalofríos y preocupación.      |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 2.- 😥Ansiedad😖                                                                               |" << endl;
            cout << "| Preocupación y nerviosismo constantes por eventos futuros inciertos o amenazantes              |" << endl;
            cout << "| Sientes unaa inquietud constante, tensión, dificultad para relajarse y pensamientos acelerados.|" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 3.- 🙇Sumiso🥹                                                                                 |" << endl;
            cout << "| Ceder o someterse a la autoridad o poder de otro, por temor a las consecuencias de no hacerlo. |" << endl;
            cout << "| Crees que así no habrá problemas, sientes obediencia, resignación y control                    |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 4.- 😰Temor puro😰                                                                             |" << endl;
            cout << "| Preocupación o anticipación de algo negativo, te sientes más tenso y más ancioso.              |" << endl;
            cout << "| Tienes pensamientos recurrentes sobre un problema y mayor dificultad para relajarte.           |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 5.- 🫨Inquietud🫨                                                                              |" << endl;
            cout << "| Una leve preocupación o anticipación de algo negativo, te sientes un poco tenso.               |" << endl;
            cout << "| Tienes pensamientos recurrentes sobre un posible problema y necesidad de controlar la situación|" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "| 6.- Volver al menu anterior🔚                                                                  |" << endl;
            cout << "|                                                                                                |" << endl;
            cout << "=================================================================================================" << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                terapiaAlarmado();
                break;
            case 2:
                terapiaAnsiedad();
                break;
            case 3:
                terapiaSumiso();
                break;
            case 4:
                terapiaTemor();
                break;
            case 5:
                terapiaInquietud();
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No)  ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
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
            system("color 0B"); // Color azul claro
             cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
    ____          
   /  _/________ _
   / // ___/ __ `/
 _/ // /  / /_/ / 
/___/_/   \__,_/                  
            )";
             cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << endl << "La ira es una emoción que surge cuando te sientes frustrado, injustamente tratado o amenazado." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 1.- 😒Desprecio😒                                                                             |" << endl;
            cout << "| Mezcla potente de enojo y repulsión hacia otra persona, grupo o situación.                     |" << endl;
            cout << "| Rechazo intenso, indignación moral y creer que el otro es menos                                |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 2.- 😠Agresión😠                                                                              |" << endl;
            cout << "| Es la ira canalizada hacia la acción, es el impulso de atacar, defenderse o dominar.           |" << endl;
            cout << "| Impulso de confrontar, hostilidad, tensión por liberar, ganas de defenderse y/o idear una pelea|" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 3.- 😤Dominio(Negativo)💪🏻                                                                     |" << endl;
            cout << "| Cuando la ira se combina con una fuerte confianza, sueles querer controlar una situación       |" << endl;
            cout << "| Hablas con autoridad, te niegas a seder, quieres el control de la situación e imponer.         |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 4.- 😡Furia😡                                                                                 |" << endl;
            cout << "| Un enojo explosivo y descontrolado, querer golpear, gritar o destruir.                         |" << endl;
            cout << "| Tensión extrema, dificultad para pensar claramente, impulsos agresivos y descontrol.           |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 5.- 🫤Molestia🫤                                                                              |" << endl;
            cout << "| Es una irritación leve o fastidio por algo, impaciencia, con ganas de que algo cambie o pare.  |" << endl;
            cout << "| Se representa en un ceño fruncido, apretar un poco la mandíbula, pensamientos de tu molesta.   |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 6.- Volver al menu principal🔚                                                                |" << endl;
            cout << "=================================================================================================" << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                terapiaDesprecio();
                break;
            case 2:
                terapiaAgresion();
                break;
            case 3:
                terapiaDominio();
                break;
            case 4:
                terapiaFuria();
                break;
            case 5:
                terapiaMolestia();
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
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
            system("color 0B"); // Color azul claro
             cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
    ___                  
   /   |  ______________ 
  / /| | / ___/ ___/ __ \
 / ___ |(__  ) /__/ /_/ /
/_/  |_/____/\___/\____/                         
            )";
             cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << endl << "El Asco/Desagrado es una emoción de aversión o rechazo hacia algo que percibimos como desagradable o tóxico." << endl << endl;
            cout << "🤓 Pero se puede manifestar en estas otras emociones:" << endl << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 1.- 😫Remordimiento😖                                                                         |" << endl;
            cout << "| Una tristeza que nace de sentir aversión por una acción propia o algo que hiciste.             |" << endl;
            cout << "| Piensas repetidamente en lo sucedido, sientes vergüenza, malestar contigo mismo/a y culpa.     |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 2.- 😒Desprecio😒                                                                             |" << endl;
            cout << "| Una mezcla de enojo y repulsión hacia otra persona, grupo o situación.                         |" << endl;
            cout << "| Rechazo intenso, condescendencia, indignación moral, evación y repulsión                       |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 3.- 😳Verguenza🫨                                                                             |" << endl;
            cout << "| Sientes que se ha cometido un error y ha sido expuesto de forma negativa                       |" << endl;
            cout << "| Alta Incomodidad, deseo de esconderse, sonrojo, mirada hacia abajo, voz baja y humillación.    |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 4.- 🤢Asco/Repugnancia🤢                                                                      |" << endl;
            cout << "| Es una aversión hacia algo, incluso con una sensación de náuse o querer alejarse.              |" << endl;
            cout << "| Quieres cerrar los ojos o taparse la nariz/boca, sudoración fría y repulsión extrema.          |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 5.- 🙄Desinterés🙄                                                                            |" << endl;
            cout << "| Es una sensación de falta de estimulación o de que algo no es interesante.                     |" << endl;
            cout << "| Se expresa en bostezos, dificultad para prestar atención y buscas distracción.                 |" << endl;
            cout << "=================================================================================================" << endl;
            cout << "| 6.- Volver al menu principal🔚                                                                |" << endl;
            cout << "=================================================================================================" << endl;
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 6); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:
                terapiaRemordimiento();
                break;
            case 2:
                terapiaAscoDesprecio();
                break;
            case 3:
                terapiaVerguenza();
                break;
            case 4:
                terapiaAsco();
                break;
            case 5:
                terapiaDesinteres();
                break;
            case 6:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "Si";
            if (opcSB != 6)
            {
                cout << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "Si" && opcExt != "si");
        cout << "Volviendo al menu anterior...";
    } while (opcExt != "Si" && opcExt != "si" && opcSB != 6);
}

// Funcion de descubrir la emoción
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
            system("color 0B"); // Color azul claro
             cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
    ____                       __                 __           ______                     _           
   / __ \___  ____________  __/ /_  ________     / /___  __   / ____/___ ___  ____  _____(_)___  ____ 
  / / / / _ \/ ___/ ___/ / / / __ \/ ___/ _ \   / __/ / / /  / __/ / __ `__ \/ __ \/ ___/ / __ \/ __ \
 / /_/ /  __(__  ) /__/ /_/ / /_/ / /  /  __/  / /_/ /_/ /  / /___/ / / / / / /_/ / /__/ / /_/ / / / /
/_____/\___/____/\___/\__,_/_.___/_/   \___/   \__/\__,_/  /_____/_/ /_/ /_/\____/\___/_/\____/_/ /_/ 
            )";
             cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;

            cout << endl << "Veamos que es lo que te sucede 🤓" << endl;
            cout << "Sientes algo como: " << endl << endl;
            cout << "1.- <<--😀 Alegría 😀-->>" << endl;
            cout << "Sientes una sensación de calma, paz interior o un bienestar tranquilo" << endl << endl;
            cout << "2.- <<--😞 Tristeza 😞-->>" << endl;
            cout << "Sientes una sensación de desánimo leve o una ligera desilusión" << endl
                 << "No es abrumador, posiblemente teines ganas de llorar o un vacío. " << endl << endl;
            cout << "3.- <<--😰 Miedo 😰-->>" << endl;
            cout << "Se siente como una preocupación ligera, nerviosismo o una inquietud sutil" << endl;
            cout << "Te sientes asustado, ansioso o temeroso ante una amenaza percibida." << endl << endl;
            cout << "4.- <<--😡 Ira-Rabia 😡-->>" << endl;
            cout << "Se siente como una irritación leve o una frustración menor, pero no es abrumador." << endl;
            cout << "Te sientes enojado, furioso o con rabia ante una ofensa u otra situación." << endl << endl;
            cout << "5.- <<--🤢 Asco/Disgusto 🤢-->>" << endl;
            cout << "Se siente como una indiferencia o desinterés hacia algo que ya no te atrae." << endl;
            cout << "Te sientes repugnado, con ganas de evitar o rechazar algo." << endl << endl;
            cout << "6.- <<--😵‍💫 No siento ninguna emoción 😵‍💫-->> " << endl << endl;
            cout << "7.- Regresar al menú principal 🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Ingresa el número de la emoción que sientes: ", 1, 7); // Reutilizando la función de validación

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
                noSientoNada();
                break;
            case 7:
                mensajeSatisfaccion();
                break;
            }
            opcExt = "No";
            if (opcSB != 7)
            {
                cout << endl << endl << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }

        } while (opcExt != "No" && opcExt != "no");
        cout << "Volviendo al menú principal...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 7);
}

// Funcion de apoyo profesional
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
            system("color 0B"); // Color azul claro
            // Menu principal
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
    ___                   __         ____             ____          _                   __
   /   | __  ____  ______/ /___ _   / __ \_________  / __/__  _____(_)___  ____  ____ _/ /
  / /| |/ / / / / / / __  / __ `/  / /_/ / ___/ __ \/ /_/ _ \/ ___/ / __ \/ __ \/ __ `/ / 
 / ___ / /_/ / /_/ / /_/ / /_/ /  / ____/ /  / /_/ / __/  __(__  ) / /_/ / / / / /_/ / /  
/_/  |_\__, /\__,_/\__,_/\__,_/  /_/   /_/   \____/_/  \___/____/_/\____/_/ /_/\__,_/_/   
      /____/                                                                              
            )";
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << endl << "🤓 Es valiente buscar apoyo profesional." << endl
                 << "😊 No soy un especialista, pero puedo ofrecerte algunas sugerencias para apoyarte:" << endl << endl;
            cout << "1. 🤔¿Por qué crees que la necesitas?🤔" << endl;
            cout << "2. 🤓Tipos de profesionales de la salud mental🧠" << endl;
            cout << "3. 🛜Búsqueda de recursos en línea🛜" << endl;
            cout << "4. 🩺Instituciones y centros de apoyo🪪" << endl;
            cout << "5. Volver al menú principal🔙" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Esperando tu respuesta: ", 1, 5); // Reutilizando la función de validación
            system("color 0B");                                                        // Color azul claro

            switch (opcSB)
            {
            case 1:
                terapiaApoyoProfesional();
                break;
            case 2:
                tiposDeProfecionales();
                break;
            case 3:
                recursosEnLinea();
                break;
            case 4:
                institucionesCentrosApoyo();
                break;
            case 5:
                mensajeSatisfaccion();
                break;
            }

            opcExt = "No";
            if (opcSB != 5)
            {
                cout << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Volviendo al menú principal...";
    } while (opcExt != "No" && opcExt != "no" && opcSB != 5);
}

// Funcion de información del asistente
void InformacionAsistente()
{
    int opc;
    string respFin;
    string opcExt;
    // Siclo Do-While externo para finalizar la calculadora básica
    do
    {
        // Siclo  Do-While  interno para repetir la calculadora básica
        do
        {
            system("cls");
            system("color 0B"); // Color azul claro
            // Menu principal
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
            cout << R"(
   ____     ___                        _                      __                 __  ___                                   
  /  _/__  / _/__  ______ _  ___ _____(_)__  ___    ___ ___  / /  _______   ___ / / / _ \_______  ___ ________ ___ _  ___ _
 _/ // _ \/ _/ _ \/ __/  ' \/ _ `/ __/ / _ \/ _ \  (_-</ _ \/ _ \/ __/ -_) / -_) / / ___/ __/ _ \/ _ `/ __/ _ `/  ' \/ _ `/
/___/_//_/_/ \___/_/ /_/_/_/\_,_/\__/_/\___/_//_/ /___/\___/_.__/_/  \__/  \__/_/ /_/  /_/  \___/\_, /_/  \_,_/_/_/_/\_,_/ 
                                                                                                /___/                      
            )";
            cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ " << endl;
            cout << "|______|______|______|______|______|______|______|______|" << endl << endl;
        cout << endl << "1. 🧠 Teoría Psicológica en la que fue basada.\n";
        cout << "2. 💻 Programadores que participaron.\n";
        cout << "3. 🌟 Descripción del Programa.\n";
        cout << "4. 📚 Fuentes Consultadas.\n";
        cout << "5. 🚪 Salir.\n"; 
        opc = obtenerEntradaNumerica<int>("🤓 Ingrese su opción: ", 1, 5); 

        system("cls"); // Limpia la pantalla antes de mostrar la información de la opción

        switch(opc)
        {
            case 1:
                cout << "\n--- 🧠 TEORÍA PSICOLÓGICA --- \n";
                cout << "Este programa se basó en la teoría de la rueda de PLUTCHIK, que dice lo siguiente:\n";
                cout << "La rueda de emociones de PLUTCHIK es un modelo psicológico desarrollado por ROBERT PLUTCHIK en 1980.\n";
                cout << "Organiza las emociones humanas de manera sistemática y visual. Este modelo es ampliamente utilizado en psicología, terapia y estudios del comportamiento.\n";
                cout << "\n--- 📊 ESTRUCTURA BÁSICA ---\n";
                cout << "La rueda identifica 8 emociones primarias organizadas en pares opuestos:\n";
                cout << "• ALEGRÍA 😊 vs TRISTEZA 😢\n"; 
                cout << "• CONFIANZA 🤗 vs DISGUSTO 🤢\n"; 
                cout << "• MIEDO 😨 vs IRA 😡\n"; 
                cout << "• SORPRESA 😮 vs ANTICIPACIÓN 🧐\n"; 
                cout << "\n--- ✨ CARACTERÍSTICAS PRINCIPALES ---\n"; 
                cout << "INTENSIDAD EMOCIONAL: Cada emoción tiene diferentes niveles de intensidad, representados por tonalidades más intensas o suaves.\n";
                cout << "COMBINACIONES EMOCIONALES: Las emociones adyacentes se combinan para crear emociones complejas (ej. Alegría + Confianza = Amor).\n";
                cout << "REPRESENTACIÓN VISUAL: Se representa como una flor o rueda de colores, donde cada 'pétalo' representa una emoción primaria, con tonalidades más intensas hacia el centro y más suaves hacia el exterior.\n";
                cout << "\n--- 💡 APLICACIONES PRÁCTICAS ---\n"; 
                cout << "Este modelo se utiliza para ayudar a las personas a identificar y nombrar sus emociones con mayor precisión, lo cual es fundamental en terapia psicológica, inteligencia emocional y desarrollo personal. Nos permite entender mejor nuestras reacciones y las de los demás. 🤝\n"; // Handshake
                break;
                
            case 2:
                cout << "\n--- 🧑‍💻 PROGRAMADORES QUE PARTICIPARON ---\n";
                cout << "MAURICIO ALEJANDRO CANSECO CRISTERNA 🤫\n"; 
                cout << "ROXANA MAXIM HERNÁNDEZ GUERRERO 🚀\n"; 
                cout << "ENRIQUE ALBERTO LOPEZ BECERRA 🤓\n"; 
                cout << "DANIELA VARGAZ SOSA 🌸\n"; 
                cout << "AMERICA RAMIREZ GARCIA 🌟\n";
                break;
                
            case 3:
                cout << "\n--- 🎯 DESCRIPCIÓN DEL PROGRAMA ---\n";
                cout << "Este programa busca mejorar el estado de ánimo de las personas. Reconociendo que la mente es algo complejo de entender, este programa se enfoca en brindar una experiencia gratificante a todo individuo, sin importar su estado de ánimo inicial. El programa tiene varios aspectos que ayudarán desde saber cómo te sientes hasta qué hacer cuando estás en cierto estado de ánimo, incluyendo el acceso a lugares de apoyo. ¡Es una herramienta para tu bienestar emocional! ✨\n";
                break;

            case 4:
                cout << "\n--- 📚 FUENTES CONSULTADAS ---\n";
                cout << "Las fuentes que consultamos para la información que se presenta en el programa son:\n";
                cout << "\n## FUENTES PARA LA INFORMACIÓN SOBRE LA RUEDA DE PLUTCHIK:\n";
                cout << "• Google Scholar: Para artículos académicos sobre la rueda de Plutchik. (No es un link directo a un artículo específico, sino al buscador académico para el tema).\n";
                cout << "  🔗 https://scholar.google.com/scholar?q=rueda+de+las+emociones+plutchik\n";
                cout << "• Psicología y Mente: Portal de divulgación psicológica.\n";
                cout << "  🔗 https://psicologiaymente.com/psicologia/rueda-emociones-plutchik\n";
                cout << "• Mundo Psicólogos: Plataforma de recursos y artículos psicológicos.\n";
                cout << "  🔗 https://www.mundopsicologos.com/articulos/la-rueda-de-las-emociones-de-plutchik\n";
                cout << "\n## FUENTES CONSULTADAS PARA LOS LUGARES DE APOYO EMOCIONAL:\n";
                cout << "• Secretaría de Salud Federal (México): Fuente oficial de políticas y programas nacionales.\n";
                cout << "  🔗 Sitio Principal: https://www.gob.mx/salud\n";
                cout << "  Notas: Para sección de Salud Mental, busca dentro del portal 'Salud Mental' o 'Dirección General de Información en Salud'.\n";
                cout << "• Gobierno del Estado de Veracruz (Secretaría de Salud de Veracruz): Fuente de recursos de salud a nivel estatal.\n";
                cout << "  🔗 Sitio Principal: Busca 'Secretaría de Salud de Veracruz' en tu navegador (ej. https://ssaver.gob.mx/).\n";
                cout << "• Universidad Veracruzana (UV) - Facultades de Psicología/Medicina: Institución académica con clínicas universitarias.\n";
                cout << "  🔗 Busca 'Facultad de Psicología UV Xalapa' o 'Facultad de Psicología UV Veracruz' para sus sitios web y clínicas.\n";
                cout << "  Notas: Se basó en la información pública disponible de estas instituciones.\n";
                break;

            case 5:
                cout << endl;
                mensajeSatisfaccion();
                break;
        }
            opcExt = "No";
            if (opc != 5)
            {
                cout << endl << "¿🤓 Quieres seguir explorando?(Si/No) " << endl 
                << "Esperando tu  respuesta: ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Volviendo al menú principal...";
        system ("pause");
    } while (opcExt != "No" && opcExt != "no" && opc != 5);
}

int main()
{

    /*******************************************
        <<--Menú principal del programa-->>
    ********************************************/

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    bool continuarPrograma = true;
    int opcMN;
    string nombre, respFin;

    cout << endl << "<<--✨Bienvenido a tu asistente emocional✨-->>" << endl;
    cout << "¡Hola! 😁" << endl;
    cout << "Soy E.D.I.T.H. (Escucha De Ideas Terapéuticas Humanas)" << endl
         << "Como te llamas? " << endl;
    getline(cin, nombre);
    do
    {
        system("cls");
        system("color 0B"); // Color azul claro

        cout << endl << "Mucho gusto " << nombre << " 😄" << endl;
        cout << "Bienvenido a: " << endl;
        // Bucle Do-While para repetir el menu
        cout << " ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______" << endl;
        cout << "|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|" << endl;
        cout << R"(
 _ _    ______         ___         _      __             __          ______                     _                   __   _ _ 
( | )  /_  __/_  __   /   |  _____(_)____/ /____  ____  / /____     / ____/___ ___  ____  _____(_)___  ____  ____ _/ /  ( | )
|/|/    / / / / / /  / /| | / ___/ / ___/ __/ _ \/ __ \/ __/ _ \   / __/ / __ `__ \/ __ \/ ___/ / __ \/ __ \/ __ `/ /   |/|/ 
       / / / /_/ /  / ___ |(__  ) (__  ) /_/  __/ / / / /_/  __/  / /___/ / / / / / /_/ / /__/ / /_/ / / / / /_/ / /         
      /_/  \__,_/  /_/  |_/____/_/____/\__/\___/_/ /_/\__/\___/  /_____/_/ /_/ /_/\____/\___/_/\____/_/ /_/\__,_/_/           
)";
        cout << endl << " ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______" << endl;
        cout << "|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|______|" << endl << endl;
        cout << "Soy tu asistente emocional. ¿Cómo te sientes hoy? 😊 " << endl;
        cout << "Puedes elegir entre las siguientes opciones:" << endl;
        cout << "_________________________________________________" << endl;
        cout << "| 1.- Alegría 😀                                |" << endl;
        cout << "=================================================" << endl;
        cout << "| 2.- Tristeza 😞                               |" << endl;
        cout << "=================================================" << endl;
        cout << "| 3.- Miedo 😰                                  |" << endl;
        cout << "=================================================" << endl;
        cout << "| 4.- Ira 😡                                    |" << endl;
        cout << "=================================================" << endl;
        cout << "| 5.- Asco 🤢                                   |" << endl;
        cout << "=================================================" << endl;
        cout << "| 6.- ¿Qué es la emoción que siento? 🫠         |" << endl;
        cout << "=================================================" << endl;
        cout << "| 7.- Buscar apoyo o recursos profesionales 📚  |" << endl;
        cout << "=================================================" << endl;
        cout << "| 8.- Información sobre tu asistente 🔎         |" << endl;
        cout << "=================================================" << endl;
        cout << "| 9.- Salir del programa🚪                      |" << endl;
        cout << "=================================================" << endl;
        opcMN = obtenerEntradaNumerica<int>("= 🤓 Esperando tu emoción: ", 1, 9); // Reutilizando la función de validación
        cout << "______________________________________________________________________________________________________________________________" << endl;
        cout << "______________________________________________________________________________________________________________________________" << endl;
        system("color 0B");                                                      // Color azul claro
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

/*********************************************
    © Enrique López
***********************************************/