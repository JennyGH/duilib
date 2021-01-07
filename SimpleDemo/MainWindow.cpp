#include "MainWindow.h"

MainWindow::MainWindow()
{
}

MainWindow::~MainWindow()
{
}

DuiLib::CDuiString MainWindow::GetSkinFolder()
{
    return _T("");
}

DuiLib::CDuiString MainWindow::GetSkinFile()
{
    return _T("SimpleDemo.xml");
}

LPCTSTR MainWindow::GetWindowClassName(void) const
{
    return _T("SimpleDemoMainWindow");
}
