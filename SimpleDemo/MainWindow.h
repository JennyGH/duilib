#pragma once
#include <UIlib.h>
class MainWindow : public DuiLib::WindowImplBase
{
public:
    MainWindow();
    ~MainWindow();

protected:
    // Í¨¹ý WindowImplBase ¼Ì³Ð
    virtual DuiLib::CDuiString GetSkinFolder() override;

    virtual DuiLib::CDuiString GetSkinFile() override;

    virtual LPCTSTR GetWindowClassName(void) const override;

};