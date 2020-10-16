#include "Bron_Menu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MainBron(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BDproject::Bron_Menu form;
	Application::Run(% form);
}
