#if !defined(AFX_RETURN_H__E1C4895B_0273_4847_A45F_1AB4BE299496__INCLUDED_)
#define AFX_RETURN_H__E1C4895B_0273_4847_A45F_1AB4BE299496__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Return.h : header file
//
#include "Book.h"
#include "Reader.h"
/////////////////////////////////////////////////////////////////////////////
// CReturn dialog

class CReturn : public CDialog
{
// Construction
public:
	CReturn(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReturn)
	enum { IDD = IDD_RETURN };
	CString	m_return_name;
	CString	m_return_id;
	CString	m_return_book;
	CString	m_return_money;
	CTime	m_return_dat;
	CString	m_book_id;
	//}}AFX_DATA

	CBook m_book;
	CReader m_reader;

	struct ReaderInfo m_borrowInfo;


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReturn)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReturn)
	afx_msg void OnReturn();
	afx_msg void OnClear();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RETURN_H__E1C4895B_0273_4847_A45F_1AB4BE299496__INCLUDED_)
