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

/**********************************************************
    Funciones para que el usuario descubra su emoción
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
            system("color 9"); // Color azul claro
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

// Funcion pra idenntificar el desgloce de la emocion de tristeza
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

// Funcion pra idenntificar el desgloce de la emocion de miedo
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

// Funcion pra idenntificar el desgloce de la emocion de ira
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

// Funcion pra idenntificar el desgloce de la emocion de asco
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
***********************************************************/
//Alegría
void terapiaAlegriaPura()
{
    string causa;
    int sensacion, acompanante, sensacionConAcompanante, otrasAcciones;

    system("cls");
    system("color 9");

    cout << endl << "¡Qué bonito que estés experimentando alegría! 😄 Cuéntame" << endl
         << "¿Qué te hizo sentir así hoy? ✨" << endl
         << "😊 Tu respuesta:" << endl << endl;
    getline(cin, causa);
    cout << endl << "¡Excelente! Me alegro mucho por ti 😊" << endl << endl
         << "¿Pero cómo te diste cuenta de que estabas alegre? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (sonrisa espontánea, ''mariposas'' en el estómago, ligereza, energía) 🦋" << endl
         << "2.- Por mis pensamientos (positivos, de optimismo, gratitud) 💡" << endl
         << "3.- Por mis acciones (cantar, bailar, querer compartir la noticia) 💃🎶" << endl
         << "4.- Sentí un cambio dentro de mi para bien (Me sentí repentinamente positivo y en bienestar) ✨😊" << endl << endl;
    sensacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "Es muy común sentirlo al presentar esta emoción, de hecho, se siente gratificante 🥰" << endl
         << "Me alegro por ti 🎉" << endl << endl
         << "¿Con quién compartiste ese momento? 🤝" << endl << endl;
    cout << "1.- Con un familiar cercano 👨‍👩‍👧‍👦" << endl
         << "2.- En familia 👨‍👩‍👧‍👦" << endl
         << "3.- Con mi pareja ❤️" << endl
         << "4.- Con amigas/amigos 👯‍♀️" << endl
         << "5.- Con mi mascota 🐾" << endl
         << "6.- Solo 🧘‍♀️" << endl << endl;
    acompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 6);
    system("cls");
    system("color 9");
    switch (acompanante)
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
        sensacionConAcompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionConAcompanante)
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
        sensacionConAcompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionConAcompanante)
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
        sensacionConAcompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionConAcompanante)
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
        sensacionConAcompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionConAcompanante)
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
        sensacionConAcompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
        switch (sensacionConAcompanante)
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
        sensacionConAcompanante = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
        switch (sensacionConAcompanante)
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
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras alegría en ello" << endl << endl;
    cout << "¿Cómo se siente tu cuerpo cuando estás alegre? ✨" << endl << endl
         << "1.- Con ligereza 🎈" << endl
         << "2.- Con energía ⚡" << endl
         << "3.- Con sensaciones específicas en el pecho, cara, etc. 😊" << endl
         << "4.- Todas las anteriores y más 🥳" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente la alegría en ti! 😌" << endl
         << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause");
    system("cls");

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos felices? 🧠💖" << endl << endl
         << "1.- Momentos clave de la vida (graduaciones, bodas, nacimientos) 🎓💍👶" << endl
         << "2.- Logros personales 🏅" << endl
         << "3.- Momentos sencillos de la vida 🍃" << endl
         << "4.- Alguna película, canción, lectura, etc. 🎬🎵📚" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos! 💫" << endl
         << "😊 Ya sean grandes hitos o pequeños instantes, todos contribuyen a nuestra historia de felicidad." << endl << endl;

    cout << "¿Sientes que te permites disfrutar plenamente la alegría o a veces te la limitas? 🤔" << endl << endl
         << "1.- Sí, la disfruto sin reservas 🎉" << endl
         << "2.- No me lo permito por algún motivo 😔" << endl
         << "3.- Me cuesta disfrutarla del todo 😕" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    if (otrasAcciones == 2 || otrasAcciones == 3)
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

    cout << endl << "🤗 Ha sido un gusto charlar contigo sobre la alegría y todo lo que la rodea" << endl
         << "😄 Recuerda que permitirte sentir y disfrutar cada momento es clave para tu bienestar" << endl
         << "😊 ¡Te deseo mucha felicidad y, si necesitas algo más, ya sabes dónde encontrarme!" << endl
         << "Hasta la próxima. 👋😊" << endl;
}

void terapiaAmor()
{
    string causa;
    int sensacion, interaccion, profundidadEmocional, reflexionesAmor;

    cout << endl << "¡Hola! Es un placer que me acompañes hoy. ✨ Hablemos del amor, una emoción tan poderosa." << endl
         << "¿Podrías compartirme algo que te haya causado la emoción del amor recientemente, o incluso un recuerdo que atesores? 🥰" << endl
         << "💖 Tu respuesta:" << endl << endl;
    getline(cin, causa);
    cout << endl << "¡Gracias por compartir eso tan valioso! Es hermoso ver cómo el amor se manifiesta en tu vida. 😊" << endl << endl
         << "Cuando sentiste esa emoción de amor, ¿cómo la notaste principalmente? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (una calidez en el pecho, 'mariposas' en el estómago, una sonrisa incontrolable). 🦋" << endl
         << "2.- Por mis pensamientos (optimistas, de gratitud, de conexión profunda con alguien o algo). 💡" << endl
         << "3.- Por mis acciones o el impulso de hacer algo (abrazar, cuidar, expresar afecto, querer compartirlo). 🫂🥂" << endl
         << "4.- Sentí un bienestar general y una profunda paz interior, una expansión en mi ser. ✨💖" << endl << endl;
    sensacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    cout << endl << "Es fascinante cómo el amor se manifiesta en nosotros. ¡Qué alegría que lo experimentes así! 🥰" << endl
         << "Me encanta que te permitas sentirlo. 🎉" << endl << endl
         << "¿Con quien estabas o quien te compañaba en ese momento? 🤝" << endl << endl;
    cout << "1.- Fue con mi pareja, un momento de profunda conexión. ❤️" << endl
         << "2.- Fue con un familiar, sentí un amor incondicional y reconfortante. 👨‍👩‍👧‍👦" << endl
         << "3.- Fue con amigos, un sentimiento de hermandad y apoyo mutuo. 👯‍♀️" << endl
         << "4.- Fue un amor más general (hacia la vida, la naturaleza, una pasión personal) o lo sentí a solas. 🧘‍♀️🌳" << endl << endl;
    interaccion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccion)
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
        profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se identifique contigo: ", 1, 4);
        switch (profundidadEmocional)
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
        profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te reconforta: ", 1, 4);
        switch (profundidadEmocional)
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
        profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más valoras: ", 1, 4);
        switch (profundidadEmocional)
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
        profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te identifique: ", 1, 4);
        switch (profundidadEmocional)
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

    cout << endl << "🤗 Ha sido un honor acompañarte en esta pequeña exploración sobre el amor en tu vida." << endl
         << "😄 Recuerda que el amor, en todas sus formas, es una fuerza vital que nos enriquece y nos impulsa a crecer." << endl
         << "😊 ¡Valora cada momento, cada conexión y cada sentimiento que te traiga el amor!" << endl
         << "Hasta la próxima. 👋😊" << endl;
}

void terapiaOptimismo()
{
    string causa;
    int sensacion, interaccion, profundidadEmocional, otrasAcciones;

    cout << endl << "¡Hola! Es genial que estés aquí para explorar el optimismo ✨" << endl
              << "¿Podrías compartirme lo que te hizo sentir optimismo recientemente o realmente esperanzado/a? 😊" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causa);
    cout << endl << "¡Gracias por compartirlo! Es inspirador ver cómo el optimismo se manifiesta en tu vida. 😄" << endl << endl
              << "Cuando sentiste esa emoción, ¿Cómo supiste o persiviste que era optimismo? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (ligereza, más energía, una sensación de apertura o expansión). 🦋" << endl
              << "2.- Por mis pensamientos (positivos sobre el futuro, de que las cosas saldrán bien, oportunidades). 💡" << endl
              << "3.- Por mis acciones o el impulso de hacer algo (planificar, tomar iniciativas, sonreír más, hablar con entusiasmo). 🚀" << endl
              << "4.- Sentí una certeza interna de que todo iba a mejorar, una claridad mental. ✨🧘‍♀️" << endl 
              << "5.- Todas las anteriores e inluso puede que más 😅" << endl << endl;
    sensacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 5);
    cout << endl << "Es maravilloso cómo el optimismo nos logra impulsar. ¡Qué bien que lo experimentes así! 😊" << endl
              << "Es una emoción muy valiosa. 🎉" << endl << endl
              << "¿Con quién estabas cuando te sentiste optimista?🤝" << endl << endl;
    cout << "1.- Estaba con mi pareja. ❤️" << endl
              << "2.- Estaba con un familiar cercano. 👨‍👩‍👧‍👦" << endl
              << "3.- Estaba con mis amigos. 👯‍♀️" << endl
              << "4.- Estaba a solas, disfrutando de mi propia reflexión o logro. 🧘‍♀️" << endl
              << "5.- Estaba en un entorno público (trabajo, evento, ciudad). 🏢🌳" << endl << endl;
    interaccion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5);
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccion) {
        case 1:
            cout << endl << endl << "¡Qué lindo! Compartir el optimismo con tu pareja puede fortalecer aún más la conexión. ❤️‍🔥" << endl
                      << "Me imagino que su presencia o palabras hicieron el momento aún más especial. ✨" << endl << endl
                      << "¿Cómo crees que su compañía influyó en tu optimismo en ese momento? 🤔" << endl << endl
                      << "1.- Su apoyo incondicional me dio más confianza. 🫂" << endl
                      << "2.- Su visión positiva de la situación me inspiró. 💡" << endl
                      << "3.- El simple hecho de compartir ese momento me hizo sentir más fuerte. 💪" << endl
                      << "4.- Juntos, nos sentimos invencibles ante cualquier desafío. 🚀" << endl << endl;
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más se relacione contigo: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapta a tu caso: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más te identifique: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a tu sentir: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu experiencia: ", 1, 4);
            switch (profundidadEmocional) {
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
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras optimismo en estas áreas de tu vida." << endl << endl;

    cout << "¿Cómo se siente tu cuerpo cuando estás optimista? ✨" << endl << endl
              << "1.- Con ligereza y una sensación de poder volar. 🎈" << endl
              << "2.- Con energía renovada y motivación para actuar. ⚡" << endl
              << "3.- Con una sensación de apertura en el pecho y una sonrisa fácil. 😊" << endl
              << "4.- Todas las anteriores y una sensación general de bienestar. 🥳" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente el optimismo en ti! 😌" << endl
              << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause"); // Pausa la consola, espera la entrada del usuario
    system("cls");   // Limpia la pantalla de la consola

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos en los que te sentiste muy optimista? 🧠💖" << endl << endl
              << "1.- Momentos en los que superé un gran desafío. ⛰️" << endl
              << "2.- Logros personales que me abrieron nuevas puertas. 🏅" << endl
              << "3.- Momentos sencillos en los que sentí una gran esperanza o fe. 🍃" << endl
              << "4.- Alguna historia, película o canción que me inspiró a ser optimista. 🎬🎵📚" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos llenos de optimismo! 💫" << endl
              << "😊 Ya sean grandes hitos o pequeños instantes, todos contribuyen a tu capacidad de ver lo positivo." << endl << endl;

    cout << "¿Sientes que te permites ser optimista plenamente o a veces te lo limitas? 🤔" << endl << endl
              << "1.- Sí, me permito sentir el optimismo sin reservas. 🎉" << endl
              << "2.- No me lo permito por algún motivo (miedo a la decepción, no querer 'gafar'). 😔" << endl
              << "3.- Me cuesta ser optimista del todo, hay algo que me frena. 😕" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 3);
    if (otrasAcciones == 2 || otrasAcciones == 3) {
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
    int influenciaOptimismo = obtenerEntradaNumerica<int>("Selecciona la opción que más se identifique contigo: ", 1, 4);
    cout << endl << "¡Qué hermoso! El optimismo es una fuerza poderosa que no solo te beneficia a ti, sino que también puede ser un faro para los demás. ✨" << endl << endl;

    cout << "¿Hay algún recurso (libro, podcast, persona) que te ayude a mantener o fortalecer tu optimismo? 📚🎧👥" << endl << endl
              << "1.- Un libro o material de crecimiento personal que me inspira. 📖" << endl
              << "2.- Un podcast o charlas que me brindan nuevas perspectivas positivas. 🎙️" << endl
              << "3.- Una persona específica que siempre me anima y me impulsa hacia el optimismo. 💖" << endl
              << "4.- Actividades como la meditación o el mindfulness que me ayudan a centrarme en lo positivo. 🧘‍♀️" << endl 
              << "5.- Yo solo 😁" << endl << endl;
    int recursoOptimismo = obtenerEntradaNumerica<int>("Selecciona el recurso que más te apoya: ", 1, 4);
    cout << endl << "¡Qué valioso! Identificarlo y usarlo es una estrategia inteligente para nutrir tu optimismo.🌟" << endl << endl;

    cout << "¿Qué pequeño paso podrías dar para fomentar aún más tu optimismo? 👣" << endl
              << "💡 Tu pequeño paso:" << endl << endl;
    string pasoOptimismo;
    getline(cin, pasoOptimismo);
    cout << endl << "¡Excelente! Los pequeños pasos son el cimiento de grandes cambios. Confío en que ese paso te acercará a un optimismo aún mayor. 💪" << endl << endl;

    cout << endl << "🤗 Ha sido un gusto charlar contigo sobre el optimismo y todo lo que lo rodea." << endl
              << "😄 Recuerda que mantener una perspectiva optimista puede ser una de tus mayores fortalezas y una elección poderosa que puedes hacer cada día." << endl
              << "😊 ¡Sigue cultivando esa luz interior y viendo el lado positivo de la vida, incluso en los desafíos! Si necesitas algo más, ya sabes dónde encontrarme." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

void terapiaPlacer()
{
    string causa;
    int sensacion, interaccion, profundidadEmocional, otrasAcciones, balancePlacer, masPlacer; 

    cout << endl << "¡Hola! Es un gusto que estés aquí para explorar el placer. ✨" << endl
              << "¿Podrías compartirme eso que te causó placer recientemente? 😊" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causa);
    cout << endl << "¡Gracias por compartir eso! Es inspirador ver cómo el placer se manifiesta en tu vida. 😄" << endl << endl
              << "¿Cómo supiste que era placer? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (relajación, una sensación de bienestar, calidez). 🦋" << endl
              << "2.- Por mis pensamientos (felicidad, satisfacción, aprecio por el momento). 💡" << endl
              << "3.- Por mis acciones o el impulso de hacer algo (sonreír, expresar alegría, querer prolongar el momento). 🚀" << endl
              << "4.- Sentí una profunda paz interior y claridad mental. ✨🧘‍♀️" << endl << endl;
    sensacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    cout << endl << "Es maravilloso cómo el placer nos conecta con el bienestar. ¡Qué bien que lo experimentes así! 😊" << endl
              << "Es una emoción muy valiosa. 🎉" << endl << endl
              << "¿Con quién estabas cuando sentiste placer?🤝" << endl << endl; 
    cout << "1.- Estaba con mi pareja. ❤️" << endl
              << "2.- Estaba con un familiar cercano. 👨‍👩‍👧‍👦" << endl
              << "3.- Estaba con mis amigos. 👯‍♀️" << endl
              << "4.- Estaba a solas, disfrutando de mi propia reflexión o logro. 🧘‍♀️" << endl
              << "5.- Estaba en un entorno público (trabajo, evento, ciudad). 🏢🌳" << endl << endl; 
    interaccion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5); 
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccion) {
        case 1:
            cout << endl << endl << "¡Qué importante es compartir el placer con tu pareja! ❤️‍🔥" << endl
                      << "Saber que cuentas con alguien con quien disfrutar estos momentos es un gran impulso. ✨" << endl << endl
                      << "¿Qué te hizo sentir aún más placentero en ese momento? 🤔" << endl << endl
                      << "1.- Su cariño y cercanía me brindaron seguridad y dicha. 🫂" << endl
                      << "2.- Su alegría o aprecio por la situación me hizo sentir más gozo. 💡" << endl
                      << "3.- El simple hecho de compartir ese momento especial fortaleció mi sensación de bienestar. 💪" << endl
                      << "4.- Sentimos una conexión profunda que hizo el momento inolvidable. 🚀" << endl << endl;
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a ti: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a ti: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más se adapte a tu caso: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu experiencia: ", 1, 4);
            switch (profundidadEmocional) {
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
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras placer en estas áreas de tu vida." << endl << endl;

    cout << "¿Cómo se siente tu cuerpo cuando sientes placer? ✨" << endl << endl
              << "1.- Con ligereza y una sensación de bienestar general. 🎈" << endl
              << "2.- Con energía renovada y motivación para actuar. ⚡" << endl
              << "3.- Con una sensación de apertura en el pecho y una sonrisa fácil. 😊" << endl
              << "4.- Todas las anteriores y una sensación general de satisfacción. 🥳" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente el placer en ti! 😌" << endl
              << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos en los que sentiste un profundo placer? 🧠💖" << endl << endl
              << "1.- Momentos en los que logré algo que me llenó de satisfacción. ⛰️" << endl
              << "2.- Experiencias que me abrieron nuevas posibilidades de disfrute. 🏅" << endl
              << "3.- Momentos sencillos en los que sentí una gran alegría o gratitud. 🍃" << endl
              << "4.- Alguna historia, película o canción que me brindó una profunda sensación de bienestar. 🎬🎵📚" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos llenos de placer! 💫" << endl
              << "😊 Ya sean grandes hitos o pequeños instantes, todos contribuyen a tu capacidad de disfrutar la vida." << endl << endl;

    cout << "¿Sientes que te permites experimentar el placer plenamente o a veces te lo limitas? 🤔" << endl << endl
              << "1.- Sí, me permito sentir el placer sin reservas. 🎉" << endl
              << "2.- No me lo permito por algún motivo (miedo a que se acabe, sentir que no lo merezco). 😔" << endl
              << "3.- Me cuesta disfrutarlo del todo, hay algo que me frena. 😕" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 3);
    if (otrasAcciones == 2 || otrasAcciones == 3) {
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

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración sobre el placer." << endl
              << "😄 Recuerda que buscar y experimentar el placer es una parte fundamental de vivir una vida plena y de cuidar tu bienestar." << endl
              << "😊 ¡Permítete disfrutar de esas experiencias que te nutren cada día! Si necesitas algo más, ya sabes dónde encontrarme." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

void terapiaCalma()
{
    string causa;
    int sensacion, interaccion, profundidadEmocional, otrasAcciones, calmaManejoEstres, gestoCalma; 

    cout << endl << "¡Hola! Es un gusto que estés aquí para explorar la calma. 🌿" << endl
              << "¿Podrías compartirme lo que te haya causado la sensación de calma? 😊" << endl
              << "🌟 Tu respuesta:" << endl << endl;
    getline(cin, causa);
    cout << endl << "¡Gracias por compartir eso! Es inspirador ver cómo la calma se manifiesta en tu vida. 😄" << endl << endl
              << "¿Cómo la notaste principalmente en ti? 🤔" << endl << endl;
    cout << "1.- Por mis sensaciones físicas (respiración lenta, músculos relajados, una sensación de ligereza). 🦋" << endl
              << "2.- Por mis pensamientos (claros, sin preocupaciones, de aceptación). 💡" << endl
              << "3.- Por mis acciones o el impulso de hacer algo (moverme lentamente, sonreír suavemente, simplemente estar). 🚀" << endl
              << "4.- Sentí una profunda paz interior y una quietud mental. ✨🧘‍♀️" << endl << endl;
    sensacion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu experiencia: ", 1, 4);
    cout << endl << "Es maravilloso cómo la calma nos envuelve y nos da serenidad. ¡Qué bien que la experimentes así! 😊" << endl
              << "Es una emoción muy valiosa para nuestro bienestar. 🎉" << endl << endl
              << "¿Con quién estabas cuando te sentiste en calma?🤝" << endl << endl; 
    cout << "1.- Estaba con mi pareja, disfrutando de un momento de tranquilidad. ❤️" << endl
              << "2.- Estaba con un familiar cercano, en un ambiente pacífico. 👨‍👩‍👧‍👦" << endl
              << "3.- Estaba con mis amigos, en un ambiente relajado. 👯‍♀️" << endl
              << "4.- Estaba a solas, disfrutando de mi propio espacio y quietud. 🧘‍♀️" << endl
              << "5.- Estaba en un entorno público (un parque, una biblioteca, un café tranquilo). 🏢🌳" << endl << endl; 
    interaccion = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 5); 
    system("cls"); // Limpia la pantalla de la consola

    switch (interaccion) {
        case 1:
            cout << endl << endl << "¡Qué armonioso! Compartir la calma con tu pareja puede fortalecer aún más la conexión. ❤️‍🔥" << endl
                      << "Seguro que su presencia te brindó un apoyo extra para esa serenidad. ✨" << endl << endl
                      << "¿Cómo crees que su compañía influyó en tu calma en ese momento? 🤔" << endl << endl
                      << "1.- Su apoyo incondicional me hizo sentir seguro/a y tranquilo/a. 🫂" << endl
                      << "2.- Compartir un momento de silencio o entendimiento mutuo me dio paz. 💡" << endl
                      << "3.- El simple hecho de compartir ese espacio de tranquilidad me hizo sentir más sereno/a. 💪" << endl
                      << "4.- Juntos, creamos una atmósfera de completa relajación. 🚀" << endl << endl;
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más resuena contigo: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuena: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4);
            switch (profundidadEmocional) {
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
            profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu experiencia: ", 1, 4);
            switch (profundidadEmocional) {
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
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué interesante! 😊 Es genial saber que encuentras calma en estas áreas de tu vida." << endl << endl;

    cout << "¿Cómo se siente tu cuerpo cuando estás calma? ✨" << endl << endl
              << "1.- Con una ligereza y una sensación de flotar. 🎈" << endl
              << "2.- Con los músculos relajados y una respiración profunda. ⚡" << endl
              << "3.- Con una sensación de calorcito suave y el corazón en paz. 😊" << endl
              << "4.- Todas las anteriores y una sensación general de serenidad total. 🥳" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Gracias por describir cómo se siente la calma en ti! 😌" << endl
              << "🤩 Es fascinante cómo nuestras emociones se manifiestan físicamente." << endl << endl;

    system("pause"); 
    system("cls");   

    cout << endl << "¿Qué recuerdos te vienen a la mente cuando piensas en momentos en los que sentiste una profunda calma? 🧠💖" << endl << endl
              << "1.- Momentos en los que logré resolver algo que me preocupaba. ⛰️" << endl
              << "2.- Experiencias en la naturaleza que me conectaron con la tranquilidad. 🏅" << endl
              << "3.- Momentos sencillos en los que sentí una gran paz interior. 🍃" << endl
              << "4.- Alguna melodía, paisaje o lectura que me brindó una profunda serenidad. 🎬🎵📚" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 4);
    cout << endl << "¡Qué bonito es revivir esos recuerdos llenos de calma! 💫" << endl
              << "😊 Ya sean grandes logros o pequeños instantes, todos contribuyen a tu capacidad de encontrar la paz." << endl << endl;

    cout << "¿Sientes que te permites experimentar la calma plenamente o a veces te la limitas? 🤔" << endl << endl
              << "1.- Sí, me permito sentir la calma sin reservas. 🎉" << endl
              << "2.- No me lo permito por algún motivo (creer que no hay tiempo, sentir que debo estar activo/a). 😔" << endl
              << "3.- Me cuesta relajarme del todo, hay algo que me frena. 😕" << endl << endl;
    otrasAcciones = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más se adapte a tu caso: ", 1, 3);
    if (otrasAcciones == 2 || otrasAcciones == 3) {
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

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración sobre la calma y todo lo que la rodea." << endl
              << "😄 Recuerda que cultivar la calma es una de tus mayores fortalezas y una elección poderosa que puedes hacer cada día." << endl
              << "😊 ¡Sigue buscando esos momentos de serenidad y permítete vivirlos plenamente! Si necesitas algo más, ya sabes dónde encontrarme." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

//Tristeza
void terapiaDecepcion ()
{

}

void decepionRemordimiento ()
{
    
}

void terapiaDesesperacion ()
{
    
}

void terapiaTristesa ()
{
    
}

void terapiaMelancolia ()
{
    
}

//Miedo
void terapiaAlarmado ()
{
    
}

void terapiaAnsiedad ()
{
    
}

void terapiaSumiso ()
{
    
}

void terapiaTemor ()
{
    
}

void terapiaInquietud ()
{
    
}

//Ira
void terapiaDesprecio ()
{
    
}

void terapiaAgresion ()
{
    
}

void terapiaDominio ()
{
    
}

void terapiaFuria ()
{
    
}

void terapiaMolestia ()
{
    
}

//Asco
void terapiaRemordimiento ()
{
    
}

void terapiaAscoDesprecio ()
{
    
}

void terapiaVerguenza ()
{
    
}

void terapiaAsco ()
{
    
}

void terapiaDesinteres ()
{
    
}

//Terapia de la opción de apoyo profesional para saber si la necesita
void terapiaApoyoProfesional()
{
    int razonPrincipal;
    int senalNecesidad, intentosPrevios, expectativaApoyo, miedoObstaculo, primerPaso;
    int confianzaProceso, bienestarActual, creenciasAyuda, apoyoActual, momentoDecisivo, compromisoPersonal;

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
    razonPrincipal = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa tu situación: ", 1, 7);
    cout << endl << "😊 Gracias por compartir eso." << endl 
    << "🤓 Reconocerlo es el primer paso para poder trabajar en ello." << endl << endl
              << "¿Cómo describirías tu estado actual comparado a cuando en algún momento te sentías bien? 😥" << endl << endl;
    cout << "1.- Me siento notoriamente peor y mi actitud ha decaido mucho. 📉" << endl
              << "2.- Siento que estoy estancado/a y eso me frustra. 🚧" << endl
              << "3.- Hay días buenos y días malos, pero los malos son cada vez más frecuentes. 🎢" << endl
              << "4.- Por mas que espero, no alcanzo un bienestar ni equilibrio. ⚖️" << endl << endl;
    bienestarActual = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor refleje tu estado: ", 1, 4);

    switch (bienestarActual) {
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
    intentosPrevios = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tus intentos previos: ", 1, 5);
    if (intentosPrevios == 1 || intentosPrevios == 2 || intentosPrevios == 3)
    {
    cout << endl << "Es admirable que hayas intentado manejar esto con tus propios recursos." << endl 
    << "Cada uno de esos intentos te ha brindado información valiosa sobre lo que funciona y lo que no. ✨" << endl << endl;
    }
    else if (intentosPrevios == 4 || intentosPrevios == 5)
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
    expectativaApoyo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que mejor describa tu expectativa: ", 1, 6);
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
    miedoObstaculo = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más resuene con tus miedos o dudas: ", 1, 7);
    cout << endl << " 🤗Es completamente normal sentir esos miedos o dudas." << endl 
    << "🤓De hecho, son parte del proceso y reconocerlos son clave para resolverlos.🫂" << endl << endl;

    cout << "¿Para ti que representa buscar ayuda profecional? 🤔" << endl << endl;
    cout << "1.- Es un signo de fortaleza y auto-cuidado. 💪" << endl
              << "2.- Es una opción válida cuando otras estrategias no funcionan. 💡" << endl
              << "3.- A veces es necesario, pero preferiría resolverlo por mi cuenta. 🚧" << endl
              << "4.- Es solo para personas con problemas 'graves' o 'locura'.😔" << endl << endl;
    creenciasAyuda = obtenerEntradaNumerica<int>("Selecciona la opción que más se acerque a tu creencia: ", 1, 4);
    if (creenciasAyuda == 1 || creenciasAyuda == 2)
    {
    cout << endl << "😊Tu perspectiva sobre buscar ayuda influye mucho en su solución." << endl 
    << "Me alegro mucho que pienses eso. ✨" << endl << endl;
    }
    else if (creenciasAyuda == 3)
    {
        cout << endl << "😊Ok, es entendible, intentar resolver las cosas por tu cuenta es buena opción 😁" << endl
        << "Aunque siempre, cuando no puedas, es bueno buscar ayuda 🤗" << endl << endl;
    }
    else if (creenciasAyuda == 4)
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
    apoyoActual = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu apoyo actual: ", 1, 4);
    cout << endl << "😊 Es útil evaluar el apoyo que ya tienes." << endl 
    << "A veces, el apoyo profesional complementa el personal de maneras únicas, inténtalo. 🫂" << endl << endl;

    cout << "¿Cuál es el hecho principal de que ahora busques apoyo profesional? 🤔" << endl << endl;
    cout << "1.- La situación o mis emociones han alcanzado un nivel que ya no puedo manejar. 💥" << endl
              << "2.- Me he dado cuenta de que lo negativo se repite y necesito romperlo. 🔄" << endl
              << "3.- Quiero mejorar en mi crecimiento y bienestar a largo plazo. 🌱" << endl
              << "4.- Me siento motivado/a en poder sentirme mejor o lograr mis metas. 🚀" << endl << endl;
    momentoDecisivo = obtenerEntradaNumerica<int>("Selecciona la opción que mejor describa tu momento decisivo: ", 1, 4);
    cout << endl << "🤓Ok, identificar este hecho es fundamental para mejorar. 💡" << endl << endl;

    cout << "¿Qué paso estás dispuesto a dar para obtener ayuda profesional? 👣" << endl << endl;
    cout << "1.- Investigar opciones de profesionales o clínicas cerca de mí(online, recomendaciones). 💻" << endl
              << "2.- Hablar con alguien de confianza que ya haya recibido apoyo profesional o me pueda aconsejar. 🗣️" << endl
              << "3.- Leer un artículo o un blog sobre los beneficios de la terapia. 📚" << endl
              << "4.- Contactar a un profesional para una primera consulta breve. 🗓️" << endl
              << "5.- Identificar y anotar los 3 principales obstáculos que te impiden dar el primer paso. 🚧" << endl << endl;
    primerPaso = obtenerEntradaNumerica<int>("Selecciona la acción que te sientes capaz de realizar: ", 1, 5);
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
    confianzaProceso = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 5);
    cout << endl << "🤩 ¡Excelente! Reconocer el valor a largo plazo es una gran motivación." << endl 
    << "Buscar las metas futuras y beneficios son clave del proceso. 🌱" << endl << endl;

    cout << "¿Cuál sería tu conclusión final? ✨" << endl << endl;
    cout << "1.- Estoy listo/a para buscar apoyo profesional y dar el siguiente paso. ✅" << endl
              << "2.- Necesito más información, tiempo o reflexión antes de decidir. 💡" << endl
              << "3.- Por ahora, creo que puedo seguir manejando esto por mi cuenta, pero si la llego a neceitar la buscaré. ⚖️" << endl
              << "4.- Reconozco la necesidad, pero mis obstáculos (ej. costo, miedo) son más grandes en este momento. 🚧" << endl << endl;
    compromisoPersonal = obtenerEntradaNumerica<int>("Selecciona la opción que mejor refleje tu decisión actual: ", 1, 4);
    if (compromisoPersonal == 1 || compromisoPersonal == 2 ||  compromisoPersonal == 3)
    {
    cout << endl << "🤗 ¡Qué valiosa reflexión!" <<  endl 
    << "Lleva contigo esta claridad para tu bienestar. 💖" << endl << endl;
    }
    else if (compromisoPersonal == 4)
    {
        cout << endl << "🫡 Es comprensible" <<  endl 
    << "Tómate tu tiempo para reflexionar, recuerda que tu bienestar es lo principal. 💖" << endl << endl;
    }
    

    cout << endl << "🤗 Ha sido un honor acompañarte en esta exploración profunda de la necesidad de apoyo profesional." << endl
              << "😄 Recuerda que buscar ayuda no es un signo de debilidad, sino de gran valentía y te llevará una mejor vida." << endl
              << "😊 Confío en tu sabiduría para tomar la mejor decisión para ti, cualquier cosa, estoy aquí para apoyarte." << endl
              << "Hasta la próxima. 👋😊" << endl;
}

/********************************************************
    Funciones adicionales apoyo profesional
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
            system("color 9"); // Color azul claro
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
            system("color 9"); // Color azul claro

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
            system("color 9"); // Color azul claro
            // Menu principal
            cout << "Explora diferentes recursos digitales para tu bienestar." << endl;
        cout << "Por favor, selecciona el número de la categoría que te interese:" << endl << endl;

        cout << "1.- 🏛️ Recursos Gubernamentales" << endl;
        cout << "2.- 🧠 Recursos de Salud Mental (Directorios y Portales)" << endl;
        cout << "3.- 📊 Estudios y Estadísticas sobre Salud Mental" << endl;
        cout << "4.- 📱 Aplicaciones y Recursos de Bienestar Online" << endl;
        cout << "5.- 🚪 Salir del menú" << endl << endl;

        opcionMenu = obtenerEntradaNumerica<int>("Ingresa tu opción: ", 1, 5);
            system("color 9"); // Color azul claro

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
            system("color 9"); // Color azul claro
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

        opcionMenu = obtenerEntradaNumerica<int>("Ingresa tu opción: ", 1, 5);
            system("color 9"); // Color azul claro

            switch (opcionMenu)
            {
            case 1:
               cout << "## 🏨 Hospitales con Área de Salud Mental (Veracruz y zonas cercanas):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Hospital Regional de Alta Especialidad de Veracruz**" << endl;
                cout << "  Descripción: Es un hospital de referencia para la zona conurbada. Su departamento de Psiquiatría ofrece evaluación, diagnóstico y tratamiento de diversos trastornos mentales. Es un recurso vital para emergencias psiquiátricas y estabilización de crisis agudas, incluyendo un área de internamiento para pacientes que lo requieran." << endl;
                cout << "  Ubicación: Av. 20 de Noviembre #1072, Col. Centro, Veracruz, Ver." << endl;
                cout << "  Servicios: Hospitalización psiquiátrica (aguda y de corta estancia), consulta externa de psiquiatría, interconsultas a otras especialidades del hospital, manejo de crisis y urgencias psiquiátricas, psicofarmacología." << endl;
                cout << "  Población: Adultos. Atención de urgencias psiquiátricas y referencias de otros niveles de atención." << endl;
                cout << "  Consideraciones: Para acceso a consulta externa, generalmente se requiere referencia. Para urgencias, la atención es inmediata si se considera una emergencia. Es una institución de carácter público." << endl << endl;

                cout << "- **Hospital de Salud Mental de Orizaba (Dr. Víctor Manuel Concha Vásquez)**" << endl;
                cout << "  Descripción: El principal hospital psiquiátrico del estado de Veracruz, especializado en la atención de trastornos mentales complejos y crónicos. Ofrece programas de rehabilitación y reintegración social, además de la atención médica y terapéutica con enfoques a largo plazo." << endl;
                cout << "  Ubicación: Carretera Federal Fortín-Orizaba km 2.5, Colonia Ferrer Guardia, Orizaba, Ver. (confirmar dirección exacta)." << endl;
                cout << "  Servicios: Hospitalización de media y larga estancia, consulta externa de psiquiatría y psicología, farmacoterapia, terapia ocupacional, terapia de grupo, rehabilitación psicosocial, apoyo familiar, programas de desintoxicación y manejo de adicciones con comorbilidad psiquiátrica." << endl;
                cout << "  Población: Adolescentes y adultos con trastornos mentales graves o persistentes. También atiende casos de pacientes con adicciones y problemas de salud mental." << endl;
                cout << "  Consideraciones: Es un hospital estatal. Los procesos de ingreso pueden requerir evaluación previa o derivación de otros centros de salud. Tienen un enfoque integral." << endl << endl;

                cout << "- **Hospitales Generales del IMSS, ISSSTE, PEMEX (Veracruz/Boca del Río)**" << endl;
                cout << "  Descripción: Estos hospitales, dirigidos a derechohabientes de sus respectivas instituciones, cuentan con servicios de salud mental generalmente a través de sus departamentos de medicina interna o especialidades. La atención psiquiátrica suele ser para interconsultas (pacientes ya hospitalizados) o para casos referidos dentro de su propio sistema de salud. En algunos casos, pueden tener clínicas de salud mental ambulatorias." << endl;
                cout << "  Ubicación: Varía según la institución. Ej. Hospital General de Zona No. 71 del IMSS (Díaz Mirón), Hospital de Alta Especialidad del ISSSTE (Av. Cuauhtémoc), Hospital Regional de PEMEX (Boca del Río)." << endl;
                cout << "  Servicios: Interconsulta psiquiátrica para pacientes internados, valoración psiquiátrica inicial, medicación, y en algunos casos, referencia a Unidades de Medicina Familiar (UMF) para seguimiento, o a servicios especializados propios de la institución." << endl;
                cout << "  Población: Derechohabientes de cada institución." << endl;
                cout << "  Consideraciones: La atención está ligada a la afiliación. Es fundamental acudir primero a la Unidad de Medicina Familiar (UMF) o clínica de adscripción para una derivación al servicio de psiquiatría." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 2:
                cout << "## 👨‍👩‍👧‍👦 Centros de Atención Primaria en Salud Mental (COMUSAM/CCOMSAM):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Centros Comunitarios de Salud Mental y Adicciones (CECOSAMA / CCOMSAM)**" << endl;
                cout << "  Descripción: Son unidades ambulatorias fundamentales de la Secretaría de Salud en Veracruz que ofrecen atención psicológica, psiquiátrica (con disponibilidad variable de especialistas), de trabajo social y enfermería para trastornos mentales comunes (ansiedad, depresión leve a moderada), problemas de conducta y adicciones. Se enfocan en la prevención, detección temprana y rehabilitación comunitaria, siendo un primer contacto accesible." << endl;
                cout << "  Ubicación en Veracruz: Existen varios. Por ejemplo, en la Colonia Centro, Colonia Norte, y otras colonias con alta densidad poblacional. Es importante buscar el más cercano a tu domicilio." << endl;
                cout << "  Servicios: Consulta externa psicológica (individual, familiar, grupal), psicoterapia breve, orientación familiar, detección temprana de trastornos, programas de prevención de adicciones, talleres psicoeducativos, y referencia a niveles de atención especializados (hospitalarios o psiquiátricos) cuando el caso lo amerita. Algunos cuentan con psiquiatra para valoración y seguimiento farmacológico." << endl;
                cout << "  Población: Niños, adolescentes, adultos y adultos mayores. Son de acceso público y gratuito, buscando la integración comunitaria de la salud mental." << endl;
                cout << "  Consideraciones: Generalmente no requieren referencia médica para la primera consulta. Son un excelente punto de partida para cualquier persona que busque apoyo inicial y no cuente con otros medios." << endl << endl;

                cout << "- **CAPASITS / SARE (Centros de Atención Integral a Personas con VIH/SIDA y Salud Reproductiva)**" << endl;
                cout << "  Descripción: Aunque su misión principal es la atención a personas con VIH/SIDA e Infecciones de Transmisión Sexual (ITS), estos centros reconocen la estrecha relación entre la salud física y mental. Por ello, incluyen servicios de apoyo psicológico y, en ocasiones, psiquiátrico como parte integral de sus servicios, brindando un espacio de confidencialidad, comprensión y libre de estigma." << endl;
                cout << "  Ubicación: En Veracruz, suelen estar ubicados en la Av. 20 de Noviembre #1063, Col. Centro, o direcciones similares. (Verificar dirección exacta y horarios)." << endl;
                cout << "  Servicios: Asesoramiento psicológico, psicoterapia individual, apoyo a la adherencia al tratamiento antirretroviral, manejo del estigma, intervención en crisis, y en algunos casos, atención psiquiátrica de enlace para condiciones relacionadas." << endl;
                cout << "  Población: Personas que viven con VIH/SIDA y sus familiares, así como población en riesgo o interesada en salud sexual y reproductiva. El apoyo psicológico es un pilar para la calidad de vida de sus usuarios." << endl;
                cout << "  Consideraciones: Ofrecen un servicio altamente especializado y sensible a las necesidades de su población objetivo. El acceso es gratuito y confidencial." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 3:
                cout << "## 🏢 Clínicas y Centros Privados de Psicoterapia y Psiquiatría (Veracruz):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Asociación Libre (Psicólogos)**" << endl;
                cout << "  Descripción: Un reconocido centro de psicoterapia con un equipo de profesionales con diversas especialidades y enfoques terapéuticos. Se caracterizan por ofrecer un espacio de diálogo abierto y constructivo para explorar y resolver problemáticas emocionales. Atienden un amplio rango de edades y situaciones." << endl;
                cout << "  Ubicación: Colonia Reforma, Veracruz, Ver. (Se recomienda buscar en línea para la dirección exacta y agendar cita)." << endl;
                cout << "  Servicios: Psicoterapia individual para adolescentes y adultos, terapia de pareja, terapia familiar, tratamiento especializado en depresión, ansiedad, trastornos de la personalidad, duelo, trauma psicológico, fobias, estrés, y programas de desarrollo personal. Ofrecen diferentes modalidades de terapia para adaptarse al paciente." << endl;
                cout << "  Enfoques: Psicoterapia Gestalt, Terapia Cognitivo-Conductual (TCC), Terapia Humanista, Psicoterapia Psicodinámica, entre otros (es importante consultar con el centro sus enfoques específicos)." << endl;
                cout << "  Contacto: Buscar 'Asociación Libre Veracruz Psicólogos' en Google, suelen tener sitio web o perfiles en directorios especializados. Es necesario agendar cita previa." << endl << endl;

                cout << "- **Centro de Salud Emocional (Veracruz)**" << endl;
                cout << "  Descripción: Un espacio dedicado al bienestar emocional que ofrece servicios psicológicos especializados con un enfoque integral y moderno. Se distinguen por su profunda especialización en terapia de pareja y sexología, además de la atención individual para diversas problemáticas." << endl;
                cout << "  Ubicación: Av. Fernando de Magallanes 252 Departamento 2 Col. Reforma, Veracruz, Ver." << endl;
                cout << "  Servicios: Terapia individual para adultos y adolescentes, terapia de pareja, sexología (abordaje de disfunciones sexuales, orientación sobre identidad de género y diversidad sexual), talleres psicoeducativos y grupos terapéuticos sobre temas específicos." << endl;
                cout << "  Enfoques: Generalmente enfoques integrativos que combinan elementos de diversas corrientes psicológicas para crear un plan de tratamiento personalizado." << endl;
                cout << "  Contacto: Buscar 'Centro de Salud Emocional Veracruz' en línea para conocer su oferta de servicios y agendar una primera sesión." << endl << endl;

                cout << "- **Consultorios y Clínicas Privadas de Psiquiatría (Veracruz)**" << endl;
                cout << "  Descripción: En Veracruz, hay psiquiatras privados que ofrecen atención médica especializada para trastornos mentales. Ellos pueden realizar diagnósticos, prescribir y ajustar medicación (farmacoterapia), y en muchos casos, combinar esto con psicoterapia. Son cruciales para el manejo de condiciones que requieren intervención farmacológica." << endl;
                cout << "  Ubicación: Diversas zonas de Veracruz y Boca del Río. Muchos tienen consultorios en zonas céntricas o en complejos médicos." << endl;
                cout << "  Servicios: Evaluación psiquiátrica completa, diagnóstico y tratamiento de trastornos como depresión mayor, trastorno bipolar, esquizofrenia, trastornos de ansiedad graves, TOC, TDAH en adultos, etc. Manejo farmacológico, y en algunos casos, psicoterapia de apoyo o derivación a psicólogos." << endl;
                cout << "  Contacto: Se recomienda usar directorios especializados como Doctoralia, buscar en Google Maps 'psiquiatra Veracruz', o pedir recomendaciones a médicos de confianza. Es indispensable agendar cita." << endl;
                cout << "  Consideraciones: Los costos pueden ser significativos, pero la inversión en la salud mental es fundamental. Algunos psiquiatras también ofrecen teleconsultas." << endl << endl;

                cout << "- **Centro Psicológico Integral 'Armonía' (Ejemplo Ficticio de Centro con Diversas Terapias)**" << endl;
                cout << "  Descripción: (Ejemplo de un centro que podría existir). Un centro que ofrece una variedad de terapias y especialidades en un solo lugar, buscando la comodidad del paciente. Podría incluir psicología clínica, neuropsicología, terapia familiar y coaching." << endl;
                cout << "  Ubicación: Av. Juan Pablo II #XXX, Boca del Río, Ver. (Ejemplo)." << endl;
                cout << "  Servicios: Psicoterapia para niños, adolescentes y adultos, neuropsicología (evaluación y rehabilitación), terapia de lenguaje, terapia de juego, coaching personal y ejecutivo, talleres de desarrollo de habilidades sociales." << endl;
                cout << "  Contacto: Buscar centros con nombres similares en Veracruz o Boca del Río y verificar sus servicios." << endl;
                cout << "  Notas: Estos centros buscan ofrecer un abordaje más holístico y conveniente." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 4:
                cout << "## 🎓 Centros Universitarios de Apoyo Psicológico (Veracruz y Xalapa):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Clínicas de la Facultad de Psicología (Universidad Veracruzana - UV)**" << endl;
                cout << "  Descripción: La UV, a través de su Facultad de Psicología (principalmente con sus clínicas en Xalapa, pero con posible vinculación en Veracruz/Boca del Río), opera clínicas universitarias. Estos centros son fundamentales para la formación de futuros profesionales de la psicología y, al mismo tiempo, brindan servicios de psicoterapia y evaluación psicológica a la comunidad a costos muy accesibles o, en ocasiones, de forma gratuita." << endl;
                cout << "  Ubicación: La Clínica de Atención Psicológica de la Facultad de Psicología de la UV está en Xalapa (Av. Dr. Luis Castelazo Ayala s/n, Col. Industrial Las Ánimas). En Veracruz, es necesario verificar directamente con la Facultad de Psicología del Campus Mocambo si ofrecen servicios directos al público o solo prácticas académicas." << endl;
                cout << "  Servicios: Psicoterapia individual para niños, adolescentes y adultos; terapia familiar y de pareja; evaluación psicológica (diagnóstico, vocacional, neuropsicológica); grupos terapéuticos y talleres psicoeducativos. La atención es supervisada por docentes con amplia experiencia." << endl;
                cout << "  Población: Abierta al público en general, con costos simbólicos o ajustados a estudios socioeconómicos." << endl;
                cout << "  Contacto: Buscar 'Clínica de Psicología UV Xalapa' o 'Facultad de Psicología UV Veracruz' para obtener información de contacto, horarios de atención y proceso de ingreso." << endl;
                cout << "  Notas: Son una excelente opción para recibir atención de calidad a un costo reducido, ideal para quienes tienen limitaciones económicas." << endl << endl;

                cout << "- **Servicios Psicológicos de Universidades Privadas (Veracruz)**" << endl;
                cout << "  Descripción: Varias universidades privadas en Veracruz con programas de psicología (ej. Universidad Cristóbal Colón, Universidad del Valle de México - UVM, Instituto de Estudios Superiores de Veracruz - IESVER) también cuentan con sus propios centros de atención psicológica. Estos centros cumplen una doble función: campo de práctica para los estudiantes de psicología y recurso de apoyo para la comunidad, ofreciendo servicios a tarifas accesibles." << endl;
                cout << "  Ubicación: Depende de cada universidad. Se encuentran en sus respectivos campus o en clínicas afiliadas. (Ej. Campus de la Universidad Cristóbal Colón en Boca del Río)." << endl;
                cout << "  Servicios: Diversos tipos de psicoterapia (individual, pareja, familiar), consejería, evaluaciones psicológicas (ej. rendimiento académico, personalidad), talleres y programas de intervención." << endl;
                cout << "  Población: Estudiantes de la universidad, personal y público en general, con tarifas diferenciadas." << endl;
                cout << "  Contacto: Investigar en los sitios web oficiales de cada universidad o contactar directamente a sus facultades de psicología para conocer los servicios que ofrecen y los requisitos para acceder a ellos." << endl << "  Notas: Otra alternativa para atención psicológica de calidad a precios moderados, con la supervisión académica de por medio." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 5:
                cout << "## 🤝 Organizaciones y Asociaciones Civiles sin Fines de Lucro (Veracruz y Nacionales):" << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                cout << "- **Cáritas de Veracruz (Programas de Apoyo Social y Psicológico)**" << endl;
                cout << "  Descripción: Cáritas es una organización humanitaria de la Iglesia Católica que ofrece asistencia social integral. Sus programas a menudo incluyen apoyo psicológico o consejería, especialmente dirigidos a poblaciones vulnerables, personas en situación de crisis, o aquellos que enfrentan dificultades socioeconómicas que impactan su salud mental. Su enfoque es la caridad y el servicio a la comunidad." << endl;
                cout << "  Ubicación: Av. 16 de Septiembre No. 1317, Col. Centro, Veracruz, Ver. (Sujeto a confirmación de la dirección exacta y servicios actuales)." << endl;
                cout << "  Servicios: Asistencia alimentaria, orientación legal, programas de desarrollo comunitario, y en muchos casos, servicios de escucha, consejería emocional o referencia a psicólogos con los que tienen convenio, a bajo costo o sin costo. Pueden tener talleres de resiliencia." << endl;
                cout << "  Población: Abierto a la comunidad, con un enfoque especial en grupos vulnerables y personas en necesidad." << endl;
                cout << "  Contacto: Se recomienda contactar directamente a Cáritas Veracruz para conocer sus programas actuales y si ofrecen servicios psicológicos directos o referencias." << endl << endl;

                cout << "- **Grupos de Autoayuda (Ej. Alcohólicos Anónimos, Narcóticos Anónimos, Al-Anon, Grupos para el Duelo)**" << endl;
                cout << "  Descripción: Son comunidades de apoyo entre pares donde personas que comparten una misma problemática (adicciones, codependencia, duelo, ansiedad, etc.) se reúnen para compartir experiencias, fortalecerse mutuamente y aprender estrategias de afrontamiento. No son dirigidos por profesionales de la salud mental, pero son un recurso invaluable de apoyo emocional y comprensión." << endl;
                cout << "  Ubicación: Múltiples ubicaciones en Veracruz y en todo el país. Muchos grupos también han adoptado reuniones en línea, lo que amplía su accesibilidad." << endl;
                cout << "  Servicios: Apoyo mutuo entre pares, intercambio de vivencias, desarrollo de herramientas de afrontamiento basadas en la experiencia compartida, un espacio seguro para expresar emociones y sentirse comprendido." << endl;
                cout << "  Población: Personas que enfrentan una problemática específica (adicciones, duelo, codependencia, etc.) y buscan el apoyo de otros en situaciones similares." << endl;
                cout << "  Contacto: Buscar 'Alcohólicos Anónimos Veracruz', 'Narcóticos Anónimos Veracruz', 'Grupos de apoyo para el duelo Veracruz' en línea. Las reuniones suelen ser gratuitas y confidenciales." << endl;
                cout << "  Notas: Complemento ideal a la terapia profesional. Ofrecen un sentido de pertenencia y validación." << endl << endl;

                cout << "- **Cruz Roja Mexicana (Delegación Veracruz) - Apoyo Psicosocial**" << endl;
                cout << "  Descripción: Además de su reconocida labor en emergencias médicas y desastres naturales, la Cruz Roja Mexicana a menudo cuenta con equipos de apoyo psicosocial. Estos equipos están capacitados para brindar primeros auxilios psicológicos y contención emocional a personas afectadas por eventos traumáticos o situaciones de crisis." << endl;
                cout << "  Ubicación: Díaz Mirón S/N Esq. Juan Soto, Col. Centro, Veracruz, Ver. (Sujeto a confirmación de la dirección exacta y disponibilidad de servicios)." << endl;
                cout << "  Servicios: Primeros auxilios psicológicos en campo, contención emocional, apoyo en situaciones de crisis, referencia a otros servicios de salud mental, y en algunos casos, talleres de preparación y resiliencia comunitaria." << endl;
                cout << "  Población: Personas afectadas por emergencias, desastres, o en situaciones de vulnerabilidad que requieran apoyo emocional inmediato." << endl;
                cout << "  Contacto: Consultar directamente a la delegación local de la Cruz Roja para conocer los servicios específicos de apoyo psicosocial que ofrecen." << endl;
                cout << "  Notas: Un recurso fundamental en momentos de necesidad urgente y situaciones de alto estrés." << endl << endl;

                cout << "- **Fondo Unido / United Way México (Proyectos de Salud Mental)**" << endl;
                cout << "  Descripción: Aunque no son un centro de atención directa, Fondo Unido México (United Way) es una organización global que trabaja con socios locales para implementar proyectos en áreas como la educación, la estabilidad financiera y la salud. Es posible que apoyen iniciativas o programas de salud mental a través de alianzas con otras ONG en Veracruz o a nivel nacional." << endl;
                cout << "  Ubicación: A nivel nacional, con posibles proyectos en Veracruz a través de socios locales." << endl;
                cout << "  Servicios: Financiamiento y apoyo a proyectos de salud, incluyendo salud mental, a través de organizaciones aliadas. No ofrecen atención directa al público." << endl;
                cout << "  Contacto: Visitar su sitio web oficial 'Fondo Unido México' para conocer sus proyectos y organizaciones aliadas en salud." << endl;
                cout << "  Notas: Para buscar recursos indirectos o alianzas." << endl << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                break;
            case 6:
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
            cout << "5.- 😊Calma😊" << endl;
            cout << "Una sensación de paz interior, tranquilidad, equilibrio. Te sientes a gusto, relajado, sin prisas." << endl;
            cout << "Respiración tranquila, mente clara, sensación de bienestar y pacibidad." << endl << endl;
            cout << "6.- Volver al menu anterior🔚" << endl << endl;
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
            system("color 9"); // Color azul claro
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

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

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
            system("color 9"); // Color azul claro
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

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

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
            system("color 9"); // Color azul claro
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
            opcSB = obtenerEntradaNumerica<int>("😊 Selecciona el número de que emoción sientes: ", 1, 5); // Reutilizando la función de validación

            system("cls");
            switch (opcSB)
            {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

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
            system("color 9"); // Color azul claro
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

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

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
                 << "😊 No soy un especialista, pero puedo ofrecerte algunas sugerencias para apoyarte:" << endl << endl;
            cout << "1. 🤔¿Por qué crees que la necesitas?🤔" << endl;
            cout << "2. 🤓Tipos de profesionales de la salud mental🧠" << endl;
            cout << "3. 🛜Búsqueda de recursos en línea🛜" << endl;
            cout << "4. 🩺Instituciones y centros de apoyo🪪" << endl;
            cout << "5. Volver al menú principal🔙" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Esperando tu respuesta: ", 1, 5); // Reutilizando la función de validación
            system("color 9");                                                        // Color azul claro

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

            system("cls");
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
                cout << "¿Quieres volver al menú anterior?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }
        } while (opcExt != "No" && opcExt != "no");
        cout << "Volviendo al menú principal...";
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
        opcMN = obtenerEntradaNumerica<int>("🤓 Esperando tu emoción: ", 1, 9); // Reutilizando la función de validación
        system("color 9");                                                      // Color azul claro
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