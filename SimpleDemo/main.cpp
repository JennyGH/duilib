#include "MainWindow.h"

int APIENTRY WinMain(
    HINSTANCE hInstance,
    HINSTANCE /*hPrevInstance*/,
    LPSTR /*lpCmdLine*/,
    int nCmdShow
)
{
    DuiLib::CPaintManagerUI::SetInstance(hInstance);
    DuiLib::CPaintManagerUI::SetResourcePath(DuiLib::CPaintManagerUI::GetInstancePath());

    MainWindow window;
    window.Create(NULL, _T("SimpleDemo"), WS_POPUP | WS_VISIBLE, 0);
    window.CenterWindow();
    window.ShowWindow();

    DuiLib::CPaintManagerUI::MessageLoop();
    return 0;
}