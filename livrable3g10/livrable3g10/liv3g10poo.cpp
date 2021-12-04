#include "liv3g10poo.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    livrable3g10::liv3g10poo form;
    Application::Run(% form);

}

