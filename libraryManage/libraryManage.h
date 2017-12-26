// libraryManage.h : main header file for the LIBRARYMANAGE application
//

#if !defined(AFX_LIBRARYMANAGE_H__DBB6CA42_7558_44ED_8C07_71E94CED6B89__INCLUDED_)
#define AFX_LIBRARYMANAGE_H__DBB6CA42_7558_44ED_8C07_71E94CED6B89__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageApp:
// See libraryManage.cpp for the implementation of this class
//

class CLibraryManageApp : public CWinApp
{
public:
	CLibraryManageApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLibraryManageApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CLibraryManageApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBRARYMANAGE_H__DBB6CA42_7558_44ED_8C07_71E94CED6B89__INCLUDED_)
