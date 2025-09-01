// CapturarAbono.h: archivo de encabezado principal para la aplicaci�n PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
#error incluye 'stdafx.h' antes de incluir este archivo para PCH
#endif

#include "resource.h"		// S�mbolos principales
//#include "ctrlglob.hpp"
#include "wtienda.hpp"
#include "flags.hpp"
#include "Password.hpp"

#include "gnwproto.hpp"
#include "cawproto.hpp"
#include "cnwproto.hpp"
#include "cawstruc.hpp"
#include <process.h>


// CCapturarAbonoApp:
// Consulte la secci�n CapturarAbono.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CCapturarAbonoApp : public CWinApp
{
public:
    int iTienda;
    char cSqlTxt[255];

    CCapturarAbonoApp();

    // Reemplazos
public:
    virtual BOOL InitInstance();

    // Implementaci�n

    DECLARE_MESSAGE_MAP()
};

extern CCapturarAbonoApp theApp;
