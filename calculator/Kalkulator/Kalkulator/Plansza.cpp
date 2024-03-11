#include "Plansza.h"

using namespace Kalkulator;


[STAThreadAttribute]

int main(array<String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kalkulator::Plansza formularz;
	Application::Run(%formularz);
	return 0;
}