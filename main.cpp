#include <iostream>
#include <fstream>
using namespace std;

ofstream archivo;
void ingresar(double a[], int n);
void suma(double a[], double b[], int n);
void imprimir (double a[], int n);

int main() {
  string nombre;
  cout << "Ingrese el nombre del archivo: ";
  getline(cin, nombre);
  archivo.open(nombre.c_str(), ios::app);
  double a[50], b[50];
  int n;
  cout << "Ingrese el tamaño del arreglo: ";
  cin >> n;
  ingresar(a, n);
  cout << endl;
  imprimir(a, n);
  cout << endl;
  archivo << endl;
  cin.ignore ();
  cout << "Ingrese el tamaño del segundo arreglo: ";
  cin.ignore ();
  ingresar(b, n);
  imprimir(b, n);
  cout << endl;
  suma(a, b , n);
  archivo.close ();
}

void ingresar(double a[], int n){
  for (int i=0; i<n; i++)
  {
    cout << "Ingrese el elemento al arreglo: ";
    cin >> a[i];
  }
}

void suma(double a[], double b[], int n){
  int sum = 0;
  for (int i=0; i<n; i++){
    sum = a[i] + b[i];
  }
  archivo << "Suma de los dos arreglos: " << sum << endl;
  cout << sum << endl;
}

void imprimir (double a[], int n){
  for (int i=0; i<n; i++)
  {
    cout << " " << a[i];
    archivo << a[i] << endl;
  }
}