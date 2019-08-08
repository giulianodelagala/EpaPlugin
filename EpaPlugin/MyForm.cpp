#include <iostream>
#include <string>

#include "MyForm.h"
#include "en2toolkit/epanet2.h"

using namespace System;
using namespace System::Windows::Forms;

using std::cout;
using std::string;

[STAThreadAttribute]
void Main(array<String^>^ args){
	char* f1 = "prueba1.inp";
	char* f2 = "prueba.rpt";
	char* f3 = "";
	long int errcode;

	errcode = ENopen(f1, f2, f3);
	if (errcode > 0)
	{
		cout << ("Error opening file");
	}
	ENclose();

	Console::WriteLine (L"Hola");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EpaPlugin::MyForm form;
	Application::Run(% form);
}