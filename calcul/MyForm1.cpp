#include "MyForm1.h"
#include <Windows.h>

using namespace calcul;

int WINAPI WinMain2(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm1);
    return 0;
}
