struct Administrador 
{
	char codigo[10];
	char nombre[150];
	char clave[100];
};

struct Empleado
{
	char codigo[10];
	int DNI;
	char nombre[150];
	char apellidos[150];
	char clave[100];
};

struct Ruta
{
	char codigo[10];
	char origen[200];
	char destino[200];
	int pasajeros;
	double precio;
	bool estado; //true -> activo / false -> inactivo
};