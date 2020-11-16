#include <iostream>
#include <conio.h>
#include <string.h>

//Manejo de ficheros
#include <fstream>
using namespace std;

using namespace System::Runtime::InteropServices; //Manejo de char a String
using namespace System::Windows::Forms; //Uso de mensajes de Windows

#include "Structures.h"
#include "Functions.h"

#include "frmVoletos.h"
#include "frmDatosVenta.h"  
#include "frmVenta_Emple.h"
#include "frmRutas_Emple.h"
#include "frmEstadisticas_Admin.h"
#include "frmEstadisticas_Emple.h"
#include "frmEliminados.h"  
#include "frmModificados.h"
#include "frmRutasRestablecidas.h"
#include "frmEmpleadoNuevo.h"
#include "frmPanel_de_Empleados.h"
#include "frmRutasNuevas.h"
#include "frmPanel_de_Rutas.h"
#include "frmMenu_Emple.h"
#include "frmMenu_Admin.h"
#include "frmLogin_Emple.h"
#include "frmLogin_Admin.h"
#include "frmPrincipal.h"
using namespace SVPA;

void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew frmPrincipal);
}
