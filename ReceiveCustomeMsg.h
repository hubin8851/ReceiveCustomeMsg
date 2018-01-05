// ReceiveCustomeMsg.h : main header file for the RECEIVECUSTOMEMSG application
//

#if !defined(AFX_RECEIVECUSTOMEMSG_H__4BE0AB26_4A7B_4504_B364_5A2AC8624F9A__INCLUDED_)
#define AFX_RECEIVECUSTOMEMSG_H__4BE0AB26_4A7B_4504_B364_5A2AC8624F9A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CReceiveCustomeMsgApp:
// See ReceiveCustomeMsg.cpp for the implementation of this class
//

class CReceiveCustomeMsgApp : public CWinApp
{
public:
	CReceiveCustomeMsgApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReceiveCustomeMsgApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CReceiveCustomeMsgApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RECEIVECUSTOMEMSG_H__4BE0AB26_4A7B_4504_B364_5A2AC8624F9A__INCLUDED_)
