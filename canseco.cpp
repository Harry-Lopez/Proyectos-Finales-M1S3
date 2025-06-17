#include <iostream>
#include <string>
using namespace std;

int main() {
string  respuesta;
int a = 0, b = 0, c = 0, d = 0, e = 0;


cout << "CUESTIONARIO DE ESTADO EMOCIONAL" << endl;
cout << "Responde con 1, 2, 3, 4 o 5" << endl << endl;

// Pregunta 1
cout << "1. ¿Cómo te sientes físicamente ahora?" << endl;
cout << "1) Relajado/a" << endl;
cout << "2) Tenso/a" << endl;
cout << "3) Con energía" << endl;
cout << "4) Pesado/a" << endl;
cout << "5) Inquieto/a" << endl;
cout << "Tu respuesta: ";
cin >> respuesta;

if (respuesta == "1") a++;
else if (respuesta == "2") b++;
else if (respuesta == "3") c++;
else if (respuesta == "4") d++;
else if (respuesta == "5") e++;

// Pregunta 2
cout << "\n2. ¿Cómo están tus pensamientos?" << endl;
cout << "1) Calmados" << endl;
cout << "2) Acelerados" << endl;
cout << "3) Enfocados" << endl;
cout << "4) Lentos" << endl;
cout << "5) Dispersos" << endl;
cout << "Tu respuesta: ";
cin >> respuesta;

if (respuesta == "1") a++;
else if (respuesta == "2") b++;
else if (respuesta == "3") c++;
else if (respuesta == "4") d++;
else if (respuesta == "5") e++;

// Pregunta 3
cout << "\n3. ¿Qué quieres hacer ahora?" << endl;
cout << "1) Descansar" << endl;
cout << "2) Evitar algo" << endl;
cout << "3) Actuar" << endl;
cout << "4) Nada" << endl;
cout << "5) Buscar seguridad" << endl;
cout << "Tu respuesta: ";
cin >> respuesta;

if (respuesta == "1") a++;
else if (respuesta == "2") b++;
else if (respuesta == "3") c++;
else if (respuesta == "4") d++;
else if (respuesta == "5") e++;

// Pregunta 4
cout << "\n4. Si te interrumpen, ¿cómo reaccionas?" << endl;
cout << "1) Con calma" << endl;
cout << "2) Molesto/a" << endl;
cout << "3) Con entusiasmo" << endl;
cout << "4) Aliviado/a" << endl;
cout << "5) Nervioso/a" << endl;
cout << "Tu respuesta: ";
cin >> respuesta;

if (respuesta == "1") a++;
else if (respuesta == "2") b++;
else if (respuesta == "3") c++;
else if (respuesta == "4") d++;
else if (respuesta == "5") e++;

// Pregunta 5
cout << "\n5. ¿Cómo ves las próximas horas?" << endl;
cout << "1) Con tranquilidad" << endl;
cout << "2) Con preocupación" << endl;
cout << "3) Con expectativa" << endl;
cout << "4) Con indiferencia" << endl;
cout << "5) Con incertidumbre" << endl;
cout << "Tu respuesta: ";
cin >> respuesta;

if (respuesta == "1") a++;
else if (respuesta == "2") b++;
else if (respuesta == "3") c++;
else if (respuesta == "4") d++;
else if (respuesta == "5") e++;

// Mostrar resultados
cout << "\n--- RESULTADO ---" << endl;

if (a >= b && a >= c && a >= d && a >= e) {
    cout << "ESTADO: TRANQUILO/A" << endl;
    cout << "Te sientes en calma y equilibrio." << endl;
}
else if (b >= c && b >= d && b >= e) {
    cout << "ESTADO: ANSIOSO/A" << endl;
    cout << "Experimentas estrés o nerviosismo." << endl;
}
else if (c >= d && c >= e) {
    cout << "ESTADO: MOTIVADO/A" << endl;
    cout << "Tienes energía y entusiasmo." << endl;
}
else if (d >= e) {
    cout << "ESTADO: DESANIMADO/A" << endl;
    cout << "Te sientes con poca energía o triste." << endl;
}
else {
    cout << "ESTADO: PREOCUPADO/A" << endl;
    cout << "Sientes incertidumbre o nerviosismo." << endl;
}

return 0;


}