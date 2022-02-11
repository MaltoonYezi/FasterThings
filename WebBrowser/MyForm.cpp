#include "MyForm.h" //Name of the form

using namespace WebBrowser; // Name of the project

[STAThread]
// int WinMain() - compiler returns 0
// void WinMain() - void does not return anything
// WinMain() – entry point for Windows GUI app
int  WinMain() {


    //Enable visual elements for the app
    Application::EnableVisualStyles();
    // Establishing compatability with .NET Framework
    Application::SetCompatibleTextRenderingDefault(false);
    //Start the app with the form
    Application::Run(gcnew MyForm()); //in cirle brackets () also type the name of the form
    // Application::Run(gcnew Project1::MyForm);
}
/*using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {

    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Webbrowser::MyForm frm; //Error: Webbrowser is ambiguous
    Application::Run(& frm);
}*/