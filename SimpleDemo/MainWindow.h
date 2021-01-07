#pragma once
#include <UIlib.h>
class MainWindow : public DuiLib::WindowImplBase
{
public:
    MainWindow();
    ~MainWindow();

protected:
    // ͨ�� WindowImplBase �̳�
    virtual DuiLib::CDuiString GetSkinFolder() override;

    virtual DuiLib::CDuiString GetSkinFile() override;

    virtual LPCTSTR GetWindowClassName(void) const override;

};