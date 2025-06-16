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

// Funcion pra idenntificar el descloce de la emocion de tristeza
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

// Funcion pra idenntificar el descloce de la emocion de tristeza
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

// Funcion pra idenntificar el descloce de la emocion de tristeza
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

// Funcion pra idenntificar el descloce de la emocion de tristeza
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

/**********************************************************
    Funciones de las terapias para cada emoción (25)
***********************************************************/

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
    int sensacion, interaccion, profundidadEmocional, reflexionesAmor; // Nueva variable para reflexiones sobre el amor

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
         << "Cuando sentiste ese amor, ¿hubo alguna interacción o presencia que lo intensificara o con la que lo conectes? 🤝" << endl << endl;
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
        profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más resuena contigo: ", 1, 4);
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
        profundidadEmocional = obtenerEntradaNumerica<int>("Selecciona el número de la opción que más te resuena: ", 1, 4);
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

    cout << endl << "Ahora, pensemos en el futuro. ¿Cómo crees que puedes nutrir más esta emoción del amor en tu vida? 💖" << endl  << endl
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
    reflexionesAmor = obtenerEntradaNumerica<int>("Selecciona la opción que más te resuene: ", 1, 4);
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
    
}

void terapiaPlacer()
{
    
}

void terapiaCalma()
{
    
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
            cout << "6.- Regresar al menú principal 🔚" << endl << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Ingresa el número de la emoción que sientes: ", 1, 6); // Reutilizando la función de validación

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
                cout << endl << endl << "Quieres continuar?(Si/No) ";
                cin >> opcExt;
                system("cls");
            }

        } while (opcExt != "No" && opcExt != "no");
        cout << "Volviendo al menú principal...";
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
            cout << "4. Instituciones y centros de apoyo" << endl;
            cout << "5. Volver al menú principal" << endl;
            cout << "<<-------------------------------------->>" << endl;
            opcSB = obtenerEntradaNumerica<int>("🤓 Esperando tu respuesta: ", 1, 5); // Reutilizando la función de validación
            system("color 9");                                                        // Color azul claro

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