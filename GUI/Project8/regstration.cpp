#include "regstration.h"
#include "MyMenu.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);


    /* Project8::MyForm form;
  Application::Run(% form);*/
    Project8::MyMenu  form;
    Application::Run(% form);


}




