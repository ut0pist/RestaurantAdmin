#include "Zakaz_Menu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainZakaz(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BDproject::Zakaz_Menu form;
	Application::Run(% form);
}
